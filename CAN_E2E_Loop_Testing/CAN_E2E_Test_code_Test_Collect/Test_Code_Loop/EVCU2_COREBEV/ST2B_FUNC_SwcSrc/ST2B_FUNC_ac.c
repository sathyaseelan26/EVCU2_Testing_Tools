/*
 * File: ST2B_FUNC_ac.c
 *
 * Code generated for Simulink model 'ST2B_FUNC_ac'.
 *
 * Model version                  : 1.222
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:43:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ST2B_FUNC_ac.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ST2B_FUNC
#include "MemMap.h"

VAR(B_ST2B_FUNC_ac_T, ST2B_FUNC_VAR_INIT) ST2B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ST2B_FUNC
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, ST2B_FUNC_CODE) ST2B_FUNC_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReESaveLEDOn

    TeDMDR_e_DrvMdLEDStat tmpRead;

#endif

#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReElectricPlusLEDOn

    TeDMDR_e_DrvMdLEDStat tmpRead_0;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrASpd

    boolean tmpRead_1;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeHMIReeBoostSts

    TeEBMR_e_eBoostStatus tmpRead_2;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeTIMReRaceOptionsSts

    TeTIMR_e_RaceOptions tmpRead_3;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrBSpd

    boolean tmpRead_4;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeTIMReRaceModeSts

    TeTIMR_e_RaceModeSts tmpRead_5;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMReVirtShftTypeGrp

    TeVSMR_e_VirtShftTypeGrp tmpRead_6;

#endif

    float32 tmpRead_7;
    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_b;
    TeDTRR_e_OPD_Sts tmpRead_c;
    TeHMIR_e_HEV_LMP tmpRead_8;

#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeTIMReRacePrep

    TeTIMR_e_RacePrep tmpRead_d;

#endif

    sint16 tmpRead_g;
    TeDMIR_e_DrvMdSt tmpRead_h;
    TeDMIR_e_PopUpRqst tmpRead_f;
    boolean tmpRead_e;

#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeHMIReeBoostWarn

    TeEBMR_e_eBoostWarning tmpRead_i;

#endif

    float32 tmpRead_k;
    float32 tmpRead_m;
    TeHSER_e_RngSt tmpRead_j;
    boolean tmpRead_l;
    boolean tmpRead_n;

#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN5FD3_VeTIMReLaunchIntensity

    TeTIMR_e_LaunchIntensity tmpRead_o;

#endif

    uint16 tmpRead_p;
    TeADCR_e_AWDSysStat tmpRead_r;
    TeDMIR_e_PaddleModeRequest tmpRead_s;
    TeHMIR_e_TerrainModeDesiredStat tmpRead_u;
    TeTRGR_e_SecureIdleHMI tmpRead_t;
    boolean tmpRead_q;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeTIMReCustomScreenRqst

    TeTIMR_e_TrrnMdBtnSts tmpRead_v;

#endif

    float32 tmpRead_11;
    float32 tmpRead_12;
    float32 tmpRead_13;
    float32 tmpRead_15;
    float32 tmpRead_17;
    float32 tmpRead_18;
    float32 tmpRead_1a;
    float32 tmpRead_1b;
    float32 tmpRead_1d;
    float32 tmpRead_1e;
    float32 tmpRead_1l;
    sint16 tmpRead_1c;
    uint16 tmpRead_z;
    TeDMDR_e_TurtleMdSts tmpRead_y;
    TeHMIR_e_TerrainHMIRq tmpRead_w;
    TeHMIR_e_TransWarn2Msgs tmpRead_x;
    TeHMIR_e_VDCM_PopUp5 tmpRead_16;
    TeOBCR_e_ChargeProgress tmpRead_19;
    TeOBCR_e_ProtocolPriority tmpRead_1f;
    TeOBCR_e_ProtocolPriority tmpRead_1g;
    TeOBCR_e_ProtocolPriority tmpRead_1h;
    TeVTLR_e_PPIM_MdRq tmpRead_1m;
    boolean tmpRead_10;
    boolean tmpRead_14;
    boolean tmpRead_1i;
    boolean tmpRead_1j;
    boolean tmpRead_1k;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD14_VeCSVReTRSCRespEVCU2

    TeCSVR_e_TRSC_Response tmpRead_1n;

#endif

    TeHSER_e_PropulsionMode tmpRead_1o;

#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMReEngCntrlMode

    uint16 tmpRead_1p;

#endif

#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMReHybCmndEngTorqRespTyp

    uint16 tmpRead_1q;

#endif

    float32 rtb_Gain_ig;
    float32 rtb_TmpSignalConversionAtVeHSER;
    uint16 rtb_DataTypeConversion23;
    uint16 rtb_DataTypeConversion_ek;
    uint16 rtb_DataTypeConversion_fp;
    uint16 rtb_DataTypeConversion_fr;
    uint16 rtb_DataTypeConversion_pu;
    uint16 rtb_VariantMerge_For_Variant_So;
    uint16 rtb_VariantMerge_For_Variant__n;
    uint16 rtb_VariantMerge_For_Variant_k1;
    uint8 rtb_DataTypeConversion43;
    uint8 rtb_DataTypeConversion_ae;
    uint8 rtb_DataTypeConversion_pw;
    uint8 rtb_VariantMerge_For_Variant_hn;
    boolean rtb_DataTypeConversion29;
    boolean rtb_E_PopUpMessage1;
    boolean rtb_TmpSignalConversionAtVeHPMR;
    boolean rtb_TmpSignalConversionAtVeICSR;
    boolean rtb_TmpSignalConversionAtVeS_ji;
    boolean rtb_TmpSignalConversionAtVeTRNR;
    boolean rtb_VariantMerge_For_Variant__h;
    boolean rtb_VariantMerge_For_Variant__p;
    boolean rtb_VariantMerge_For_Variant_ks;

#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSTRRbRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSTRRbRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSTRRbRemedialStop

    boolean rtb_TmpSignalConversionAtVeST_f;

#endif

#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSRARbHCPRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSRARbHCPRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSRARbHCPRemedialStop

    boolean rtb_TmpSignalConversionAtVeSR_c;

#endif

    float32 rtb_TmpSignalConversionAtVeHVTR;
    uint16 rtb_DataTypeConversion_hu;
    uint16 rtb_DataTypeConversion_pz;
    uint8 rtb_DataTypeConversion10_hz;
    boolean rtb_TmpSignalConversionAtVeH_pt;
    boolean rtb_TmpSignalConversionAtVeSTRR;
    boolean rtb_TmpSignalConversionAtVeS_of;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrCZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrCZeroTrqRqst

    boolean rtb_TmpSignalConversionAtVeH_gm;

#endif

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst1

    boolean rtb_TmpSignalConversionAtVeH_hb;

#endif

    float32 rtb_Sum_f2;
    float32 rtb_TmpSignalConversionAtVeGE_f;
    sint16 rtb_TmpSignalConversionAtVeTRGR;
    sint16 rtb_TmpSignalConversionAtVeTR_f;
    sint16 rtb_TmpSignalConversionAtVeTR_j;
    uint16 rtb_DataTypeConversion_am;
    uint16 rtb_DataTypeConversion_d5;
    uint16 rtb_DataTypeConversion_ei;
    uint16 rtb_DataTypeConversion_k0;
    uint16 rtb_DataTypeConversion_p5;
    uint16 rtb_TmpSignalConversionAtVeASLR;
    uint16 rtb_TmpSignalConversionAtVeSR_l;
    uint16 rtb_TmpSignalConversionAtVeS_mh;
    uint8 rtb_DataTypeConversion2_h;
    uint8 rtb_DataTypeConversion3_o;
    boolean rtb_TmpSignalConversionAtVeAS_b;
    boolean rtb_TmpSignalConversionAtVeHP_d;
    boolean rtb_TmpSignalConversionAtVeHV_b;
    boolean rtb_TmpSignalConversionAtVeH_ds;
    boolean rtb_TmpSignalConversionAtVeOB_a;
    boolean rtb_TmpSignalConversionAtVeO_bk;
    boolean rtb_TmpSignalConversionAtVeS_oq;
    boolean rtb_TmpSignalConversionAtVeT_gf;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHCPFuelDisable || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHCPFuelDisable

    boolean rtb_TmpSignalConversionAtVeESSR;

#endif

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHybProducingTorque || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHybProducingTorque

    boolean rtb_TmpSignalConversionAtVeES_g;

#endif

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbOptimdEngOnOffCmd || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbOptimdEngOnOffCmd

    boolean rtb_TmpSignalConversionAtVeE_py;

#endif

    float32 rtb_Switch_hp;
    float32 rtb_Switch_jc;
    float32 rtb_TmpSignalConversionAtVeOB_m;
    float32 rtb_TmpSignalConversionAtVeO_cn;
    float32 rtb_TmpSignalConversionAtVeO_mm;
    sint16 rtb_TmpSignalConversionAtVeO_ks;
    uint16 rtb_TmpSignalConversionAtVeS_lp;
    uint8 rtb_DataTypeConversion65_b;
    uint8 rtb_DataTypeConversion_aa;
    uint8 rtb_VariantMerge_For_Variant__k;
    boolean rtb_TmpSignalConversionAtVeHM_n;
    boolean rtb_TmpSignalConversionAtVeO_be;
    boolean rtb_TmpSignalConversionAtVeO_f0;
    boolean rtb_TmpSignalConversionAtVeO_gk;
    boolean rtb_TmpSignalConversionAtVeO_h0;
    boolean rtb_TmpSignalConversionAtVeO_m1;
    boolean rtb_TmpSignalConversionAtVeSR_p;
    boolean rtb_TmpSignalConversionAtVeTR_h;
    boolean rtb_TmpSignalConversionAtVeT_hw;
    boolean rtb_TmpSignalConversionAtVeT_hx;
    boolean rtb_TmpSignalConversionAtVeT_o5;
    boolean rtb_TmpSignalConversionAtVeT_op;

#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRbChrgCrntDvatonErr || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRbChrgCrntDvatonErr

    boolean rtb_TmpSignalConversionAtVeCH_m;

#endif

    float32 rtb_TmpSignalConversionAtVeAXLR;
    float32 rtb_TmpSignalConversionAtVeAX_e;
    float32 rtb_TmpSignalConversionAtVeAX_l;
    float32 rtb_TmpSignalConversionAtVeAX_p;
    float32 rtb_TmpSignalConversionAtVeCHDR;
    float32 rtb_TmpSignalConversionAtVeCH_k;
    float32 rtb_TmpSignalConversionAtVeRGNR;
    float32 rtb_TmpSignalConversionAtVeRG_c;
    float32 rtb_TmpSignalConversionAtVeSRMR;
    float32 rtb_TmpSignalConversionAtVeSR_o;
    float32 rtb_TmpSignalConversionAtVeS_az;
    float32 rtb_TmpSignalConversionAtVeS_ex;
    float32 rtb_TmpSignalConversionAtVeS_nt;
    float32 rtb_TmpSignalConversionAtVeWTAR;
    uint16 rtb_DataTypeConversion2;
    uint16 rtb_DataTypeConversion3;
    uint16 rtb_DataTypeConversion_io;
    uint16 rtb_DataTypeConversion_pq;
    uint8 rtb_switch1;
    uint8 rtb_switch_k;
    boolean rtb_TmpSignalConversionAtVeDT_g;
    boolean rtb_TmpSignalConversionAtVeDT_k;
    boolean rtb_TmpSignalConversionAtVeDT_p;
    boolean rtb_TmpSignalConversionAtVeOB_i;
    boolean rtb_TmpSignalConversionAtVeO_e0;
    boolean rtb_TmpSignalConversionAtVeO_fu;
    boolean rtb_TmpSignalConversionAtVeO_ky;
    boolean rtb_TmpSignalConversionAtVeO_le;
    boolean rtb_TmpSignalConversionAtVeO_mo;
    boolean rtb_TmpSignalConversionAtVeSCCR;

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMTIRMMtrATorqAchieved

    float32 rtb_TmpSignalConversionAtVeMTIR;

#endif

    float32 rtb_TmpSignalConversionAtVeMT_n;

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMRnVirtEngSpd

    float32 rtb_TmpSignalConversionAtVeVSMR;

#endif

    float32 rtb_TmpSignalConversionAtVeSR_j;
    float32 rtb_TmpSignalConversionAtVeS_l2;
    float32 rtb_TmpSignalConversionAtVeTRAR;
    float32 rtb_TmpSignalConversionAtVeVS_l;

#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndImmed

    float32 rtb_TmpSignalConversionAtVeS_cv;

#endif

#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndPrdtd

    float32 rtb_TmpSignalConversionAtVeS_ge;

#endif

    float32 rtb_TmpSignalConversionAtVeSR_m;
    float32 rtb_TmpSignalConversionAtVeTR_i;
    float32 rtb_TmpSignalConversionAtVeTR_k;
    boolean rtb_TmpSignalConversionAtVeTI_n;

#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved

    float32 rtb_TmpSignalConversionAtVeMT_a;

#endif

    float32 rtb_TmpSignalConversionAtVeHTDR;
    float32 rtb_TmpSignalConversionAtVeHT_g;
    float32 rtb_TmpSignalConversionAtVeHT_n;
    float32 rtb_TmpSignalConversionAtVeH_fb;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDPosTrqOffst

    float32 rtb_TmpSignalConversionAtVeHT_i;

#endif

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst1

    float32 rtb_TmpSignalConversionAtVeH_ii;

#endif

    float32 rtb_TmpSignalConversionAtVeH_mf;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDNegTrqOffst

    float32 rtb_TmpSignalConversionAtVeH_bo;

#endif

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst1

    float32 rtb_TmpSignalConversionAtVeHT_p;

#endif

    float32 rtb_TmpSignalConversionAtVeHT_a;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrCAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrCAEMDPGainScl

    float32 rtb_TmpSignalConversionAtVeH_cm;

#endif

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl1

    float32 rtb_TmpSignalConversionAtVeH_b4;

#endif

    float32 rtb_TmpSignalConversionAtVeHT_j;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrCSpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrCSpdCmnd

    float32 rtb_TmpSignalConversionAtVeHT_k;

#endif

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd1

    float32 rtb_TmpSignalConversionAtVeH_h1;

#endif

    float32 rtb_TmpSignalConversionAtVeHT_m;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrATorqCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrATorqCmnd

    float32 rtb_TmpSignalConversionAtVeH_mh;

#endif

    float32 rtb_TmpSignalConversionAtVeAPSR;
    float32 rtb_TmpSignalConversionAtVeAP_f;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeDTRR;
    float32 rtb_TmpSignalConversionAtVeGENR;
    float32 rtb_TmpSignalConversionAtVeGE_m;
    float32 rtb_TmpSignalConversionAtVeS_ca;
    boolean rtb_TmpSignalConversionAtVeGE_p;
    boolean rtb_TmpSignalConversionAtVeSR_a;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeCSVRnWhlSpdRHR

    float32 rtb_TmpSignalConversionAtVeCS_h;

#endif

    float32 rtb_TmpSignalConversionAtVeBACR;
    float32 rtb_TmpSignalConversionAtVeCCTR;
    float32 rtb_TmpSignalConversionAtVeHMIR;
    float32 rtb_TmpSignalConversionAtVeHM_c;
    float32 rtb_TmpSignalConversionAtVeHM_d;
    float32 rtb_TmpSignalConversionAtVeHM_g;
    float32 rtb_TmpSignalConversionAtVeHM_k;
    float32 rtb_TmpSignalConversionAtVeHM_o;
    float32 rtb_TmpSignalConversionAtVeOBCR;
    float32 rtb_TmpSignalConversionAtVeOB_n;
    float32 rtb_TmpSignalConversionAtVeO_ae;
    float32 rtb_TmpSignalConversionAtVeO_m4;
    float32 rtb_TmpSignalConversionAtVePLTR;
    float32 rtb_TmpSignalConversionAtVeSRAR;
    float32 rtb_TmpSignalConversionAtVe_b2e;

#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtMaxChrgTimesec || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtMaxChrgTimesec

    float32 rtb_TmpSignalConversionAtVeCH_h;

#endif

    float32 rtb_TmpSignalConversionAtVeS_h2;
    float32 rtb_TmpSignalConversionAtVeS_pr;
    float32 rtb_TmpSignalConversionAtVeTT_d;
    float32 rtb_TmpSignalConversionAtVeTT_l;
    float32 rtb_TmpSignalConversionAtVeT_cq;
    float32 rtb_TmpSignalConversionAtVe_m2r;

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontMin

    float32 rtb_TmpSignalConversionAtVeT_d4;

#endif

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptShaped

    float32 rtb_TmpSignalConversionAtVeT_gt;

#endif

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMSumTrqActSEM

    float32 rtb_TmpSignalConversionAtVeTT_m;

#endif

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontOpt

    float32 rtb_TmpSignalConversionAtVeTT_p;

#endif

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptxShaping

    float32 rtb_TmpSignalConversionAtVeTT_k;

#endif

    float32 rtb_TmpSignalConversionAtVeAX_k;
    float32 rtb_TmpSignalConversionAtVeAX_n;

#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD3_VeTTQRMLoadFrontOptExp

    float32 rtb_TmpSignalConversionAtVeTTQR;

#endif

    float32 rtb_TmpSignalConversionAtVeH_mk;

#if Rte_SysCon_VrntST2B_RPFFD3FD11_VeVTHRPV2HEVMaxPwrLim

    float32 rtb_TmpSignalConversionAtVeVTHR;

#endif

    boolean rtb_TmpSignalConversionAtVePM_g;
    boolean rtb_TmpSignalConversionAtVeP_f0;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD16_VePMPRdVGenFlw || Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD5_VePMPRdVGenFlw

    float32 rtb_TmpSignalConversionAtVePM_k;

#endif

    float32 rtb_TmpSignalConversionAtVeWT_d;

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrASpd

    float32 rtb_TmpSignalConversionAtVeMSPR;

#endif

#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrBSpd

    float32 rtb_TmpSignalConversionAtVeMS_b;

#endif

    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeB_io;
    float32 rtb_TmpSignalConversionAtVeGE_k;
    float32 rtb_TmpSignalConversionAtVePMPR;
    float32 rtb_TmpSignalConversionAtVePM_b;
    float32 rtb_TmpSignalConversionAtVeS_lu;
    float32 rtb_TmpSignalConversionAtVeTAIR;
    float32 rtb_TmpSignalConversionAtVeTISR;

#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn || Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn1

    TeDMDR_e_DrvMdLEDStat rtb_TmpSignalConversionAtVeDMIR;

#endif

    TeESSR_e_EngStrtStpMd rtb_TmpSignalConversionAtVeES_d;
    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeS_ef;
    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeS_kt;
    TeHVTR_e_HV_BatCntctrStat rtb_TmpSignalConversionAtVeBP_c;
    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR;
    TeTRAR_e_EngCntrlMode rtb_TmpSignalConversionAtVeT_iz;
    TeTRAR_e_HybCmndEngTorqRespTyp rtb_TmpSignalConversionAtVeTR_d;

#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDReMtrAMdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDReMtrAMdCmnd

    TeHTDR_e_SwitchMd rtb_TmpSignalConversionAtVeHT_b;

#endif

    TeGENR_e_APM_OperMode rtb_TmpSignalConversionAtVeGE_g;
    TeOBCR_e_DCCntctrCmd rtb_TmpSignalConversionAtVeOB_b;
    TeOBCR_e_DC_ChrgTypeCmd rtb_TmpSignalConversionAtVeOB_o;
    TePPCR_e_PCUCtrl_PP_REQ rtb_TmpSignalConversionAtVeSR_b;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeSR_f;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD14_VeCSVReTHARespEVCU2 || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeCSVReTHARespEVCU2

    TeCSVR_e_THA_Response rtb_TmpSignalConversionAtVeCS_f;

#endif

    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTIMR;
    TeTRGR_e_AutoPosCorrMd rtb_TmpSignalConversionAtVeT_ip;

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdEngStrtStpType || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdEngStrtStpType

    TeESSR_e_EngStrtType rtb_TmpSignalConversionAtVeES_m;

#endif

#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdStrtReqdActr || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdStrtReqdActr

    TeESSR_e_EngStrtActuatorTyp rtb_TmpSignalConversionAtVeES_e;

#endif

    sint32 tmp;
    TeBRDR_e_BatCltLvlLo rtb_TmpSignalConversionAtVeTHMR;
    TeHMIR_e_TerrainModeStat rtb_TmpSignalConversionAtVeHM_h;
    TeOBCR_e_BattSOCStatus rtb_TmpSignalConversionAtVeO_oa;
    TeOBCR_e_BattTempStatus rtb_TmpSignalConversionAtVeOB_j;
    TeOBCR_e_CellVoltageStatus rtb_TmpSignalConversionAtVeO_ch;
    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeO_cm;
    TeOBCR_e_ChargingSystemSts rtb_TmpSignalConversionAtVeO_i4;
    TeOBCR_e_ChrgCurrStatus rtb_TmpSignalConversionAtVeO_ct;
    TeOBCR_e_ChrgrModeCmd_OBCM rtb_TmpSignalConversionAtVeO_ma;
    TeOBCR_e_ChrgrTrsfMethodReq rtb_TmpSignalConversionAtVeOB_f;
    TeOBCR_e_HCP_DC_Retry rtb_TmpSignalConversionAtVeO_e1;
    TeOBCR_e_HVCM_SelAppProtocol rtb_TmpSignalConversionAtVeO_ji;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* SignalConversion generated from: '<S2>/VeWTAR_M_IntndedAxleTrq_Shpd' incorporates:
     *  Inport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd'
     */
    (void)Rte_Read_VeWTAR_M_IntndedAxleTrq_Shpd_Value
        (&rtb_TmpSignalConversionAtVeWTAR);

    /* SignalConversion generated from: '<S2>/VeWTAR_M_IntndedAxleTrq_xShpng' incorporates:
     *  Inport: '<Root>/VeWTAR_M_IntndedAxleTrq_xShpng'
     */
    (void)Rte_Read_VeWTAR_M_IntndedAxleTrq_xShpng_Value
        (&rtb_TmpSignalConversionAtVeWT_d);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' incorporates:
     *  Inport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA'
     */
    (void)Rte_Read_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value
        (&rtb_TmpSignalConversionAtVeDT_p);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_FrntAxlTrqMax' incorporates:
     *  Inport: '<Root>/VeAXLR_M_FrntAxlTrqMax'
     */
    (void)Rte_Read_VeAXLR_M_FrntAxlTrqMax_Value(&rtb_TmpSignalConversionAtVeAXLR);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_FrntAxlTrqMin' incorporates:
     *  Inport: '<Root>/VeAXLR_M_FrntAxlTrqMin'
     */
    (void)Rte_Read_VeAXLR_M_FrntAxlTrqMin_Value(&rtb_TmpSignalConversionAtVeAX_e);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt' incorporates:
     *  Inport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Frnt'
     */
    (void)Rte_Read_VeRGNR_M_EstRegenAchvdAxleTorq_Frnt_Value
        (&rtb_TmpSignalConversionAtVeRGNR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_RegenBrkAxTorqCapFrnt' incorporates:
     *  Inport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapFrnt'
     */
    (void)Rte_Read_VeSRMR_M_RegenBrkAxTorqCapFrnt_Value
        (&rtb_TmpSignalConversionAtVeSRMR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_AeCoastTorqDiff' incorporates:
     *  Inport: '<Root>/VeSRMR_M_AeCoastTorqDiff'
     */
    (void)Rte_Read_VeSRMR_M_AeCoastTorqDiff_Value
        (&rtb_TmpSignalConversionAtVeS_az);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_RrAxlTrqMax' incorporates:
     *  Inport: '<Root>/VeAXLR_M_RrAxlTrqMax'
     */
    (void)Rte_Read_VeAXLR_M_RrAxlTrqMax_Value(&rtb_TmpSignalConversionAtVeAX_p);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_RrAxlTrqMin' incorporates:
     *  Inport: '<Root>/VeAXLR_M_RrAxlTrqMin'
     */
    (void)Rte_Read_VeAXLR_M_RrAxlTrqMin_Value(&rtb_TmpSignalConversionAtVeAX_l);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear' incorporates:
     *  Inport: '<Root>/VeRGNR_M_EstRegenAchvdAxleTorq_Rear'
     */
    (void)Rte_Read_VeRGNR_M_EstRegenAchvdAxleTorq_Rear_Value
        (&rtb_TmpSignalConversionAtVeRG_c);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_RegenBrkAxTorqCapRear' incorporates:
     *  Inport: '<Root>/VeSRMR_M_RegenBrkAxTorqCapRear'
     */
    (void)Rte_Read_VeSRMR_M_RegenBrkAxTorqCapRear_Value
        (&rtb_TmpSignalConversionAtVeS_nt);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MaxAxleTrqCruise' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MaxAxleTrqCruise'
     */
    (void)Rte_Read_VeSRMR_M_MaxAxleTrqCruise_Value
        (&rtb_TmpSignalConversionAtVeS_ex);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MinAxleTrqCruise' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MinAxleTrqCruise'
     */
    (void)Rte_Read_VeSRMR_M_MinAxleTrqCruise_Value
        (&rtb_TmpSignalConversionAtVeSR_o);

    /* SignalConversion generated from: '<S2>/VeDMIR_e_EcoLEDOn' */
#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn || Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn1

    /* SignalConversion generated from: '<S2>/VeDMIR_e_EcoLEDOn' incorporates:
     *  Inport: '<Root>/VeDMIR_e_EcoLEDOn'
     */
    (void)Rte_Read_VeDMIR_e_EcoLEDOn_Value(&rtb_TmpSignalConversionAtVeDMIR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDMIR_e_EcoLEDOn' */

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrA_Spd' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrASpd

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&rtb_TmpSignalConversionAtVeMSPR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeMSPR_n_MtrA_Spd' */

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrA_TorqAchieved' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMTIRMMtrATorqAchieved

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrA_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTIR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeMTIR_M_MtrA_TorqAchieved' */

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrB_TorqAchieved' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMTIRMMtrBTorqAchieved1 || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrBTorqAchieved

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMT_n);

#endif

    /* End of SignalConversion generated from: '<S2>/VeMTIR_M_MtrB_TorqAchieved' */

    /* SignalConversion generated from: '<S2>/VeVSMR_n_VirtEngSpd' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMRnVirtEngSpd

    /* SignalConversion generated from: '<S2>/VeVSMR_n_VirtEngSpd' incorporates:
     *  Inport: '<Root>/VeVSMR_n_VirtEngSpd'
     */
    (void)Rte_Read_VeVSMR_n_VirtEngSpd_Value(&rtb_TmpSignalConversionAtVeVSMR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeVSMR_n_VirtEngSpd' */

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrB_Spd' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrBSpd

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_TmpSignalConversionAtVeMS_b);

#endif

    /* End of SignalConversion generated from: '<S2>/VeMSPR_n_MtrB_Spd' */

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeSRMR_M_MtrA_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeS_l2);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_MtrB_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_MtrB_TorqCmnd'
     */
    (void)Rte_Read_VeSRMR_M_MtrB_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeSR_j);

    /* SignalConversion generated from: '<S2>/VeVSMR_M_VirtEngTorq' */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMRMVirtEngTorq

    /* SignalConversion generated from: '<S2>/VeVSMR_M_VirtEngTorq' incorporates:
     *  Inport: '<Root>/VeVSMR_M_VirtEngTorq'
     */
    (void)Rte_Read_VeVSMR_M_VirtEngTorq_Value(&rtb_TmpSignalConversionAtVeVS_l);

#endif

    /* End of SignalConversion generated from: '<S2>/VeVSMR_M_VirtEngTorq' */

    /* SignalConversion generated from: '<S2>/VeHMIR_P_BatPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_BatPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_BatPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHMIR);

    /* SignalConversion generated from: '<S2>/VeHMIR_b_BatPwrUsageDispV' incorporates:
     *  Inport: '<Root>/VeHMIR_b_BatPwrUsageDispV'
     */
    (void)Rte_Read_VeHMIR_b_BatPwrUsageDispV_Value
        (&rtb_TmpSignalConversionAtVeHM_n);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChargingSystemSts' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        (&rtb_TmpSignalConversionAtVeO_i4);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeO_cm);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&rtb_TmpSignalConversionAtVeHM_d);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_CoachDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_CoachDisp'
     */
    (void)Rte_Read_VeHMIR_Pct_CoachDisp_Value(&rtb_TmpSignalConversionAtVeHM_o);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_OutputPwrDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_OutputPwrDisp'
     */
    (void)Rte_Read_VeHMIR_Pct_OutputPwrDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_g);

    /* SignalConversion generated from: '<S2>/VeTAIR_p_HghRfrgtPres' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&rtb_TmpSignalConversionAtVeTAIR);

    /* SignalConversion generated from: '<S2>/VeHMIR_b_DriveReady' incorporates:
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value(&rtb_TmpSignalConversionAtVeH_pt);

    /* SignalConversion generated from: '<S2>/VeICSR_b_AdvancePrepForIdle' incorporates:
     *  Inport: '<Root>/VeICSR_b_AdvancePrepForIdle'
     */
    (void)Rte_Read_VeICSR_b_AdvancePrepForIdle_Value
        (&rtb_TmpSignalConversionAtVeICSR);

    /* SignalConversion generated from: '<S2>/VeTRAR_e_EngCntrlMode' incorporates:
     *  Inport: '<Root>/VeTRAR_e_EngCntrlMode'
     */
    (void)Rte_Read_VeTRAR_e_EngCntrlMode_Value(&rtb_TmpSignalConversionAtVeT_iz);

    /* SignalConversion generated from: '<S2>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
     *  Inport: '<Root>/VeTRAR_M_EngReserveTrqCmnd'
     */
    (void)Rte_Read_VeTRAR_M_EngReserveTrqCmnd_Value
        (&rtb_TmpSignalConversionAtVeTRAR);

    /* SignalConversion generated from: '<S2>/VeESSR_e_EngStrtStpMd' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     */
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&rtb_TmpSignalConversionAtVeES_d);

    /* SignalConversion generated from: '<S2>/VeTRAR_M_EngTorqCmndImmed' incorporates:
     *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
     */
    (void)Rte_Read_VeTRAR_M_EngTorqCmndImmed_Value
        (&rtb_TmpSignalConversionAtVeTR_i);

    /* SignalConversion generated from: '<S2>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
    (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value
        (&rtb_TmpSignalConversionAtVeTR_k);

    /* SignalConversion generated from: '<S2>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  Inport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Read_VeTRAR_e_HybCmndEngTorqRespTyp_Value
        (&rtb_TmpSignalConversionAtVeTR_d);

    /* SignalConversion generated from: '<S2>/VeSTRR_b_HybCrnkAbrtd' incorporates:
     *  Inport: '<Root>/VeSTRR_b_HybCrnkAbrtd'
     */
    (void)Rte_Read_VeSTRR_b_HybCrnkAbrtd_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* SignalConversion generated from: '<S2>/VeSRAR_b_CAN_HybFeedback_ECM' incorporates:
     *  Inport: '<Root>/VeSRAR_b_CAN_HybFeedback_ECM'
     */
    (void)Rte_Read_VeSRAR_b_CAN_HybFeedback_ECM_Value
        (&rtb_TmpSignalConversionAtVeS_of);

    /* SignalConversion generated from: '<S2>/VeSTRR_b_RemedialStop' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSTRRbRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSTRRbRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSTRRbRemedialStop

    /* SignalConversion generated from: '<S2>/VeSTRR_b_RemedialStop' incorporates:
     *  Inport: '<Root>/VeSTRR_b_RemedialStop'
     */
    (void)Rte_Read_VeSTRR_b_RemedialStop_Value(&rtb_TmpSignalConversionAtVeST_f);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSTRR_b_RemedialStop' */

    /* SignalConversion generated from: '<S2>/VeSRAR_b_HCP_Remedial_Stop' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSRARbHCPRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSRARbHCPRemedialStop || Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSRARbHCPRemedialStop

    /* SignalConversion generated from: '<S2>/VeSRAR_b_HCP_Remedial_Stop' incorporates:
     *  Inport: '<Root>/VeSRAR_b_HCP_Remedial_Stop'
     */
    (void)Rte_Read_VeSRAR_b_HCP_Remedial_Stop_Value
        (&rtb_TmpSignalConversionAtVeSR_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSRAR_b_HCP_Remedial_Stop' */

    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value(&rtb_TmpSignalConversionAtVeTISR);

    /* SignalConversion generated from: '<S2>/VeTISR_b_InputSpeedFA' incorporates:
     *  Inport: '<Root>/VeTISR_b_InputSpeedFA'
     */
    (void)Rte_Read_VeTISR_b_InputSpeedFA_Value(&rtb_TmpSignalConversionAtVeTI_n);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S2>/VeHSER_n_InputSpeedProfile' incorporates:
     *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
     */
    (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value
        (&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrC_TorqAchieved' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMT_a);

#endif

    /* End of SignalConversion generated from: '<S2>/VeMTIR_M_MtrC_TorqAchieved' */

    /* SignalConversion generated from: '<S2>/VeTRNR_b_PwrTrnIdlSpdActvSts' incorporates:
     *  Inport: '<Root>/VeTRNR_b_PwrTrnIdlSpdActvSts'
     */
    (void)Rte_Read_VeTRNR_b_PwrTrnIdlSpdActvSts_Value
        (&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S2>/VeBACR_r_ElecPwrTorq_PedalFact' incorporates:
     *  Inport: '<Root>/VeBACR_r_ElecPwrTorq_PedalFact'
     */
    (void)Rte_Read_VeBACR_r_ElecPwrTorq_PedalFact_Value
        (&rtb_TmpSignalConversionAtVeBACR);

    /* SignalConversion generated from: '<S2>/VeSRAR_n_HCPMaxEngRPM' incorporates:
     *  Inport: '<Root>/VeSRAR_n_HCPMaxEngRPM'
     */
    (void)Rte_Read_VeSRAR_n_HCPMaxEngRPM_Value(&rtb_TmpSignalConversionAtVeSRAR);

    /* SignalConversion generated from: '<S2>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_HybPwrtrnRdcdPerfCmnd'
     */
    (void)Rte_Read_VeSRAR_b_HybPwrtrnRdcdPerfCmnd_Value
        (&rtb_TmpSignalConversionAtVeSR_p);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrAPwrUsageDisp' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN5FD3_VeHMIRPMtrAPwrUsageDisp

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrAPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrAPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrAPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_k);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHMIR_P_MtrAPwrUsageDisp' */

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrBPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrBPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrBPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVeHM_c);

    /* SignalConversion generated from: '<S2>/VeHMIR_P_MtrPwrUsageDisp' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrPwrUsageDisp'
     */
    (void)Rte_Read_VeHMIR_P_MtrPwrUsageDisp_Value
        (&rtb_TmpSignalConversionAtVe_b2e);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq' incorporates:
     *  Inport: '<Root>/VeTRGR_e_AutoPosCorrMdReq'
     */
    (void)Rte_Read_VeTRGR_e_AutoPosCorrMdReq_Value
        (&rtb_TmpSignalConversionAtVeT_ip);

    /* SignalConversion generated from: '<S2>/VePLTR_pmbar_AmbientAirPrs' incorporates:
     *  Inport: '<Root>/VePLTR_pmbar_AmbientAirPrs'
     */
    (void)Rte_Read_VePLTR_pmbar_AmbientAirPrs_Value
        (&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S2>/VeCCTR_v_CcCntrlSpd_Cluster_KPH' incorporates:
     *  Inport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_KPH'
     */
    (void)Rte_Read_VeCCTR_v_CcCntrlSpd_Cluster_KPH_Value
        (&rtb_TmpSignalConversionAtVeCCTR);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_CrankEnabled' incorporates:
     *  Inport: '<Root>/VeTRGR_b_CrankEnabled'
     */
    (void)Rte_Read_VeTRGR_b_CrankEnabled_Value(&rtb_TmpSignalConversionAtVeT_hx);

    /* SignalConversion generated from: '<S2>/VeTIMR_e_CustomDrvMdSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_CustomDrvMdSts'
     */
    (void)Rte_Read_VeTIMR_e_CustomDrvMdSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR);

    /* SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD14_VeCSVReTHARespEVCU2 || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeCSVReTHARespEVCU2

    /* SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2' incorporates:
     *  Inport: '<Root>/VeCSVR_e_THA_RespEVCU2'
     */
    (void)Rte_Read_VeCSVR_e_THA_RespEVCU2_Value(&rtb_TmpSignalConversionAtVeCS_f);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2' */

    /* SignalConversion generated from: '<S2>/VeSRMR_b_Lv2AccelPdlPosFlt' incorporates:
     *  Inport: '<Root>/VeSRMR_b_Lv2AccelPdlPosFlt'
     */
    (void)Rte_Read_VeSRMR_b_Lv2AccelPdlPosFlt_Value
        (&rtb_TmpSignalConversionAtVeS_oq);

    /* SignalConversion generated from: '<S2>/VeDTRR_Pct_AccelPdlVirtActPosn' incorporates:
     *  Inport: '<Root>/VeDTRR_Pct_AccelPdlVirtActPosn'
     */
    (void)Rte_Read_VeDTRR_Pct_AccelPdlVirtActPosn_Value
        (&rtb_TmpSignalConversionAtVeDTRR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_CurrentGrForDisp' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGrForDisp'
     */
    (void)Rte_Read_VeTRGR_e_CurrentGrForDisp_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_CurrentGear' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGear'
     */
    (void)Rte_Read_VeTRGR_e_CurrentGear_Value(&rtb_TmpSignalConversionAtVeTR_f);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_GearIndicationSts' incorporates:
     *  Inport: '<Root>/VeTRGR_b_GearIndicationSts'
     */
    (void)Rte_Read_VeTRGR_b_GearIndicationSts_Value
        (&rtb_TmpSignalConversionAtVeTR_h);

    /* SignalConversion generated from: '<S2>/VeASLR_b_ISASts' incorporates:
     *  Inport: '<Root>/VeASLR_b_ISASts'
     */
    (void)Rte_Read_VeASLR_b_ISASts_Value(&rtb_TmpSignalConversionAtVeAS_b);

    /* SignalConversion generated from: '<S2>/VeSRMR_Pct_Lv2AccelPdlPos' incorporates:
     *  Inport: '<Root>/VeSRMR_Pct_Lv2AccelPdlPos'
     */
    (void)Rte_Read_VeSRMR_Pct_Lv2AccelPdlPos_Value
        (&rtb_TmpSignalConversionAtVeS_ca);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_ADAS_Allowed' incorporates:
     *  Inport: '<Root>/VeTRGR_b_ADAS_Allowed'
     */
    (void)Rte_Read_VeTRGR_b_ADAS_Allowed_Value(&rtb_TmpSignalConversionAtVeT_gf);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_R_Shift_Block' incorporates:
     *  Inport: '<Root>/VeTRGR_b_R_Shift_Block'
     */
    (void)Rte_Read_VeTRGR_b_R_Shift_Block_Value(&rtb_TmpSignalConversionAtVeT_hw);

    /* SignalConversion generated from: '<S2>/VeAPSR_U_RawPVS1' incorporates:
     *  Inport: '<Root>/VeAPSR_U_RawPVS1'
     */
    (void)Rte_Read_VeAPSR_U_RawPVS1_Value(&rtb_TmpSignalConversionAtVeAPSR);

    /* SignalConversion generated from: '<S2>/VeAPSR_U_RawPVS2' incorporates:
     *  Inport: '<Root>/VeAPSR_U_RawPVS2'
     */
    (void)Rte_Read_VeAPSR_U_RawPVS2_Value(&rtb_TmpSignalConversionAtVeAP_f);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_ShifterLocked' incorporates:
     *  Inport: '<Root>/VeTRGR_b_ShifterLocked'
     */
    (void)Rte_Read_VeTRGR_b_ShifterLocked_Value(&rtb_TmpSignalConversionAtVeT_op);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_PRNDLReq' incorporates:
     *  Inport: '<Root>/VeSRMR_e_PRNDLReq'
     */
    (void)Rte_Read_VeSRMR_e_PRNDLReq_Value(&rtb_TmpSignalConversionAtVeSR_l);

    /* SignalConversion generated from: '<S2>/VeASLR_e_SpdLmtSts' incorporates:
     *  Inport: '<Root>/VeASLR_e_SpdLmtSts'
     */
    (void)Rte_Read_VeASLR_e_SpdLmtSts_Value(&rtb_TmpSignalConversionAtVeASLR);

    /* SignalConversion generated from: '<S2>/VeTRGR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRGR_e_TargetGear'
     */
    (void)Rte_Read_VeTRGR_e_TargetGear_Value(&rtb_TmpSignalConversionAtVeTR_j);

    /* SignalConversion generated from: '<S2>/VeHMIR_e_TerrainModeStat' incorporates:
     *  Inport: '<Root>/VeHMIR_e_TerrainModeStat'
     */
    (void)Rte_Read_VeHMIR_e_TerrainModeStat_Value
        (&rtb_TmpSignalConversionAtVeHM_h);

    /* SignalConversion generated from: '<S2>/VeTRGR_b_TransmissionFailSts' incorporates:
     *  Inport: '<Root>/VeTRGR_b_TransmissionFailSts'
     */
    (void)Rte_Read_VeTRGR_b_TransmissionFailSts_Value
        (&rtb_TmpSignalConversionAtVeT_o5);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_EPB_Hold_Req' incorporates:
     *  Inport: '<Root>/VeSRMR_e_EPB_Hold_Req'
     */
    (void)Rte_Read_VeSRMR_e_EPB_Hold_Req_Value(&rtb_TmpSignalConversionAtVeS_lp);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_EngTrqEnblRqDAS' incorporates:
     *  Inport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS'
     */
    (void)Rte_Read_VeDTRR_b_EngTrqEnblRqDAS_Value
        (&rtb_TmpSignalConversionAtVeDT_g);

    /* SignalConversion generated from: '<S2>/VeDTRR_b_PtcCcDriverOverride' incorporates:
     *  Inport: '<Root>/VeDTRR_b_PtcCcDriverOverride'
     */
    (void)Rte_Read_VeDTRR_b_PtcCcDriverOverride_Value
        (&rtb_TmpSignalConversionAtVeDT_k);

    /* SignalConversion generated from: '<S2>/VeSCCR_b_ESCTrqEnblRq_Allowed' incorporates:
     *  Inport: '<Root>/VeSCCR_b_ESCTrqEnblRq_Allowed'
     */
    (void)Rte_Read_VeSCCR_b_ESCTrqEnblRq_Allowed_Value
        (&rtb_TmpSignalConversionAtVeSCCR);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SplitFrntTrqReq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SplitFrntTrqReq'
     */
    (void)Rte_Read_VeSRMR_M_SplitFrntTrqReq_Value
        (&rtb_TmpSignalConversionAtVeS_h2);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_SplitFrntTrqReq' incorporates:
     *  Inport: '<Root>/VeAXLR_M_SplitFrntTrqReq'
     */
    (void)Rte_Read_VeAXLR_M_SplitFrntTrqReq_Value
        (&rtb_TmpSignalConversionAtVeAX_n);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SplitRearTrqReq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SplitRearTrqReq'
     */
    (void)Rte_Read_VeSRMR_M_SplitRearTrqReq_Value
        (&rtb_TmpSignalConversionAtVeS_pr);

    /* SignalConversion generated from: '<S2>/VeAXLR_M_SplitRrAxlTrqReq' incorporates:
     *  Inport: '<Root>/VeAXLR_M_SplitRrAxlTrqReq'
     */
    (void)Rte_Read_VeAXLR_M_SplitRrAxlTrqReq_Value
        (&rtb_TmpSignalConversionAtVeAX_k);

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptExp' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD3_VeTTQRMLoadFrontOptExp

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptExp' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadFrontOptExp'
     */
    (void)Rte_Read_VeTTQR_M_LoadFrontOptExp_Value
        (&rtb_TmpSignalConversionAtVeTTQR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptExp' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Max' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadTorqFront_Max'
     */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Max_Value
        (&rtb_TmpSignalConversionAtVeTT_l);

    /* SignalConversion generated from: '<S2>/VeTTQR_M_SumTrqMinPwrTrn' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqMinPwrTrn'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqMinPwrTrn_Value
        (&rtb_TmpSignalConversionAtVeT_cq);

    /* SignalConversion generated from: '<S2>/VeTTQR_M_SumTrqStatic' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqStatic'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqStatic_Value(&rtb_TmpSignalConversionAtVeTT_d);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_ActualAxleTrq' incorporates:
     *  Inport: '<Root>/VeSRMR_M_ActualAxleTrq'
     */
    (void)Rte_Read_VeSRMR_M_ActualAxleTrq_Value(&rtb_TmpSignalConversionAtVe_m2r);

    /* SignalConversion generated from: '<S2>/VeHMIR_Pct_EstSOCDisplay' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_EstSOCDisplay'
     */
    (void)Rte_Read_VeHMIR_Pct_EstSOCDisplay_Value
        (&rtb_TmpSignalConversionAtVeH_mk);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntAC' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntAC'
     */
    (void)Rte_Read_VeOBCR_I_MaxAllowableCrntAC_Value
        (&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_EnblChrg' incorporates:
     *  Inport: '<Root>/VeOBCR_b_EnblChrg'
     */
    (void)Rte_Read_VeOBCR_b_EnblChrg_Value(&rtb_TmpSignalConversionAtVeO_be);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_ChrgCrntReqDelta' incorporates:
     *  Inport: '<Root>/VeOBCR_I_ChrgCrntReqDelta'
     */
    (void)Rte_Read_VeOBCR_I_ChrgCrntReqDelta_Value
        (&rtb_TmpSignalConversionAtVeO_m4);

    /* SignalConversion generated from: '<S2>/VeOBCR_I_MaxAllowableCrntBatt' incorporates:
     *  Inport: '<Root>/VeOBCR_I_MaxAllowableCrntBatt'
     */
    (void)Rte_Read_VeOBCR_I_MaxAllowableCrntBatt_Value
        (&rtb_TmpSignalConversionAtVeOB_n);

    /* SignalConversion generated from: '<S2>/VeTHMR_e_HV_Bat_CltLvlLo' incorporates:
     *  Inport: '<Root>/VeTHMR_e_HV_Bat_CltLvlLo'
     */
    (void)Rte_Read_VeTHMR_e_HV_Bat_CltLvlLo_Value
        (&rtb_TmpSignalConversionAtVeTHMR);

    /* SignalConversion generated from: '<S2>/VeOBCR_U_MaxAllowableBattVolt' incorporates:
     *  Inport: '<Root>/VeOBCR_U_MaxAllowableBattVolt'
     */
    (void)Rte_Read_VeOBCR_U_MaxAllowableBattVolt_Value
        (&rtb_TmpSignalConversionAtVeO_cn);

    /* SignalConversion generated from: '<S2>/VeOBCR_U_MinAllowableBattVolt' incorporates:
     *  Inport: '<Root>/VeOBCR_U_MinAllowableBattVolt'
     */
    (void)Rte_Read_VeOBCR_U_MinAllowableBattVolt_Value
        (&rtb_TmpSignalConversionAtVeOB_m);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_CloseS2Cntctr' incorporates:
     *  Inport: '<Root>/VeOBCR_b_CloseS2Cntctr'
     */
    (void)Rte_Read_VeOBCR_b_CloseS2Cntctr_Value(&rtb_TmpSignalConversionAtVeO_gk);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrTrsfMethodReq' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgrTrsfMethodReq'
     */
    (void)Rte_Read_VeOBCR_e_ChrgrTrsfMethodReq_Value
        (&rtb_TmpSignalConversionAtVeOB_f);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrModeReq' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgrModeReq'
     */
    (void)Rte_Read_VeOBCR_e_ChrgrModeReq_Value(&rtb_TmpSignalConversionAtVeO_ma);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_HCP_SessionStpCmd' incorporates:
     *  Inport: '<Root>/VeOBCR_b_HCP_SessionStpCmd'
     */
    (void)Rte_Read_VeOBCR_b_HCP_SessionStpCmd_Value
        (&rtb_TmpSignalConversionAtVeO_m1);

    /* SignalConversion generated from: '<S2>/VeOBCR_U_ChrgVltReqDelta' incorporates:
     *  Inport: '<Root>/VeOBCR_U_ChrgVltReqDelta'
     */
    (void)Rte_Read_VeOBCR_U_ChrgVltReqDelta_Value
        (&rtb_TmpSignalConversionAtVeO_ae);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_ChrgSysFaultBPCM' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ChrgSysFaultBPCM'
     */
    (void)Rte_Read_VeOBCR_b_ChrgSysFaultBPCM_Value
        (&rtb_TmpSignalConversionAtVeO_h0);

    /* SignalConversion generated from: '<S2>/VeOBCR_k_ChrgSysFault_Reason' incorporates:
     *  Inport: '<Root>/VeOBCR_k_ChrgSysFault_Reason'
     */
    (void)Rte_Read_VeOBCR_k_ChrgSysFault_Reason_Value
        (&rtb_TmpSignalConversionAtVeO_ks);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_PluggedIn' incorporates:
     *  Inport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&rtb_TmpSignalConversionAtVeO_f0);

    /* SignalConversion generated from: '<S2>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     */
    (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value(&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S2>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&rtb_TmpSignalConversionAtVeB_io);

    /* SignalConversion generated from: '<S2>/VeGENR_e_stModeReq' incorporates:
     *  Inport: '<Root>/VeGENR_e_stModeReq'
     */
    (void)Rte_Read_VeGENR_e_stModeReq_Value(&rtb_TmpSignalConversionAtVeGE_g);

    /* SignalConversion generated from: '<S2>/VeGENR_I_APMIdcHvSetP' incorporates:
     *  Inport: '<Root>/VeGENR_I_APMIdcHvSetP'
     */
    (void)Rte_Read_VeGENR_I_APMIdcHvSetP_Value(&rtb_TmpSignalConversionAtVeGENR);

    /* SignalConversion generated from: '<S2>/VeGENR_I_APM_IdcLvSetP' incorporates:
     *  Inport: '<Root>/VeGENR_I_APM_IdcLvSetP'
     */
    (void)Rte_Read_VeGENR_I_APM_IdcLvSetP_Value(&rtb_TmpSignalConversionAtVeGE_f);

    /* SignalConversion generated from: '<S2>/VeGENR_U_IBS_BattVoltOut' incorporates:
     *  Inport: '<Root>/VeGENR_U_IBS_BattVoltOut'
     */
    (void)Rte_Read_VeGENR_U_IBS_BattVoltOut_Value
        (&rtb_TmpSignalConversionAtVeGE_m);

    /* SignalConversion generated from: '<S2>/VeGENR_U_SetPVoltRq' incorporates:
     *  Inport: '<Root>/VeGENR_U_SetPVoltRq'
     */
    (void)Rte_Read_VeGENR_U_SetPVoltRq_Value(&rtb_TmpSignalConversionAtVeGE_k);

    /* SignalConversion generated from: '<S2>/VeGENR_b_SetPVoltRqFA' incorporates:
     *  Inport: '<Root>/VeGENR_b_SetPVoltRqFA'
     */
    (void)Rte_Read_VeGENR_b_SetPVoltRqFA_Value(&rtb_TmpSignalConversionAtVeGE_p);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd' incorporates:
     *  Inport: '<Root>/VeOBCR_e_DC_CntctrCmd'
     */
    (void)Rte_Read_VeOBCR_e_DC_CntctrCmd_Value(&rtb_TmpSignalConversionAtVeOB_b);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_DC_Isolation_Cmd' incorporates:
     *  Inport: '<Root>/VeOBCR_b_DC_Isolation_Cmd'
     */
    (void)Rte_Read_VeOBCR_b_DC_Isolation_Cmd_Value
        (&rtb_TmpSignalConversionAtVeO_bk);

    /* SignalConversion generated from: '<S2>/VeHVTR_U_HV_Volt' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_Volt'
     */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&rtb_TmpSignalConversionAtVeHVTR);

    /* SignalConversion generated from: '<S2>/VeHVTR_b_HV_VoltFA' incorporates:
     *  Inport: '<Root>/VeHVTR_b_HV_VoltFA'
     */
    (void)Rte_Read_VeHVTR_b_HV_VoltFA_Value(&rtb_TmpSignalConversionAtVeHV_b);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MainHighVltCntctrCmd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MainHighVltCntctrCmd'
     */
    (void)Rte_Read_VeSRMR_e_MainHighVltCntctrCmd_Value
        (&rtb_TmpSignalConversionAtVeS_mh);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_DCChrgInitialization' incorporates:
     *  Inport: '<Root>/VeOBCR_b_DCChrgInitialization'
     */
    (void)Rte_Read_VeOBCR_b_DCChrgInitialization_Value
        (&rtb_TmpSignalConversionAtVeOB_a);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_DC_ChrgTypeCmd' incorporates:
     *  Inport: '<Root>/VeOBCR_e_DC_ChrgTypeCmd'
     */
    (void)Rte_Read_VeOBCR_e_DC_ChrgTypeCmd_Value
        (&rtb_TmpSignalConversionAtVeOB_o);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_EVCURespAuxLoadOff' incorporates:
     *  Inport: '<Root>/VeHPMR_b_EVCURespAuxLoadOff'
     */
    (void)Rte_Read_VeHPMR_b_EVCURespAuxLoadOff_Value
        (&rtb_TmpSignalConversionAtVeHP_d);

    /* SignalConversion generated from: '<S2>/VeVTHR_P_V2H_EVMaxPwrLim' */
#if Rte_SysCon_VrntST2B_RPFFD3FD11_VeVTHRPV2HEVMaxPwrLim

    /* SignalConversion generated from: '<S2>/VeVTHR_P_V2H_EVMaxPwrLim' incorporates:
     *  Inport: '<Root>/VeVTHR_P_V2H_EVMaxPwrLim'
     */
    (void)Rte_Read_VeVTHR_P_V2H_EVMaxPwrLim_Value
        (&rtb_TmpSignalConversionAtVeVTHR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeVTHR_P_V2H_EVMaxPwrLim' */

    /* SignalConversion generated from: '<S2>/VeOBCR_b_CPIM_Error' incorporates:
     *  Inport: '<Root>/VeOBCR_b_CPIM_Error'
     */
    (void)Rte_Read_VeOBCR_b_CPIM_Error_Value(&rtb_TmpSignalConversionAtVeO_le);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_CPIM_OT' incorporates:
     *  Inport: '<Root>/VeOBCR_b_CPIM_OT'
     */
    (void)Rte_Read_VeOBCR_b_CPIM_OT_Value(&rtb_TmpSignalConversionAtVeOB_i);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_HCP_DC_Retry' incorporates:
     *  Inport: '<Root>/VeOBCR_e_HCP_DC_Retry'
     */
    (void)Rte_Read_VeOBCR_e_HCP_DC_Retry_Value(&rtb_TmpSignalConversionAtVeO_e1);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_SelectAppProtocol' incorporates:
     *  Inport: '<Root>/VeOBCR_e_SelectAppProtocol'
     */
    (void)Rte_Read_VeOBCR_e_SelectAppProtocol_Value
        (&rtb_TmpSignalConversionAtVeO_ji);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_SelectSecProtocol' incorporates:
     *  Inport: '<Root>/VeOBCR_b_SelectSecProtocol'
     */
    (void)Rte_Read_VeOBCR_b_SelectSecProtocol_Value
        (&rtb_TmpSignalConversionAtVeO_fu);

    /* SignalConversion generated from: '<S2>/VeOBCR_Pct_BattFullSOC' incorporates:
     *  Inport: '<Root>/VeOBCR_Pct_BattFullSOC'
     */
    (void)Rte_Read_VeOBCR_Pct_BattFullSOC_Value(&rtb_TmpSignalConversionAtVeO_mm);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_BattOverVolt' incorporates:
     *  Inport: '<Root>/VeOBCR_b_BattOverVolt'
     */
    (void)Rte_Read_VeOBCR_b_BattOverVolt_Value(&rtb_TmpSignalConversionAtVeO_mo);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_BattTemp_OOR' incorporates:
     *  Inport: '<Root>/VeOBCR_e_BattTemp_OOR'
     */
    (void)Rte_Read_VeOBCR_e_BattTemp_OOR_Value(&rtb_TmpSignalConversionAtVeOB_j);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_BattUnderVolt' incorporates:
     *  Inport: '<Root>/VeOBCR_b_BattUnderVolt'
     */
    (void)Rte_Read_VeOBCR_b_BattUnderVolt_Value(&rtb_TmpSignalConversionAtVeO_e0);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_CellVolt_OOR' incorporates:
     *  Inport: '<Root>/VeOBCR_e_CellVolt_OOR'
     */
    (void)Rte_Read_VeOBCR_e_CellVolt_OOR_Value(&rtb_TmpSignalConversionAtVeO_ch);

    /* SignalConversion generated from: '<S2>/VeOBCR_e_ChrgCurr_OOR' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgCurr_OOR'
     */
    (void)Rte_Read_VeOBCR_e_ChrgCurr_OOR_Value(&rtb_TmpSignalConversionAtVeO_ct);

    /* SignalConversion generated from: '<S2>/VeCHDR_b_ChrgCrntDvatonErr' */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRbChrgCrntDvatonErr || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRbChrgCrntDvatonErr

    /* SignalConversion generated from: '<S2>/VeCHDR_b_ChrgCrntDvatonErr' incorporates:
     *  Inport: '<Root>/VeCHDR_b_ChrgCrntDvatonErr'
     */
    (void)Rte_Read_VeCHDR_b_ChrgCrntDvatonErr_Value
        (&rtb_TmpSignalConversionAtVeCH_m);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCHDR_b_ChrgCrntDvatonErr' */

    /* SignalConversion generated from: '<S2>/VeCHDR_t_EstChrgTime_min' */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtEstChrgTimemin || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtEstChrgTimemin

    /* SignalConversion generated from: '<S2>/VeCHDR_t_EstChrgTime_min' incorporates:
     *  Inport: '<Root>/VeCHDR_t_EstChrgTime_min'
     */
    (void)Rte_Read_VeCHDR_t_EstChrgTime_min_Value
        (&rtb_TmpSignalConversionAtVeCHDR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCHDR_t_EstChrgTime_min' */

    /* SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_min' */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtMaxChrgTimemin || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtMaxChrgTimemin

    /* SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_min' incorporates:
     *  Inport: '<Root>/VeCHDR_t_MaxChrgTime_min'
     */
    (void)Rte_Read_VeCHDR_t_MaxChrgTime_min_Value
        (&rtb_TmpSignalConversionAtVeCH_k);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_min' */

    /* SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_sec' */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtMaxChrgTimesec || Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtMaxChrgTimesec

    /* SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_sec' incorporates:
     *  Inport: '<Root>/VeCHDR_t_MaxChrgTime_sec'
     */
    (void)Rte_Read_VeCHDR_t_MaxChrgTime_sec_Value
        (&rtb_TmpSignalConversionAtVeCH_h);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCHDR_t_MaxChrgTime_sec' */

    /* SignalConversion generated from: '<S2>/VeOBCR_e_SOC_OOR' incorporates:
     *  Inport: '<Root>/VeOBCR_e_SOC_OOR'
     */
    (void)Rte_Read_VeOBCR_e_SOC_OOR_Value(&rtb_TmpSignalConversionAtVeO_oa);

    /* SignalConversion generated from: '<S2>/VeOBCR_b_WeldChkComplete' incorporates:
     *  Inport: '<Root>/VeOBCR_b_WeldChkComplete'
     */
    (void)Rte_Read_VeOBCR_b_WeldChkComplete_Value
        (&rtb_TmpSignalConversionAtVeO_ky);

    /* SignalConversion generated from: '<S2>/VeSRMR_M_SnsdEng_Flt' incorporates:
     *  Inport: '<Root>/VeSRMR_M_SnsdEng_Flt'
     */
    (void)Rte_Read_VeSRMR_M_SnsdEng_Flt_Value(&rtb_TmpSignalConversionAtVeSR_m);

    /* SignalConversion generated from: '<S2>/VeSRMR_b_SnsdTi_notVld' incorporates:
     *  Inport: '<Root>/VeSRMR_b_SnsdTi_notVld'
     */
    (void)Rte_Read_VeSRMR_b_SnsdTi_notVld_Value(&rtb_TmpSignalConversionAtVeS_ji);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrA_AEMDFc_Hi' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrA_AEMDFc_Hi'
     */
    (void)Rte_Read_VeHTDR_f_MtrA_AEMDFc_Hi_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrB_AEMDFc_Hi' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrB_AEMDFc_Hi'
     */
    (void)Rte_Read_VeHTDR_f_MtrB_AEMDFc_Hi_Value
        (&rtb_TmpSignalConversionAtVeHT_g);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrA_AEMDFc_Lo' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrA_AEMDFc_Lo'
     */
    (void)Rte_Read_VeHTDR_f_MtrA_AEMDFc_Lo_Value
        (&rtb_TmpSignalConversionAtVeH_fb);

    /* SignalConversion generated from: '<S2>/VeHTDR_f_MtrB_AEMDFc_Lo' incorporates:
     *  Inport: '<Root>/VeHTDR_f_MtrB_AEMDFc_Lo'
     */
    (void)Rte_Read_VeHTDR_f_MtrB_AEMDFc_Lo_Value
        (&rtb_TmpSignalConversionAtVeHT_n);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDPosTrqOffst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDPosTrqOffst

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDPosTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrC_AEMDPosTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrC_AEMDPosTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeHT_i);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDPosTrqOffst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDPosTrqOffst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst1

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDPosTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_AEMDPosTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_AEMDPosTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeH_ii);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDPosTrqOffst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_AEMDPosTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_AEMDPosTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_AEMDPosTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeH_mf);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDNegTrqOffst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDNegTrqOffst

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDNegTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrC_AEMDNegTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrC_AEMDNegTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeH_bo);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_AEMDNegTrqOffst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDNegTrqOffst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst1

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDNegTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_AEMDNegTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_AEMDNegTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeHT_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_AEMDNegTrqOffst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_AEMDNegTrqOffst' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_AEMDNegTrqOffst'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_AEMDNegTrqOffst_Value
        (&rtb_TmpSignalConversionAtVeHT_a);

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrC_AEMDPGainScl' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrCAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrCAEMDPGainScl

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrC_AEMDPGainScl' incorporates:
     *  Inport: '<Root>/VeHTDR_scl_MtrC_AEMDPGainScl'
     */
    (void)Rte_Read_VeHTDR_scl_MtrC_AEMDPGainScl_Value
        (&rtb_TmpSignalConversionAtVeH_cm);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_scl_MtrC_AEMDPGainScl' */

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrA_AEMDPGainScl' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl1

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrA_AEMDPGainScl' incorporates:
     *  Inport: '<Root>/VeHTDR_scl_MtrA_AEMDPGainScl'
     */
    (void)Rte_Read_VeHTDR_scl_MtrA_AEMDPGainScl_Value
        (&rtb_TmpSignalConversionAtVeH_b4);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_scl_MtrA_AEMDPGainScl' */

    /* SignalConversion generated from: '<S2>/VeHTDR_scl_MtrB_AEMDPGainScl' incorporates:
     *  Inport: '<Root>/VeHTDR_scl_MtrB_AEMDPGainScl'
     */
    (void)Rte_Read_VeHTDR_scl_MtrB_AEMDPGainScl_Value
        (&rtb_TmpSignalConversionAtVeHT_j);

    /* SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&rtb_TmpSignalConversionAtVeBP_c);

    /* SignalConversion generated from: '<S2>/VePMDR_e_PowerModeRaw' incorporates:
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     */
    (void)Rte_Read_VePMDR_e_PowerModeRaw_Value(&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MtrA_MdCmnd'
     */
    (void)Rte_Read_VeSRMR_e_MtrA_MdCmnd_Value(&rtb_TmpSignalConversionAtVeS_ef);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_MtrB_MdCmnd'
     */
    (void)Rte_Read_VeSRMR_e_MtrB_MdCmnd_Value(&rtb_TmpSignalConversionAtVeS_kt);

    /* SignalConversion generated from: '<S2>/VeHTDR_e_MtrA_MdCmnd' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDReMtrAMdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDReMtrAMdCmnd

    /* SignalConversion generated from: '<S2>/VeHTDR_e_MtrA_MdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_e_MtrA_MdCmnd'
     */
    (void)Rte_Read_VeHTDR_e_MtrA_MdCmnd_Value(&rtb_TmpSignalConversionAtVeHT_b);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_e_MtrA_MdCmnd' */

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrC_ZeroTrq_Rqst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrCZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrCZeroTrqRqst

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrC_ZeroTrq_Rqst' incorporates:
     *  Inport: '<Root>/VeHTDR_b_MtrC_ZeroTrq_Rqst'
     */
    (void)Rte_Read_VeHTDR_b_MtrC_ZeroTrq_Rqst_Value
        (&rtb_TmpSignalConversionAtVeH_gm);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_b_MtrC_ZeroTrq_Rqst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrA_ZeroTrq_Rqst' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst1

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrA_ZeroTrq_Rqst' incorporates:
     *  Inport: '<Root>/VeHTDR_b_MtrA_ZeroTrq_Rqst'
     */
    (void)Rte_Read_VeHTDR_b_MtrA_ZeroTrq_Rqst_Value
        (&rtb_TmpSignalConversionAtVeH_hb);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_b_MtrA_ZeroTrq_Rqst' */

    /* SignalConversion generated from: '<S2>/VeHTDR_b_MtrB_ZeroTrq_Rqst' incorporates:
     *  Inport: '<Root>/VeHTDR_b_MtrB_ZeroTrq_Rqst'
     */
    (void)Rte_Read_VeHTDR_b_MtrB_ZeroTrq_Rqst_Value
        (&rtb_TmpSignalConversionAtVeH_ds);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request' incorporates:
     *  Inport: '<Root>/VeSRMR_e_PPawl_Request'
     */
    (void)Rte_Read_VeSRMR_e_PPawl_Request_Value(&rtb_TmpSignalConversionAtVeSR_b);

    /* SignalConversion generated from: '<S2>/VeSRMR_e_VldtdTransShiftRngSt' incorporates:
     *  Inport: '<Root>/VeSRMR_e_VldtdTransShiftRngSt'
     */
    (void)Rte_Read_VeSRMR_e_VldtdTransShiftRngSt_Value
        (&rtb_TmpSignalConversionAtVeSR_f);

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrC_SpdCmnd' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrCSpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrCSpdCmnd

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrC_SpdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_n_MtrC_SpdCmnd'
     */
    (void)Rte_Read_VeHTDR_n_MtrC_SpdCmnd_Value(&rtb_TmpSignalConversionAtVeHT_k);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_n_MtrC_SpdCmnd' */

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrA_SpdCmnd' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd1 || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd1

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrA_SpdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_n_MtrA_SpdCmnd'
     */
    (void)Rte_Read_VeHTDR_n_MtrA_SpdCmnd_Value(&rtb_TmpSignalConversionAtVeH_h1);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_n_MtrA_SpdCmnd' */

    /* SignalConversion generated from: '<S2>/VeHTDR_n_MtrB_SpdCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_n_MtrB_SpdCmnd'
     */
    (void)Rte_Read_VeHTDR_n_MtrB_SpdCmnd_Value(&rtb_TmpSignalConversionAtVeHT_m);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrATorqCmnd || Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrATorqCmnd

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeH_mh);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd' */

    /* SignalConversion generated from: '<S2>/VeSRMR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeSRMR_v_VehSpd'
     */
    (void)Rte_Read_VeSRMR_v_VehSpd_Value(&rtb_TmpSignalConversionAtVeS_lu);

    /* SignalConversion generated from: '<S2>/VeSRMR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeSRMR_b_VehSpdFA'
     */
    (void)Rte_Read_VeSRMR_b_VehSpdFA_Value(&rtb_TmpSignalConversionAtVeSR_a);

    /* SignalConversion generated from: '<S2>/VePMPR_dV_FEDMFlw' incorporates:
     *  Inport: '<Root>/VePMPR_dV_FEDMFlw'
     */
    (void)Rte_Read_VePMPR_dV_FEDMFlw_Value(&rtb_TmpSignalConversionAtVePMPR);

    /* SignalConversion generated from: '<S2>/VePMPR_b_FEDMFlw_FA' incorporates:
     *  Inport: '<Root>/VePMPR_b_FEDMFlw_FA'
     */
    (void)Rte_Read_VePMPR_b_FEDMFlw_FA_Value(&rtb_TmpSignalConversionAtVeP_f0);

    /* SignalConversion generated from: '<S2>/VePMPR_dV_REDMFlw' incorporates:
     *  Inport: '<Root>/VePMPR_dV_REDMFlw'
     */
    (void)Rte_Read_VePMPR_dV_REDMFlw_Value(&rtb_TmpSignalConversionAtVePM_b);

    /* SignalConversion generated from: '<S2>/VePMPR_b_REDMFlw_FA' incorporates:
     *  Inport: '<Root>/VePMPR_b_REDMFlw_FA'
     */
    (void)Rte_Read_VePMPR_b_REDMFlw_FA_Value(&rtb_TmpSignalConversionAtVePM_g);

    /* SignalConversion generated from: '<S2>/VePMPR_dV_GenFlw' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD16_VePMPRdVGenFlw || Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD5_VePMPRdVGenFlw

    /* SignalConversion generated from: '<S2>/VePMPR_dV_GenFlw' incorporates:
     *  Inport: '<Root>/VePMPR_dV_GenFlw'
     */
    (void)Rte_Read_VePMPR_dV_GenFlw_Value(&rtb_TmpSignalConversionAtVePM_k);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMPR_dV_GenFlw' */

    /* SignalConversion generated from: '<S2>/VeESSR_b_HCPFuelDisable' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHCPFuelDisable || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHCPFuelDisable

    /* SignalConversion generated from: '<S2>/VeESSR_b_HCPFuelDisable' incorporates:
     *  Inport: '<Root>/VeESSR_b_HCPFuelDisable'
     */
    (void)Rte_Read_VeESSR_b_HCPFuelDisable_Value
        (&rtb_TmpSignalConversionAtVeESSR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESSR_b_HCPFuelDisable' */

    /* SignalConversion generated from: '<S2>/VeESSR_b_Hyb_ProducingTorque' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHybProducingTorque || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHybProducingTorque

    /* SignalConversion generated from: '<S2>/VeESSR_b_Hyb_ProducingTorque' incorporates:
     *  Inport: '<Root>/VeESSR_b_Hyb_ProducingTorque'
     */
    (void)Rte_Read_VeESSR_b_Hyb_ProducingTorque_Value
        (&rtb_TmpSignalConversionAtVeES_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESSR_b_Hyb_ProducingTorque' */

    /* SignalConversion generated from: '<S2>/VeESSR_b_OptimdEngOnOffCmd' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbOptimdEngOnOffCmd || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbOptimdEngOnOffCmd

    /* SignalConversion generated from: '<S2>/VeESSR_b_OptimdEngOnOffCmd' incorporates:
     *  Inport: '<Root>/VeESSR_b_OptimdEngOnOffCmd'
     */
    (void)Rte_Read_VeESSR_b_OptimdEngOnOffCmd_Value
        (&rtb_TmpSignalConversionAtVeE_py);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESSR_b_OptimdEngOnOffCmd' */

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdEngStrtStpType || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdEngStrtStpType

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType' incorporates:
     *  Inport: '<Root>/VeESSR_e_OptimdEngStrtStpType'
     */
    (void)Rte_Read_VeESSR_e_OptimdEngStrtStpType_Value
        (&rtb_TmpSignalConversionAtVeES_m);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType' */

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdStrtReqdActr || Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdStrtReqdActr

    /* SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr' incorporates:
     *  Inport: '<Root>/VeESSR_e_OptimdStrtReqdActr'
     */
    (void)Rte_Read_VeESSR_e_OptimdStrtReqdActr_Value
        (&rtb_TmpSignalConversionAtVeES_e);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr' */

    /* SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdLHR' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeCSVRnWhlSpdLHR

    /* SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdLHR' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHR_Value(&rtb_TmpSignalConversionAtVeCSVR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdLHR' */

    /* SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdRHR' */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeCSVRnWhlSpdRHR

    /* SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdRHR' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHR_Value(&rtb_TmpSignalConversionAtVeCS_h);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdRHR' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Min' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontMin

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Min' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadTorqFront_Min'
     */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Min_Value
        (&rtb_TmpSignalConversionAtVeT_d4);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Min' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptShaped' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptShaped

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptShaped' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadFrontOptShaped'
     */
    (void)Rte_Read_VeTTQR_M_LoadFrontOptShaped_Value
        (&rtb_TmpSignalConversionAtVeT_gt);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOptShaped' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_SumTrqAct_SEM' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMSumTrqActSEM

    /* SignalConversion generated from: '<S2>/VeTTQR_M_SumTrqAct_SEM' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqAct_SEM'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqAct_SEM_Value(&rtb_TmpSignalConversionAtVeTT_m);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_SumTrqAct_SEM' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Opt' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontOpt

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Opt' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadTorqFront_Opt'
     */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Opt_Value
        (&rtb_TmpSignalConversionAtVeTT_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_LoadTorqFront_Opt' */

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOpt_xShaping' */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptxShaping

    /* SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOpt_xShaping' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadFrontOpt_xShaping'
     */
    (void)Rte_Read_VeTTQR_M_LoadFrontOpt_xShaping_Value
        (&rtb_TmpSignalConversionAtVeTT_k);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQR_M_LoadFrontOpt_xShaping' */

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndImmed' */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndImmed

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndImmed' incorporates:
     *  Inport: '<Root>/VeSRMR_M_EngTrqCmndImmed'
     */
    (void)Rte_Read_VeSRMR_M_EngTrqCmndImmed_Value
        (&rtb_TmpSignalConversionAtVeS_cv);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndImmed' */

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndPrdtd' */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndPrdtd

    /* SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndPrdtd' incorporates:
     *  Inport: '<Root>/VeSRMR_M_EngTrqCmndPrdtd'
     */
    (void)Rte_Read_VeSRMR_M_EngTrqCmndPrdtd_Value
        (&rtb_TmpSignalConversionAtVeS_ge);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSRMR_M_EngTrqCmndPrdtd' */

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/ST2B_FUNC_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S3>/ST2B_FUNC_FastTEF_StartCheckpoint ' */
    Rte_Call_ST2B_FUNC_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S46>/Limiter1' */
    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S46>/Constant Value1'
     *  RelationalOperator: '<S58>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWTAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S58>/Switch1' */

    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S46>/Constant Value2'
     *  RelationalOperator: '<S58>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S58>/Switch' */
    /* End of Outputs for SubSystem: '<S46>/Limiter1' */

    /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
     *  Constant: '<S46>/Constant Value'
     *  Gain: '<S46>/Gain'
     *  Sum: '<S46>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_TorqueStatic_D_TTC = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Switch: '<S6>/switch' incorporates:
     *  Constant: '<S47>/Constant Value'
     *  Constant: '<S47>/Constant Value1'
     *  Constant: '<S6>/Constant'
     *  DataTypeConversion: '<S47>/Data Type Conversion'
     *  Gain: '<S47>/Gain'
     *  RelationalOperator: '<S59>/Relational Operator'
     *  Sum: '<S47>/Sum'
     *  Switch: '<S59>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDT_p)
    {
        ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_Torque_DrvReqMod =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S47>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeWT_d)
        {
            /* Switch: '<S59>/Switch1' incorporates:
             *  Constant: '<S47>/Constant Value1'
             *  Gain: '<S47>/Gain'
             */
            rtb_Gain_ig = 65535.0F;
        }
        else
        {
            /* Gain: '<S47>/Gain' incorporates:
             *  Switch: '<S59>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeWT_d;
        }

        /* Switch: '<S59>/Switch' incorporates:
         *  Constant: '<S47>/Constant Value2'
         *  RelationalOperator: '<S59>/Relational Operator1'
         */
        if (rtb_Gain_ig <= -65534.0F)
        {
            rtb_Gain_ig = -65534.0F;
        }

        /* End of Switch: '<S59>/Switch' */
        /* End of Outputs for SubSystem: '<S47>/Limiter1' */
        ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Axle_Torque_DrvReqMod =
            (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F),
                      65536.0F));
    }

    /* End of Switch: '<S6>/switch' */

    /* Outputs for Atomic SubSystem: '<S50>/Limiter1' */
    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value1'
     *  RelationalOperator: '<S62>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAXLR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAXLR;
    }

    /* End of Switch: '<S62>/Switch1' */

    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S50>/Constant Value2'
     *  RelationalOperator: '<S62>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S62>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter1' */

    /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
     *  Constant: '<S50>/Constant Value'
     *  Gain: '<S50>/Gain'
     *  Sum: '<S50>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S51>/Limiter1' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S51>/Constant Value1'
     *  RelationalOperator: '<S63>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_e)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_e;
    }

    /* End of Switch: '<S63>/Switch1' */

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S51>/Constant Value2'
     *  RelationalOperator: '<S63>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S63>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Limiter1' */

    /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
     *  Constant: '<S51>/Constant Value'
     *  Gain: '<S51>/Gain'
     *  Sum: '<S51>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S52>/Limiter1' */
    /* Switch: '<S64>/Switch1' incorporates:
     *  Constant: '<S52>/Constant Value1'
     *  RelationalOperator: '<S64>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRGNR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeRGNR;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Switch: '<S64>/Switch' incorporates:
     *  Constant: '<S52>/Constant Value2'
     *  RelationalOperator: '<S64>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S64>/Switch' */
    /* End of Outputs for SubSystem: '<S52>/Limiter1' */

    /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
     *  Gain: '<S52>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_Axle_Est_Regen_Torq =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S53>/Limiter1' */
    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S53>/Constant Value1'
     *  RelationalOperator: '<S65>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeSRMR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSRMR;
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Switch: '<S65>/Switch' incorporates:
     *  Constant: '<S53>/Constant Value2'
     *  RelationalOperator: '<S65>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S65>/Switch' */
    /* End of Outputs for SubSystem: '<S53>/Limiter1' */

    /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
     *  Gain: '<S53>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Front_Axle_Regen_Capacity =
        (uint16)((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S54>/Limiter1' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S54>/Constant Value1'
     *  RelationalOperator: '<S66>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_p;
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S54>/Constant Value2'
     *  RelationalOperator: '<S66>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S66>/Switch' */
    /* End of Outputs for SubSystem: '<S54>/Limiter1' */

    /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
     *  Constant: '<S54>/Constant Value'
     *  Gain: '<S54>/Gain'
     *  Sum: '<S54>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S55>/Limiter1' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S55>/Constant Value1'
     *  RelationalOperator: '<S67>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_l;
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S67>/Switch' incorporates:
     *  Constant: '<S55>/Constant Value2'
     *  RelationalOperator: '<S67>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S67>/Switch' */
    /* End of Outputs for SubSystem: '<S55>/Limiter1' */

    /* DataTypeConversion: '<S55>/Data Type Conversion' incorporates:
     *  Constant: '<S55>/Constant Value'
     *  Gain: '<S55>/Gain'
     *  Sum: '<S55>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S56>/Limiter1' */
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S56>/Constant Value1'
     *  RelationalOperator: '<S68>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRG_c)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeRG_c;
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Switch: '<S68>/Switch' incorporates:
     *  Constant: '<S56>/Constant Value2'
     *  RelationalOperator: '<S68>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S68>/Switch' */
    /* End of Outputs for SubSystem: '<S56>/Limiter1' */

    /* DataTypeConversion: '<S56>/Data Type Conversion' incorporates:
     *  Gain: '<S56>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_Axle_Est_Regen_Torq = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S57>/Limiter1' */
    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S57>/Constant Value1'
     *  RelationalOperator: '<S69>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeS_nt)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_nt;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S57>/Constant Value2'
     *  RelationalOperator: '<S69>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S69>/Switch' */
    /* End of Outputs for SubSystem: '<S57>/Limiter1' */

    /* DataTypeConversion: '<S57>/Data Type Conversion' incorporates:
     *  Gain: '<S57>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Rear_Axle_Regen_Capacity = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S48>/Limiter1' */
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S48>/Constant Value1'
     *  RelationalOperator: '<S60>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_ex)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_ex;
    }

    /* End of Switch: '<S60>/Switch1' */

    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S48>/Constant Value2'
     *  RelationalOperator: '<S60>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S60>/Switch' */
    /* End of Outputs for SubSystem: '<S48>/Limiter1' */

    /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
     *  Constant: '<S48>/Constant Value'
     *  Gain: '<S48>/Gain'
     *  Sum: '<S48>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Total_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S49>/Limiter1' */
    /* Switch: '<S61>/Switch1' incorporates:
     *  Constant: '<S49>/Constant Value1'
     *  RelationalOperator: '<S61>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S61>/Switch1' */

    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S49>/Constant Value2'
     *  RelationalOperator: '<S61>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S61>/Switch' */
    /* End of Outputs for SubSystem: '<S49>/Limiter1' */

    /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
     *  Constant: '<S49>/Constant Value'
     *  Gain: '<S49>/Gain'
     *  Sum: '<S49>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_Total_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S70>/Limiter1' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S70>/Constant Value1'
     *  RelationalOperator: '<S83>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeWTAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S83>/Switch1' */

    /* Switch: '<S83>/Switch' incorporates:
     *  Constant: '<S70>/Constant Value2'
     *  RelationalOperator: '<S83>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S83>/Switch' */
    /* End of Outputs for SubSystem: '<S70>/Limiter1' */

    /* DataTypeConversion: '<S70>/Data Type Conversion' incorporates:
     *  Constant: '<S70>/Constant Value'
     *  Gain: '<S70>/Gain'
     *  Sum: '<S70>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_TorqueStatic_D_TTC = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Switch: '<S7>/switch' incorporates:
     *  Constant: '<S71>/Constant Value'
     *  Constant: '<S71>/Constant Value1'
     *  Constant: '<S7>/Constant'
     *  DataTypeConversion: '<S71>/Data Type Conversion'
     *  Gain: '<S71>/Gain'
     *  RelationalOperator: '<S84>/Relational Operator'
     *  Sum: '<S71>/Sum'
     *  Switch: '<S84>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDT_p)
    {
        ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_Torque_DrvReqMod =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S71>/Limiter1' */
        if (65535.0F < rtb_TmpSignalConversionAtVeWT_d)
        {
            /* Switch: '<S84>/Switch1' incorporates:
             *  Constant: '<S71>/Constant Value1'
             *  Gain: '<S71>/Gain'
             */
            rtb_Gain_ig = 65535.0F;
        }
        else
        {
            /* Gain: '<S71>/Gain' incorporates:
             *  Switch: '<S84>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeWT_d;
        }

        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S71>/Constant Value2'
         *  RelationalOperator: '<S84>/Relational Operator1'
         */
        if (rtb_Gain_ig <= -65534.0F)
        {
            rtb_Gain_ig = -65534.0F;
        }

        /* End of Switch: '<S84>/Switch' */
        /* End of Outputs for SubSystem: '<S71>/Limiter1' */
        ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Axle_Torque_DrvReqMod = (uint16)
            ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));
    }

    /* End of Switch: '<S7>/switch' */

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeSRMR_b_AeCoastTorqDiffActv'
     */
    (void)Rte_Read_VeSRMR_b_AeCoastTorqDiffActv_Value
        (&ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MaxRegen_Diff_Axle_Torq_Active);

    /* Outputs for Atomic SubSystem: '<S75>/Limiter1' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S75>/Constant Value1'
     *  RelationalOperator: '<S88>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAXLR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAXLR;
    }

    /* End of Switch: '<S88>/Switch1' */

    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S75>/Constant Value2'
     *  RelationalOperator: '<S88>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S88>/Switch' */
    /* End of Outputs for SubSystem: '<S75>/Limiter1' */

    /* DataTypeConversion: '<S75>/Data Type Conversion' incorporates:
     *  Constant: '<S75>/Constant Value'
     *  Gain: '<S75>/Gain'
     *  Sum: '<S75>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S76>/Limiter1' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S76>/Constant Value1'
     *  RelationalOperator: '<S89>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_e)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_e;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S76>/Constant Value2'
     *  RelationalOperator: '<S89>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S89>/Switch' */
    /* End of Outputs for SubSystem: '<S76>/Limiter1' */

    /* DataTypeConversion: '<S76>/Data Type Conversion' incorporates:
     *  Constant: '<S76>/Constant Value'
     *  Gain: '<S76>/Gain'
     *  Sum: '<S76>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S77>/Limiter1' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S77>/Constant Value1'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRGNR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeRGNR;
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S77>/Constant Value2'
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S90>/Switch' */
    /* End of Outputs for SubSystem: '<S77>/Limiter1' */

    /* DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
     *  Gain: '<S77>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_Axle_Est_Regen_Torq = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S78>/Limiter1' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S78>/Constant Value1'
     *  RelationalOperator: '<S91>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeSRMR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSRMR;
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Switch: '<S91>/Switch' incorporates:
     *  Constant: '<S78>/Constant Value2'
     *  RelationalOperator: '<S91>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S91>/Switch' */
    /* End of Outputs for SubSystem: '<S78>/Limiter1' */

    /* DataTypeConversion: '<S78>/Data Type Conversion' incorporates:
     *  Gain: '<S78>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Front_Axle_Regen_Capacity = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S79>/Limiter1' */
    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S79>/Constant Value1'
     *  RelationalOperator: '<S92>/Relational Operator'
     */
    if (65532.0F < rtb_TmpSignalConversionAtVeS_az)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65532.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_az;
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S79>/Constant Value2'
     *  RelationalOperator: '<S92>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S79>/Sum' */
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S79>/Sum' */
        rtb_TmpSignalConversionAtVeAXLR = 0.0F;
    }

    /* End of Switch: '<S92>/Switch' */
    /* End of Outputs for SubSystem: '<S79>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S80>/Limiter1' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S80>/Constant Value1'
     *  RelationalOperator: '<S93>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_p;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Switch: '<S93>/Switch' incorporates:
     *  Constant: '<S80>/Constant Value2'
     *  RelationalOperator: '<S93>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S93>/Switch' */
    /* End of Outputs for SubSystem: '<S80>/Limiter1' */

    /* DataTypeConversion: '<S80>/Data Type Conversion' incorporates:
     *  Constant: '<S80>/Constant Value'
     *  Gain: '<S80>/Gain'
     *  Sum: '<S80>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S81>/Limiter1' */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S81>/Constant Value1'
     *  RelationalOperator: '<S94>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeAX_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_l;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S81>/Constant Value2'
     *  RelationalOperator: '<S94>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S94>/Switch' */
    /* End of Outputs for SubSystem: '<S81>/Limiter1' */

    /* DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
     *  Constant: '<S81>/Constant Value'
     *  Gain: '<S81>/Gain'
     *  Sum: '<S81>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S82>/Limiter1' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S82>/Constant Value1'
     *  RelationalOperator: '<S95>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeRG_c)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeRG_c;
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Switch: '<S95>/Switch' incorporates:
     *  Constant: '<S82>/Constant Value2'
     *  RelationalOperator: '<S95>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S95>/Switch' */
    /* End of Outputs for SubSystem: '<S82>/Limiter1' */

    /* DataTypeConversion: '<S82>/Data Type Conversion' incorporates:
     *  Gain: '<S82>/Gain'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_Axle_Est_Regen_Torq = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S72>/Limiter1' */
    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S72>/Constant Value1'
     *  RelationalOperator: '<S85>/Relational Operator'
     */
    if (32764.0F < rtb_TmpSignalConversionAtVeS_nt)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32764.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_nt;
    }

    /* End of Switch: '<S85>/Switch1' */

    /* Switch: '<S85>/Switch' incorporates:
     *  Constant: '<S72>/Constant Value2'
     *  RelationalOperator: '<S85>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S72>/Sum' */
        rtb_TmpSignalConversionAtVeAX_p = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S72>/Sum' */
        rtb_TmpSignalConversionAtVeAX_p = 0.0F;
    }

    /* End of Switch: '<S85>/Switch' */
    /* End of Outputs for SubSystem: '<S72>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S73>/Limiter1' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S73>/Constant Value1'
     *  RelationalOperator: '<S86>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_ex)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_ex;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* Switch: '<S86>/Switch' incorporates:
     *  Constant: '<S73>/Constant Value2'
     *  RelationalOperator: '<S86>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -65534.0F;
    }

    /* End of Switch: '<S86>/Switch' */
    /* End of Outputs for SubSystem: '<S73>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S74>/Limiter1' */
    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S74>/Constant Value1'
     *  RelationalOperator: '<S87>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeSR_o)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_o;
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S74>/Constant Value2'
     *  RelationalOperator: '<S87>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S87>/Switch' */
    /* End of Outputs for SubSystem: '<S74>/Limiter1' */

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD14' */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_CRC_AXLE_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14.E_MessageCounter_AXLE_TORQUE_FD_1 =
        0U;

    /* BusCreator: '<S5>/BusAXLE_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S73>/Constant Value'
     *  Constant: '<S74>/Constant Value'
     *  DataTypeConversion: '<S72>/Data Type Conversion'
     *  DataTypeConversion: '<S73>/Data Type Conversion'
     *  DataTypeConversion: '<S74>/Data Type Conversion'
     *  DataTypeConversion: '<S79>/Data Type Conversion'
     *  Gain: '<S72>/Gain'
     *  Gain: '<S73>/Gain'
     *  Gain: '<S74>/Gain'
     *  Gain: '<S79>/Gain'
     *  Sum: '<S73>/Sum'
     *  Sum: '<S74>/Sum'
     */
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_CRC_AXLE_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MaxRegen_Diff_Axle_Torq = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_TmpSignalConversionAtVeAXLR), 65536.0F));
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_MessageCounter_AXLE_TORQUE_FD_1 =
        0U;
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Rear_Axle_Regen_Capacity = (uint16)
        ((sint32)fmodf(floorf(0.5F * rtb_TmpSignalConversionAtVeAX_p), 65536.0F));
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Total_AxleTorque_Max = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeWTAR -
            -65534.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3.E_Total_AxleTorque_Min = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* DataTypeConversion: '<S96>/Data Type Conversion10' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion9'
     */
#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn1

    /* DataTypeConversion: '<S35>/Data Type Conversion43' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIR_e_EcoLEDOn'
     */
    rtb_DataTypeConversion43 = (uint8)rtb_TmpSignalConversionAtVeDMIR;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion43' incorporates:
     *  Constant: '<S8>/Const9'
     *  DataTypeConversion: '<S8>/Data Type Conversion9'
     */
    rtb_DataTypeConversion43 = 0U;

#endif

    /* End of DataTypeConversion: '<S96>/Data Type Conversion10' */

    /* DataTypeConversion: '<S97>/Data Type Conversion11' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion12'
     *  Inport: '<Root>/VeDMIR_e_ESaveLEDOn'
     */
#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReESaveLEDOn

    (void)Rte_Read_VeDMIR_e_ESaveLEDOn_Value(&tmpRead);

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ESaveLEDOn'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)tmpRead;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S8>/Const12'
     *  DataTypeConversion: '<S8>/Data Type Conversion12'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S97>/Data Type Conversion11' */

    /* DataTypeConversion: '<S98>/Data Type Conversion13' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion14'
     */
#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReEcoLEDOn

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMIR_e_EcoLEDOn'
     */
    rtb_DataTypeConversion_ae = (uint8)rtb_TmpSignalConversionAtVeDMIR;

#else

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  Constant: '<S8>/Const14'
     *  DataTypeConversion: '<S8>/Data Type Conversion14'
     */
    rtb_DataTypeConversion_ae = 0U;

#endif

    /* End of DataTypeConversion: '<S98>/Data Type Conversion13' */

    /* DataTypeConversion: '<S99>/Data Type Conversion15' incorporates:
     *  DataTypeConversion: '<S8>/Data Type Conversion16'
     *  Inport: '<Root>/VeDMIR_e_ElectricPlusLEDOn'
     */
#if Rte_SysCon_VrntST2B_DRIVETRAINFD3FD3_VeDMIReElectricPlusLEDOn

    (void)Rte_Read_VeDMIR_e_ElectricPlusLEDOn_Value(&tmpRead_0);

    /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeDMIR_e_ElectricPlusLEDOn'
     */
    rtb_DataTypeConversion_pw = (uint8)tmpRead_0;

#else

    /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
     *  Constant: '<S8>/Const16'
     *  DataTypeConversion: '<S8>/Data Type Conversion16'
     */
    rtb_DataTypeConversion_pw = 0U;

#endif

    /* End of DataTypeConversion: '<S99>/Data Type Conversion15' */

    /* BusCreator: '<S5>/BusDRIVETRAIN_FD_3_FD3' incorporates:
     *  Constant: '<S5>/Const'
     *  Constant: '<S5>/Const1'
     *  Constant: '<S5>/Const2'
     *  Constant: '<S5>/Const3'
     *  Constant: '<S5>/Const4'
     *  Constant: '<S5>/Const5'
     */
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_AxleLckrEvicDisp = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_AxleLckr_SRV_RQ = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_AxleLckr_Stat = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_CRC__DRIVETRAIN3 = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_DTCM_Vehicle_Hold_Rq = false;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_MessageCounter_DRIVETRAIN3 = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_RrAxleLockerIndRq = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_TCASERANGESTATUS = 0U;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_Tcase2WD_Stat =
        rtb_DataTypeConversion43;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_Tcase4Lock =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_Tcase4Low =
        rtb_DataTypeConversion_ae;
    ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3.E_TcaseAWD = rtb_DataTypeConversion_pw;

    /* Switch: '<S9>/switch' incorporates:
     *  Constant: '<S114>/Constant Value1'
     *  DataTypeConversion: '<S9>/Data Type Conversion2'
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     *  RelationalOperator: '<S115>/Relational Operator'
     *  Switch: '<S115>/Switch1'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrASpd

    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_1);
    if (tmpRead_1)
    {
        /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
         *  Constant: '<S9>/Constant'
         */
        rtb_VariantMerge_For_Variant_So = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S114>/Limiter1' */
        if (32767.0F < rtb_TmpSignalConversionAtVeMSPR)
        {
            /* Switch: '<S115>/Switch1' incorporates:
             *  Constant: '<S114>/Constant Value1'
             *  Sum: '<S114>/Sum'
             */
            rtb_Gain_ig = 32767.0F;
        }
        else
        {
            /* Sum: '<S114>/Sum' incorporates:
             *  Switch: '<S115>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeMSPR;
        }

        /* Switch: '<S115>/Switch' incorporates:
         *  Constant: '<S114>/Constant Value2'
         *  RelationalOperator: '<S115>/Relational Operator1'
         */
        if (rtb_Gain_ig <= -32768.0F)
        {
            rtb_Gain_ig = -32768.0F;
        }

        /* End of Switch: '<S115>/Switch' */
        /* End of Outputs for SubSystem: '<S114>/Limiter1' */

        /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
         *  Constant: '<S114>/Constant Value'
         *  DataTypeConversion: '<S114>/Data Type Conversion'
         *  Sum: '<S114>/Sum'
         */
        rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf
            (rtb_Gain_ig - -32768.0F), 65536.0F));
    }

#else

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S9>/Const2'
     *  DataTypeConversion: '<S9>/Data Type Conversion2'
     */
    rtb_VariantMerge_For_Variant_So = 32768U;

#endif

    /* End of Switch: '<S9>/switch' */

    /* Sum: '<S116>/Sum' incorporates:
     *  DataTypeConversion: '<S116>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion4'
     *  Gain: '<S116>/Gain'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMTIRMMtrATorqAchieved

    /* Outputs for Atomic SubSystem: '<S116>/Limiter1' */
    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S116>/Constant Value1'
     *  RelationalOperator: '<S117>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeMTIR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeMTIR;
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Switch: '<S117>/Switch' incorporates:
     *  Constant: '<S116>/Constant Value2'
     *  RelationalOperator: '<S117>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -512.0F)
    {
        rtb_Gain_ig = -512.0F;
    }

    /* End of Switch: '<S117>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S116>/Constant Value'
     */
    rtb_VariantMerge_For_Variant__n = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -512.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S116>/Limiter1' */
#else

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S9>/Const4'
     *  DataTypeConversion: '<S9>/Data Type Conversion4'
     */
    rtb_VariantMerge_For_Variant__n = 4096U;

#endif

    /* End of Sum: '<S116>/Sum' */

    /* Sum: '<S118>/Sum' incorporates:
     *  DataTypeConversion: '<S118>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion6'
     *  Gain: '<S118>/Gain'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMTIRMMtrBTorqAchieved1

    /* Outputs for Atomic SubSystem: '<S118>/Limiter1' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S118>/Constant Value1'
     *  RelationalOperator: '<S119>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeMT_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeMT_n;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S118>/Constant Value2'
     *  RelationalOperator: '<S119>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -512.0F)
    {
        rtb_Gain_ig = -512.0F;
    }

    /* End of Switch: '<S119>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S118>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -512.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S118>/Limiter1' */
#else

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S9>/Const6'
     *  DataTypeConversion: '<S9>/Data Type Conversion6'
     */
    rtb_VariantMerge_For_Variant_k1 = 4096U;

#endif

    /* End of Sum: '<S118>/Sum' */

    /* Sum: '<S120>/Sum' incorporates:
     *  DataTypeConversion: '<S120>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion8'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMRnVirtEngSpd

    /* Outputs for Atomic SubSystem: '<S120>/Limiter1' */
    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S120>/Constant Value1'
     *  RelationalOperator: '<S121>/Relational Operator'
     */
    if (32767.0F < rtb_TmpSignalConversionAtVeVSMR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 32767.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeVSMR;
    }

    /* End of Switch: '<S121>/Switch1' */

    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S120>/Constant Value2'
     *  RelationalOperator: '<S121>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -32768.0F)
    {
        rtb_Gain_ig = -32768.0F;
    }

    /* End of Switch: '<S121>/Switch' */

    /* DataTypeConversion: '<S372>/Data Type Conversion' incorporates:
     *  Constant: '<S120>/Constant Value'
     */
    rtb_DataTypeConversion_pu = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
        -32768.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S120>/Limiter1' */
#else

    /* DataTypeConversion: '<S372>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const8'
     *  DataTypeConversion: '<S9>/Data Type Conversion8'
     */
    rtb_DataTypeConversion_pu = 32768U;

#endif

    /* End of Sum: '<S120>/Sum' */

    /* DataTypeConversion: '<S104>/Data Type Conversion12' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion11'
     *  Inport: '<Root>/VeHMIR_e_eBoost_Sts'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeHMIReeBoostSts

    (void)Rte_Read_VeHMIR_e_eBoost_Sts_Value(&tmpRead_2);

    /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHMIR_e_eBoost_Sts'
     */
    rtb_DataTypeConversion_pw = (uint8)tmpRead_2;

#else

    /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const11'
     *  DataTypeConversion: '<S9>/Data Type Conversion11'
     */
    rtb_DataTypeConversion_pw = 0U;

#endif

    /* End of DataTypeConversion: '<S104>/Data Type Conversion12' */

    /* DataTypeConversion: '<S105>/Data Type Conversion14' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion13'
     *  Inport: '<Root>/VeTIMR_e_RaceOptions_Sts'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeTIMReRaceOptionsSts

    (void)Rte_Read_VeTIMR_e_RaceOptions_Sts_Value(&tmpRead_3);

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceOptions_Sts'
     */
    rtb_DataTypeConversion_ae = (uint8)tmpRead_3;

#else

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const13'
     *  DataTypeConversion: '<S9>/Data Type Conversion13'
     */
    rtb_DataTypeConversion_ae = 0U;

#endif

    /* End of DataTypeConversion: '<S105>/Data Type Conversion14' */

    /* Switch: '<S9>/switch1' incorporates:
     *  Constant: '<S122>/Constant Value1'
     *  DataTypeConversion: '<S9>/Data Type Conversion15'
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     *  RelationalOperator: '<S123>/Relational Operator'
     *  Switch: '<S123>/Switch1'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeMSPRnMtrBSpd

    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_4);
    if (tmpRead_4)
    {
        /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
         *  Constant: '<S9>/Constant1'
         */
        rtb_DataTypeConversion_fp = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S122>/Limiter1' */
        if (32767.0F < rtb_TmpSignalConversionAtVeMS_b)
        {
            /* Switch: '<S123>/Switch1' incorporates:
             *  Constant: '<S122>/Constant Value1'
             *  Sum: '<S122>/Sum'
             */
            rtb_Gain_ig = 32767.0F;
        }
        else
        {
            /* Sum: '<S122>/Sum' incorporates:
             *  Switch: '<S123>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeMS_b;
        }

        /* Switch: '<S123>/Switch' incorporates:
         *  Constant: '<S122>/Constant Value2'
         *  RelationalOperator: '<S123>/Relational Operator1'
         */
        if (rtb_Gain_ig <= -32768.0F)
        {
            rtb_Gain_ig = -32768.0F;
        }

        /* End of Switch: '<S123>/Switch' */
        /* End of Outputs for SubSystem: '<S122>/Limiter1' */

        /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
         *  Constant: '<S122>/Constant Value'
         *  DataTypeConversion: '<S122>/Data Type Conversion'
         *  Sum: '<S122>/Sum'
         */
        rtb_DataTypeConversion_fp = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
            -32768.0F), 65536.0F));
    }

#else

    /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const15'
     *  DataTypeConversion: '<S9>/Data Type Conversion15'
     */
    rtb_DataTypeConversion_fp = 32768U;

#endif

    /* End of Switch: '<S9>/switch1' */

    /* DataTypeConversion: '<S107>/Data Type Conversion18' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion17'
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeTIMReRaceModeSts

    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value(&tmpRead_5);

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)tmpRead_5;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S9>/Const17'
     *  DataTypeConversion: '<S9>/Data Type Conversion17'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S107>/Data Type Conversion18' */

    /* Sum: '<S126>/Sum' incorporates:
     *  DataTypeConversion: '<S126>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion21'
     *  Gain: '<S126>/Gain'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeSRMRMMtrATorqCmnd

    /* Outputs for Atomic SubSystem: '<S126>/Limiter1' */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S126>/Constant Value1'
     *  RelationalOperator: '<S127>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeS_l2)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_l2;
    }

    /* End of Switch: '<S127>/Switch1' */

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S126>/Constant Value2'
     *  RelationalOperator: '<S127>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -512.0F)
    {
        rtb_Gain_ig = -512.0F;
    }

    /* End of Switch: '<S127>/Switch' */

    /* DataTypeConversion: '<S381>/Data Type Conversion' incorporates:
     *  Constant: '<S126>/Constant Value'
     */
    rtb_DataTypeConversion_fr = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -512.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S126>/Limiter1' */
#else

    /* DataTypeConversion: '<S381>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const21'
     *  DataTypeConversion: '<S9>/Data Type Conversion21'
     */
    rtb_DataTypeConversion_fr = 4096U;

#endif

    /* End of Sum: '<S126>/Sum' */

    /* Sum: '<S128>/Sum' incorporates:
     *  DataTypeConversion: '<S128>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion23'
     *  Gain: '<S128>/Gain'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeSRMRMMtrBTorqCmnd

    /* Outputs for Atomic SubSystem: '<S128>/Limiter1' */
    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S128>/Constant Value1'
     *  RelationalOperator: '<S129>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_j;
    }

    /* End of Switch: '<S129>/Switch1' */

    /* Switch: '<S129>/Switch' incorporates:
     *  Constant: '<S128>/Constant Value2'
     *  RelationalOperator: '<S129>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -512.0F)
    {
        rtb_Gain_ig = -512.0F;
    }

    /* End of Switch: '<S129>/Switch' */

    /* DataTypeConversion: '<S28>/Data Type Conversion23' incorporates:
     *  Constant: '<S128>/Constant Value'
     */
    rtb_DataTypeConversion23 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -512.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S128>/Limiter1' */
#else

    /* DataTypeConversion: '<S28>/Data Type Conversion23' incorporates:
     *  Constant: '<S9>/Const23'
     *  DataTypeConversion: '<S9>/Data Type Conversion23'
     */
    rtb_DataTypeConversion23 = 4096U;

#endif

    /* End of Sum: '<S128>/Sum' */

    /* DataTypeConversion: '<S112>/Data Type Conversion26' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion25'
     *  Inport: '<Root>/VeVSMR_e_VirtShftTypeGrp'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMReVirtShftTypeGrp

    (void)Rte_Read_VeVSMR_e_VirtShftTypeGrp_Value(&tmpRead_6);

    /* DataTypeConversion: '<S35>/Data Type Conversion43' incorporates:
     *  Inport: '<Root>/VeVSMR_e_VirtShftTypeGrp'
     */
    rtb_DataTypeConversion43 = (uint8)tmpRead_6;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion43' incorporates:
     *  Constant: '<S9>/Const25'
     *  DataTypeConversion: '<S9>/Data Type Conversion25'
     */
    rtb_DataTypeConversion43 = 0U;

#endif

    /* End of DataTypeConversion: '<S112>/Data Type Conversion26' */

    /* Sum: '<S130>/Sum' incorporates:
     *  DataTypeConversion: '<S130>/Data Type Conversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion27'
     *  Gain: '<S130>/Gain'
     */
#if Rte_SysCon_VrntST2B_ENGINESIMULATOR1FD3_VeVSMRMVirtEngTorq

    /* Outputs for Atomic SubSystem: '<S130>/Limiter1' */
    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S130>/Constant Value1'
     *  RelationalOperator: '<S131>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeVS_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeVS_l;
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S130>/Constant Value2'
     *  RelationalOperator: '<S131>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S131>/Switch' */

    /* DataTypeConversion: '<S380>/Data Type Conversion' incorporates:
     *  Constant: '<S130>/Constant Value'
     */
    rtb_DataTypeConversion_ek = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -65534.0F) * 0.5F), 65536.0F));

    /* End of Outputs for SubSystem: '<S130>/Limiter1' */
#else

    /* DataTypeConversion: '<S380>/Data Type Conversion' incorporates:
     *  Constant: '<S9>/Const27'
     *  DataTypeConversion: '<S9>/Data Type Conversion27'
     */
    rtb_DataTypeConversion_ek = 32767U;

#endif

    /* End of Sum: '<S130>/Sum' */

    /* BusCreator: '<S5>/BusENGINE_SIMULATOR1_FD3' incorporates:
     *  Constant: '<S5>/Const8'
     *  Constant: '<S5>/Const9'
     *  Constant: '<S9>/CRC_ENGINE_SIMULATOR1'
     */
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_CRC_ENGINE_SIMULATOR1 = 0U;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_MCPA_RPM_PT =
        rtb_VariantMerge_For_Variant_So;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_MCPA_Torque_Achieved_PT =
        rtb_VariantMerge_For_Variant__n;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_MCPB_Torque_Achieved_PT =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_MCP_RPM_Virtual =
        rtb_DataTypeConversion_pu;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_MessageCounter_ENGINE_SIMULATOR1 =
        0U;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_PowerShot_EVCU_PT1 =
        rtb_DataTypeConversion_pw;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_Propulsion_Raceoptions_Sts_PT1 =
        rtb_DataTypeConversion_ae;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_RPM_MCPB_PT =
        rtb_DataTypeConversion_fp;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_RaceModeSts_PT1 =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_TargetMotorRPM_MCPA_PT = 32768U;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_TargetMotorRPM_MCPB_PT = 32768U;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_TorqueCommand_MCPA_PT =
        rtb_DataTypeConversion_fr;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_TorqueCommand_MCPB_PT =
        rtb_DataTypeConversion23;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_Virtual_Gear_PT =
        rtb_DataTypeConversion43;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_Virtual_Torque_PT =
        rtb_DataTypeConversion_ek;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_eRUPT_Status = 0U;
    ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3.E_eRupt_PopUp_Status = 0U;

    /* DataTypeConversion: '<S193>/Data Type Conversion3' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion2'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeICSRbAdvancePrepForIdle

    /* VariantMerge generated from: '<S34>/Vrnt_OptimdEngOnOffCmd' */
    rtb_VariantMerge_For_Variant__h = rtb_TmpSignalConversionAtVeICSR;

#else

    /* VariantMerge generated from: '<S34>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Constant: '<S16>/Const2'
     *  DataTypeConversion: '<S16>/Data Type Conversion2'
     */
    rtb_VariantMerge_For_Variant__h = false;

#endif

    /* End of DataTypeConversion: '<S193>/Data Type Conversion3' */

    /* DataTypeConversion: '<S194>/Data Type Conversion5' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion4'
     *  Inport: '<Root>/VeSRMR_e_EngCntrlMode'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMReEngCntrlMode

    (void)Rte_Read_VeSRMR_e_EngCntrlMode_Value(&tmpRead_1p);

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Inport: '<Root>/VeSRMR_e_EngCntrlMode'
     */
    rtb_VariantMerge_For_Variant__p = (((sint32)tmpRead_1p) != 0);

#else

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Constant: '<S16>/Const4'
     *  DataTypeConversion: '<S16>/Data Type Conversion4'
     */
    rtb_VariantMerge_For_Variant__p = false;

#endif

    /* End of DataTypeConversion: '<S194>/Data Type Conversion5' */

    /* Sum: '<S206>/Sum' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion6'
     *  DataTypeConversion: '<S206>/Data Type Conversion'
     *  Gain: '<S206>/Gain'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeTRARMEngReserveTrqCmnd

    /* Outputs for Atomic SubSystem: '<S206>/Limiter1' */
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S206>/Constant Value1'
     *  RelationalOperator: '<S207>/Relational Operator'
     */
    if (81.28F < rtb_TmpSignalConversionAtVeTRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 81.28F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTRAR;
    }

    /* End of Switch: '<S207>/Switch1' */

    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S206>/Constant Value2'
     *  RelationalOperator: '<S207>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S207>/Switch' */

    /* DataTypeConversion: '<S574>/Data Type Conversion' */
    rtb_DataTypeConversion_pw = (uint8)((sint32)fmodf(floorf(3.125F *
        rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S206>/Limiter1' */
#else

    /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const6'
     *  DataTypeConversion: '<S16>/Data Type Conversion6'
     */
    rtb_DataTypeConversion_pw = 0U;

#endif

    /* End of Sum: '<S206>/Sum' */

    /* Sum: '<S208>/Sum' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion8'
     *  DataTypeConversion: '<S208>/Data Type Conversion'
     *  Gain: '<S208>/Gain'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndImmed

    /* Outputs for Atomic SubSystem: '<S208>/Limiter1' */
    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S208>/Constant Value1'
     *  RelationalOperator: '<S209>/Relational Operator'
     */
    if (1009.92F < rtb_TmpSignalConversionAtVeS_cv)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1009.92F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_cv;
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Switch: '<S209>/Switch' incorporates:
     *  Constant: '<S208>/Constant Value2'
     *  RelationalOperator: '<S209>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -300.16F)
    {
        rtb_Gain_ig = -300.16F;
    }

    /* End of Switch: '<S209>/Switch' */

    /* DataTypeConversion: '<S380>/Data Type Conversion' incorporates:
     *  Constant: '<S208>/Constant Value'
     */
    rtb_DataTypeConversion_ek = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -300.16F) * 3.125F), 65536.0F));

    /* End of Outputs for SubSystem: '<S208>/Limiter1' */
#else

    /* DataTypeConversion: '<S380>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const8'
     *  DataTypeConversion: '<S16>/Data Type Conversion8'
     */
    rtb_DataTypeConversion_ek = 938U;

#endif

    /* End of Sum: '<S208>/Sum' */

    /* Sum: '<S210>/Sum' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion10'
     *  DataTypeConversion: '<S210>/Data Type Conversion'
     *  Gain: '<S210>/Gain'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMEngTrqCmndPrdtd

    /* Outputs for Atomic SubSystem: '<S210>/Limiter1' */
    /* Switch: '<S211>/Switch1' incorporates:
     *  Constant: '<S210>/Constant Value1'
     *  RelationalOperator: '<S211>/Relational Operator'
     */
    if (1009.92F < rtb_TmpSignalConversionAtVeS_ge)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1009.92F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_ge;
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Switch: '<S211>/Switch' incorporates:
     *  Constant: '<S210>/Constant Value2'
     *  RelationalOperator: '<S211>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -300.16F)
    {
        rtb_Gain_ig = -300.16F;
    }

    /* End of Switch: '<S211>/Switch' */

    /* DataTypeConversion: '<S28>/Data Type Conversion23' incorporates:
     *  Constant: '<S210>/Constant Value'
     */
    rtb_DataTypeConversion23 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -300.16F) * 3.125F), 65536.0F));

    /* End of Outputs for SubSystem: '<S210>/Limiter1' */
#else

    /* DataTypeConversion: '<S28>/Data Type Conversion23' incorporates:
     *  Constant: '<S16>/Const10'
     *  DataTypeConversion: '<S16>/Data Type Conversion10'
     */
    rtb_DataTypeConversion23 = 938U;

#endif

    /* End of Sum: '<S210>/Sum' */

    /* DataTypeConversion: '<S198>/Data Type Conversion13' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion12'
     *  Inport: '<Root>/VeSRMR_e_HybCmndEngTorqRespTyp'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMReHybCmndEngTorqRespTyp

    (void)Rte_Read_VeSRMR_e_HybCmndEngTorqRespTyp_Value(&tmpRead_1q);

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeSRMR_e_HybCmndEngTorqRespTyp'
     */
    rtb_DataTypeConversion_ae = (uint8)tmpRead_1q;

#else

    /* DataTypeConversion: '<S575>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const12'
     *  DataTypeConversion: '<S16>/Data Type Conversion12'
     */
    rtb_DataTypeConversion_ae = 0U;

#endif

    /* End of DataTypeConversion: '<S198>/Data Type Conversion13' */

    /* DataTypeConversion: '<S199>/Data Type Conversion15' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion14'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRbSnsdTinotVld

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' */
    rtb_E_PopUpMessage1 = rtb_TmpSignalConversionAtVeS_ji;

#else

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S16>/Const14'
     *  DataTypeConversion: '<S16>/Data Type Conversion14'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S199>/Data Type Conversion15' */

    /* Sum: '<S212>/Sum' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion16'
     *  DataTypeConversion: '<S212>/Data Type Conversion'
     *  Gain: '<S212>/Gain'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRMSnsdEngFlt

    /* Outputs for Atomic SubSystem: '<S212>/Limiter1' */
    /* Switch: '<S213>/Switch1' incorporates:
     *  Constant: '<S212>/Constant Value1'
     *  RelationalOperator: '<S213>/Relational Operator'
     */
    if (1009.92F < rtb_TmpSignalConversionAtVeSR_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1009.92F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_m;
    }

    /* End of Switch: '<S213>/Switch1' */

    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S212>/Constant Value2'
     *  RelationalOperator: '<S213>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -300.16F)
    {
        rtb_Gain_ig = -300.16F;
    }

    /* End of Switch: '<S213>/Switch' */

    /* DataTypeConversion: '<S381>/Data Type Conversion' incorporates:
     *  Constant: '<S212>/Constant Value'
     */
    rtb_DataTypeConversion_fr = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -300.16F) * 3.125F), 65536.0F));

    /* End of Outputs for SubSystem: '<S212>/Limiter1' */
#else

    /* DataTypeConversion: '<S381>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const16'
     *  DataTypeConversion: '<S16>/Data Type Conversion16'
     */
    rtb_DataTypeConversion_fr = 938U;

#endif

    /* End of Sum: '<S212>/Sum' */

    /* DataTypeConversion: '<S201>/Data Type Conversion19' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion18'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeSRMRbHybFeedbackECM

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Inport: '<Root>/VeSRMR_b_HybFeedback_ECM'
     */
    (void)Rte_Read_VeSRMR_b_HybFeedback_ECM_Value
        (&rtb_VariantMerge_For_Variant_ks);

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S16>/Const18'
     *  DataTypeConversion: '<S16>/Data Type Conversion18'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S201>/Data Type Conversion19' */

    /* DataTypeConversion: '<S202>/Data Type Conversion22' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion21'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeTRNRbPwrTrnIdlSpdActvSts

    /* DataTypeConversion: '<S41>/Data Type Conversion29' */
    rtb_DataTypeConversion29 = rtb_TmpSignalConversionAtVeTRNR;

#else

    /* DataTypeConversion: '<S41>/Data Type Conversion29' incorporates:
     *  Constant: '<S16>/Const21'
     *  DataTypeConversion: '<S16>/Data Type Conversion21'
     */
    rtb_DataTypeConversion29 = false;

#endif

    /* End of DataTypeConversion: '<S202>/Data Type Conversion22' */

    /* Switch: '<S16>/switch' incorporates:
     *  Constant: '<S214>/Constant Value1'
     *  DataTypeConversion: '<S16>/Data Type Conversion23'
     *  RelationalOperator: '<S215>/Relational Operator'
     *  Switch: '<S215>/Switch1'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeTISRnInputSpeedRaw

    if (rtb_TmpSignalConversionAtVeTI_n)
    {
        /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
         *  Constant: '<S16>/Constant'
         */
        rtb_DataTypeConversion_fp = 4095U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S214>/Limiter1' */
        if (2046.0F < rtb_TmpSignalConversionAtVeTISR)
        {
            /* Switch: '<S215>/Switch1' incorporates:
             *  Constant: '<S214>/Constant Value1'
             *  Sum: '<S214>/Sum'
             */
            rtb_Gain_ig = 2046.0F;
        }
        else
        {
            /* Sum: '<S214>/Sum' incorporates:
             *  Switch: '<S215>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeTISR;
        }

        /* Switch: '<S215>/Switch' incorporates:
         *  Constant: '<S214>/Constant Value2'
         *  RelationalOperator: '<S215>/Relational Operator1'
         */
        if (rtb_Gain_ig <= -2048.0F)
        {
            rtb_Gain_ig = -2048.0F;
        }

        /* End of Switch: '<S215>/Switch' */
        /* End of Outputs for SubSystem: '<S214>/Limiter1' */

        /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
         *  Constant: '<S214>/Constant Value'
         *  DataTypeConversion: '<S214>/Data Type Conversion'
         *  Sum: '<S214>/Sum'
         */
        rtb_DataTypeConversion_fp = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
            -2048.0F), 65536.0F));
    }

#else

    /* DataTypeConversion: '<S371>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const23'
     *  DataTypeConversion: '<S16>/Data Type Conversion23'
     */
    rtb_DataTypeConversion_fp = 0U;

#endif

    /* End of Switch: '<S16>/switch' */

    /* DataTypeConversion: '<S205>/Data Type Conversion27' incorporates:
     *  DataTypeConversion: '<S16>/Data Type Conversion26'
     */
#if Rte_SysCon_VrntST2B_HYBRIDFDLHOMFD5_VeHSERnInputSpeedProfile

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeHSER), 65536.0F);

    /* DataTypeConversion: '<S372>/Data Type Conversion' */
    rtb_DataTypeConversion_pu = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* DataTypeConversion: '<S372>/Data Type Conversion' incorporates:
     *  Constant: '<S16>/Const26'
     *  DataTypeConversion: '<S16>/Data Type Conversion26'
     */
    rtb_DataTypeConversion_pu = 0U;

#endif

    /* End of DataTypeConversion: '<S205>/Data Type Conversion27' */

    /* BusCreator: '<S5>/BusHYBRID_FD_LHOM_FD5' incorporates:
     *  Constant: '<S16>/CRC_HYBRID_FD_LHOM'
     */
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_CRC_HYBRID_FD_LHOM = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_ECMPrepIdleRes_LHOM =
        rtb_VariantMerge_For_Variant__h;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_EngCntrlMode_LHOM =
        rtb_VariantMerge_For_Variant__p;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_EngTrqReserveCmd_LHOM =
        rtb_DataTypeConversion_pw;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybCmndEngTorqImmed_LHOM =
        rtb_DataTypeConversion_ek;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybCmndEngTorqPrdtd_LHOM =
        rtb_DataTypeConversion23;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybCmndEngTorqRespTyp_LHOM =
        rtb_DataTypeConversion_ae;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybEstEngTorqV_LHOM =
        rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybEstEngTorq_LHOM =
        rtb_DataTypeConversion_fr;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybFeedback_Engine_LHOM =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_HybridEngineMaxTorqAllowed_LHOM =
        938U;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_IdleSpeedActiveSts_LHOM =
        rtb_DataTypeConversion29;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_InputSpdRaw_LHOM =
        rtb_DataTypeConversion_fp;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_MessageCounter_HYBRID_FD_LHOM = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5.E_TransInpSpdPrfl_LHOM =
        rtb_DataTypeConversion_pu;

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD11' incorporates:
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     *  SignalConversion generated from: '<S2>/VeESSR_e_EngStrtStpMd'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_HEV_ESS_Mode = (uint8)
        rtb_TmpSignalConversionAtVeES_d;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD11.E_PropulsionSystemActive_114 =
        rtb_TmpSignalConversionAtVeHPMR;

    /* Outputs for Atomic SubSystem: '<S219>/Limiter1' */
    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S219>/Constant Value1'
     *  RelationalOperator: '<S224>/Relational Operator'
     */
    if (81.28F < rtb_TmpSignalConversionAtVeTRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 81.28F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTRAR;
    }

    /* End of Switch: '<S224>/Switch1' */

    /* Switch: '<S224>/Switch' incorporates:
     *  Constant: '<S219>/Constant Value2'
     *  RelationalOperator: '<S224>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S219>/Sum' */
        rtb_TmpSignalConversionAtVeVS_l = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S219>/Sum' */
        rtb_TmpSignalConversionAtVeVS_l = 0.0F;
    }

    /* End of Switch: '<S224>/Switch' */
    /* End of Outputs for SubSystem: '<S219>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S220>/Limiter1' */
    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S220>/Constant Value1'
     *  RelationalOperator: '<S225>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeTR_i)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1008.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTR_i;
    }

    /* End of Switch: '<S225>/Switch1' */

    /* Switch: '<S225>/Switch' incorporates:
     *  Constant: '<S220>/Constant Value2'
     *  RelationalOperator: '<S225>/Relational Operator1'
     */
    if (rtb_Gain_ig > -300.16F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -300.16F;
    }

    /* End of Switch: '<S225>/Switch' */
    /* End of Outputs for SubSystem: '<S220>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S221>/Limiter1' */
    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S221>/Constant Value1'
     *  RelationalOperator: '<S226>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeTR_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1008.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTR_k;
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S221>/Constant Value2'
     *  RelationalOperator: '<S226>/Relational Operator1'
     */
    if (rtb_Gain_ig > -300.16F)
    {
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAXLR = -300.16F;
    }

    /* End of Switch: '<S226>/Switch' */
    /* End of Outputs for SubSystem: '<S221>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S222>/Limiter1' */
    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S222>/Constant Value1'
     *  RelationalOperator: '<S227>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeSR_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1008.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_m;
    }

    /* End of Switch: '<S227>/Switch1' */
    /* End of Outputs for SubSystem: '<S222>/Limiter1' */

    /* DataTypeConversion: '<S218>/Data Type Conversion12' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeST_f;

#endif

    /* End of DataTypeConversion: '<S218>/Data Type Conversion12' */

    /* DataTypeConversion: '<S217>/Data Type Conversion13' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD16'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSRARbHCPRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeSR_c;

#elif !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSRARbHCPRemedialStop && !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD16_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD16'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S217>/Data Type Conversion13' */

    /* Switch: '<S18>/switch' incorporates:
     *  Constant: '<S223>/Constant Value1'
     *  RelationalOperator: '<S228>/Relational Operator'
     *  Switch: '<S228>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeTI_n)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD16' incorporates:
         *  Constant: '<S18>/Constant'
         *  DataTypeConversion: '<S371>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_InputSpdRaw = 4095U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S223>/Limiter1' */
        if (2046.0F < rtb_TmpSignalConversionAtVeTISR)
        {
            /* Switch: '<S228>/Switch1' incorporates:
             *  Constant: '<S223>/Constant Value1'
             *  Sum: '<S223>/Sum'
             */
            rtb_TmpSignalConversionAtVeSR_m = 2046.0F;
        }
        else
        {
            /* Sum: '<S223>/Sum' incorporates:
             *  Switch: '<S228>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSR_m = rtb_TmpSignalConversionAtVeTISR;
        }

        /* Switch: '<S228>/Switch' incorporates:
         *  Constant: '<S223>/Constant Value2'
         *  RelationalOperator: '<S228>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeSR_m <= -2048.0F)
        {
            rtb_TmpSignalConversionAtVeSR_m = -2048.0F;
        }

        /* End of Switch: '<S228>/Switch' */
        /* End of Outputs for SubSystem: '<S223>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD16' incorporates:
         *  Constant: '<S223>/Constant Value'
         *  DataTypeConversion: '<S223>/Data Type Conversion'
         *  DataTypeConversion: '<S371>/Data Type Conversion'
         *  Sum: '<S223>/Sum'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_InputSpdRaw = (uint16)
            ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeSR_m - -2048.0F),
                           65536.0F));
    }

    /* End of Switch: '<S18>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHMIR_e_DriveMdstat_PopUpRqst' */
    (void)Rte_Read_VeHMIR_e_DriveMdstat_PopUpRqst_Value(&tmpRead_h);

    /* Inport: '<Root>/VeHMIR_e_DriveMdstat' */
    (void)Rte_Read_VeHMIR_e_DriveMdstat_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD16' incorporates:
     *  Constant: '<S18>/CRC_HYBRID_POWERTRAIN1'
     *  Constant: '<S220>/Constant Value'
     *  Constant: '<S221>/Constant Value'
     *  DataTypeConversion: '<S18>/Data Type Conversion3'
     *  DataTypeConversion: '<S18>/Data Type Conversion7'
     *  DataTypeConversion: '<S219>/Data Type Conversion'
     *  DataTypeConversion: '<S220>/Data Type Conversion'
     *  DataTypeConversion: '<S221>/Data Type Conversion'
     *  Gain: '<S219>/Gain'
     *  Gain: '<S220>/Gain'
     *  Gain: '<S221>/Gain'
     *  SignalConversion generated from: '<S2>/VeTRAR_e_HybCmndEngTorqRespTyp'
     *  Sum: '<S220>/Sum'
     *  Sum: '<S221>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_ECMPrepIdleRes =
        rtb_TmpSignalConversionAtVeICSR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_EngCntrlMode = (((sint32)
        rtb_TmpSignalConversionAtVeT_iz) != 0);
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_EngTrqReserveCmd = (uint8)
        ((sint32)fmodf(floorf(3.125F * rtb_TmpSignalConversionAtVeVS_l), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybCmndEngTorqImmed = (uint16)
        ((sint32)fmodf(floorf(3.125F * (rtb_TmpSignalConversionAtVeWTAR -
            -300.16F)), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybCmndEngTorqPrdtd = (uint16)
        ((sint32)fmodf(floorf(3.125F * (rtb_TmpSignalConversionAtVeAXLR -
            -300.16F)), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybCmndEngTorqRespTyp = (uint8)
        rtb_TmpSignalConversionAtVeTR_d;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybCrnkAbrted =
        rtb_TmpSignalConversionAtVeSTRR;

    /* Outputs for Atomic SubSystem: '<S222>/Limiter1' */
    /* Switch: '<S227>/Switch' incorporates:
     *  Constant: '<S222>/Constant Value2'
     *  RelationalOperator: '<S227>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -300.16F)
    {
        rtb_Gain_ig = -300.16F;
    }

    /* End of Switch: '<S227>/Switch' */
    /* End of Outputs for SubSystem: '<S222>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD16' incorporates:
     *  Constant: '<S222>/Constant Value'
     *  DataTypeConversion: '<S222>/Data Type Conversion'
     *  Gain: '<S222>/Gain'
     *  Sum: '<S222>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybEstEngTorq = (uint16)((sint32)
        fmodf(floorf((rtb_Gain_ig - -300.16F) * 3.125F), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybEstEngTorqV =
        rtb_TmpSignalConversionAtVeS_ji;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_HybFeedback_Engine =
        rtb_TmpSignalConversionAtVeS_of;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_Hybrid_Remedial_Stop =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;

    /* DataTypeConversion: '<S18>/Data Type Conversion17' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion36'
     */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeHSER), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD16' incorporates:
     *  DataTypeConversion: '<S18>/Data Type Conversion17'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16.E_TransInpSpdPrfl = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S229>/Data Type Conversion8' incorporates:
     *  DataTypeConversion: '<S19>/Data Type Conversion7'
     *  Inport: '<Root>/VeHMIR_e_eBoost_Warn'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeHMIReeBoostWarn

    (void)Rte_Read_VeHMIR_e_eBoost_Warn_Value(&tmpRead_i);

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Inport: '<Root>/VeHMIR_e_eBoost_Warn'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)tmpRead_i;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S19>/Const7'
     *  DataTypeConversion: '<S19>/Data Type Conversion7'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S229>/Data Type Conversion8' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHSER_e_RngStOnCAN' */
    (void)Rte_Read_VeHSER_e_RngStOnCAN_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S234>/Limiter1' */
    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S234>/Constant Value1'
     *  RelationalOperator: '<S241>/Relational Operator'
     */
    if (81.28F < rtb_TmpSignalConversionAtVeTRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 81.28F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTRAR;
    }

    /* End of Switch: '<S241>/Switch1' */

    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S234>/Constant Value2'
     *  RelationalOperator: '<S241>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S234>/Sum' */
        rtb_TmpSignalConversionAtVeTRAR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S234>/Sum' */
        rtb_TmpSignalConversionAtVeTRAR = 0.0F;
    }

    /* End of Switch: '<S241>/Switch' */
    /* End of Outputs for SubSystem: '<S234>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S235>/Limiter1' */
    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S235>/Constant Value1'
     *  RelationalOperator: '<S242>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeTR_i)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1008.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTR_i;
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S235>/Constant Value2'
     *  RelationalOperator: '<S242>/Relational Operator1'
     */
    if (rtb_Gain_ig > -300.16F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -300.16F;
    }

    /* End of Switch: '<S242>/Switch' */
    /* End of Outputs for SubSystem: '<S235>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S236>/Limiter1' */
    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S236>/Constant Value1'
     *  RelationalOperator: '<S243>/Relational Operator'
     */
    if (1008.0F < rtb_TmpSignalConversionAtVeTR_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1008.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTR_k;
    }

    /* End of Switch: '<S243>/Switch1' */

    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S236>/Constant Value2'
     *  RelationalOperator: '<S243>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -300.16F)
    {
        rtb_Gain_ig = -300.16F;
    }

    /* End of Switch: '<S243>/Switch' */
    /* End of Outputs for SubSystem: '<S236>/Limiter1' */

    /* DataTypeConversion: '<S231>/Data Type Conversion27' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeST_f;

#endif

    /* End of DataTypeConversion: '<S231>/Data Type Conversion27' */

    /* DataTypeConversion: '<S230>/Data Type Conversion28' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD3'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSRARbHCPRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeSR_c;

#elif !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSRARbHCPRemedialStop && !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD3_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD3'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S230>/Data Type Conversion28' */

    /* Switch: '<S19>/switch' incorporates:
     *  Constant: '<S237>/Constant Value1'
     *  RelationalOperator: '<S244>/Relational Operator'
     *  Switch: '<S244>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeTI_n)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD3' incorporates:
         *  Constant: '<S19>/Constant'
         *  DataTypeConversion: '<S381>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_InputSpdRaw = 4095U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S237>/Limiter1' */
        if (2046.0F < rtb_TmpSignalConversionAtVeTISR)
        {
            /* Switch: '<S244>/Switch1' incorporates:
             *  Constant: '<S237>/Constant Value1'
             *  Sum: '<S237>/Sum'
             */
            rtb_TmpSignalConversionAtVeTR_k = 2046.0F;
        }
        else
        {
            /* Sum: '<S237>/Sum' incorporates:
             *  Switch: '<S244>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTR_k = rtb_TmpSignalConversionAtVeTISR;
        }

        /* Switch: '<S244>/Switch' incorporates:
         *  Constant: '<S237>/Constant Value2'
         *  RelationalOperator: '<S244>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTR_k <= -2048.0F)
        {
            rtb_TmpSignalConversionAtVeTR_k = -2048.0F;
        }

        /* End of Switch: '<S244>/Switch' */
        /* End of Outputs for SubSystem: '<S237>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD3' incorporates:
         *  Constant: '<S237>/Constant Value'
         *  DataTypeConversion: '<S237>/Data Type Conversion'
         *  DataTypeConversion: '<S381>/Data Type Conversion'
         *  Sum: '<S237>/Sum'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_InputSpdRaw = (uint16)
            ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeTR_k - -2048.0F),
                           65536.0F));
    }

    /* End of Switch: '<S19>/switch' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD3' incorporates:
     *  Constant: '<S235>/Constant Value'
     *  Constant: '<S236>/Constant Value'
     *  Constant: '<S5>/Const17'
     *  Constant: '<S5>/Const18'
     *  Constant: '<S5>/Const19'
     *  Constant: '<S5>/Const20'
     *  Constant: '<S5>/Const21'
     *  DataTypeConversion: '<S17>/Data Type Conversion'
     *  DataTypeConversion: '<S18>/Data Type Conversion7'
     *  DataTypeConversion: '<S19>/Data Type Conversion12'
     *  DataTypeConversion: '<S19>/Data Type Conversion26'
     *  DataTypeConversion: '<S19>/Data Type Conversion36'
     *  DataTypeConversion: '<S19>/Data Type Conversion5'
     *  DataTypeConversion: '<S19>/Data Type Conversion6'
     *  DataTypeConversion: '<S234>/Data Type Conversion'
     *  DataTypeConversion: '<S235>/Data Type Conversion'
     *  DataTypeConversion: '<S236>/Data Type Conversion'
     *  Gain: '<S234>/Gain'
     *  Gain: '<S235>/Gain'
     *  Gain: '<S236>/Gain'
     *  Inport: '<Root>/VeESSR_b_EngOffAllwdECM'
     *  Inport: '<Root>/VeGENR_b_HybGenSPDtyCycPtOverAct'
     *  Inport: '<Root>/VeGENR_b_LowVoltSysFldToECM'
     *  Inport: '<Root>/VeHADR_b_EngActDmpgDsblReq'
     *  Inport: '<Root>/VeHMIR_e_DriveMdstat_PopUpRqst'
     *  Inport: '<Root>/VeHSER_e_RngStOnCAN'
     *  Inport: '<Root>/VeTRAR_b_EngDFCOReq'
     *  SignalConversion generated from: '<S2>/VeESSR_e_EngStrtStpMd'
     *  SignalConversion generated from: '<S2>/VeTRAR_e_HybCmndEngTorqRespTyp'
     *  Sum: '<S235>/Sum'
     *  Sum: '<S236>/Sum'
     */
    (void)Rte_Read_VeGENR_b_LowVoltSysFldToECM_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_LV_SystemFailure);
    (void)Rte_Read_VeTRAR_b_EngDFCOReq_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybDFCO_Req);
    (void)Rte_Read_VeGENR_b_HybGenSPDtyCycPtOverAct_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_GeneratorSetpointOverride);
    (void)Rte_Read_VeESSR_b_EngOffAllwdECM_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_Eng_Off_Allowed);
    (void)Rte_Read_VeHADR_b_EngActDmpgDsblReq_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_EngActDmpgDsblReq);
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_BSGMaxTrqDyn = 511U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_BSGMinTrqDyn = 511U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_Belt_Slip_Detected = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_DriveModeSts_EPT = (uint8)
        tmpRead_g;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_DriveMode_PopUpRequest = (uint8)
        tmpRead_h;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_DriveMode_PopUpRequest2 =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_DriveReady =
        rtb_TmpSignalConversionAtVeH_pt;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_ECMPrepIdleRes =
        rtb_TmpSignalConversionAtVeICSR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_EngCntrlMode = (((sint32)
        rtb_TmpSignalConversionAtVeT_iz) != 0);
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_EngTrqReserveCmd = (uint8)
        ((sint32)fmodf(floorf(3.125F * rtb_TmpSignalConversionAtVeTRAR), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HEV_ESS_Mode = (uint8)
        rtb_TmpSignalConversionAtVeES_d;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HVBatteryShutOff = true;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybCmndEngTorqImmed = (uint16)
        ((sint32)fmodf(floorf(3.125F * (rtb_TmpSignalConversionAtVeWTAR -
            -300.16F)), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybCmndEngTorqPrdtd = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -300.16F) * 3.125F), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybCmndEngTorqRespTyp = (uint8)
        rtb_TmpSignalConversionAtVeTR_d;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybCrnkAbrted =
        rtb_TmpSignalConversionAtVeSTRR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybEngCylDeactReq = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybFeedback_Engine =
        rtb_TmpSignalConversionAtVeS_of;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybFstTrqRq_Trans = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_HybTransSt = (uint8)tmpRead_j;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_Hybrid_Remedial_Stop =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_NiTi_Disable = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_RegenTarget = 938U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_RollingIdleSpeedTarget = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3.E_TransInpSpdPrfl = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S247>/Data Type Conversion4' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeST_f;

#endif

    /* End of DataTypeConversion: '<S247>/Data Type Conversion4' */

    /* DataTypeConversion: '<S246>/Data Type Conversion5' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD5'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSRARbHCPRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeSR_c;

#elif !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSRARbHCPRemedialStop && !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN1FD5_VeSTRRbRemedialStop

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN1_FD5'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S246>/Data Type Conversion5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHSER_e_RngStToPropulsionMode' */
    (void)Rte_Read_VeHSER_e_RngStToPropulsionMode_Value(&tmpRead_1o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN1_FD5' incorporates:
     *  Constant: '<S20>/CRC_HYBRID_POWERTRAIN1'
     *  Constant: '<S5>/Const206'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_CRC_HYBRID_POWERTRAIN1 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_DriveReady = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_HybCrnkAbrted =
        rtb_TmpSignalConversionAtVeSTRR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_Hybrid_Remedial_Stop =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_MessageCounter_HYBRID_POWERTRAIN1
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5.E_PropulsionSystemActive =
        rtb_TmpSignalConversionAtVeHPMR;

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN2_FD16' incorporates:
     *  Constant: '<S21>/CRC_HYBRID_POWERTRAIN2'
     *  DataTypeConversion: '<S21>/Data Type Conversion5'
     *  Inport: '<Root>/VeHSER_e_RngStToPropulsionMode'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16.E_CRC_HYBRID_POWERTRAIN2 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16.E_HybridEngineMaxTorqAllowed =
        938U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16.E_IdleSpeedActiveSts =
        rtb_TmpSignalConversionAtVeTRNR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16.E_MessageCounter_HYBRID_POWERTRAIN2
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16.E_PropulsionMode = (uint8)
        tmpRead_1o;

    /* Sum: '<S255>/Sum' incorporates:
     *  DataTypeConversion: '<S255>/Data Type Conversion'
     *  Gain: '<S255>/Gain'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved

    /* Outputs for Atomic SubSystem: '<S255>/Limiter1' */
    /* Switch: '<S256>/Switch1' incorporates:
     *  Constant: '<S255>/Constant Value1'
     *  RelationalOperator: '<S256>/Relational Operator'
     */
    if (163.2F < rtb_TmpSignalConversionAtVeMT_a)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 163.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeMT_a;
    }

    /* End of Switch: '<S256>/Switch1' */

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S255>/Constant Value2'
     *  RelationalOperator: '<S256>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -163.52F)
    {
        rtb_Gain_ig = -163.52F;
    }

    /* End of Switch: '<S256>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S255>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -163.52F) * 3.125F), 65536.0F));

    /* End of Outputs for SubSystem: '<S255>/Limiter1' */
#endif

    /* End of Sum: '<S255>/Sum' */

    /* Sum: '<S253>/Sum' incorporates:
     *  DataTypeConversion: '<S253>/Data Type Conversion'
     *  Gain: '<S253>/Gain'
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN2_FD3'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrBTorqAchieved

    /* Outputs for Atomic SubSystem: '<S253>/Limiter1' */
    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S253>/Constant Value1'
     *  RelationalOperator: '<S254>/Relational Operator'
     */
    if (163.2F < rtb_TmpSignalConversionAtVeMT_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 163.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeMT_n;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S253>/Constant Value2'
     *  RelationalOperator: '<S254>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -163.52F)
    {
        rtb_Gain_ig = -163.52F;
    }

    /* End of Switch: '<S254>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S253>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -163.52F) * 3.125F), 65536.0F));

    /* End of Outputs for SubSystem: '<S253>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrBTorqAchieved && !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN2_FD3'
     */
    rtb_VariantMerge_For_Variant_k1 = 0U;

#endif

    /* End of Sum: '<S253>/Sum' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOHSR_n_IdleSpeed_Target' */
    (void)Rte_Read_VeOHSR_n_IdleSpeed_Target_Value(&rtb_Sum_f2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN2_FD3' */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_BSGActualTorque =
        rtb_VariantMerge_For_Variant_k1;

    /* DataTypeConversion: '<S22>/Data Type Conversion3' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(rtb_Sum_f2), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN2_FD3' incorporates:
     *  Constant: '<S5>/Const24'
     *  Constant: '<S5>/Const26'
     *  Constant: '<S5>/Const27'
     *  Constant: '<S5>/Const28'
     *  DataTypeConversion: '<S22>/Data Type Conversion3'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_BSGChrgIdleSpeedTarget = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_CODE_CLR_HCP = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_CRC_HYBRID_POWERTRAIN2 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_HybridEngineMaxTorqAllowed = 938U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_IdleSpeedActiveSts =
        rtb_TmpSignalConversionAtVeTRNR;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_MessageCounter_HYBRID_POWERTRAIN2
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_REPRGD_PFC_CLR_HCP = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_ReqTorqueOverLayActive = false;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3.E_TCC_Slip_Rgn = false;

    /* Outputs for Atomic SubSystem: '<S300>/Limiter1' */
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S300>/Constant Value1'
     *  RelationalOperator: '<S335>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHTDR;
    }

    /* End of Switch: '<S335>/Switch1' */

    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S300>/Constant Value2'
     *  RelationalOperator: '<S335>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S300>/Sum' */
        rtb_TmpSignalConversionAtVeMT_n = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S300>/Sum' */
        rtb_TmpSignalConversionAtVeMT_n = 0.0F;
    }

    /* End of Switch: '<S335>/Switch' */
    /* End of Outputs for SubSystem: '<S300>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S301>/Limiter1' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S301>/Constant Value1'
     *  RelationalOperator: '<S336>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHT_g)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_g;
    }

    /* End of Switch: '<S336>/Switch1' */

    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S301>/Constant Value2'
     *  RelationalOperator: '<S336>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S301>/Sum' */
        rtb_TmpSignalConversionAtVeHSER = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S301>/Sum' */
        rtb_TmpSignalConversionAtVeHSER = 0.0F;
    }

    /* End of Switch: '<S336>/Switch' */
    /* End of Outputs for SubSystem: '<S301>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S306>/Limiter1' */
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S306>/Constant Value1'
     *  RelationalOperator: '<S341>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeH_fb)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 30.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_fb;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S306>/Constant Value2'
     *  RelationalOperator: '<S341>/Relational Operator1'
     */
    if (rtb_Gain_ig > 4.5F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = 4.5F;
    }

    /* End of Switch: '<S341>/Switch' */
    /* End of Outputs for SubSystem: '<S306>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S307>/Limiter1' */
    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S307>/Constant Value1'
     *  RelationalOperator: '<S342>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeHT_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 30.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_n;
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Switch: '<S342>/Switch' incorporates:
     *  Constant: '<S307>/Constant Value2'
     *  RelationalOperator: '<S342>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 4.5F)
    {
        rtb_Gain_ig = 4.5F;
    }

    /* End of Switch: '<S342>/Switch' */
    /* End of Outputs for SubSystem: '<S307>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S307>/Constant Value'
     *  DataTypeConversion: '<S307>/Data Type Conversion'
     *  DataTypeConversion: '<S574>/Data Type Conversion'
     *  Gain: '<S307>/Gain'
     *  Sum: '<S307>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqLow_MCPB_P =
        (uint8)((sint32)fmodf(floorf((rtb_Gain_ig - 4.5F) * 10.0F), 256.0F));

    /* Sum: '<S319>/Sum' incorporates:
     *  DataTypeConversion: '<S319>/Data Type Conversion'
     *  Gain: '<S319>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDPosTrqOffst

    /* Outputs for Atomic SubSystem: '<S319>/Limiter1' */
    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S319>/Constant Value1'
     *  RelationalOperator: '<S320>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_i)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_i;
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S319>/Constant Value2'
     *  RelationalOperator: '<S320>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S320>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S319>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S319>/Limiter1' */
#endif

    /* End of Sum: '<S319>/Sum' */

    /* Sum: '<S317>/Sum' incorporates:
     *  DataTypeConversion: '<S317>/Data Type Conversion'
     *  Gain: '<S317>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst1

    /* Outputs for Atomic SubSystem: '<S317>/Limiter1' */
    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S317>/Constant Value1'
     *  RelationalOperator: '<S318>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_ii)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_ii;
    }

    /* End of Switch: '<S318>/Switch1' */

    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S317>/Constant Value2'
     *  RelationalOperator: '<S318>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S318>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S317>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S317>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDPosTrqOffst

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
    rtb_VariantMerge_For_Variant_k1 = 0U;

#endif

    /* End of Sum: '<S317>/Sum' */

    /* Outputs for Atomic SubSystem: '<S309>/Limiter1' */
    /* Switch: '<S344>/Switch1' incorporates:
     *  Constant: '<S309>/Constant Value1'
     *  RelationalOperator: '<S344>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_mf)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_mf;
    }

    /* End of Switch: '<S344>/Switch1' */

    /* Switch: '<S344>/Switch' incorporates:
     *  Constant: '<S309>/Constant Value2'
     *  RelationalOperator: '<S344>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S344>/Switch' */
    /* End of Outputs for SubSystem: '<S309>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S309>/Constant Value'
     *  DataTypeConversion: '<S309>/Data Type Conversion'
     *  DataTypeConversion: '<S380>/Data Type Conversion'
     *  Gain: '<S309>/Gain'
     *  Sum: '<S309>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MaxOffset_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S321>/Sum' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion11'
     *  DataTypeConversion: '<S321>/Data Type Conversion'
     *  Gain: '<S321>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDPosTrqOffst

    /* Outputs for Atomic SubSystem: '<S321>/Limiter1' */
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S321>/Constant Value1'
     *  RelationalOperator: '<S322>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_ii)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_ii;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S321>/Constant Value2'
     *  RelationalOperator: '<S322>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S322>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S321>/Constant Value'
     */
    rtb_VariantMerge_For_Variant__n = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S321>/Limiter1' */
#else

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S27>/Const11'
     *  DataTypeConversion: '<S27>/Data Type Conversion11'
     */
    rtb_VariantMerge_For_Variant__n = 8184U;

#endif

    /* End of Sum: '<S321>/Sum' */

    /* Sum: '<S325>/Sum' incorporates:
     *  DataTypeConversion: '<S325>/Data Type Conversion'
     *  Gain: '<S325>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDNegTrqOffst

    /* Outputs for Atomic SubSystem: '<S325>/Limiter1' */
    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S325>/Constant Value1'
     *  RelationalOperator: '<S326>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_bo)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_bo;
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Switch: '<S326>/Switch' incorporates:
     *  Constant: '<S325>/Constant Value2'
     *  RelationalOperator: '<S326>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S326>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S325>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S325>/Limiter1' */
#endif

    /* End of Sum: '<S325>/Sum' */

    /* Sum: '<S323>/Sum' incorporates:
     *  DataTypeConversion: '<S323>/Data Type Conversion'
     *  Gain: '<S323>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst1

    /* Outputs for Atomic SubSystem: '<S323>/Limiter1' */
    /* Switch: '<S324>/Switch1' incorporates:
     *  Constant: '<S323>/Constant Value1'
     *  RelationalOperator: '<S324>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_p;
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Switch: '<S324>/Switch' incorporates:
     *  Constant: '<S323>/Constant Value2'
     *  RelationalOperator: '<S324>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S324>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S323>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S323>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrCAEMDNegTrqOffst

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
    rtb_VariantMerge_For_Variant_So = 0U;

#endif

    /* End of Sum: '<S323>/Sum' */

    /* Outputs for Atomic SubSystem: '<S310>/Limiter1' */
    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S310>/Constant Value1'
     *  RelationalOperator: '<S345>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_a)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_a;
    }

    /* End of Switch: '<S345>/Switch1' */

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S310>/Constant Value2'
     *  RelationalOperator: '<S345>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S345>/Switch' */
    /* End of Outputs for SubSystem: '<S310>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S310>/Constant Value'
     *  DataTypeConversion: '<S28>/Data Type Conversion23'
     *  DataTypeConversion: '<S310>/Data Type Conversion'
     *  Gain: '<S310>/Gain'
     *  Sum: '<S310>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MinOffset_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S327>/Sum' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion16'
     *  DataTypeConversion: '<S327>/Data Type Conversion'
     *  Gain: '<S327>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrAAEMDNegTrqOffst

    /* Outputs for Atomic SubSystem: '<S327>/Limiter1' */
    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S327>/Constant Value1'
     *  RelationalOperator: '<S328>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_p;
    }

    /* End of Switch: '<S328>/Switch1' */

    /* Switch: '<S328>/Switch' incorporates:
     *  Constant: '<S327>/Constant Value2'
     *  RelationalOperator: '<S328>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S328>/Switch' */

    /* DataTypeConversion: '<S379>/Data Type Conversion' incorporates:
     *  Constant: '<S327>/Constant Value'
     */
    rtb_DataTypeConversion_hu = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S327>/Limiter1' */
#else

    /* DataTypeConversion: '<S379>/Data Type Conversion' incorporates:
     *  Constant: '<S27>/Const16'
     *  DataTypeConversion: '<S27>/Data Type Conversion16'
     */
    rtb_DataTypeConversion_hu = 8184U;

#endif

    /* End of Sum: '<S327>/Sum' */

    /* Sum: '<S331>/Sum' incorporates:
     *  DataTypeConversion: '<S331>/Data Type Conversion'
     *  Gain: '<S331>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrCAEMDPGainScl

    /* Outputs for Atomic SubSystem: '<S331>/Limiter1' */
    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S331>/Constant Value1'
     *  RelationalOperator: '<S332>/Relational Operator'
     */
    if (10.2F < rtb_TmpSignalConversionAtVeH_cm)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_cm;
    }

    /* End of Switch: '<S332>/Switch1' */

    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S331>/Constant Value2'
     *  RelationalOperator: '<S332>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S332>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf(50.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S331>/Limiter1' */
#endif

    /* End of Sum: '<S331>/Sum' */

    /* Sum: '<S329>/Sum' incorporates:
     *  DataTypeConversion: '<S329>/Data Type Conversion'
     *  Gain: '<S329>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl1

    /* Outputs for Atomic SubSystem: '<S329>/Limiter1' */
    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S329>/Constant Value1'
     *  RelationalOperator: '<S330>/Relational Operator'
     */
    if (10.2F < rtb_TmpSignalConversionAtVeH_b4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_b4;
    }

    /* End of Switch: '<S330>/Switch1' */

    /* Switch: '<S330>/Switch' incorporates:
     *  Constant: '<S329>/Constant Value2'
     *  RelationalOperator: '<S330>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S330>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf(50.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S329>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrCAEMDPGainScl

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of Sum: '<S329>/Sum' */

    /* Outputs for Atomic SubSystem: '<S311>/Limiter1' */
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S311>/Constant Value1'
     *  RelationalOperator: '<S346>/Relational Operator'
     */
    if (10.21F < rtb_TmpSignalConversionAtVeHT_j)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.21F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_j;
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Switch: '<S346>/Switch' incorporates:
     *  Constant: '<S311>/Constant Value2'
     *  RelationalOperator: '<S346>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S346>/Switch' */
    /* End of Outputs for SubSystem: '<S311>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  DataTypeConversion: '<S311>/Data Type Conversion'
     *  DataTypeConversion: '<S381>/Data Type Conversion'
     *  Gain: '<S311>/Gain'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Sclr_Gn_MCPB_P = (uint16)
        ((sint32)fmodf(floorf(50.0F * rtb_Gain_ig), 65536.0F));

    /* Sum: '<S333>/Sum' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion21'
     *  DataTypeConversion: '<S333>/Data Type Conversion'
     *  Gain: '<S333>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRsclMtrAAEMDPGainScl

    /* Outputs for Atomic SubSystem: '<S333>/Limiter1' */
    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S333>/Constant Value1'
     *  RelationalOperator: '<S334>/Relational Operator'
     */
    if (25.245F < rtb_TmpSignalConversionAtVeH_b4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.245F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_b4;
    }

    /* End of Switch: '<S334>/Switch1' */

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S333>/Constant Value2'
     *  RelationalOperator: '<S334>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S334>/Switch' */

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' */
    rtb_VariantMerge_For_Variant_hn = (uint8)((sint32)fmodf(floorf(0.594177067F *
        rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S333>/Limiter1' */
#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S27>/Const21'
     *  DataTypeConversion: '<S27>/Data Type Conversion21'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of Sum: '<S333>/Sum' */

    /* DataTypeConversion: '<S296>/Data Type Conversion29' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion30'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDReMtrAMdCmnd

    /* DataTypeConversion: '<S35>/Data Type Conversion10' incorporates:
     *  SignalConversion generated from: '<S2>/VeHTDR_e_MtrA_MdCmnd'
     */
    rtb_DataTypeConversion10_hz = (uint8)rtb_TmpSignalConversionAtVeHT_b;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion10' incorporates:
     *  Constant: '<S27>/Const30'
     *  DataTypeConversion: '<S27>/Data Type Conversion30'
     */
    rtb_DataTypeConversion10_hz = 0U;

#endif

    /* End of DataTypeConversion: '<S296>/Data Type Conversion29' */

    /* DataTypeConversion: '<S298>/Data Type Conversion31' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrCZeroTrqRqst

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeH_gm;

#endif

    /* End of DataTypeConversion: '<S298>/Data Type Conversion31' */

    /* DataTypeConversion: '<S297>/Data Type Conversion32' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst1

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeH_hb;

#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrCZeroTrqRqst

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S297>/Data Type Conversion32' */

    /* DataTypeConversion: '<S299>/Data Type Conversion34' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion35'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRbMtrAZeroTrqRqst

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' */
    rtb_E_PopUpMessage1 = rtb_TmpSignalConversionAtVeH_hb;

#else

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S27>/Const35'
     *  DataTypeConversion: '<S27>/Data Type Conversion35'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S299>/Data Type Conversion34' */

    /* Sum: '<S350>/Sum' incorporates:
     *  DataTypeConversion: '<S350>/Data Type Conversion'
     *  Gain: '<S350>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrCSpdCmnd

    /* Outputs for Atomic SubSystem: '<S350>/Limiter1' */
    /* Switch: '<S351>/Switch1' incorporates:
     *  Constant: '<S350>/Constant Value1'
     *  RelationalOperator: '<S351>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_k;
    }

    /* End of Switch: '<S351>/Switch1' */

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S350>/Constant Value2'
     *  RelationalOperator: '<S351>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S351>/Switch' */

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S350>/Constant Value'
     */
    rtb_DataTypeConversion_am = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S350>/Limiter1' */
#endif

    /* End of Sum: '<S350>/Sum' */

    /* Sum: '<S348>/Sum' incorporates:
     *  DataTypeConversion: '<S348>/Data Type Conversion'
     *  Gain: '<S348>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd1

    /* Outputs for Atomic SubSystem: '<S348>/Limiter1' */
    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S348>/Constant Value1'
     *  RelationalOperator: '<S349>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_h1)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_h1;
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Switch: '<S349>/Switch' incorporates:
     *  Constant: '<S348>/Constant Value2'
     *  RelationalOperator: '<S349>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S349>/Switch' */

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S348>/Constant Value'
     */
    rtb_DataTypeConversion_am = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S348>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrCSpdCmnd

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD16'
     */
    rtb_DataTypeConversion_am = 0U;

#endif

    /* End of Sum: '<S348>/Sum' */

    /* Outputs for Atomic SubSystem: '<S312>/Limiter1' */
    /* Switch: '<S347>/Switch1' incorporates:
     *  Constant: '<S312>/Constant Value1'
     *  RelationalOperator: '<S347>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_m;
    }

    /* End of Switch: '<S347>/Switch1' */

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S312>/Constant Value2'
     *  RelationalOperator: '<S347>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S347>/Switch' */
    /* End of Outputs for SubSystem: '<S312>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S312>/Constant Value'
     *  DataTypeConversion: '<S312>/Data Type Conversion'
     *  DataTypeConversion: '<S372>/Data Type Conversion'
     *  Gain: '<S312>/Gain'
     *  Sum: '<S312>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TargetMotorRPM_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -16384.0F) * 2.0F),
                  65536.0F));

    /* Sum: '<S352>/Sum' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion42'
     *  DataTypeConversion: '<S352>/Data Type Conversion'
     *  Gain: '<S352>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRnMtrASpdCmnd

    /* Outputs for Atomic SubSystem: '<S352>/Limiter1' */
    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S352>/Constant Value1'
     *  RelationalOperator: '<S353>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_h1)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_h1;
    }

    /* End of Switch: '<S353>/Switch1' */

    /* Switch: '<S353>/Switch' incorporates:
     *  Constant: '<S352>/Constant Value2'
     *  RelationalOperator: '<S353>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S353>/Switch' */

    /* DataTypeConversion: '<S633>/Data Type Conversion' incorporates:
     *  Constant: '<S352>/Constant Value'
     */
    rtb_DataTypeConversion_k0 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S352>/Limiter1' */
#else

    /* DataTypeConversion: '<S633>/Data Type Conversion' incorporates:
     *  Constant: '<S27>/Const42'
     *  DataTypeConversion: '<S27>/Data Type Conversion42'
     */
    rtb_DataTypeConversion_k0 = 32768U;

#endif

    /* End of Sum: '<S352>/Sum' */

    /* Outputs for Atomic SubSystem: '<S302>/Limiter1' */
    /* Switch: '<S337>/Switch1' incorporates:
     *  Constant: '<S302>/Constant Value1'
     *  RelationalOperator: '<S337>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeS_l2)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_l2;
    }

    /* End of Switch: '<S337>/Switch1' */

    /* Switch: '<S337>/Switch' incorporates:
     *  Constant: '<S302>/Constant Value2'
     *  RelationalOperator: '<S337>/Relational Operator1'
     */
    if (rtb_Gain_ig > -1023.0F)
    {
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAXLR = -1023.0F;
    }

    /* End of Switch: '<S337>/Switch' */
    /* End of Outputs for SubSystem: '<S302>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S303>/Limiter1' */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S303>/Constant Value1'
     *  RelationalOperator: '<S338>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_j;
    }

    /* End of Switch: '<S338>/Switch1' */

    /* Switch: '<S338>/Switch' incorporates:
     *  Constant: '<S303>/Constant Value2'
     *  RelationalOperator: '<S338>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S338>/Switch' */
    /* End of Outputs for SubSystem: '<S303>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S303>/Constant Value'
     *  DataTypeConversion: '<S303>/Data Type Conversion'
     *  Gain: '<S303>/Gain'
     *  Sum: '<S303>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TorqueCommand_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S354>/Sum' incorporates:
     *  DataTypeConversion: '<S27>/Data Type Conversion46'
     *  DataTypeConversion: '<S354>/Data Type Conversion'
     *  Gain: '<S354>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD16_VeHTDRMMtrATorqCmnd

    /* Outputs for Atomic SubSystem: '<S354>/Limiter1' */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S354>/Constant Value1'
     *  RelationalOperator: '<S355>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_mh)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_mh;
    }

    /* End of Switch: '<S355>/Switch1' */

    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S354>/Constant Value2'
     *  RelationalOperator: '<S355>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S355>/Switch' */

    /* DataTypeConversion: '<S640>/Data Type Conversion' incorporates:
     *  Constant: '<S354>/Constant Value'
     */
    rtb_DataTypeConversion_ei = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S354>/Limiter1' */
#else

    /* DataTypeConversion: '<S640>/Data Type Conversion' incorporates:
     *  Constant: '<S27>/Const46'
     *  DataTypeConversion: '<S27>/Data Type Conversion46'
     */
    rtb_DataTypeConversion_ei = 8184U;

#endif

    /* End of Sum: '<S354>/Sum' */

    /* Switch: '<S27>/switch' incorporates:
     *  Constant: '<S304>/Constant Value1'
     *  RelationalOperator: '<S339>/Relational Operator'
     *  Switch: '<S339>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeSR_a)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
         *  Constant: '<S27>/Constant'
         *  Switch: '<S27>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_VehicleSpeedVSOSig_P =
            8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S304>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_lu)
        {
            /* Switch: '<S339>/Switch1' incorporates:
             *  Constant: '<S304>/Constant Value1'
             *  Gain: '<S304>/Gain'
             */
            rtb_Gain_ig = 511.875F;
        }
        else
        {
            /* Gain: '<S304>/Gain' incorporates:
             *  Switch: '<S339>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_lu;
        }

        /* Switch: '<S339>/Switch' incorporates:
         *  Constant: '<S304>/Constant Value2'
         *  RelationalOperator: '<S339>/Relational Operator1'
         */
        if (rtb_Gain_ig <= 0.0F)
        {
            rtb_Gain_ig = 0.0F;
        }

        /* End of Switch: '<S339>/Switch' */
        /* End of Outputs for SubSystem: '<S304>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
         *  DataTypeConversion: '<S304>/Data Type Conversion'
         *  Gain: '<S304>/Gain'
         *  Switch: '<S27>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_VehicleSpeedVSOSig_P =
            (uint16)((sint32)fmodf(floorf(16.0F * rtb_Gain_ig), 65536.0F));
    }

    /* End of Switch: '<S27>/switch' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S306>/Constant Value'
     *  DataTypeConversion: '<S27>/Data Type Conversion22'
     *  DataTypeConversion: '<S300>/Data Type Conversion'
     *  DataTypeConversion: '<S301>/Data Type Conversion'
     *  DataTypeConversion: '<S306>/Data Type Conversion'
     *  Gain: '<S300>/Gain'
     *  Gain: '<S301>/Gain'
     *  Gain: '<S306>/Gain'
     *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat'
     *  Sum: '<S306>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqHigh_MCPA_P =
        (uint8)((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeMT_n),
                 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqHigh_MCPB_P =
        (uint8)((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHSER),
                 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqHigh_SGCP_P =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqLow_MCPA_P =
        (uint8)((sint32)fmodf(floorf(10.0F * (rtb_TmpSignalConversionAtVeWTAR -
                   4.5F)), 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Cutoff_FreqLow_SGCP_P =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MaxOffset_MCPA_P =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MaxOffset_SGCP_P =
        rtb_VariantMerge_For_Variant__n;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MinOffset_MCPA_P =
        rtb_VariantMerge_For_Variant_So;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_MinOffset_SGCP_P =
        rtb_DataTypeConversion_hu;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Sclr_Gn_MCPA_P =
        rtb_DataTypeConversion_pz;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_AEMD_Sclr_Gn_SGCP_P =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_BPCM_HV_Trac_Main_Contac_Sts_P
        = (uint8)rtb_TmpSignalConversionAtVeBP_c;

    /* DataTypeConversion: '<S27>/Data Type Conversion23' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion23'
     *  DataTypeConversion: '<S31>/Data Type Conversion15'
     *  DataTypeConversion: '<S32>/Data Type Conversion9'
     */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeHVTR), 65536.0F);

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD16' incorporates:
     *  Constant: '<S302>/Constant Value'
     *  DataTypeConversion: '<S27>/Data Type Conversion23'
     *  DataTypeConversion: '<S27>/Data Type Conversion25'
     *  DataTypeConversion: '<S27>/Data Type Conversion27'
     *  DataTypeConversion: '<S27>/Data Type Conversion28'
     *  DataTypeConversion: '<S27>/Data Type Conversion36'
     *  DataTypeConversion: '<S27>/Data Type Conversion37'
     *  DataTypeConversion: '<S302>/Data Type Conversion'
     *  Gain: '<S302>/Gain'
     *  SignalConversion generated from: '<S2>/VePMDR_e_PowerModeRaw'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_VldtdTransShiftRngSt'
     *  Sum: '<S302>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_BPCM_HV_TractionBusVoltage_P =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_CRC_INVTARGET_PROPULSION1 =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_CmdIgnSts_P = (uint8)
        rtb_TmpSignalConversionAtVePMDR;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_MC_INVTARGET_PROPULSION1 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_ModeCommand_MCPA_P = (uint8)
        rtb_TmpSignalConversionAtVeS_ef;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_ModeCommand_MCPB_P = (uint8)
        rtb_TmpSignalConversionAtVeS_kt;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_ModeCommand_SGCP_P =
        rtb_DataTypeConversion10_hz;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_Mtr_6SO_Request_MCPA_P =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_Mtr_6SO_Request_MCPB_P =
        rtb_TmpSignalConversionAtVeH_ds;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_Mtr_6SO_Request_SGCP_P =
        rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_ParkCmd_PT_P = (uint8)
        rtb_TmpSignalConversionAtVeSR_b;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_ShiftLeverPosition_P = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TargetMotorRPM_MCPA_P =
        rtb_DataTypeConversion_am;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TargetMotorRPM_SGCP_P =
        rtb_DataTypeConversion_k0;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TorqueCommand_MCPA_P =
        (uint16)((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeAXLR -
                    -1023.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16.E_TorqueCommand_SGCP_P =
        rtb_DataTypeConversion_ei;

    /* Outputs for Atomic SubSystem: '<S369>/Limiter1' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S369>/Constant Value1'
     *  RelationalOperator: '<S404>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHTDR;
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Switch: '<S404>/Switch' incorporates:
     *  Constant: '<S369>/Constant Value2'
     *  RelationalOperator: '<S404>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S369>/Sum' */
        rtb_TmpSignalConversionAtVeHTDR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S369>/Sum' */
        rtb_TmpSignalConversionAtVeHTDR = 0.0F;
    }

    /* End of Switch: '<S404>/Switch' */
    /* End of Outputs for SubSystem: '<S369>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S370>/Limiter1' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S370>/Constant Value1'
     *  RelationalOperator: '<S405>/Relational Operator'
     */
    if (25.5F < rtb_TmpSignalConversionAtVeHT_g)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_g;
    }

    /* End of Switch: '<S405>/Switch1' */

    /* Switch: '<S405>/Switch' incorporates:
     *  Constant: '<S370>/Constant Value2'
     *  RelationalOperator: '<S405>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S370>/Sum' */
        rtb_TmpSignalConversionAtVeHT_g = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S370>/Sum' */
        rtb_TmpSignalConversionAtVeHT_g = 0.0F;
    }

    /* End of Switch: '<S405>/Switch' */
    /* End of Outputs for SubSystem: '<S370>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S375>/Limiter1' */
    /* Switch: '<S410>/Switch1' incorporates:
     *  Constant: '<S375>/Constant Value1'
     *  RelationalOperator: '<S410>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeH_fb)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 30.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_fb;
    }

    /* End of Switch: '<S410>/Switch1' */

    /* Switch: '<S410>/Switch' incorporates:
     *  Constant: '<S375>/Constant Value2'
     *  RelationalOperator: '<S410>/Relational Operator1'
     */
    if (rtb_Gain_ig > 4.5F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = 4.5F;
    }

    /* End of Switch: '<S410>/Switch' */
    /* End of Outputs for SubSystem: '<S375>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S376>/Limiter1' */
    /* Switch: '<S411>/Switch1' incorporates:
     *  Constant: '<S376>/Constant Value1'
     *  RelationalOperator: '<S411>/Relational Operator'
     */
    if (30.0F < rtb_TmpSignalConversionAtVeHT_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 30.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_n;
    }

    /* End of Switch: '<S411>/Switch1' */

    /* Switch: '<S411>/Switch' incorporates:
     *  Constant: '<S376>/Constant Value2'
     *  RelationalOperator: '<S411>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 4.5F)
    {
        rtb_Gain_ig = 4.5F;
    }

    /* End of Switch: '<S411>/Switch' */
    /* End of Outputs for SubSystem: '<S376>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S376>/Constant Value'
     *  DataTypeConversion: '<S376>/Data Type Conversion'
     *  DataTypeConversion: '<S572>/Data Type Conversion'
     *  Gain: '<S376>/Gain'
     *  Sum: '<S376>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqLow_MCPB_P =
        (uint8)((sint32)fmodf(floorf((rtb_Gain_ig - 4.5F) * 10.0F), 256.0F));

    /* Sum: '<S388>/Sum' incorporates:
     *  DataTypeConversion: '<S388>/Data Type Conversion'
     *  Gain: '<S388>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDPosTrqOffst

    /* Outputs for Atomic SubSystem: '<S388>/Limiter1' */
    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S388>/Constant Value1'
     *  RelationalOperator: '<S389>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_i)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_i;
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Switch: '<S389>/Switch' incorporates:
     *  Constant: '<S388>/Constant Value2'
     *  RelationalOperator: '<S389>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S389>/Switch' */

    /* DataTypeConversion: '<S640>/Data Type Conversion' incorporates:
     *  Constant: '<S388>/Constant Value'
     */
    rtb_DataTypeConversion_ei = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S388>/Limiter1' */
#endif

    /* End of Sum: '<S388>/Sum' */

    /* Sum: '<S386>/Sum' incorporates:
     *  DataTypeConversion: '<S386>/Data Type Conversion'
     *  Gain: '<S386>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst1

    /* Outputs for Atomic SubSystem: '<S386>/Limiter1' */
    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S386>/Constant Value1'
     *  RelationalOperator: '<S387>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_ii)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_ii;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* Switch: '<S387>/Switch' incorporates:
     *  Constant: '<S386>/Constant Value2'
     *  RelationalOperator: '<S387>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S387>/Switch' */

    /* DataTypeConversion: '<S640>/Data Type Conversion' incorporates:
     *  Constant: '<S386>/Constant Value'
     */
    rtb_DataTypeConversion_ei = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S386>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDPosTrqOffst

    /* DataTypeConversion: '<S640>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
    rtb_DataTypeConversion_ei = 0U;

#endif

    /* End of Sum: '<S386>/Sum' */

    /* Outputs for Atomic SubSystem: '<S378>/Limiter1' */
    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S378>/Constant Value1'
     *  RelationalOperator: '<S413>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_mf)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_mf;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S378>/Constant Value2'
     *  RelationalOperator: '<S413>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S413>/Switch' */
    /* End of Outputs for SubSystem: '<S378>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S378>/Constant Value'
     *  DataTypeConversion: '<S378>/Data Type Conversion'
     *  DataTypeConversion: '<S633>/Data Type Conversion'
     *  Gain: '<S378>/Gain'
     *  Sum: '<S378>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MaxOffset_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S390>/Sum' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion11'
     *  DataTypeConversion: '<S390>/Data Type Conversion'
     *  Gain: '<S390>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDPosTrqOffst

    /* Outputs for Atomic SubSystem: '<S390>/Limiter1' */
    /* Switch: '<S391>/Switch1' incorporates:
     *  Constant: '<S390>/Constant Value1'
     *  RelationalOperator: '<S391>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_ii)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_ii;
    }

    /* End of Switch: '<S391>/Switch1' */

    /* Switch: '<S391>/Switch' incorporates:
     *  Constant: '<S390>/Constant Value2'
     *  RelationalOperator: '<S391>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S391>/Switch' */

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S390>/Constant Value'
     */
    rtb_DataTypeConversion_am = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S390>/Limiter1' */
#else

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S28>/Const11'
     *  DataTypeConversion: '<S28>/Data Type Conversion11'
     */
    rtb_DataTypeConversion_am = 8184U;

#endif

    /* End of Sum: '<S390>/Sum' */

    /* Sum: '<S394>/Sum' incorporates:
     *  DataTypeConversion: '<S394>/Data Type Conversion'
     *  Gain: '<S394>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDNegTrqOffst

    /* Outputs for Atomic SubSystem: '<S394>/Limiter1' */
    /* Switch: '<S395>/Switch1' incorporates:
     *  Constant: '<S394>/Constant Value1'
     *  RelationalOperator: '<S395>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_bo)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_bo;
    }

    /* End of Switch: '<S395>/Switch1' */

    /* Switch: '<S395>/Switch' incorporates:
     *  Constant: '<S394>/Constant Value2'
     *  RelationalOperator: '<S395>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S395>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S394>/Constant Value'
     */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S394>/Limiter1' */
#endif

    /* End of Sum: '<S394>/Sum' */

    /* Sum: '<S392>/Sum' incorporates:
     *  DataTypeConversion: '<S392>/Data Type Conversion'
     *  Gain: '<S392>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst1

    /* Outputs for Atomic SubSystem: '<S392>/Limiter1' */
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S392>/Constant Value1'
     *  RelationalOperator: '<S393>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_p;
    }

    /* End of Switch: '<S393>/Switch1' */

    /* Switch: '<S393>/Switch' incorporates:
     *  Constant: '<S392>/Constant Value2'
     *  RelationalOperator: '<S393>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S393>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S392>/Constant Value'
     */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S392>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrCAEMDNegTrqOffst

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of Sum: '<S392>/Sum' */

    /* Outputs for Atomic SubSystem: '<S379>/Limiter1' */
    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S379>/Constant Value1'
     *  RelationalOperator: '<S414>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_a)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_a;
    }

    /* End of Switch: '<S414>/Switch1' */

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S379>/Constant Value2'
     *  RelationalOperator: '<S414>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S414>/Switch' */
    /* End of Outputs for SubSystem: '<S379>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S379>/Constant Value'
     *  DataTypeConversion: '<S379>/Data Type Conversion'
     *  Gain: '<S379>/Gain'
     *  Sum: '<S379>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MinOffset_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S396>/Sum' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion16'
     *  DataTypeConversion: '<S396>/Data Type Conversion'
     *  Gain: '<S396>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrAAEMDNegTrqOffst

    /* Outputs for Atomic SubSystem: '<S396>/Limiter1' */
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S396>/Constant Value1'
     *  RelationalOperator: '<S397>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeHT_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_p;
    }

    /* End of Switch: '<S397>/Switch1' */

    /* Switch: '<S397>/Switch' incorporates:
     *  Constant: '<S396>/Constant Value2'
     *  RelationalOperator: '<S397>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S397>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S396>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S396>/Limiter1' */
#else

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S28>/Const16'
     *  DataTypeConversion: '<S28>/Data Type Conversion16'
     */
    rtb_VariantMerge_For_Variant_k1 = 8184U;

#endif

    /* End of Sum: '<S396>/Sum' */

    /* Sum: '<S400>/Sum' incorporates:
     *  DataTypeConversion: '<S400>/Data Type Conversion'
     *  Gain: '<S400>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrCAEMDPGainScl

    /* Outputs for Atomic SubSystem: '<S400>/Limiter1' */
    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S400>/Constant Value1'
     *  RelationalOperator: '<S401>/Relational Operator'
     */
    if (10.2F < rtb_TmpSignalConversionAtVeH_cm)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_cm;
    }

    /* End of Switch: '<S401>/Switch1' */

    /* Switch: '<S401>/Switch' incorporates:
     *  Constant: '<S400>/Constant Value2'
     *  RelationalOperator: '<S401>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S401>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' */
    rtb_VariantMerge_For_Variant__n = (uint16)((sint32)fmodf(floorf(50.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S400>/Limiter1' */
#endif

    /* End of Sum: '<S400>/Sum' */

    /* Sum: '<S398>/Sum' incorporates:
     *  DataTypeConversion: '<S398>/Data Type Conversion'
     *  Gain: '<S398>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl1

    /* Outputs for Atomic SubSystem: '<S398>/Limiter1' */
    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S398>/Constant Value1'
     *  RelationalOperator: '<S399>/Relational Operator'
     */
    if (10.2F < rtb_TmpSignalConversionAtVeH_b4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_b4;
    }

    /* End of Switch: '<S399>/Switch1' */

    /* Switch: '<S399>/Switch' incorporates:
     *  Constant: '<S398>/Constant Value2'
     *  RelationalOperator: '<S399>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S399>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' */
    rtb_VariantMerge_For_Variant__n = (uint16)((sint32)fmodf(floorf(50.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S398>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrCAEMDPGainScl

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
    rtb_VariantMerge_For_Variant__n = 0U;

#endif

    /* End of Sum: '<S398>/Sum' */

    /* Outputs for Atomic SubSystem: '<S380>/Limiter1' */
    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S380>/Constant Value1'
     *  RelationalOperator: '<S415>/Relational Operator'
     */
    if (10.2F < rtb_TmpSignalConversionAtVeHT_j)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 10.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_j;
    }

    /* End of Switch: '<S415>/Switch1' */

    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S380>/Constant Value2'
     *  RelationalOperator: '<S415>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S415>/Switch' */
    /* End of Outputs for SubSystem: '<S380>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  DataTypeConversion: '<S380>/Data Type Conversion'
     *  Gain: '<S380>/Gain'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Sclr_Gn_MCPB_P = (uint16)
        ((sint32)fmodf(floorf(50.0F * rtb_Gain_ig), 65536.0F));

    /* Sum: '<S402>/Sum' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion21'
     *  DataTypeConversion: '<S402>/Data Type Conversion'
     *  Gain: '<S402>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRsclMtrAAEMDPGainScl

    /* Outputs for Atomic SubSystem: '<S402>/Limiter1' */
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S402>/Constant Value1'
     *  RelationalOperator: '<S403>/Relational Operator'
     */
    if (25.245F < rtb_TmpSignalConversionAtVeH_b4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.245F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_b4;
    }

    /* End of Switch: '<S403>/Switch1' */

    /* Switch: '<S403>/Switch' incorporates:
     *  Constant: '<S402>/Constant Value2'
     *  RelationalOperator: '<S403>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S403>/Switch' */

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' */
    rtb_VariantMerge_For_Variant_hn = (uint8)((sint32)fmodf(floorf(0.594177067F *
        rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S402>/Limiter1' */
#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S28>/Const21'
     *  DataTypeConversion: '<S28>/Data Type Conversion21'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of Sum: '<S402>/Sum' */

    /* DataTypeConversion: '<S365>/Data Type Conversion29' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion30'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDReMtrAMdCmnd

    /* DataTypeConversion: '<S35>/Data Type Conversion3' incorporates:
     *  SignalConversion generated from: '<S2>/VeHTDR_e_MtrA_MdCmnd'
     */
    rtb_DataTypeConversion3_o = (uint8)rtb_TmpSignalConversionAtVeHT_b;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion3' incorporates:
     *  Constant: '<S28>/Const30'
     *  DataTypeConversion: '<S28>/Data Type Conversion30'
     */
    rtb_DataTypeConversion3_o = 0U;

#endif

    /* End of DataTypeConversion: '<S365>/Data Type Conversion29' */

    /* DataTypeConversion: '<S367>/Data Type Conversion31' */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrCZeroTrqRqst

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeH_gm;

#endif

    /* End of DataTypeConversion: '<S367>/Data Type Conversion31' */

    /* DataTypeConversion: '<S366>/Data Type Conversion32' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst1

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeH_hb;

#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrCZeroTrqRqst

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S366>/Data Type Conversion32' */

    /* DataTypeConversion: '<S368>/Data Type Conversion34' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion35'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRbMtrAZeroTrqRqst

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' */
    rtb_E_PopUpMessage1 = rtb_TmpSignalConversionAtVeH_hb;

#else

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S28>/Const35'
     *  DataTypeConversion: '<S28>/Data Type Conversion35'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S368>/Data Type Conversion34' */

    /* Sum: '<S419>/Sum' incorporates:
     *  DataTypeConversion: '<S419>/Data Type Conversion'
     *  Gain: '<S419>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrCSpdCmnd

    /* Outputs for Atomic SubSystem: '<S419>/Limiter1' */
    /* Switch: '<S420>/Switch1' incorporates:
     *  Constant: '<S419>/Constant Value1'
     *  RelationalOperator: '<S420>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_k;
    }

    /* End of Switch: '<S420>/Switch1' */

    /* Switch: '<S420>/Switch' incorporates:
     *  Constant: '<S419>/Constant Value2'
     *  RelationalOperator: '<S420>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S420>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S419>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S419>/Limiter1' */
#endif

    /* End of Sum: '<S419>/Sum' */

    /* Sum: '<S417>/Sum' incorporates:
     *  DataTypeConversion: '<S417>/Data Type Conversion'
     *  Gain: '<S417>/Gain'
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd1

    /* Outputs for Atomic SubSystem: '<S417>/Limiter1' */
    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S417>/Constant Value1'
     *  RelationalOperator: '<S418>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_h1)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_h1;
    }

    /* End of Switch: '<S418>/Switch1' */

    /* Switch: '<S418>/Switch' incorporates:
     *  Constant: '<S417>/Constant Value2'
     *  RelationalOperator: '<S418>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S418>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S417>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S417>/Limiter1' */
#elif !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd1 && !Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrCSpdCmnd

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  SignalConversion generated from: '<S5>/BusINVTARGET_PROPULSION1_FD5'
     */
    rtb_VariantMerge_For_Variant_So = 0U;

#endif

    /* End of Sum: '<S417>/Sum' */

    /* Outputs for Atomic SubSystem: '<S381>/Limiter1' */
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S381>/Constant Value1'
     *  RelationalOperator: '<S416>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeHT_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHT_m;
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S381>/Constant Value2'
     *  RelationalOperator: '<S416>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S416>/Switch' */
    /* End of Outputs for SubSystem: '<S381>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S381>/Constant Value'
     *  DataTypeConversion: '<S381>/Data Type Conversion'
     *  Gain: '<S381>/Gain'
     *  Sum: '<S381>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TargetMotorRPM_MCPB_P =
        (uint16)((sint32)fmodf(floorf((rtb_Gain_ig - -16384.0F) * 2.0F),
                  65536.0F));

    /* Sum: '<S421>/Sum' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion42'
     *  DataTypeConversion: '<S421>/Data Type Conversion'
     *  Gain: '<S421>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRnMtrASpdCmnd

    /* Outputs for Atomic SubSystem: '<S421>/Limiter1' */
    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S421>/Constant Value1'
     *  RelationalOperator: '<S422>/Relational Operator'
     */
    if (16383.5F < rtb_TmpSignalConversionAtVeH_h1)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 16383.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_h1;
    }

    /* End of Switch: '<S422>/Switch1' */

    /* Switch: '<S422>/Switch' incorporates:
     *  Constant: '<S421>/Constant Value2'
     *  RelationalOperator: '<S422>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -16384.0F)
    {
        rtb_Gain_ig = -16384.0F;
    }

    /* End of Switch: '<S422>/Switch' */

    /* DataTypeConversion: '<S638>/Data Type Conversion' incorporates:
     *  Constant: '<S421>/Constant Value'
     */
    rtb_DataTypeConversion_d5 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -16384.0F) * 2.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S421>/Limiter1' */
#else

    /* DataTypeConversion: '<S638>/Data Type Conversion' incorporates:
     *  Constant: '<S28>/Const42'
     *  DataTypeConversion: '<S28>/Data Type Conversion42'
     */
    rtb_DataTypeConversion_d5 = 32768U;

#endif

    /* End of Sum: '<S421>/Sum' */

    /* Outputs for Atomic SubSystem: '<S371>/Limiter1' */
    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S371>/Constant Value1'
     *  RelationalOperator: '<S406>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeS_l2)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_l2;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Switch: '<S406>/Switch' incorporates:
     *  Constant: '<S371>/Constant Value2'
     *  RelationalOperator: '<S406>/Relational Operator1'
     */
    if (rtb_Gain_ig > -1023.0F)
    {
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAXLR = -1023.0F;
    }

    /* End of Switch: '<S406>/Switch' */
    /* End of Outputs for SubSystem: '<S371>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S372>/Limiter1' */
    /* Switch: '<S407>/Switch1' incorporates:
     *  Constant: '<S372>/Constant Value1'
     *  RelationalOperator: '<S407>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeSR_j)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSR_j;
    }

    /* End of Switch: '<S407>/Switch1' */

    /* Switch: '<S407>/Switch' incorporates:
     *  Constant: '<S372>/Constant Value2'
     *  RelationalOperator: '<S407>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S407>/Switch' */
    /* End of Outputs for SubSystem: '<S372>/Limiter1' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S372>/Constant Value'
     *  DataTypeConversion: '<S372>/Data Type Conversion'
     *  Gain: '<S372>/Gain'
     *  Sum: '<S372>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TorqueCommand_MCPB_P = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -1023.0F) * 8.0F), 65536.0F));

    /* Sum: '<S423>/Sum' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion46'
     *  DataTypeConversion: '<S423>/Data Type Conversion'
     *  Gain: '<S423>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION1FD5_VeHTDRMMtrATorqCmnd

    /* Outputs for Atomic SubSystem: '<S423>/Limiter1' */
    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S423>/Constant Value1'
     *  RelationalOperator: '<S424>/Relational Operator'
     */
    if (1024.75F < rtb_TmpSignalConversionAtVeH_mh)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.75F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_mh;
    }

    /* End of Switch: '<S424>/Switch1' */

    /* Switch: '<S424>/Switch' incorporates:
     *  Constant: '<S423>/Constant Value2'
     *  RelationalOperator: '<S424>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S424>/Switch' */

    /* DataTypeConversion: '<S637>/Data Type Conversion' incorporates:
     *  Constant: '<S423>/Constant Value'
     */
    rtb_DataTypeConversion_p5 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -1023.0F) * 8.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S423>/Limiter1' */
#else

    /* DataTypeConversion: '<S637>/Data Type Conversion' incorporates:
     *  Constant: '<S28>/Const46'
     *  DataTypeConversion: '<S28>/Data Type Conversion46'
     */
    rtb_DataTypeConversion_p5 = 8184U;

#endif

    /* End of Sum: '<S423>/Sum' */

    /* Switch: '<S28>/switch' incorporates:
     *  Constant: '<S373>/Constant Value1'
     *  RelationalOperator: '<S408>/Relational Operator'
     *  Switch: '<S408>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeSR_a)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
         *  Constant: '<S28>/Constant'
         *  Switch: '<S28>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_VehicleSpeedVSOSig_P =
            8191U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S373>/Limiter1' */
        if (511.875F < rtb_TmpSignalConversionAtVeS_lu)
        {
            /* Switch: '<S408>/Switch1' incorporates:
             *  Constant: '<S373>/Constant Value1'
             *  Gain: '<S373>/Gain'
             */
            rtb_Gain_ig = 511.875F;
        }
        else
        {
            /* Gain: '<S373>/Gain' incorporates:
             *  Switch: '<S408>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_lu;
        }

        /* Switch: '<S408>/Switch' incorporates:
         *  Constant: '<S373>/Constant Value2'
         *  RelationalOperator: '<S408>/Relational Operator1'
         */
        if (rtb_Gain_ig <= 0.0F)
        {
            rtb_Gain_ig = 0.0F;
        }

        /* End of Switch: '<S408>/Switch' */
        /* End of Outputs for SubSystem: '<S373>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
         *  DataTypeConversion: '<S373>/Data Type Conversion'
         *  Gain: '<S373>/Gain'
         *  Switch: '<S28>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_VehicleSpeedVSOSig_P =
            (uint16)((sint32)fmodf(floorf(16.0F * rtb_Gain_ig), 65536.0F));
    }

    /* End of Switch: '<S28>/switch' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION1_FD5' incorporates:
     *  Constant: '<S371>/Constant Value'
     *  Constant: '<S375>/Constant Value'
     *  DataTypeConversion: '<S27>/Data Type Conversion22'
     *  DataTypeConversion: '<S27>/Data Type Conversion25'
     *  DataTypeConversion: '<S27>/Data Type Conversion27'
     *  DataTypeConversion: '<S27>/Data Type Conversion28'
     *  DataTypeConversion: '<S27>/Data Type Conversion36'
     *  DataTypeConversion: '<S27>/Data Type Conversion37'
     *  DataTypeConversion: '<S28>/Data Type Conversion23'
     *  DataTypeConversion: '<S369>/Data Type Conversion'
     *  DataTypeConversion: '<S370>/Data Type Conversion'
     *  DataTypeConversion: '<S371>/Data Type Conversion'
     *  DataTypeConversion: '<S375>/Data Type Conversion'
     *  Gain: '<S369>/Gain'
     *  Gain: '<S370>/Gain'
     *  Gain: '<S371>/Gain'
     *  Gain: '<S375>/Gain'
     *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat'
     *  SignalConversion generated from: '<S2>/VePMDR_e_PowerModeRaw'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrA_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_MtrB_MdCmnd'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_PPawl_Request'
     *  SignalConversion generated from: '<S2>/VeSRMR_e_VldtdTransShiftRngSt'
     *  Sum: '<S371>/Sum'
     *  Sum: '<S375>/Sum'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqHigh_MCPA_P =
        (uint8)((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHTDR),
                 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqHigh_MCPB_P =
        (uint8)((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHT_g),
                 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqHigh_SGCP_P =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqLow_MCPA_P =
        (uint8)((sint32)fmodf(floorf(10.0F * (rtb_TmpSignalConversionAtVeWTAR -
                   4.5F)), 256.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Cutoff_FreqLow_SGCP_P =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MaxOffset_MCPA_P =
        rtb_DataTypeConversion_ei;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MaxOffset_SGCP_P =
        rtb_DataTypeConversion_am;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MinOffset_MCPA_P =
        rtb_DataTypeConversion_pz;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_MinOffset_SGCP_P =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Sclr_Gn_MCPA_P =
        rtb_VariantMerge_For_Variant__n;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_AEMD_Sclr_Gn_SGCP_P =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_BPCM_HV_Trac_Main_Contac_Sts_P
        = (uint8)rtb_TmpSignalConversionAtVeBP_c;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_BPCM_HV_TractionBusVoltage_P =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_CRC_INVTARGET_PROPULSION1 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_CmdIgnSts_P = (uint8)
        rtb_TmpSignalConversionAtVePMDR;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_MC_INVTARGET_PROPULSION1 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ModeCommand_MCPA_P = (uint8)
        rtb_TmpSignalConversionAtVeS_ef;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ModeCommand_MCPB_P = (uint8)
        rtb_TmpSignalConversionAtVeS_kt;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ModeCommand_SGCP_P =
        rtb_DataTypeConversion3_o;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_Mtr_6SO_Request_MCPA_P =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_Mtr_6SO_Request_MCPB_P =
        rtb_TmpSignalConversionAtVeH_ds;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_Mtr_6SO_Request_SGCP_P =
        rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ParkCmd_PT_P = (uint8)
        rtb_TmpSignalConversionAtVeSR_b;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_ShiftLeverPosition_P = (uint8)
        rtb_TmpSignalConversionAtVeSR_f;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TargetMotorRPM_MCPA_P =
        rtb_VariantMerge_For_Variant_So;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TargetMotorRPM_SGCP_P =
        rtb_DataTypeConversion_d5;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TorqueCommand_MCPA_P = (uint16)
        ((sint32)fmodf(floorf(8.0F * (rtb_TmpSignalConversionAtVeAXLR - -1023.0F)),
                       65536.0F));
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5.E_TorqueCommand_SGCP_P =
        rtb_DataTypeConversion_p5;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeGENR_b_APMIdcHvSetPFA' */
    (void)Rte_Read_VeGENR_b_APMIdcHvSetPFA_Value(&tmpRead_1k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S31>/switch' incorporates:
     *  Constant: '<S501>/Constant Value1'
     *  RelationalOperator: '<S511>/Relational Operator'
     *  Switch: '<S511>/Switch1'
     */
    if (tmpRead_1k)
    {
        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  Constant: '<S31>/Constant'
         *  DataTypeConversion: '<S35>/Data Type Conversion5'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_HV_IMax_PT = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S501>/Limiter1' */
        if (24.8F < rtb_TmpSignalConversionAtVeGENR)
        {
            /* Switch: '<S511>/Switch1' incorporates:
             *  Constant: '<S501>/Constant Value1'
             *  Gain: '<S501>/Gain'
             */
            rtb_Gain_ig = 24.8F;
        }
        else
        {
            /* Gain: '<S501>/Gain' incorporates:
             *  Switch: '<S511>/Switch1'
             */
            rtb_Gain_ig = rtb_TmpSignalConversionAtVeGENR;
        }

        /* Switch: '<S511>/Switch' incorporates:
         *  Constant: '<S501>/Constant Value2'
         *  RelationalOperator: '<S511>/Relational Operator1'
         */
        if (rtb_Gain_ig <= 0.0F)
        {
            rtb_Gain_ig = 0.0F;
        }

        /* End of Switch: '<S511>/Switch' */
        /* End of Outputs for SubSystem: '<S501>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  DataTypeConversion: '<S35>/Data Type Conversion5'
         *  DataTypeConversion: '<S501>/Data Type Conversion'
         *  Gain: '<S501>/Gain'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_HV_IMax_PT = (uint8)((sint32)
            fmodf(floorf(1.25F * rtb_Gain_ig), 256.0F));
    }

    /* End of Switch: '<S31>/switch' */

    /* Outputs for Atomic SubSystem: '<S502>/Limiter1' */
    /* Switch: '<S512>/Switch1' incorporates:
     *  Constant: '<S502>/Constant Value1'
     *  RelationalOperator: '<S512>/Relational Operator'
     */
    if (20.4F < rtb_TmpSignalConversionAtVeGE_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 20.4F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeGE_m;
    }

    /* End of Switch: '<S512>/Switch1' */
    /* End of Outputs for SubSystem: '<S502>/Limiter1' */

    /* Switch: '<S31>/switch1' incorporates:
     *  Constant: '<S503>/Constant Value1'
     *  RelationalOperator: '<S513>/Relational Operator'
     *  Switch: '<S513>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeGE_p)
    {
        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  Constant: '<S31>/Constant1'
         *  DataTypeConversion: '<S640>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VsetPoint_PT = 2047U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S503>/Limiter1' */
        if (20.46F < rtb_TmpSignalConversionAtVeGE_k)
        {
            /* Switch: '<S513>/Switch1' incorporates:
             *  Constant: '<S503>/Constant Value1'
             *  Gain: '<S503>/Gain'
             */
            rtb_TmpSignalConversionAtVeSR_j = 20.46F;
        }
        else
        {
            /* Gain: '<S503>/Gain' incorporates:
             *  Switch: '<S513>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSR_j = rtb_TmpSignalConversionAtVeGE_k;
        }

        /* Switch: '<S513>/Switch' incorporates:
         *  Constant: '<S503>/Constant Value2'
         *  RelationalOperator: '<S513>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeSR_j <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeSR_j = 0.0F;
        }

        /* End of Switch: '<S513>/Switch' */
        /* End of Outputs for SubSystem: '<S503>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
         *  DataTypeConversion: '<S503>/Data Type Conversion'
         *  DataTypeConversion: '<S640>/Data Type Conversion'
         *  Gain: '<S503>/Gain'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VsetPoint_PT = (uint16)
            ((sint32)fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeSR_j),
                           65536.0F));
    }

    /* End of Switch: '<S31>/switch1' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  Constant: '<S5>/Const116'
     *  Constant: '<S5>/Const117'
     *  Constant: '<S5>/Const118'
     *  Constant: '<S5>/Const120'
     *  DataTypeConversion: '<S31>/Data Type Conversion6'
     *  SignalConversion generated from: '<S2>/VeGENR_e_stModeReq'
     */
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2ActDischRq_PT = false;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2_BoostSwitchControl = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2_EVSEBusPrechargeReq_PT = false;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2_EVSEBusVoltSetPoint_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2_ModeRequest_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM2_TypeCtrl_PT = (uint8)
        rtb_TmpSignalConversionAtVeGE_g;

    /* DataTypeConversion: '<S31>/Data Type Conversion8' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion2'
     */
    rtb_TmpSignalConversionAtVeMT_n = fmodf(floorf
        (rtb_TmpSignalConversionAtVeGE_f), 65536.0F);

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion8'
     */
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_IMax_PT = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeMT_n)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeMT_n))));

    /* Outputs for Atomic SubSystem: '<S502>/Limiter1' */
    /* Switch: '<S512>/Switch' incorporates:
     *  Constant: '<S502>/Constant Value2'
     *  RelationalOperator: '<S512>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S512>/Switch' */
    /* End of Outputs for SubSystem: '<S502>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD11' incorporates:
     *  Constant: '<S5>/Const121'
     *  Constant: '<S5>/Const122'
     *  Constant: '<S5>/Const124'
     *  DataTypeConversion: '<S31>/Data Type Conversion12'
     *  DataTypeConversion: '<S31>/Data Type Conversion15'
     *  DataTypeConversion: '<S31>/Data Type Conversion17'
     *  DataTypeConversion: '<S31>/Data Type Conversion28'
     *  DataTypeConversion: '<S31>/Data Type Conversion6'
     *  DataTypeConversion: '<S502>/Data Type Conversion'
     *  Gain: '<S502>/Gain'
     *  SignalConversion generated from: '<S2>/VeGENR_e_stModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_ChrgTypeCmd'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd'
     */
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_LV_VActual_PT = (uint16)((sint32)
        fmodf(floorf(25.0F * rtb_Gain_ig), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_APM_TypeCtrl_PT = (uint8)
        rtb_TmpSignalConversionAtVeGE_g;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_Char_Main_Contac_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_b;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_DC_Chrgng_Cntct_K_Cmd_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_GFD_Inhibition_PT =
        rtb_TmpSignalConversionAtVeO_bk;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_RefTracHVBus_V_PT = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_RefTracHVBus_V_Vldty_PT =
        rtb_TmpSignalConversionAtVeHV_b;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BMS_HV_TracCntctr_Cmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_mh;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BPCM_OBCM_AC_ContactorCmd_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_BatteryVoltage_Raw_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_CRC_PT_ENERGY_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChargeEnRq_PT = false;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChargeInitialized_PT =
        rtb_TmpSignalConversionAtVeOB_a;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgCurrentLimit_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgCurrentRq_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgPwrLim_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgVoltMax_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DCChrgVoltMin_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_DC_Charge_Type_Command = (uint8)
        rtb_TmpSignalConversionAtVeOB_o;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_EVCU_Resp_AUX_LoadTurned_Off =
        rtb_TmpSignalConversionAtVeHP_d;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11.E_MC_PT_ENERGY_FD_1 = 0U;

    /* Outputs for Atomic SubSystem: '<S519>/Limiter1' */
    /* Switch: '<S528>/Switch1' incorporates:
     *  Constant: '<S519>/Constant Value1'
     *  RelationalOperator: '<S528>/Relational Operator'
     */
    if (24.8F < rtb_TmpSignalConversionAtVeGENR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 24.8F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeGENR;
    }

    /* End of Switch: '<S528>/Switch1' */

    /* Switch: '<S528>/Switch' incorporates:
     *  Constant: '<S519>/Constant Value2'
     *  RelationalOperator: '<S528>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S519>/Sum' */
        rtb_TmpSignalConversionAtVeGENR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S519>/Sum' */
        rtb_TmpSignalConversionAtVeGENR = 0.0F;
    }

    /* End of Switch: '<S528>/Switch' */
    /* End of Outputs for SubSystem: '<S519>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S520>/Limiter1' */
    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S520>/Constant Value1'
     *  RelationalOperator: '<S529>/Relational Operator'
     */
    if (20.4F < rtb_TmpSignalConversionAtVeGE_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 20.4F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeGE_m;
    }

    /* End of Switch: '<S529>/Switch1' */
    /* End of Outputs for SubSystem: '<S520>/Limiter1' */

    /* Switch: '<S32>/switch' incorporates:
     *  Constant: '<S521>/Constant Value1'
     *  RelationalOperator: '<S530>/Relational Operator'
     *  Switch: '<S530>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeGE_p)
    {
        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
         *  Constant: '<S32>/Constant'
         *  DataTypeConversion: '<S640>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VsetPoint_PT = 2047U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S521>/Limiter1' */
        if (20.46F < rtb_TmpSignalConversionAtVeGE_k)
        {
            /* Switch: '<S530>/Switch1' incorporates:
             *  Constant: '<S521>/Constant Value1'
             *  Gain: '<S521>/Gain'
             */
            rtb_TmpSignalConversionAtVeGE_m = 20.46F;
        }
        else
        {
            /* Gain: '<S521>/Gain' incorporates:
             *  Switch: '<S530>/Switch1'
             */
            rtb_TmpSignalConversionAtVeGE_m = rtb_TmpSignalConversionAtVeGE_k;
        }

        /* Switch: '<S530>/Switch' incorporates:
         *  Constant: '<S521>/Constant Value2'
         *  RelationalOperator: '<S530>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeGE_m <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeGE_m = 0.0F;
        }

        /* End of Switch: '<S530>/Switch' */
        /* End of Outputs for SubSystem: '<S521>/Limiter1' */

        /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
         *  DataTypeConversion: '<S521>/Data Type Conversion'
         *  DataTypeConversion: '<S640>/Data Type Conversion'
         *  Gain: '<S521>/Gain'
         */
        ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VsetPoint_PT = (uint16)
            ((sint32)fmodf(floorf(100.0F * rtb_TmpSignalConversionAtVeGE_m),
                           65536.0F));
    }

    /* End of Switch: '<S32>/switch' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion2'
     *  DataTypeConversion: '<S519>/Data Type Conversion'
     *  Gain: '<S519>/Gain'
     */
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_HV_IMax_PT = (uint8)((sint32)
        fmodf(floorf(1.25F * rtb_TmpSignalConversionAtVeGENR), 256.0F));
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_IMax_PT = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeMT_n)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeMT_n))));

    /* Outputs for Atomic SubSystem: '<S520>/Limiter1' */
    /* Switch: '<S529>/Switch' incorporates:
     *  Constant: '<S520>/Constant Value2'
     *  RelationalOperator: '<S529>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S529>/Switch' */
    /* End of Outputs for SubSystem: '<S520>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_ENERGY_FD_1_FD5' incorporates:
     *  Constant: '<S5>/Const226'
     *  Constant: '<S5>/Const227'
     *  Constant: '<S5>/Const229'
     *  DataTypeConversion: '<S31>/Data Type Conversion12'
     *  DataTypeConversion: '<S31>/Data Type Conversion28'
     *  DataTypeConversion: '<S31>/Data Type Conversion6'
     *  DataTypeConversion: '<S32>/Data Type Conversion11'
     *  DataTypeConversion: '<S32>/Data Type Conversion9'
     *  DataTypeConversion: '<S520>/Data Type Conversion'
     *  Gain: '<S520>/Gain'
     *  SignalConversion generated from: '<S2>/VeGENR_e_stModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_ChrgTypeCmd'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_DC_CntctrCmd'
     */
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_LV_VActual_PT = (uint16)((sint32)
        fmodf(floorf(25.0F * rtb_Gain_ig), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_APM_TypeCtrl_PT = (uint8)
        rtb_TmpSignalConversionAtVeGE_g;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_Char_Main_Contac_Cmd_PT =
        (uint8)rtb_TmpSignalConversionAtVeOB_b;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_DC_Chrgng_Cntct_K_Cmd_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_GFD_Inhibition_PT =
        rtb_TmpSignalConversionAtVeO_bk;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_RefTracHVBus_V_PT = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_RefTracHVBus_V_Vldty_PT =
        rtb_TmpSignalConversionAtVeHV_b;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BMS_HV_TracCntctr_Cmd_PT = (uint8)
        rtb_TmpSignalConversionAtVeS_mh;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BPCM_OBCM_AC_ContactorCmd_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_BatteryVoltage_Raw_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_CRC_PT_ENERGY_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChargeEnRq_PT = false;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChargeInitialized_PT =
        rtb_TmpSignalConversionAtVeOB_a;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgCurrentLimit_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgCurrentRq_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgPwrLim_PT = 815U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgVoltMax_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DCChrgVoltMin_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_DC_Charge_Type_Command = (uint8)
        rtb_TmpSignalConversionAtVeOB_o;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_EVCU_Resp_AUX_LoadTurned_Off =
        rtb_TmpSignalConversionAtVeHP_d;
    ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5.E_MC_PT_ENERGY_FD_1 = 0U;

    /* DataTypeConversion: '<S537>/Data Type Conversion3' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion4'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD14_VeCSVReTHARespEVCU2

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)rtb_TmpSignalConversionAtVeCS_f;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S33>/Const4'
     *  DataTypeConversion: '<S33>/Data Type Conversion4'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S537>/Data Type Conversion3' */

    /* DataTypeConversion: '<S538>/Data Type Conversion5' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion6'
     *  Inport: '<Root>/VeCSVR_e_TRSC_RespEVCU2'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD14_VeCSVReTRSCRespEVCU2

    (void)Rte_Read_VeCSVR_e_TRSC_RespEVCU2_Value(&tmpRead_1n);

    /* DataTypeConversion: '<S35>/Data Type Conversion2' incorporates:
     *  Inport: '<Root>/VeCSVR_e_TRSC_RespEVCU2'
     */
    rtb_DataTypeConversion2_h = (uint8)tmpRead_1n;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion2' incorporates:
     *  Constant: '<S33>/Const6'
     *  DataTypeConversion: '<S33>/Data Type Conversion6'
     */
    rtb_DataTypeConversion2_h = 0U;

#endif

    /* End of DataTypeConversion: '<S538>/Data Type Conversion5' */

    /* Outputs for Atomic SubSystem: '<S539>/Limiter1' */
    /* Switch: '<S543>/Switch1' incorporates:
     *  Constant: '<S539>/Constant Value1'
     *  RelationalOperator: '<S543>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 99.568F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S543>/Switch1' */

    /* Switch: '<S543>/Switch' incorporates:
     *  Constant: '<S539>/Constant Value2'
     *  RelationalOperator: '<S543>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S539>/Sum' */
        rtb_TmpSignalConversionAtVeGE_f = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S539>/Sum' */
        rtb_TmpSignalConversionAtVeGE_f = 0.0F;
    }

    /* End of Switch: '<S543>/Switch' */
    /* End of Outputs for SubSystem: '<S539>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S540>/Limiter1' */
    /* Switch: '<S544>/Switch1' incorporates:
     *  Constant: '<S540>/Constant Value1'
     *  RelationalOperator: '<S544>/Relational Operator'
     */
    if (101.6F < rtb_TmpSignalConversionAtVeS_ca)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 101.6F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_ca;
    }

    /* End of Switch: '<S544>/Switch1' */

    /* Switch: '<S544>/Switch' incorporates:
     *  Constant: '<S540>/Constant Value2'
     *  RelationalOperator: '<S544>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S540>/Sum' */
        rtb_TmpSignalConversionAtVeHVTR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S540>/Sum' */
        rtb_TmpSignalConversionAtVeHVTR = 0.0F;
    }

    /* End of Switch: '<S544>/Switch' */
    /* End of Outputs for SubSystem: '<S540>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S541>/Limiter1' */
    /* Switch: '<S545>/Switch1' incorporates:
     *  Constant: '<S541>/Constant Value1'
     *  RelationalOperator: '<S545>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAPSR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 5.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAPSR;
    }

    /* End of Switch: '<S545>/Switch1' */

    /* Switch: '<S545>/Switch' incorporates:
     *  Constant: '<S541>/Constant Value2'
     *  RelationalOperator: '<S545>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S541>/Sum' */
        rtb_TmpSignalConversionAtVeGE_m = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S541>/Sum' */
        rtb_TmpSignalConversionAtVeGE_m = 0.0F;
    }

    /* End of Switch: '<S545>/Switch' */
    /* End of Outputs for SubSystem: '<S541>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S542>/Limiter1' */
    /* Switch: '<S546>/Switch1' incorporates:
     *  Constant: '<S542>/Constant Value1'
     *  RelationalOperator: '<S546>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAP_f)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 5.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAP_f;
    }

    /* End of Switch: '<S546>/Switch1' */
    /* End of Outputs for SubSystem: '<S542>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD14' incorporates:
     *  Constant: '<S33>/CRC_PT_SYSTEM_FD_1'
     *  DataTypeConversion: '<S33>/Data Type Conversion10'
     *  DataTypeConversion: '<S33>/Data Type Conversion9'
     *  DataTypeConversion: '<S539>/Data Type Conversion'
     *  DataTypeConversion: '<S540>/Data Type Conversion'
     *  DataTypeConversion: '<S541>/Data Type Conversion'
     *  Gain: '<S539>/Gain'
     *  Gain: '<S540>/Gain'
     *  Gain: '<S541>/Gain'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeH_pt;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_EVCU2_THA_Resp =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_EVCU2_TRSC_Resp =
        rtb_DataTypeConversion2_h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_oq;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GasPedalPosition_PT = (uint8)
        ((sint32)fmodf(floorf(2.55102038F * rtb_TmpSignalConversionAtVeGE_f),
                       256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_f;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_ISASts_PT =
        rtb_TmpSignalConversionAtVeAS_b;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_PdlPosActual_PT = (uint8)((sint32)
        fmodf(floorf(2.5F * rtb_TmpSignalConversionAtVeHVTR), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_Propulsion_ADAS_Inhibit =
        rtb_TmpSignalConversionAtVeT_gf;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_RawPVS1_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_TmpSignalConversionAtVeGE_m), 256.0F));

    /* Outputs for Atomic SubSystem: '<S542>/Limiter1' */
    /* Switch: '<S546>/Switch' incorporates:
     *  Constant: '<S542>/Constant Value2'
     *  RelationalOperator: '<S546>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S546>/Switch' */
    /* End of Outputs for SubSystem: '<S542>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD14' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion18'
     *  DataTypeConversion: '<S33>/Data Type Conversion19'
     *  DataTypeConversion: '<S33>/Data Type Conversion20'
     *  DataTypeConversion: '<S542>/Data Type Conversion'
     *  Gain: '<S542>/Gain'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_RawPVS2_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_Gain_ig), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_l;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_SpeedLimitSts_PT = (uint8)
        rtb_TmpSignalConversionAtVeASLR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14.E_TargetGear_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_j;

    /* Outputs for Atomic SubSystem: '<S556>/Limiter1' */
    /* Switch: '<S562>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value1'
     *  RelationalOperator: '<S562>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 99.568F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S562>/Switch1' */

    /* Switch: '<S562>/Switch' incorporates:
     *  Constant: '<S556>/Constant Value2'
     *  RelationalOperator: '<S562>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S562>/Switch' */
    /* End of Outputs for SubSystem: '<S556>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD16' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion5'
     *  DataTypeConversion: '<S556>/Data Type Conversion'
     *  Gain: '<S556>/Gain'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_GasPedalPosition_PT = (uint8)
        ((sint32)fmodf(floorf(2.55102038F * rtb_Gain_ig), 256.0F));

    /* DataTypeConversion: '<S547>/Data Type Conversion13' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion14'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHCPFuelDisable

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeESSR;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S34>/Const14'
     *  DataTypeConversion: '<S34>/Data Type Conversion14'
     */
    rtb_VariantMerge_For_Variant_ks = true;

#endif

    /* End of DataTypeConversion: '<S547>/Data Type Conversion13' */

    /* DataTypeConversion: '<S548>/Data Type Conversion15' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion16'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbHybProducingTorque

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' */
    rtb_E_PopUpMessage1 = rtb_TmpSignalConversionAtVeES_g;

#else

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S34>/Const16'
     *  DataTypeConversion: '<S34>/Data Type Conversion16'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S548>/Data Type Conversion15' */

    /* DataTypeConversion: '<S549>/Data Type Conversion18' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion17'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeTRNRbInertiaTrqActv

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Inport: '<Root>/VeTRNR_b_InertiaTrqActv'
     */
    (void)Rte_Read_VeTRNR_b_InertiaTrqActv_Value
        (&rtb_VariantMerge_For_Variant__p);

#else

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Constant: '<S34>/Const17'
     *  DataTypeConversion: '<S34>/Data Type Conversion17'
     */
    rtb_VariantMerge_For_Variant__p = false;

#endif

    /* End of DataTypeConversion: '<S549>/Data Type Conversion18' */

    /* DataTypeConversion: '<S550>/Data Type Conversion20' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion21'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSRbOptimdEngOnOffCmd

    /* VariantMerge generated from: '<S34>/Vrnt_OptimdEngOnOffCmd' */
    rtb_VariantMerge_For_Variant__h = rtb_TmpSignalConversionAtVeE_py;

#else

    /* VariantMerge generated from: '<S34>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Constant: '<S34>/Const21'
     *  DataTypeConversion: '<S34>/Data Type Conversion21'
     */
    rtb_VariantMerge_For_Variant__h = false;

#endif

    /* End of DataTypeConversion: '<S550>/Data Type Conversion20' */

    /* DataTypeConversion: '<S551>/Data Type Conversion22' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion23'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdEngStrtStpType

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)rtb_TmpSignalConversionAtVeES_m;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S34>/Const23'
     *  DataTypeConversion: '<S34>/Data Type Conversion23'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S551>/Data Type Conversion22' */

    /* DataTypeConversion: '<S552>/Data Type Conversion24' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion25'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeESSReOptimdStrtReqdActr

    /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr'
     */
    rtb_DataTypeConversion_aa = (uint8)rtb_TmpSignalConversionAtVeES_e;

#else

    /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
     *  Constant: '<S34>/Const25'
     *  DataTypeConversion: '<S34>/Data Type Conversion25'
     */
    rtb_DataTypeConversion_aa = 0U;

#endif

    /* End of DataTypeConversion: '<S552>/Data Type Conversion24' */

    /* Sum: '<S563>/Sum' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion34'
     *  DataTypeConversion: '<S563>/Data Type Conversion'
     *  Gain: '<S563>/Gain'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeCSVRnWhlSpdLHR

    /* Outputs for Atomic SubSystem: '<S563>/Limiter1' */
    /* Switch: '<S564>/Switch1' incorporates:
     *  Constant: '<S563>/Constant Value1'
     *  RelationalOperator: '<S564>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeCSVR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S564>/Switch1' */

    /* Switch: '<S564>/Switch' incorporates:
     *  Constant: '<S563>/Constant Value2'
     *  RelationalOperator: '<S564>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S564>/Switch' */

    /* DataTypeConversion: '<S597>/Data Type Conversion' */
    rtb_DataTypeConversion_am = (uint16)((sint32)fmodf(floorf(16.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S563>/Limiter1' */
#else

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S34>/Const34'
     *  DataTypeConversion: '<S34>/Data Type Conversion34'
     */
    rtb_DataTypeConversion_am = 0U;

#endif

    /* End of Sum: '<S563>/Sum' */

    /* Sum: '<S565>/Sum' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion36'
     *  DataTypeConversion: '<S565>/Data Type Conversion'
     *  Gain: '<S565>/Gain'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD16_VeCSVRnWhlSpdRHR

    /* Outputs for Atomic SubSystem: '<S565>/Limiter1' */
    /* Switch: '<S566>/Switch1' incorporates:
     *  Constant: '<S565>/Constant Value1'
     *  RelationalOperator: '<S566>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeCS_h)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeCS_h;
    }

    /* End of Switch: '<S566>/Switch1' */

    /* Switch: '<S566>/Switch' incorporates:
     *  Constant: '<S565>/Constant Value2'
     *  RelationalOperator: '<S566>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S566>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf(16.0F *
        rtb_Gain_ig), 65536.0F));

    /* End of Outputs for SubSystem: '<S565>/Limiter1' */
#else

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S34>/Const36'
     *  DataTypeConversion: '<S34>/Data Type Conversion36'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of Sum: '<S565>/Sum' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCCTR_v_CcCntrlSpd_Cluster_MPH' */
    (void)Rte_Read_VeCCTR_v_CcCntrlSpd_Cluster_MPH_Value(&rtb_Switch_hp);

    /* Inport: '<Root>/VeADCR_e_AWDSysStat' */
    (void)Rte_Read_VeADCR_e_AWDSysStat_Value(&tmpRead_r);

    /* Inport: '<Root>/VeSRMR_b_AHH_ModifyAccel_Req' */
    (void)Rte_Read_VeSRMR_b_AHH_ModifyAccel_Req_Value(&tmpRead_q);

    /* Inport: '<Root>/VeSRMR_e_AHH_ApplyRelease_Req' */
    (void)Rte_Read_VeSRMR_e_AHH_ApplyRelease_Req_Value(&tmpRead_p);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD16' incorporates:
     *  Constant: '<S5>/Const198'
     *  Constant: '<S5>/Const199'
     *  Constant: '<S5>/Const200'
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  DataTypeConversion: '<S34>/Data Type Conversion10'
     *  DataTypeConversion: '<S34>/Data Type Conversion3'
     *  DataTypeConversion: '<S34>/Data Type Conversion30'
     *  DataTypeConversion: '<S34>/Data Type Conversion31'
     *  DataTypeConversion: '<S34>/Data Type Conversion9'
     *  SignalConversion generated from: '<S2>/VeHMIR_e_TerrainModeStat'
     *  SignalConversion generated from: '<S2>/VeTIMR_e_CustomDrvMdSts'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_APCM_Rq_PT = (uint8)
        rtb_TmpSignalConversionAtVeT_ip;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_Custom_DrvMdSts_PT = (uint8)
        rtb_TmpSignalConversionAtVeTIMR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_EM_max_Trqdyn_P = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_EM_min_Trqdyn_P = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_EOPB_Min_Oil_FlwRate_Rq = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_oq;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_f;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_GearIndicationSts_PT =
        rtb_TmpSignalConversionAtVeTR_h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_Gear_Rq = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_HCPFuelDisable =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_Hyb_ProducingTorque =
        rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_Inertia_Torque_Active =
        rtb_VariantMerge_For_Variant__p;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_OptimdEngOnOffCmd =
        rtb_VariantMerge_For_Variant__h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_OptimdEngStrtStpType =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_OptimdStrtReqdActr =
        rtb_DataTypeConversion_aa;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_PropulsionSystemActive_PT = false;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_R_SHFT_LOCK_PT =
        rtb_TmpSignalConversionAtVeT_hw;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_ShiftLeverLockReq_PT =
        rtb_TmpSignalConversionAtVeT_op;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_l;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_TerrainModeStat_PT = (uint8)
        rtb_TmpSignalConversionAtVeHM_h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_Transm_Torq_Feedback = false;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_TransmissionFailSts_PT =
        rtb_TmpSignalConversionAtVeT_o5;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_WheelSpeedRearLeft =
        rtb_DataTypeConversion_am;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16.E_WheelSpeedRearRight =
        rtb_DataTypeConversion_pz;

    /* Outputs for Atomic SubSystem: '<S569>/Limiter1' */
    /* Switch: '<S577>/Switch1' incorporates:
     *  Constant: '<S569>/Constant Value1'
     *  RelationalOperator: '<S577>/Relational Operator'
     */
    if (1217.0F < rtb_TmpSignalConversionAtVePLTR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1217.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVePLTR;
    }

    /* End of Switch: '<S577>/Switch1' */

    /* Switch: '<S577>/Switch' incorporates:
     *  Constant: '<S569>/Constant Value2'
     *  RelationalOperator: '<S577>/Relational Operator1'
     */
    if (rtb_Gain_ig > 300.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = 300.0F;
    }

    /* End of Switch: '<S577>/Switch' */
    /* End of Outputs for SubSystem: '<S569>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S571>/Limiter1' */
    /* Switch: '<S579>/Switch1' incorporates:
     *  Constant: '<S571>/Constant Value1'
     *  RelationalOperator: '<S579>/Relational Operator'
     */
    if (511.875F < rtb_TmpSignalConversionAtVeCCTR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.875F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeCCTR;
    }

    /* End of Switch: '<S579>/Switch1' */

    /* Switch: '<S579>/Switch' incorporates:
     *  Constant: '<S571>/Constant Value2'
     *  RelationalOperator: '<S579>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S571>/Sum' */
        rtb_TmpSignalConversionAtVeCCTR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S571>/Sum' */
        rtb_TmpSignalConversionAtVeCCTR = 0.0F;
    }

    /* End of Switch: '<S579>/Switch' */
    /* End of Outputs for SubSystem: '<S571>/Limiter1' */

    /* DataTypeConversion: '<S567>/Data Type Conversion16' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion15'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeTIMReCustomDrvMdSts

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  SignalConversion generated from: '<S2>/VeTIMR_e_CustomDrvMdSts'
     */
    rtb_VariantMerge_For_Variant_hn = (uint8)rtb_TmpSignalConversionAtVeTIMR;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S35>/Const15'
     *  DataTypeConversion: '<S35>/Data Type Conversion15'
     */
    rtb_VariantMerge_For_Variant_hn = 0U;

#endif

    /* End of DataTypeConversion: '<S567>/Data Type Conversion16' */

    /* DataTypeConversion: '<S568>/Data Type Conversion22' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion23'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeCSVReTHARespEVCU2

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2'
     */
    rtb_VariantMerge_For_Variant__k = (uint8)rtb_TmpSignalConversionAtVeCS_f;

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S35>/Const23'
     *  DataTypeConversion: '<S35>/Data Type Conversion23'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of DataTypeConversion: '<S568>/Data Type Conversion22' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHMIR_e_TerrainModeDesiredStat' */
    (void)Rte_Read_VeHMIR_e_TerrainModeDesiredStat_Value(&tmpRead_u);

    /* Inport: '<Root>/VeTRGR_e_SecureIdle_HMI' */
    (void)Rte_Read_VeTRGR_e_SecureIdle_HMI_Value(&tmpRead_t);

    /* Inport: '<Root>/VeDMIR_e_PaddleModeSts' */
    (void)Rte_Read_VeDMIR_e_PaddleModeSts_Value(&tmpRead_s);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S572>/Limiter1' */
    /* Switch: '<S580>/Switch1' incorporates:
     *  Constant: '<S572>/Constant Value1'
     *  RelationalOperator: '<S580>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 99.568F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S580>/Switch1' */

    /* Switch: '<S580>/Switch' incorporates:
     *  Constant: '<S572>/Constant Value2'
     *  RelationalOperator: '<S580>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S572>/Sum' */
        rtb_TmpSignalConversionAtVeCSVR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S572>/Sum' */
        rtb_TmpSignalConversionAtVeCSVR = 0.0F;
    }

    /* End of Switch: '<S580>/Switch' */
    /* End of Outputs for SubSystem: '<S572>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S573>/Limiter1' */
    /* Switch: '<S581>/Switch1' incorporates:
     *  Constant: '<S573>/Constant Value1'
     *  RelationalOperator: '<S581>/Relational Operator'
     */
    if (101.6F < rtb_TmpSignalConversionAtVeS_ca)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 101.6F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_ca;
    }

    /* End of Switch: '<S581>/Switch1' */

    /* Switch: '<S581>/Switch' incorporates:
     *  Constant: '<S573>/Constant Value2'
     *  RelationalOperator: '<S581>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S573>/Sum' */
        rtb_TmpSignalConversionAtVeS_ca = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S573>/Sum' */
        rtb_TmpSignalConversionAtVeS_ca = 0.0F;
    }

    /* End of Switch: '<S581>/Switch' */
    /* End of Outputs for SubSystem: '<S573>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S574>/Limiter1' */
    /* Switch: '<S582>/Switch1' incorporates:
     *  Constant: '<S574>/Constant Value1'
     *  RelationalOperator: '<S582>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAPSR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 5.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAPSR;
    }

    /* End of Switch: '<S582>/Switch1' */

    /* Switch: '<S582>/Switch' incorporates:
     *  Constant: '<S574>/Constant Value2'
     *  RelationalOperator: '<S582>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S574>/Sum' */
        rtb_TmpSignalConversionAtVeAPSR = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S574>/Sum' */
        rtb_TmpSignalConversionAtVeAPSR = 0.0F;
    }

    /* End of Switch: '<S582>/Switch' */
    /* End of Outputs for SubSystem: '<S574>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S575>/Limiter1' */
    /* Switch: '<S583>/Switch1' incorporates:
     *  Constant: '<S575>/Constant Value1'
     *  RelationalOperator: '<S583>/Relational Operator'
     */
    if (5.0F < rtb_TmpSignalConversionAtVeAP_f)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 5.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAP_f;
    }

    /* End of Switch: '<S583>/Switch1' */
    /* End of Outputs for SubSystem: '<S575>/Limiter1' */

    /* DataTypeConversion: '<S576>/Data Type Conversion52' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion51'
     *  Inport: '<Root>/VeTIMR_e_CustomScreenRqst'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD3_VeTIMReCustomScreenRqst

    (void)Rte_Read_VeTIMR_e_CustomScreenRqst_Value(&tmpRead_v);

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Inport: '<Root>/VeTIMR_e_CustomScreenRqst'
     */
    rtb_DataTypeConversion65_b = (uint8)tmpRead_v;

#else

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Constant: '<S35>/Const51'
     *  DataTypeConversion: '<S35>/Data Type Conversion51'
     */
    rtb_DataTypeConversion65_b = 0U;

#endif

    /* End of DataTypeConversion: '<S576>/Data Type Conversion52' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Inport: '<Root>/VeADCR_i_WEDAxleStat_CAN'
     *  Inport: '<Root>/VeAPSR_b_Lv1PvBrkActive'
     */
    (void)Rte_Read_VeAPSR_b_Lv1PvBrkActive_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Warn_BTO_PT);
    (void)Rte_Read_VeADCR_i_WEDAxleStat_CAN_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_WED_STATUS);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeASLR_e_DrvMdOvrrdKickdownSt' */
    (void)Rte_Read_VeASLR_e_DrvMdOvrrdKickdownSt_Value(&tmpRead_z);

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&tmpRead_y);

    /* Inport: '<Root>/VeHMIR_e_TransWarn2' */
    (void)Rte_Read_VeHMIR_e_TransWarn2_Value(&tmpRead_x);

    /* Inport: '<Root>/VeHMIR_e_TerrainHMIRq' */
    (void)Rte_Read_VeHMIR_e_TerrainHMIRq_Value(&tmpRead_w);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Constant: '<S569>/Constant Value'
     *  Constant: '<S5>/Const33'
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     *  DataTypeConversion: '<S35>/Data Type Conversion2'
     *  DataTypeConversion: '<S35>/Data Type Conversion5'
     *  DataTypeConversion: '<S569>/Data Type Conversion'
     *  DataTypeConversion: '<S571>/Data Type Conversion'
     *  Gain: '<S569>/Gain'
     *  Gain: '<S571>/Gain'
     *  Inport: '<Root>/VeADCR_e_AWDSysStat'
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     *  Inport: '<Root>/VeCCTR_b_CcLampSts'
     *  Inport: '<Root>/VeGENR_b_SrvcBattReChrgFlSts'
     *  Inport: '<Root>/VeHMIR_b_DrvAwayAlt'
     *  Inport: '<Root>/VeHMIR_b_DrvAwayIn'
     *  Inport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts'
     *  Inport: '<Root>/VeTRGR_b_AutoPark_DAI'
     *  Inport: '<Root>/VeTRGR_b_ParkingFailSts'
     *  Inport: '<Root>/VeTRGR_b_ParkingSts'
     *  Inport: '<Root>/VeTRGR_e_SecureIdleSts'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq'
     *  Sum: '<S569>/Sum'
     */
    (void)Rte_Read_VeTIMR_b_Selector_Sys_Fail_Sts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Selector_SystemFailSts_PT);
    (void)Rte_Read_VeTRGR_e_SecureIdleSts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Secure_Idle_Sts_EV);
    (void)Rte_Read_VeTRGR_b_ParkingSts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ParkingSts_PT);
    (void)Rte_Read_VeTRGR_b_ParkingFailSts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ParkingFailSts_PT);
    (void)Rte_Read_VeTRGR_b_AutoPark_DAI_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ESS_RqShftPark_PT);
    (void)Rte_Read_VeHMIR_b_DrvAwayIn_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DrvAway_Inhibit_PT);
    (void)Rte_Read_VeHMIR_b_DrvAwayAlt_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DrvAway_Alert_PT);
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CruiseControlSts_PT);
    (void)Rte_Read_VeCCTR_b_CcLampSts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CruiseControlLampSts_PT);
    (void)Rte_Read_VeGENR_b_SrvcBattReChrgFlSts_Value
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AlternatorFail_PT);
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AHH_Apply_Release_Rqst = (uint8)
        tmpRead_p;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AHH_Modify_Accel_Rq = tmpRead_q ?
        ((uint8)1) : ((uint8)0);
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_APCM_Rq_PT = (uint8)
        rtb_TmpSignalConversionAtVeT_ip;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AWD_Status_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AWD_SysStat = (uint8)tmpRead_r;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_AtmosphericPressure_PT = (uint8)
        ((sint32)fmodf(floorf(0.277777791F * (rtb_TmpSignalConversionAtVeWTAR -
            300.0F)), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_BPCM_HV_SOC1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CC_SetSpdDspl_KPH_PT = (uint16)
        ((sint32)fmodf(floorf(16.0F * rtb_TmpSignalConversionAtVeCCTR), 65536.0F));

    /* DataTypeConversion: '<S35>/Data Type Conversion10' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(rtb_Switch_hp), 256.0F);

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  Constant: '<S5>/Const36'
     *  Constant: '<S5>/Const37'
     *  Constant: '<S5>/Const38'
     *  DataTypeConversion: '<S35>/Data Type Conversion10'
     *  DataTypeConversion: '<S35>/Data Type Conversion26'
     *  DataTypeConversion: '<S35>/Data Type Conversion27'
     *  DataTypeConversion: '<S35>/Data Type Conversion33'
     *  DataTypeConversion: '<S572>/Data Type Conversion'
     *  DataTypeConversion: '<S573>/Data Type Conversion'
     *  DataTypeConversion: '<S574>/Data Type Conversion'
     *  Gain: '<S572>/Gain'
     *  Gain: '<S573>/Gain'
     *  Gain: '<S574>/Gain'
     *  Inport: '<Root>/VeDMIR_e_PaddleModeSts'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CC_SetSpdDspl_MPH_PT = (uint8)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)
            ((sint32)(-((sint32)((sint8)((uint8)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint8)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_CrankEnable_PT =
        rtb_TmpSignalConversionAtVeT_hx;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Custom_DrvMdSts_PT =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeH_pt;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_DriverPowerReq_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_EVCU2_THA_Resp =
        rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_oq;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GasPedalPosition_PT = (uint8)((sint32)
        fmodf(floorf(2.55102038F * rtb_TmpSignalConversionAtVeCSVR), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_f;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_GearIndicationSts_PT =
        rtb_TmpSignalConversionAtVeTR_h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_HAS_SoH_PT = false;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_HP_Mode_Sts_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ISASts_PT =
        rtb_TmpSignalConversionAtVeAS_b;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PaddleModests_PT = (uint8)tmpRead_s;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PdlPosActual_PT = (uint8)((sint32)
        fmodf(floorf(2.5F * rtb_TmpSignalConversionAtVeS_ca), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_PropulsionSystemActive_PT = false;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Propulsion_ADAS_Inhibit =
        rtb_TmpSignalConversionAtVeT_gf;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_R_SHFT_LOCK_PT =
        rtb_TmpSignalConversionAtVeT_hw;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_RawPVS1_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_TmpSignalConversionAtVeAPSR), 256.0F));

    /* Outputs for Atomic SubSystem: '<S575>/Limiter1' */
    /* Switch: '<S583>/Switch' incorporates:
     *  Constant: '<S575>/Constant Value2'
     *  RelationalOperator: '<S583>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S583>/Switch' */
    /* End of Outputs for SubSystem: '<S575>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD3' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion31'
     *  DataTypeConversion: '<S35>/Data Type Conversion43'
     *  DataTypeConversion: '<S35>/Data Type Conversion47'
     *  DataTypeConversion: '<S35>/Data Type Conversion48'
     *  DataTypeConversion: '<S35>/Data Type Conversion49'
     *  DataTypeConversion: '<S35>/Data Type Conversion50'
     *  DataTypeConversion: '<S35>/Data Type Conversion54'
     *  DataTypeConversion: '<S35>/Data Type Conversion56'
     *  DataTypeConversion: '<S35>/Data Type Conversion57'
     *  DataTypeConversion: '<S35>/Data Type Conversion58'
     *  DataTypeConversion: '<S35>/Data Type Conversion59'
     *  DataTypeConversion: '<S575>/Data Type Conversion'
     *  Gain: '<S575>/Gain'
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     *  Inport: '<Root>/VeHMIR_e_TerrainHMIRq'
     *  Inport: '<Root>/VeHMIR_e_TerrainModeDesiredStat'
     *  Inport: '<Root>/VeHMIR_e_TransWarn2'
     *  Inport: '<Root>/VeTRGR_e_SecureIdle_HMI'
     *  SignalConversion generated from: '<S2>/VeHMIR_e_TerrainModeStat'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_RawPVS2_PT = (uint8)((sint32)fmodf
        (floorf(51.0001106F * rtb_Gain_ig), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Secure_Idle_HMI_EV = (uint8)tmpRead_t;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ShiftLeverLockReq_PT =
        rtb_TmpSignalConversionAtVeT_op;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_ShiftLeverPosition_PT = (uint8)
        rtb_TmpSignalConversionAtVeSR_l;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_SpeedLimitSts_PT = (uint8)
        rtb_TmpSignalConversionAtVeASLR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TargetGear_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_j;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TerrainModeDesiredStat_PT = (uint8)
        tmpRead_u;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TerrainModeInterfaceButton_PT =
        rtb_DataTypeConversion65_b;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TerrainModeStat_PT = (uint8)
        rtb_TmpSignalConversionAtVeHM_h;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Terrain_HMI_Rq_PT = (uint8)tmpRead_w;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TransmissionFailSts_PT =
        rtb_TmpSignalConversionAtVeT_o5;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TransmissionWarnings_PT = (uint8)
        tmpRead_x;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_TurtleModeSts_PT = (uint8)tmpRead_y;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_VehSpd_Overridden_PT = (uint8)
        tmpRead_z;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3.E_Vehicle_Hold_Rq_PT = (((sint32)
        rtb_TmpSignalConversionAtVeS_lp) != 0);

    /* Outputs for Atomic SubSystem: '<S589>/Limiter1' */
    /* Switch: '<S590>/Switch1' incorporates:
     *  Constant: '<S589>/Constant Value1'
     *  RelationalOperator: '<S590>/Relational Operator'
     */
    if (99.568F < rtb_TmpSignalConversionAtVeDTRR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 99.568F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* End of Switch: '<S590>/Switch1' */
    /* End of Outputs for SubSystem: '<S589>/Limiter1' */

    /* DataTypeConversion: '<S584>/Data Type Conversion7' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion8'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHCPFuelDisable

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeESSR;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S36>/Const8'
     *  DataTypeConversion: '<S36>/Data Type Conversion8'
     */
    rtb_VariantMerge_For_Variant_ks = true;

#endif

    /* End of DataTypeConversion: '<S584>/Data Type Conversion7' */

    /* DataTypeConversion: '<S585>/Data Type Conversion9' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion10'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbHybProducingTorque

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' */
    rtb_E_PopUpMessage1 = rtb_TmpSignalConversionAtVeES_g;

#else

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S36>/Const10'
     *  DataTypeConversion: '<S36>/Data Type Conversion10'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S585>/Data Type Conversion9' */

    /* DataTypeConversion: '<S586>/Data Type Conversion12' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion13'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSRbOptimdEngOnOffCmd

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' */
    rtb_VariantMerge_For_Variant__p = rtb_TmpSignalConversionAtVeE_py;

#else

    /* VariantMerge generated from: '<S36>/Vrnt_OptimdEngOnOffCmd' incorporates:
     *  Constant: '<S36>/Const13'
     *  DataTypeConversion: '<S36>/Data Type Conversion13'
     */
    rtb_VariantMerge_For_Variant__p = false;

#endif

    /* End of DataTypeConversion: '<S586>/Data Type Conversion12' */

    /* DataTypeConversion: '<S587>/Data Type Conversion14' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion15'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdEngStrtStpType

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdEngStrtStpType'
     */
    rtb_DataTypeConversion65_b = (uint8)rtb_TmpSignalConversionAtVeES_m;

#else

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Constant: '<S36>/Const15'
     *  DataTypeConversion: '<S36>/Data Type Conversion15'
     */
    rtb_DataTypeConversion65_b = 0U;

#endif

    /* End of DataTypeConversion: '<S587>/Data Type Conversion14' */

    /* DataTypeConversion: '<S588>/Data Type Conversion16' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion17'
     */
#if Rte_SysCon_VrntST2B_PTSYSTEMFD1FD5_VeESSReOptimdStrtReqdActr

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  SignalConversion generated from: '<S2>/VeESSR_e_OptimdStrtReqdActr'
     */
    rtb_VariantMerge_For_Variant__k = (uint8)rtb_TmpSignalConversionAtVeES_e;

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S36>/Const17'
     *  DataTypeConversion: '<S36>/Data Type Conversion17'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of DataTypeConversion: '<S588>/Data Type Conversion16' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD5' incorporates:
     *  Constant: '<S36>/CRC_PT_SYSTEM_FD_1'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_CRC_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_DriveReady_PT =
        rtb_TmpSignalConversionAtVeH_pt;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GasPedalPositionFailSts_PT =
        rtb_TmpSignalConversionAtVeS_oq;

    /* Outputs for Atomic SubSystem: '<S589>/Limiter1' */
    /* Switch: '<S590>/Switch' incorporates:
     *  Constant: '<S589>/Constant Value2'
     *  RelationalOperator: '<S590>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S590>/Switch' */
    /* End of Outputs for SubSystem: '<S589>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_SYSTEM_FD_1_FD5' incorporates:
     *  Constant: '<S5>/Const235'
     *  Constant: '<S5>/Const236'
     *  DataTypeConversion: '<S36>/Data Type Conversion5'
     *  DataTypeConversion: '<S36>/Data Type Conversion6'
     *  DataTypeConversion: '<S589>/Data Type Conversion'
     *  Gain: '<S589>/Gain'
     */
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GasPedalPosition_PT = (uint8)((sint32)
        fmodf(floorf(2.55102038F * rtb_Gain_ig), 256.0F));
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GearEngagedForDisplay_PT = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_GearEngaged_PT = (uint8)
        rtb_TmpSignalConversionAtVeTR_f;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_HCPFuelDisable =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_Hyb_ProducingTorque =
        rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_MessageCounter_PT_SYSTEM_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdEngOnOffCmd =
        rtb_VariantMerge_For_Variant__p;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdEngStrtStpType =
        rtb_DataTypeConversion65_b;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_OptimdStrtReqdActr =
        rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_PowertrainPrplsnActv_PT =
        rtb_TmpSignalConversionAtVeHPMR;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_PropulsionMode_PT = 0U;
    ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5.E_PropulsionSystemActive_PT = false;

    /* BusCreator: '<S5>/BusTRANSM_FD_1_FD3' incorporates:
     *  Constant: '<S5>/Const43'
     *  Constant: '<S5>/Const48'
     *  Constant: '<S5>/Const50'
     *  Constant: '<S5>/Const51'
     *  Constant: '<S5>/Const52'
     *  Constant: '<S5>/Const53'
     *  Constant: '<S5>/Const54'
     *  Constant: '<S5>/Const55'
     *  Constant: '<S5>/Const58'
     *  Constant: '<S5>/Const59'
     *  Constant: '<S5>/Const62'
     *  Constant: '<S5>/Const63'
     *  Constant: '<S5>/Const64'
     *  Constant: '<S5>/Const65'
     *  DataTypeConversion: '<S41>/Data Type Conversion17'
     *  DataTypeConversion: '<S41>/Data Type Conversion29'
     */
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_CODE_CLR_TCM = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_CRC_TRANSM1 = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_CrankEnable_Fast =
        rtb_TmpSignalConversionAtVeT_hx;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_DriveLineRatio = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_EngTrq_Rq_TCM = 2046U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_EngTrq_Rq_TCM_Prdtd = 2046U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_MaxTrqDes = 2046U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_MessageCounter_TRANSM1 = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_PaddleShiftRequest = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_PumpTrqOnImpShaft = 512U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_REPRGD_PFC_CLR_TCM = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_Secure_Idle_Sts = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TCASERANGESTATUS_TCM = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TCMLnchCtrlAllowed = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TCM_ActMode = 14U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TRANS_ADAS_Inhibit = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TargetGear = (uint8)
        rtb_TmpSignalConversionAtVeTR_j;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TorqueAmpTransmission = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TorqueConverterDisengageSpeed = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TorqueConverterSTO = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TorqueConverterSts = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TransIntakeTorq = 1000U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TransLosses = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_Trans_Adapt_Status = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TransmissionSailingSts = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TrqCtrlModeReq = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TrqCtrlModeReq_Slow = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_TxIdleRq = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3.E_Vehicle_Hold_Rq = (((sint32)
        rtb_TmpSignalConversionAtVeS_lp) != 0);

    /* BusCreator: '<S5>/BusTRANSM_FD_2_FD3' incorporates:
     *  Constant: '<S5>/Const68'
     *  Constant: '<S5>/Const70'
     *  Constant: '<S5>/Const71'
     *  Constant: '<S5>/Const73'
     *  Constant: '<S5>/Const74'
     *  Constant: '<S5>/Const75'
     *  Constant: '<S5>/Const78'
     *  Constant: '<S5>/Const80'
     *  Constant: '<S5>/Const81'
     *  Constant: '<S5>/Const83'
     *  Constant: '<S5>/Const84'
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  DataTypeConversion: '<S42>/Data Type Conversion5'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_AutoPosCorrMdReq'
     */
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_APCM_Rq = (uint8)
        rtb_TmpSignalConversionAtVeT_ip;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_AirFlowRequest_TCM = 127U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_CRC_TRANSM2 = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_EngShutOffRq_TCM = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_GearEngagedForDisplay = (uint8)
        rtb_TmpSignalConversionAtVeTRGR;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_MessageCounter_TRANSM2 = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_OUTPUT_SPEED = MAX_uint16_T;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_OutputSpdPolarity = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_PaddlesModeSts = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCC_TR = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCM_EngFSO_Allw = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCM_EngFSO_Rq = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCM_TrqGradLimActive = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCM_TrqGradLim_Lo = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TCM_TrqGradLim_Up = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TRNS_StpSt_FLT = true;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TransInputSpeedMaxReq = 1022U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TransReadyForESS = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_Trans_ESS_Inhibit = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TransmissionTemperature = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_Trns_EMCC_Achvd = false;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TrqCtrlModeReq_Prdtd = 0U;
    ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3.E_TurbineSpeed = MAX_uint16_T;

    /* Outputs for Atomic SubSystem: '<S134>/Limiter1' */
    /* Switch: '<S143>/Switch1' incorporates:
     *  Constant: '<S134>/Constant Value1'
     *  RelationalOperator: '<S143>/Relational Operator'
     */
    if (511.0F < rtb_TmpSignalConversionAtVeOBCR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOBCR;
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Switch: '<S143>/Switch' incorporates:
     *  Constant: '<S134>/Constant Value2'
     *  RelationalOperator: '<S143>/Relational Operator1'
     */
    if (rtb_Gain_ig > -511.0F)
    {
        /* Switch: '<S143>/Switch' */
        rtb_TmpSignalConversionAtVeDTRR = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S143>/Switch' */
        rtb_TmpSignalConversionAtVeDTRR = -511.0F;
    }

    /* End of Switch: '<S143>/Switch' */
    /* End of Outputs for SubSystem: '<S134>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S136>/Limiter1' */
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S136>/Constant Value1'
     *  RelationalOperator: '<S145>/Relational Operator'
     */
    if (70.3F < rtb_TmpSignalConversionAtVeO_m4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 70.3F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeO_m4;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Switch: '<S145>/Switch' incorporates:
     *  Constant: '<S136>/Constant Value2'
     *  RelationalOperator: '<S145>/Relational Operator1'
     */
    if (rtb_Gain_ig > -32.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -32.0F;
    }

    /* End of Switch: '<S145>/Switch' */
    /* End of Outputs for SubSystem: '<S136>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S137>/Limiter1' */
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S137>/Constant Value1'
     *  RelationalOperator: '<S146>/Relational Operator'
     */
    if (511.0F < rtb_TmpSignalConversionAtVeOB_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOB_n;
    }

    /* End of Switch: '<S146>/Switch1' */

    /* Switch: '<S146>/Switch' incorporates:
     *  Constant: '<S137>/Constant Value2'
     *  RelationalOperator: '<S146>/Relational Operator1'
     */
    if (rtb_Gain_ig > -511.0F)
    {
        /* Switch: '<S146>/Switch' */
        rtb_Switch_hp = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S146>/Switch' */
        rtb_Switch_hp = -511.0F;
    }

    /* End of Switch: '<S146>/Switch' */
    /* End of Outputs for SubSystem: '<S137>/Limiter1' */

    /* DataTypeConversion: '<S132>/Data Type Conversion15' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion16'
     */
#if Rte_SysCon_VrntST2B_HYBRIDCHARGINGCOMMANDFD11_VeOBCRUMaxAllowableBattVolt1

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeO_cn), 65536.0F);

    /* DataTypeConversion: '<S597>/Data Type Conversion' */
    rtb_DataTypeConversion_am = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S11>/Const16'
     *  DataTypeConversion: '<S11>/Data Type Conversion16'
     */
    rtb_DataTypeConversion_am = 0U;

#endif

    /* End of DataTypeConversion: '<S132>/Data Type Conversion15' */

    /* DataTypeConversion: '<S133>/Data Type Conversion17' incorporates:
     *  DataTypeConversion: '<S11>/Data Type Conversion18'
     */
#if Rte_SysCon_VrntST2B_HYBRIDCHARGINGCOMMANDFD11_VeOBCRUMinAllowableBattVolt1

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeOB_m), 65536.0F);

    /* DataTypeConversion: '<S599>/Data Type Conversion' */
    rtb_DataTypeConversion_pz = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S11>/Const18'
     *  DataTypeConversion: '<S11>/Data Type Conversion18'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of DataTypeConversion: '<S133>/Data Type Conversion17' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_I_MaxCurrAlwd_IDCM' */
    (void)Rte_Read_VeVTLR_I_MaxCurrAlwd_IDCM_Value(&rtb_Switch_jc);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S142>/Limiter1' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S142>/Constant Value1'
     *  RelationalOperator: '<S151>/Relational Operator'
     */
    if (819.1F < rtb_TmpSignalConversionAtVeO_ae)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 819.1F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeO_ae;
    }

    /* End of Switch: '<S151>/Switch1' */
    /* End of Outputs for SubSystem: '<S142>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_COMMAND_FD11' incorporates:
     *  Constant: '<S134>/Constant Value'
     *  Constant: '<S136>/Constant Value'
     *  Constant: '<S137>/Constant Value'
     *  Constant: '<S5>/Const102'
     *  Constant: '<S5>/Const103'
     *  Constant: '<S5>/Const108'
     *  Constant: '<S5>/Const112'
     *  DataTypeConversion: '<S11>/Data Type Conversion10'
     *  DataTypeConversion: '<S11>/Data Type Conversion4'
     *  DataTypeConversion: '<S134>/Data Type Conversion'
     *  DataTypeConversion: '<S136>/Data Type Conversion'
     *  DataTypeConversion: '<S137>/Data Type Conversion'
     *  Gain: '<S136>/Gain'
     *  SignalConversion generated from: '<S2>/VeTHMR_e_HV_Bat_CltLvlLo'
     *  Sum: '<S134>/Sum'
     *  Sum: '<S136>/Sum'
     *  Sum: '<S137>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_AC_Curr_Max_Thrsh = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeDTRR - -511.0F),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_AC_Curr_Min_Thrsh = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_CRC_HYBRID_CHARGING_COMMAND
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_ChargeEnable =
        rtb_TmpSignalConversionAtVeO_be ? ((uint8)1) : ((uint8)0);
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_ClearLegislatedDiagInfo =
        false;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_CurrentRequest = (uint16)
        ((sint32)fmodf(floorf(10.0F * (rtb_TmpSignalConversionAtVeWTAR - -32.0F)),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_DCDC_OperationModeEnable =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_DC_Curr_Max_Thrsh = (uint16)
        ((sint32)fmodf(floorf(rtb_Switch_hp - -511.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_EchargeSOCRange_ePT = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HVBatCoolantLevelLow =
        (uint8)rtb_TmpSignalConversionAtVeTHMR;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HVDC_CurrentSetpoint = 229U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HVDC_VoltageSetpoint = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HVInverterVoltage_Rational =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HVInverterVoltage_RationalV
        = false;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HV_Volt_Max_Thrsh =
        rtb_DataTypeConversion_am;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_HV_Volt_Min_Thrsh =
        rtb_DataTypeConversion_pz;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_J1772_CloseS2 =
        rtb_TmpSignalConversionAtVeO_gk;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_LVDC_CurrentSetpoint = 255U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_LVDC_SystemVoltageAct = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_LVDC_VoltageSetpoint = 221U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_MainHV_ContactorCommand =
        0U;

    /* DataTypeConversion: '<S11>/Data Type Conversion24' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(rtb_Switch_jc), 256.0F);

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_COMMAND_FD11' incorporates:
     *  Constant: '<S5>/Const113'
     *  Constant: '<S5>/Const114'
     *  Constant: '<S5>/Const115'
     *  DataTypeConversion: '<S11>/Data Type Conversion24'
     *  DataTypeConversion: '<S11>/Data Type Conversion26'
     *  DataTypeConversion: '<S11>/Data Type Conversion28'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrTrsfMethodReq'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_MaxCurrentAllwd = (uint8)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)
            ((sint32)(-((sint32)((sint8)((uint8)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint8)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_MC_HYBRID_CHARGING_COMMAND =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_OBC_ControlMethod = (uint8)
        rtb_TmpSignalConversionAtVeOB_f;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_OBC_ModeRequest = 7U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_OBC_OperativeModeReq =
        (uint8)rtb_TmpSignalConversionAtVeO_ma;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_VDCM_SessnStopReq =
        rtb_TmpSignalConversionAtVeO_m1;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_VDCM_StsSWWldgReq = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_VDCM_StsWldgReq = false;

    /* Outputs for Atomic SubSystem: '<S142>/Limiter1' */
    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S142>/Constant Value2'
     *  RelationalOperator: '<S151>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S151>/Switch' */
    /* End of Outputs for SubSystem: '<S142>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_COMMAND_FD11' incorporates:
     *  DataTypeConversion: '<S142>/Data Type Conversion'
     *  Gain: '<S142>/Gain'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11.E_VoltageRequest = (uint16)
        ((sint32)fmodf(floorf(10.0F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S154>/Limiter1' */
    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S154>/Constant Value1'
     *  RelationalOperator: '<S159>/Relational Operator'
     */
    if (511.0F < rtb_TmpSignalConversionAtVeOBCR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOBCR;
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Switch: '<S159>/Switch' incorporates:
     *  Constant: '<S154>/Constant Value2'
     *  RelationalOperator: '<S159>/Relational Operator1'
     */
    if (rtb_Gain_ig > -511.0F)
    {
        /* Switch: '<S159>/Switch' */
        rtb_Switch_jc = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S159>/Switch' */
        rtb_Switch_jc = -511.0F;
    }

    /* End of Switch: '<S159>/Switch' */
    /* End of Outputs for SubSystem: '<S154>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S156>/Limiter1' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S156>/Constant Value1'
     *  RelationalOperator: '<S161>/Relational Operator'
     */
    if (70.3F < rtb_TmpSignalConversionAtVeO_m4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 70.3F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeO_m4;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Switch: '<S161>/Switch' incorporates:
     *  Constant: '<S156>/Constant Value2'
     *  RelationalOperator: '<S161>/Relational Operator1'
     */
    if (rtb_Gain_ig > -32.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -32.0F;
    }

    /* End of Switch: '<S161>/Switch' */
    /* End of Outputs for SubSystem: '<S156>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S157>/Limiter1' */
    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S157>/Constant Value1'
     *  RelationalOperator: '<S162>/Relational Operator'
     */
    if (511.0F < rtb_TmpSignalConversionAtVeOB_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 511.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOB_n;
    }

    /* End of Switch: '<S162>/Switch1' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S157>/Constant Value2'
     *  RelationalOperator: '<S162>/Relational Operator1'
     */
    if (rtb_Gain_ig > -511.0F)
    {
        /* Switch: '<S162>/Switch' */
        rtb_TmpSignalConversionAtVeDTRR = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S162>/Switch' */
        rtb_TmpSignalConversionAtVeDTRR = -511.0F;
    }

    /* End of Switch: '<S162>/Switch' */
    /* End of Outputs for SubSystem: '<S157>/Limiter1' */

    /* DataTypeConversion: '<S152>/Data Type Conversion8' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion9'
     */
#if Rte_SysCon_VrntST2B_HYBRIDCHARGINGCOMMANDFD5_VeOBCRUMaxAllowableBattVolt1

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeO_cn), 65536.0F);

    /* DataTypeConversion: '<S597>/Data Type Conversion' */
    rtb_DataTypeConversion_am = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* DataTypeConversion: '<S597>/Data Type Conversion' incorporates:
     *  Constant: '<S12>/Const9'
     *  DataTypeConversion: '<S12>/Data Type Conversion9'
     */
    rtb_DataTypeConversion_am = 0U;

#endif

    /* End of DataTypeConversion: '<S152>/Data Type Conversion8' */

    /* DataTypeConversion: '<S153>/Data Type Conversion10' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion11'
     */
#if Rte_SysCon_VrntST2B_HYBRIDCHARGINGCOMMANDFD5_VeOBCRUMinAllowableBattVolt1

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeOB_m), 65536.0F);

    /* DataTypeConversion: '<S599>/Data Type Conversion' */
    rtb_DataTypeConversion_pz = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S12>/Const11'
     *  DataTypeConversion: '<S12>/Data Type Conversion11'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of DataTypeConversion: '<S153>/Data Type Conversion10' */

    /* Outputs for Atomic SubSystem: '<S158>/Limiter1' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S158>/Constant Value1'
     *  RelationalOperator: '<S163>/Relational Operator'
     */
    if (819.1F < rtb_TmpSignalConversionAtVeO_ae)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 819.1F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeO_ae;
    }

    /* End of Switch: '<S163>/Switch1' */
    /* End of Outputs for SubSystem: '<S158>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_COMMAND_FD5' incorporates:
     *  Constant: '<S154>/Constant Value'
     *  Constant: '<S156>/Constant Value'
     *  Constant: '<S157>/Constant Value'
     *  Constant: '<S5>/Const203'
     *  Constant: '<S5>/Const204'
     *  DataTypeConversion: '<S11>/Data Type Conversion10'
     *  DataTypeConversion: '<S11>/Data Type Conversion26'
     *  DataTypeConversion: '<S11>/Data Type Conversion28'
     *  DataTypeConversion: '<S12>/Data Type Conversion4'
     *  DataTypeConversion: '<S154>/Data Type Conversion'
     *  DataTypeConversion: '<S156>/Data Type Conversion'
     *  DataTypeConversion: '<S157>/Data Type Conversion'
     *  Gain: '<S156>/Gain'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrModeReq'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgrTrsfMethodReq'
     *  SignalConversion generated from: '<S2>/VeTHMR_e_HV_Bat_CltLvlLo'
     *  Sum: '<S154>/Sum'
     *  Sum: '<S156>/Sum'
     *  Sum: '<S157>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_AC_Curr_Max_Thrsh = (uint16)
        ((sint32)fmodf(floorf(rtb_Switch_jc - -511.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_AC_Curr_Min_Thrsh = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_CRC_HYBRID_CHARGING_COMMAND =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_ChargeEnable =
        rtb_TmpSignalConversionAtVeO_be ? ((uint8)1) : ((uint8)0);
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_CurrentRequest = (uint16)
        ((sint32)fmodf(floorf(10.0F * (rtb_TmpSignalConversionAtVeWTAR - -32.0F)),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_DC_Curr_Max_Thrsh = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeDTRR - -511.0F),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_HVBatCoolantLevelLow =
        (uint8)rtb_TmpSignalConversionAtVeTHMR;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_HV_Volt_Max_Thrsh =
        rtb_DataTypeConversion_am;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_HV_Volt_Min_Thrsh =
        rtb_DataTypeConversion_pz;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_J1772_CloseS2 =
        rtb_TmpSignalConversionAtVeO_gk;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_MC_HYBRID_CHARGING_COMMAND =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_OBC_ControlMethod = (uint8)
        rtb_TmpSignalConversionAtVeOB_f;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_OBC_OperativeModeReq =
        (uint8)rtb_TmpSignalConversionAtVeO_ma;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_VDCM_SessnStopReq =
        rtb_TmpSignalConversionAtVeO_m1;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_VDCM_StsSWWldgReq = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_VDCM_StsWldgReq = false;

    /* Outputs for Atomic SubSystem: '<S158>/Limiter1' */
    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S158>/Constant Value2'
     *  RelationalOperator: '<S163>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S158>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_COMMAND_FD5' incorporates:
     *  DataTypeConversion: '<S158>/Data Type Conversion'
     *  Gain: '<S158>/Gain'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5.E_VoltageRequest = (uint16)
        ((sint32)fmodf(floorf(10.0F * rtb_Gain_ig), 65536.0F));

    /* Outputs for Atomic SubSystem: '<S164>/Limiter1' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S164>/Constant Value1'
     *  RelationalOperator: '<S168>/Relational Operator'
     */
    if (50.0F < rtb_TmpSignalConversionAtVeOBCR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 50.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOBCR;
    }

    /* End of Switch: '<S168>/Switch1' */

    /* Switch: '<S168>/Switch' incorporates:
     *  Constant: '<S164>/Constant Value2'
     *  RelationalOperator: '<S168>/Relational Operator1'
     */
    if (rtb_Gain_ig > -31.5F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -31.5F;
    }

    /* End of Switch: '<S168>/Switch' */
    /* End of Outputs for SubSystem: '<S164>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S165>/Limiter1' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S165>/Constant Value1'
     *  RelationalOperator: '<S169>/Relational Operator'
     */
    if (31.5F < rtb_TmpSignalConversionAtVeOB_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 31.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOB_n;
    }

    /* End of Switch: '<S169>/Switch1' */
    /* End of Outputs for SubSystem: '<S165>/Limiter1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatCurrFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCurrFA_Value(&tmpRead_1i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S13>/switch' incorporates:
     *  Constant: '<S166>/Constant Value1'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  Switch: '<S170>/Switch1'
     */
    if (tmpRead_1i)
    {
        /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
         *  Constant: '<S13>/Constant'
         *  DataTypeConversion: '<S633>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_VDCM_IDCChrgr =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S166>/Limiter1' */
        if (6553.4F < rtb_TmpSignalConversionAtVeBPCR)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S166>/Constant Value1'
             *  Gain: '<S166>/Gain'
             */
            rtb_TmpSignalConversionAtVeBPCR = 6553.4F;
        }

        /* Switch: '<S170>/Switch' incorporates:
         *  Constant: '<S166>/Constant Value2'
         *  RelationalOperator: '<S170>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBPCR <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeBPCR = 0.0F;
        }

        /* End of Switch: '<S170>/Switch' */
        /* End of Outputs for SubSystem: '<S166>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
         *  DataTypeConversion: '<S166>/Data Type Conversion'
         *  DataTypeConversion: '<S633>/Data Type Conversion'
         *  Gain: '<S166>/Gain'
         */
        ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_VDCM_IDCChrgr = (uint16)
            ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeBPCR),
                           65536.0F));
    }

    /* End of Switch: '<S13>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatVoltFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatVoltFA_Value(&tmpRead_1j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S13>/switch1' incorporates:
     *  Constant: '<S167>/Constant Value1'
     *  RelationalOperator: '<S171>/Relational Operator'
     *  Switch: '<S171>/Switch1'
     */
    if (tmpRead_1j)
    {
        /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
         *  Constant: '<S13>/Constant1'
         *  DataTypeConversion: '<S597>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_VDCM_UDCChrgr =
            MAX_uint16_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S167>/Limiter1' */
        if (6553.4F < rtb_TmpSignalConversionAtVeB_io)
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S167>/Constant Value1'
             *  Gain: '<S167>/Gain'
             */
            rtb_TmpSignalConversionAtVeB_io = 6553.4F;
        }

        /* Switch: '<S171>/Switch' incorporates:
         *  Constant: '<S167>/Constant Value2'
         *  RelationalOperator: '<S171>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeB_io <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeB_io = 0.0F;
        }

        /* End of Switch: '<S171>/Switch' */
        /* End of Outputs for SubSystem: '<S167>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
         *  DataTypeConversion: '<S167>/Data Type Conversion'
         *  DataTypeConversion: '<S597>/Data Type Conversion'
         *  Gain: '<S167>/Gain'
         */
        ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_VDCM_UDCChrgr = (uint16)
            ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeB_io),
                           65536.0F));
    }

    /* End of Switch: '<S13>/switch1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
     *  Constant: '<S164>/Constant Value'
     *  DataTypeConversion: '<S13>/Data Type Conversion4'
     *  DataTypeConversion: '<S13>/Data Type Conversion5'
     *  DataTypeConversion: '<S13>/Data Type Conversion6'
     *  DataTypeConversion: '<S164>/Data Type Conversion'
     *  Gain: '<S164>/Gain'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingLevel'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingSystemSts'
     *  Sum: '<S164>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_ACCurrent_MaxCal = (uint16)
        ((sint32)fmodf(floorf(4.0F * (rtb_TmpSignalConversionAtVeWTAR - -31.5F)),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_CRC_HYBRID_CHARGING_STATUS =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_ChargeSystemFault =
        rtb_TmpSignalConversionAtVeO_h0;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_ChargeSystemFaultReason =
        (uint8)rtb_TmpSignalConversionAtVeO_ks;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_ChargeSystemSts = (uint8)
        rtb_TmpSignalConversionAtVeO_i4;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_ChargingLevel = (uint8)
        rtb_TmpSignalConversionAtVeO_cm;

    /* Outputs for Atomic SubSystem: '<S165>/Limiter1' */
    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S165>/Constant Value2'
     *  RelationalOperator: '<S169>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -32.0F)
    {
        rtb_Gain_ig = -32.0F;
    }

    /* End of Switch: '<S169>/Switch' */
    /* End of Outputs for SubSystem: '<S165>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
     *  Constant: '<S165>/Constant Value'
     *  DataTypeConversion: '<S165>/Data Type Conversion'
     *  Gain: '<S165>/Gain'
     *  Sum: '<S165>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_HVBatteryCurrent_MaxCal =
        (uint8)((sint32)fmodf(floorf((rtb_Gain_ig - -32.0F) * 4.0F), 256.0F));

    /* DataTypeConversion: '<S13>/Data Type Conversion8' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion8'
     */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeO_cn), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion8'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_HVBatteryVoltage_MaxCal =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S13>/Data Type Conversion9' incorporates:
     *  DataTypeConversion: '<S14>/Data Type Conversion9'
     */
    rtb_TmpSignalConversionAtVeMT_n = fmodf(floorf
        (rtb_TmpSignalConversionAtVeOB_m), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD11' incorporates:
     *  DataTypeConversion: '<S13>/Data Type Conversion11'
     *  DataTypeConversion: '<S13>/Data Type Conversion9'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_HVBatteryVoltage_MinCal =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeMT_n))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeMT_n))));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_MC_HYBRID_CHARGING_STATUS =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11.E_OBCM_PLUG_STS =
        rtb_TmpSignalConversionAtVeO_f0 ? ((uint8)1) : ((uint8)0);

    /* Outputs for Atomic SubSystem: '<S172>/Limiter1' */
    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S172>/Constant Value1'
     *  RelationalOperator: '<S174>/Relational Operator'
     */
    if (50.0F < rtb_TmpSignalConversionAtVeOBCR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 50.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOBCR;
    }

    /* End of Switch: '<S174>/Switch1' */

    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S172>/Constant Value2'
     *  RelationalOperator: '<S174>/Relational Operator1'
     */
    if (rtb_Gain_ig > -31.5F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -31.5F;
    }

    /* End of Switch: '<S174>/Switch' */
    /* End of Outputs for SubSystem: '<S172>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S173>/Limiter1' */
    /* Switch: '<S175>/Switch1' incorporates:
     *  Constant: '<S173>/Constant Value1'
     *  RelationalOperator: '<S175>/Relational Operator'
     */
    if (31.5F < rtb_TmpSignalConversionAtVeOB_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 31.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeOB_n;
    }

    /* End of Switch: '<S175>/Switch1' */

    /* Switch: '<S175>/Switch' incorporates:
     *  Constant: '<S173>/Constant Value2'
     *  RelationalOperator: '<S175>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -32.0F)
    {
        rtb_Gain_ig = -32.0F;
    }

    /* End of Switch: '<S175>/Switch' */
    /* End of Outputs for SubSystem: '<S173>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_CHARGING_STATUS_FD5' incorporates:
     *  Constant: '<S172>/Constant Value'
     *  Constant: '<S173>/Constant Value'
     *  DataTypeConversion: '<S13>/Data Type Conversion5'
     *  DataTypeConversion: '<S13>/Data Type Conversion6'
     *  DataTypeConversion: '<S14>/Data Type Conversion11'
     *  DataTypeConversion: '<S14>/Data Type Conversion4'
     *  DataTypeConversion: '<S14>/Data Type Conversion8'
     *  DataTypeConversion: '<S14>/Data Type Conversion9'
     *  DataTypeConversion: '<S172>/Data Type Conversion'
     *  DataTypeConversion: '<S173>/Data Type Conversion'
     *  Gain: '<S172>/Gain'
     *  Gain: '<S173>/Gain'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingLevel'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingSystemSts'
     *  Sum: '<S172>/Sum'
     *  Sum: '<S173>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_ACCurrent_MaxCal = (uint16)
        ((sint32)fmodf(floorf(4.0F * (rtb_TmpSignalConversionAtVeWTAR - -31.5F)),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_CRC_HYBRID_CHARGING_STATUS =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_ChargeSystemFault =
        rtb_TmpSignalConversionAtVeO_h0;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_ChargeSystemFaultReason =
        (uint8)rtb_TmpSignalConversionAtVeO_ks;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_ChargeSystemSts = (uint8)
        rtb_TmpSignalConversionAtVeO_i4;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_ChargingLevel = (uint8)
        rtb_TmpSignalConversionAtVeO_cm;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_HVBatteryCurrent_MaxCal =
        (uint8)((sint32)fmodf(floorf((rtb_Gain_ig - -32.0F) * 4.0F), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_HVBatteryVoltage_MaxCal =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_HVBatteryVoltage_MinCal =
        (uint16)((sint32)((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)
                   ((uint16)((sint32)(-((sint32)((sint16)((uint16)((float32)
                          (-rtb_TmpSignalConversionAtVeMT_n))))))))) : ((sint32)
                   ((uint16)rtb_TmpSignalConversionAtVeMT_n))));
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_MC_HYBRID_CHARGING_STATUS =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5.E_OBCM_PLUG_STS =
        rtb_TmpSignalConversionAtVeO_f0 ? ((uint8)1) : ((uint8)0);

    /* Sum: '<S186>/Sum' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion4'
     *  DataTypeConversion: '<S186>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeHMIRPBatPwrUsageDisp1

    /* Outputs for Atomic SubSystem: '<S186>/Limiter1' */
    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S186>/Constant Value1'
     *  RelationalOperator: '<S187>/Relational Operator'
     */
    if (130.0F < rtb_TmpSignalConversionAtVeHMIR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 130.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHMIR;
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Switch: '<S187>/Switch' incorporates:
     *  Constant: '<S186>/Constant Value2'
     *  RelationalOperator: '<S187>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -125.0F)
    {
        rtb_Gain_ig = -125.0F;
    }

    /* End of Switch: '<S187>/Switch' */

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Constant: '<S186>/Constant Value'
     */
    rtb_DataTypeConversion65_b = (uint8)((sint32)fmodf(floorf(rtb_Gain_ig -
        -125.0F), 256.0F));

    /* End of Outputs for SubSystem: '<S186>/Limiter1' */
#else

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Constant: '<S15>/Const4'
     *  DataTypeConversion: '<S15>/Data Type Conversion4'
     */
    rtb_DataTypeConversion65_b = 0U;

#endif

    /* End of Sum: '<S186>/Sum' */

    /* DataTypeConversion: '<S176>/Data Type Conversion5' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion6'
     */
#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeHMIRbBatPwrUsageDispV1

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeHM_n;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S15>/Const6'
     *  DataTypeConversion: '<S15>/Data Type Conversion6'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S176>/Data Type Conversion5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeDTRR_e_OPD_HMI' */
    (void)Rte_Read_VeDTRR_e_OPD_HMI_Value(&tmpRead_c);

    /* Inport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv2' */
    (void)Rte_Read_VeOBCR_t_EstTimeofChrg_Lv2_Value(&tmpRead_b);

    /* Inport: '<Root>/VeOBCR_t_EstTimeofChrg_Lv1' */
    (void)Rte_Read_VeOBCR_t_EstTimeofChrg_Lv1_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHMIR_P_HVACPwrUsageDisp' */
    (void)Rte_Read_VeHMIR_P_HVACPwrUsageDisp_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ' */
    (void)Rte_Read_VeHMIR_e_HEV_LMP_RQ_Value(&tmpRead_8);

    /* Inport: '<Root>/VeHMIR_P_EngPwrUsageDisp' */
    (void)Rte_Read_VeHMIR_P_EngPwrUsageDisp_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S182>/Limiter1' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S182>/Constant Value1'
     *  RelationalOperator: '<S189>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHM_d)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 100.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHM_d;
    }

    /* End of Switch: '<S189>/Switch1' */

    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S182>/Constant Value2'
     *  RelationalOperator: '<S189>/Relational Operator1'
     */
    if (rtb_Gain_ig > 0.0F)
    {
        /* Sum: '<S182>/Sum' */
        rtb_TmpSignalConversionAtVeHM_d = rtb_Gain_ig;
    }
    else
    {
        /* Sum: '<S182>/Sum' */
        rtb_TmpSignalConversionAtVeHM_d = 0.0F;
    }

    /* End of Switch: '<S189>/Switch' */
    /* End of Outputs for SubSystem: '<S182>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S183>/Limiter1' */
    /* Switch: '<S190>/Switch1' incorporates:
     *  Constant: '<S183>/Constant Value1'
     *  RelationalOperator: '<S190>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHM_o)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 100.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHM_o;
    }

    /* End of Switch: '<S190>/Switch1' */

    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S183>/Constant Value2'
     *  RelationalOperator: '<S190>/Relational Operator1'
     */
    if (rtb_Gain_ig > -100.0F)
    {
        /* Switch: '<S190>/Switch' */
        rtb_TmpSignalConversionAtVeHM_o = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S190>/Switch' */
        rtb_TmpSignalConversionAtVeHM_o = -100.0F;
    }

    /* End of Switch: '<S190>/Switch' */
    /* End of Outputs for SubSystem: '<S183>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S184>/Limiter1' */
    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S184>/Constant Value1'
     *  RelationalOperator: '<S191>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVeHM_g)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 100.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHM_g;
    }

    /* End of Switch: '<S191>/Switch1' */

    /* Switch: '<S191>/Switch' incorporates:
     *  Constant: '<S184>/Constant Value2'
     *  RelationalOperator: '<S191>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -100.0F)
    {
        rtb_Gain_ig = -100.0F;
    }

    /* End of Switch: '<S191>/Switch' */
    /* End of Outputs for SubSystem: '<S184>/Limiter1' */

    /* DataTypeConversion: '<S179>/Data Type Conversion30' */
#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeSRARbPopupMsg1

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Popup_Msg1'
     */
    (void)Rte_Read_VeSRAR_b_Popup_Msg1_Value(&rtb_E_PopUpMessage1);

#endif

    /* End of DataTypeConversion: '<S179>/Data Type Conversion30' */

    /* DataTypeConversion: '<S178>/Data Type Conversion31' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_DISPLAY_FD3'
     */
#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeHMIRbPopupMsg1

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg1'
     */
    (void)Rte_Read_VeHMIR_b_Popup_Msg1_Value(&rtb_E_PopUpMessage1);

#elif !Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeHMIRbPopupMsg1 && !Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeSRARbPopupMsg1

    /* VariantMerge generated from: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_DISPLAY_FD3'
     */
    rtb_E_PopUpMessage1 = false;

#endif

    /* End of DataTypeConversion: '<S178>/Data Type Conversion31' */

    /* DataTypeConversion: '<S180>/Data Type Conversion42' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion41'
     *  Inport: '<Root>/VeTIMR_e_RacePrep'
     */
#if Rte_SysCon_VrntST2B_HYBRIDDISPLAYFD3_VeTIMReRacePrep

    (void)Rte_Read_VeTIMR_e_RacePrep_Value(&tmpRead_d);

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RacePrep'
     */
    rtb_VariantMerge_For_Variant__k = (uint8)tmpRead_d;

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S15>/Const41'
     *  DataTypeConversion: '<S15>/Data Type Conversion41'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of DataTypeConversion: '<S180>/Data Type Conversion42' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_HghRfrgtPres_FA' */
    (void)Rte_Read_VeTAIR_b_HghRfrgtPres_FA_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S15>/switch' incorporates:
     *  Constant: '<S185>/Constant Value1'
     *  RelationalOperator: '<S192>/Relational Operator'
     *  Switch: '<S192>/Switch1'
     */
    if (tmpRead_e)
    {
        /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
         *  Constant: '<S15>/Constant'
         *  DataTypeConversion: '<S633>/Data Type Conversion'
         */
        ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_RefrigerantPressure = 511U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S185>/Limiter1' */
        if (40.0F < rtb_TmpSignalConversionAtVeTAIR)
        {
            /* Switch: '<S192>/Switch1' incorporates:
             *  Constant: '<S185>/Constant Value1'
             *  Gain: '<S185>/Gain'
             */
            rtb_TmpSignalConversionAtVeHM_g = 40.0F;
        }
        else
        {
            /* Gain: '<S185>/Gain' incorporates:
             *  Switch: '<S192>/Switch1'
             */
            rtb_TmpSignalConversionAtVeHM_g = rtb_TmpSignalConversionAtVeTAIR;
        }

        /* Switch: '<S192>/Switch' incorporates:
         *  Constant: '<S185>/Constant Value2'
         *  RelationalOperator: '<S192>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHM_g <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeHM_g = 0.0F;
        }

        /* End of Switch: '<S192>/Switch' */
        /* End of Outputs for SubSystem: '<S185>/Limiter1' */

        /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
         *  DataTypeConversion: '<S185>/Data Type Conversion'
         *  DataTypeConversion: '<S633>/Data Type Conversion'
         *  Gain: '<S185>/Gain'
         */
        ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_RefrigerantPressure = (uint16)
            ((sint32)fmodf(floorf(10.0F * rtb_TmpSignalConversionAtVeHM_g),
                           65536.0F));
    }

    /* End of Switch: '<S15>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeDMIR_e_TellTaleInfo' */
    (void)Rte_Read_VeDMIR_e_TellTaleInfo_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S5>/Const11'
     *  DataTypeConversion: '<S13>/Data Type Conversion5'
     *  DataTypeConversion: '<S13>/Data Type Conversion6'
     *  Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd'
     *  Inport: '<Root>/VeHMIR_b_CoachDispV'
     *  Inport: '<Root>/VeHMIR_b_EngPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_HVACPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_OutputPwrDispV'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg10'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg11'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg2'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg3'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg4'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg5'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg6'
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg7'
     *  Inport: '<Root>/VeOBCR_b_ChrgSysFault'
     *  Inport: '<Root>/VeSCPR_b_FOTASchCnflct'
     *  Inport: '<Root>/VeSRMR_b_Popup_Msg9'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingLevel'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeSRMR_b_Popup_Msg9_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage9);
    (void)Rte_Read_VeHMIR_b_Popup_Msg7_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage7);
    (void)Rte_Read_VeHMIR_b_Popup_Msg6_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage6);
    (void)Rte_Read_VeHMIR_b_Popup_Msg5_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage5);
    (void)Rte_Read_VeHMIR_b_Popup_Msg4_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage4);
    (void)Rte_Read_VeHMIR_b_Popup_Msg3_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage3);
    (void)Rte_Read_VeHMIR_b_Popup_Msg2_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage2);
    (void)Rte_Read_VeHMIR_b_Popup_Msg11_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage11);
    (void)Rte_Read_VeHMIR_b_Popup_Msg10_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage10);
    (void)Rte_Read_VeHMIR_b_OutputPwrDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridOutputPowerV);
    (void)Rte_Read_VeHMIR_b_CoachDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridEfficiencyCoachV);
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HVBatterySOC_DisplayV);
    (void)Rte_Read_VeHMIR_b_HVACPwrUsageDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HVACPowerUse_DisplayV);
    (void)Rte_Read_VeSCPR_b_FOTASchCnflct_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_FOTA_Schedule_Conflict);
    (void)Rte_Read_VeHMIR_b_EngPwrUsageDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_EnginePowerUse_DisplayV);
    (void)Rte_Read_VeOBCR_b_ChrgSysFault_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargeSystemFault_DPT);
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_BatteryPowerUsage = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_BatteryPowerUsageV = false;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_BatteryPowerUse_Display =
        rtb_DataTypeConversion65_b;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_BatteryPowerUse_DisplayV =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_CRC_HYBRID_DISPLAY = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargeSystemSts_DPT = (uint8)
        rtb_TmpSignalConversionAtVeO_i4;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_ChargingLevelForDisplay = (uint8)
        rtb_TmpSignalConversionAtVeO_cm;

    /* DataTypeConversion: '<S15>/Data Type Conversion11' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_7), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion11'
     *  DataTypeConversion: '<S15>/Data Type Conversion15'
     *  Inport: '<Root>/VeHMIR_e_HEV_LMP_RQ'
     */
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_EnginePowerUse_Display = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_EstimatedRange = MAX_uint8_T;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HCP_EVServiceLampOn = (uint8)
        tmpRead_8;

    /* DataTypeConversion: '<S15>/Data Type Conversion16' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_9), 256.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S183>/Constant Value'
     *  Constant: '<S184>/Constant Value'
     *  Constant: '<S5>/Const13'
     *  DataTypeConversion: '<S15>/Data Type Conversion16'
     *  DataTypeConversion: '<S182>/Data Type Conversion'
     *  DataTypeConversion: '<S183>/Data Type Conversion'
     *  DataTypeConversion: '<S184>/Data Type Conversion'
     *  Gain: '<S182>/Gain'
     *  Sum: '<S183>/Sum'
     *  Sum: '<S184>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HVACPowerUse_Display = (uint8)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)
            ((sint32)(-((sint32)((sint8)((uint8)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint8)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HVBatterySOC_Display = (uint8)
        ((sint32)fmodf(floorf(2.54971957F * rtb_TmpSignalConversionAtVeHM_d),
                       256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridEfficiencyCoach = (uint8)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_o - -100.0F), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridMILRequest = false;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_HybridOutputPower = (uint8)((sint32)
        fmodf(floorf(rtb_Gain_ig - -100.0F), 256.0F));

    /* DataTypeConversion: '<S15>/Data Type Conversion25' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_a), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion25'
     */
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_Lv1_EstChargeTime = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S15>/Data Type Conversion26' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_b), 65536.0F);

    /* BusCreator: '<S5>/BusHYBRID_DISPLAY_FD3' incorporates:
     *  Constant: '<S5>/Const14'
     *  DataTypeConversion: '<S15>/Data Type Conversion26'
     *  DataTypeConversion: '<S15>/Data Type Conversion28'
     *  DataTypeConversion: '<S15>/Data Type Conversion44'
     *  Inport: '<Root>/VeDMIR_e_TellTaleInfo'
     *  Inport: '<Root>/VeDTRR_e_OPD_HMI'
     */
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_Lv2_EstChargeTime = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_MessageCounter_HYBRID_DISPLAY = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_OnePedal_Drive_Sts = (uint8)tmpRead_c;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PlugAndChargeSts = false;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_PopUpMessage1 = rtb_E_PopUpMessage1;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_Race_Prep =
        rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3.E_Regen_Status = (uint8)tmpRead_f;

    /* Outputs for Atomic SubSystem: '<S260>/Limiter1' */
    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S260>/Constant Value1'
     *  RelationalOperator: '<S262>/Relational Operator'
     */
    if (8128.0F < rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 8128.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSRAR;
    }

    /* End of Switch: '<S262>/Switch1' */
    /* End of Outputs for SubSystem: '<S260>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD16' incorporates:
     *  Constant: '<S24>/CRC_HYBRID_POWERTRAIN5'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_CRC_HYBRID_POWERTRAIN5 = 0U;

    /* Outputs for Atomic SubSystem: '<S260>/Limiter1' */
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S260>/Constant Value2'
     *  RelationalOperator: '<S262>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S262>/Switch' */
    /* End of Outputs for SubSystem: '<S260>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD16' incorporates:
     *  Constant: '<S5>/Const176'
     *  DataTypeConversion: '<S260>/Data Type Conversion'
     *  Gain: '<S260>/Gain'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_HCPMaxEngRPM = (uint8)((sint32)
        fmodf(floorf(0.03125F * rtb_Gain_ig), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_HCP_HoodAjar = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_HEV_HybPwrtrnRdcdPerfCmnd =
        rtb_TmpSignalConversionAtVeSR_p;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_IdleCLoopTrq = 511U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16.E_MessageCounter_HYBRID_POWERTRAIN5
        = 0U;

    /* Outputs for Atomic SubSystem: '<S267>/Limiter1' */
    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S267>/Constant Value1'
     *  RelationalOperator: '<S276>/Relational Operator'
     */
    if (1297.0F < rtb_TmpSignalConversionAtVeHMIR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1297.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHMIR;
    }

    /* End of Switch: '<S276>/Switch1' */

    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S267>/Constant Value2'
     *  RelationalOperator: '<S276>/Relational Operator1'
     */
    if (rtb_Gain_ig > -750.0F)
    {
        /* Switch: '<S276>/Switch' */
        rtb_TmpSignalConversionAtVeHMIR = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S276>/Switch' */
        rtb_TmpSignalConversionAtVeHMIR = -750.0F;
    }

    /* End of Switch: '<S276>/Switch' */
    /* End of Outputs for SubSystem: '<S267>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S268>/Limiter1' */
    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S268>/Constant Value1'
     *  RelationalOperator: '<S277>/Relational Operator'
     */
    if (0.99219F < rtb_TmpSignalConversionAtVeBACR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 0.99219F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeBACR;
    }

    /* End of Switch: '<S277>/Switch1' */

    /* Switch: '<S277>/Switch' incorporates:
     *  Constant: '<S268>/Constant Value2'
     *  RelationalOperator: '<S277>/Relational Operator1'
     */
    if (rtb_Gain_ig > -0.99219F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -0.99219F;
    }

    /* End of Switch: '<S277>/Switch' */
    /* End of Outputs for SubSystem: '<S268>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S269>/Limiter1' */
    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S269>/Constant Value1'
     *  RelationalOperator: '<S278>/Relational Operator'
     */
    if (8128.0F < rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 8128.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSRAR;
    }

    /* End of Switch: '<S278>/Switch1' */

    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S269>/Constant Value2'
     *  RelationalOperator: '<S278>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S278>/Switch' */
    /* End of Outputs for SubSystem: '<S269>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion24'
     *  DataTypeConversion: '<S269>/Data Type Conversion'
     *  Gain: '<S269>/Gain'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HCPMaxEngRPM = (uint8)((sint32)
        fmodf(floorf(0.03125F * rtb_Gain_ig), 256.0F));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_AGS2_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS2_CurrPosFA_Value(&tmpRead_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S25>/switch' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS2_CurrPos'
     */
    if (tmpRead_l)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  Constant: '<S25>/Constant'
         *  DataTypeConversion: '<S10>/Data Type Conversion25'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGS2Position = 127U;
    }
    else
    {
        (void)Rte_Read_VeTAIR_Pct_AGS2_CurrPos_Value(&tmpRead_k);

        /* DataTypeConversion: '<S25>/Data Type Conversion9' incorporates:
         *  Inport: '<Root>/VeTAIR_Pct_AGS2_CurrPos'
         */
        rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_k), 256.0F);

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  DataTypeConversion: '<S10>/Data Type Conversion25'
         *  DataTypeConversion: '<S25>/Data Type Conversion9'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGS2Position = (uint8)
            ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
               ((uint8)((sint32)(-((sint32)((sint8)((uint8)((float32)
                      (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
               ((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    }

    /* End of Switch: '<S25>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTAIR_b_AGS_CurrPosFA' */
    (void)Rte_Read_VeTAIR_b_AGS_CurrPosFA_Value(&tmpRead_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S25>/switch1' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
     */
    if (tmpRead_n)
    {
        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  Constant: '<S25>/Constant1'
         *  DataTypeConversion: '<S45>/Data Type Conversion51'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGSPosition = 127U;
    }
    else
    {
        (void)Rte_Read_VeTAIR_Pct_AGS_CurrPos_Value(&tmpRead_m);

        /* DataTypeConversion: '<S25>/Data Type Conversion10' incorporates:
         *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
         */
        rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_m), 256.0F);

        /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
         *  DataTypeConversion: '<S25>/Data Type Conversion10'
         *  DataTypeConversion: '<S45>/Data Type Conversion51'
         */
        ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_AGSPosition = (uint8)
            ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)
               ((uint8)((sint32)(-((sint32)((sint8)((uint8)((float32)
                      (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)
               ((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    }

    /* End of Switch: '<S25>/switch1' */

    /* DataTypeConversion: '<S264>/Data Type Conversion14' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion13'
     *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN5FD3_VeTIMReLaunchIntensity

    (void)Rte_Read_VeTIMR_e_LaunchIntensity_Value(&tmpRead_o);

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
     */
    rtb_DataTypeConversion65_b = (uint8)tmpRead_o;

#else

    /* DataTypeConversion: '<S45>/Data Type Conversion65' incorporates:
     *  Constant: '<S25>/Const13'
     *  DataTypeConversion: '<S25>/Data Type Conversion13'
     */
    rtb_DataTypeConversion65_b = 0U;

#endif

    /* End of DataTypeConversion: '<S264>/Data Type Conversion14' */

    /* Sum: '<S274>/Sum' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion16'
     *  DataTypeConversion: '<S274>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN5FD3_VeHMIRPMtrAPwrUsageDisp

    /* Outputs for Atomic SubSystem: '<S274>/Limiter1' */
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S274>/Constant Value1'
     *  RelationalOperator: '<S275>/Relational Operator'
     */
    if (256.0F < rtb_TmpSignalConversionAtVeHM_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 256.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHM_k;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S274>/Constant Value2'
     *  RelationalOperator: '<S275>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -255.0F)
    {
        rtb_Gain_ig = -255.0F;
    }

    /* End of Switch: '<S275>/Switch' */

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S274>/Constant Value'
     */
    rtb_DataTypeConversion_pz = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
        -255.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S274>/Limiter1' */
#else

    /* DataTypeConversion: '<S599>/Data Type Conversion' incorporates:
     *  Constant: '<S25>/Const16'
     *  DataTypeConversion: '<S25>/Data Type Conversion16'
     */
    rtb_DataTypeConversion_pz = 0U;

#endif

    /* End of Sum: '<S274>/Sum' */

    /* DataTypeConversion: '<S265>/Data Type Conversion19' incorporates:
     *  DataTypeConversion: '<S25>/Data Type Conversion18'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN5FD3_VeHMIRPMtrAPwrUsageDispV

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Inport: '<Root>/VeHMIR_P_MtrAPwrUsageDispV'
     */
    (void)Rte_Read_VeHMIR_P_MtrAPwrUsageDispV_Value
        (&rtb_VariantMerge_For_Variant_ks);

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S25>/Const18'
     *  DataTypeConversion: '<S25>/Data Type Conversion18'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S265>/Data Type Conversion19' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  Inport: '<Root>/VeCOMR_b_Random3'
     *  Inport: '<Root>/VeESSR_b_HCP_StopStart_Fault'
     *  Inport: '<Root>/VeHMIR_P_MtrBPwrUsageDispV'
     *  Inport: '<Root>/VeHMIR_b_HEV_EVT_MD'
     *  Inport: '<Root>/VeHMIR_b_MtrPwrUsageDispV'
     */
    (void)Rte_Read_VeHMIR_b_MtrPwrUsageDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MotorsPowerUse_DisplayV);
    (void)Rte_Read_VeHMIR_P_MtrBPwrUsageDispV_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor2PowerUse_DisplayV);
    (void)Rte_Read_VeHMIR_b_HEV_EVT_MD_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Hybrid_EVT_ModeSts);
    (void)Rte_Read_VeCOMR_b_Random3_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HybridEmissionsMalfunction);
    (void)Rte_Read_VeESSR_b_HCP_StopStart_Fault_Value
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HCP_Stop_Start_Fault);

    /* Outputs for Atomic SubSystem: '<S271>/Limiter1' */
    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S271>/Constant Value1'
     *  RelationalOperator: '<S280>/Relational Operator'
     */
    if (256.0F < rtb_TmpSignalConversionAtVeHM_c)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 256.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeHM_c;
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S271>/Constant Value2'
     *  RelationalOperator: '<S280>/Relational Operator1'
     */
    if (rtb_Gain_ig > -255.0F)
    {
        /* Switch: '<S280>/Switch' */
        rtb_TmpSignalConversionAtVeHM_k = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S280>/Switch' */
        rtb_TmpSignalConversionAtVeHM_k = -255.0F;
    }

    /* End of Switch: '<S280>/Switch' */
    /* End of Outputs for SubSystem: '<S271>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S272>/Limiter1' */
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S272>/Constant Value1'
     *  RelationalOperator: '<S281>/Relational Operator'
     */
    if (1024.0F < rtb_TmpSignalConversionAtVe_b2e)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1024.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVe_b2e;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S272>/Constant Value2'
     *  RelationalOperator: '<S281>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -1023.0F)
    {
        rtb_Gain_ig = -1023.0F;
    }

    /* End of Switch: '<S281>/Switch' */
    /* End of Outputs for SubSystem: '<S272>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  Constant: '<S267>/Constant Value'
     *  DataTypeConversion: '<S267>/Data Type Conversion'
     *  Sum: '<S267>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_BattPowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHMIR - -750.0F),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_BattPowerUse_DisplayV =
        rtb_TmpSignalConversionAtVeHM_n;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_CRC_HYBRID_POWERTRAIN5 = 0U;

    /* DataTypeConversion: '<S268>/Data Type Conversion' incorporates:
     *  Constant: '<S268>/Constant Value'
     *  Gain: '<S268>/Gain'
     *  Sum: '<S268>/Sum'
     */
    tmp = (sint32)fmodf(floorf((rtb_TmpSignalConversionAtVeWTAR - -0.992188F) *
                         128.0F), 256.0F);

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD3' incorporates:
     *  Constant: '<S271>/Constant Value'
     *  Constant: '<S272>/Constant Value'
     *  Constant: '<S5>/Const31'
     *  Constant: '<S5>/Const32'
     *  DataTypeConversion: '<S268>/Data Type Conversion'
     *  DataTypeConversion: '<S271>/Data Type Conversion'
     *  DataTypeConversion: '<S272>/Data Type Conversion'
     *  Sum: '<S271>/Sum'
     *  Sum: '<S272>/Sum'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_ElectricTrqMult4Pedal = (uint8)
        ((sint32)((tmp < 0) ? ((sint32)((uint8)((sint32)(-((sint32)((sint8)
                ((uint8)((float32)(-((float32)tmp)))))))))) : ((sint32)((uint8)
            ((float32)tmp)))));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_HEV_HybPwrtrnRdcdPerfCmnd =
        rtb_TmpSignalConversionAtVeSR_p;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_IdleCLoopTrq = 511U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Launch_Torque =
        rtb_DataTypeConversion65_b;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MessageCounter_HYBRID_POWERTRAIN5
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor1PowerUse_Display =
        rtb_DataTypeConversion_pz;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor1PowerUse_DisplayV =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Motor2PowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_TmpSignalConversionAtVeHM_k - -255.0F),
                       65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_MotorsPowerUse_Display = (uint16)
        ((sint32)fmodf(floorf(rtb_Gain_ig - -1023.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_PT_WorkSite_Invtr_Capacity_HCP =
        0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_PT_WorkSite_Invtr_Sts_HCP = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3.E_Smartload_Actv = 0U;

    /* Outputs for Atomic SubSystem: '<S283>/Limiter1' */
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S283>/Constant Value1'
     *  RelationalOperator: '<S285>/Relational Operator'
     */
    if (8128.0F < rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 8128.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeSRAR;
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S283>/Constant Value2'
     *  RelationalOperator: '<S285>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S285>/Switch' */
    /* End of Outputs for SubSystem: '<S283>/Limiter1' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN5_FD5' incorporates:
     *  Constant: '<S26>/CRC_HYBRID_POWERTRAIN5'
     *  Constant: '<S5>/Const207'
     *  DataTypeConversion: '<S283>/Data Type Conversion'
     *  Gain: '<S283>/Gain'
     */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_CRC_HYBRID_POWERTRAIN5 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_HCPMaxEngRPM = (uint8)((sint32)
        fmodf(floorf(0.03125F * rtb_Gain_ig), 256.0F));
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_HCP_HoodAjar = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_HEV_HybPwrtrnRdcdPerfCmnd =
        rtb_TmpSignalConversionAtVeSR_p;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_IdleCLoopTrq = 511U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5.E_MessageCounter_HYBRID_POWERTRAIN5
        = 0U;

    /* DataTypeConversion: '<S704>/Data Type Conversion56' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion55'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRbChrgCrntDvatonErr

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeCH_m;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S44>/Const55'
     *  DataTypeConversion: '<S44>/Data Type Conversion55'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S704>/Data Type Conversion56' */

    /* DataTypeConversion: '<S705>/Data Type Conversion60' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion59'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtEstChrgTimemin

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeCHDR), 256.0F);

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' */
    rtb_VariantMerge_For_Variant__k = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S44>/Const59'
     *  DataTypeConversion: '<S44>/Data Type Conversion59'
     */
    rtb_VariantMerge_For_Variant__k = MAX_uint8_T;

#endif

    /* End of DataTypeConversion: '<S705>/Data Type Conversion60' */

    /* DataTypeConversion: '<S706>/Data Type Conversion62' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion61'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtMaxChrgTimemin

    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeCH_k), 256.0F);

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' */
    rtb_VariantMerge_For_Variant_hn = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S44>/Const61'
     *  DataTypeConversion: '<S44>/Data Type Conversion61'
     */
    rtb_VariantMerge_For_Variant_hn = MAX_uint8_T;

#endif

    /* End of DataTypeConversion: '<S706>/Data Type Conversion62' */

    /* Sum: '<S718>/Sum' incorporates:
     *  DataTypeConversion: '<S44>/Data Type Conversion63'
     *  DataTypeConversion: '<S718>/Data Type Conversion'
     *  Gain: '<S718>/Gain'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD11_VeCHDRtMaxChrgTimesec

    /* Outputs for Atomic SubSystem: '<S718>/Limiter1' */
    /* Switch: '<S719>/Switch1' incorporates:
     *  Constant: '<S718>/Constant Value1'
     *  RelationalOperator: '<S719>/Relational Operator'
     */
    if (2550.0F < rtb_TmpSignalConversionAtVeCH_h)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 2550.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeCH_h;
    }

    /* End of Switch: '<S719>/Switch1' */

    /* Switch: '<S719>/Switch' incorporates:
     *  Constant: '<S718>/Constant Value2'
     *  RelationalOperator: '<S719>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S719>/Switch' */

    /* Switch: '<S30>/switch1' */
    rtb_switch1 = (uint8)((sint32)fmodf(floorf(0.1F * rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S718>/Limiter1' */
#else

    /* Switch: '<S30>/switch1' incorporates:
     *  Constant: '<S44>/Const63'
     *  DataTypeConversion: '<S44>/Data Type Conversion63'
     */
    rtb_switch1 = MAX_uint8_T;

#endif

    /* End of Sum: '<S718>/Sum' */

    /* BusCreator: '<S5>/BusVDCM_OBCM2_FD11' incorporates:
     *  Constant: '<S5>/Const132'
     *  Constant: '<S5>/Const134'
     *  Constant: '<S5>/Const135'
     *  Constant: '<S5>/Const137'
     *  Constant: '<S5>/Const138'
     *  Constant: '<S5>/Const139'
     *  Constant: '<S5>/Const140'
     *  Constant: '<S5>/Const141'
     *  Constant: '<S5>/Const142'
     *  Constant: '<S5>/Const144'
     *  Constant: '<S5>/Const148'
     *  Constant: '<S5>/Const149'
     *  Constant: '<S5>/Const150'
     *  Constant: '<S5>/Const151'
     *  Constant: '<S5>/Const154'
     *  Constant: '<S5>/Const155'
     *  Constant: '<S5>/Const156'
     *  Constant: '<S5>/Const159'
     *  Constant: '<S5>/Const162'
     *  Constant: '<S5>/Const163'
     *  Constant: '<S5>/Const164'
     *  Constant: '<S5>/Const165'
     *  Constant: '<S5>/Const166'
     *  Constant: '<S5>/Const167'
     *  DataTypeConversion: '<S44>/Data Type Conversion41'
     *  DataTypeConversion: '<S44>/Data Type Conversion45'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_HCP_DC_Retry'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_SelectAppProtocol'
     */
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_AC_Chrg_Branch_Voltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Cell_Volt_Max_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Cell_Volt_Max_Vldty_VDCM = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Cell_Volt_Min_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Cell_Volt_Min_Vldty_VDCM = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_AC_Char_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_BatActualPower_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_BatIntrlk_InternalStat_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_BatState_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Battery_GFD_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Char_Bus_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Char_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Char_PreCha_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_ChargingBusVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Common_Contactor_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_High_Temp_Thrsh_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_InternalVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Low_Temp_Thrsh_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_NumCellMaxTemp_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_NumCellMaxVolt_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_NumCellMinTemp_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_SOC_AccuracySts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Temperature_Max_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Temperature_Min_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Trac_Bus_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Trac_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_Trac_PreCha_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_HV_TractionBusVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Max_Cell_Volt_Allowed_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Max_Cell_Volt_Allowed_Vldty_VDCM =
        false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_BMS_Max_Pk_Volt_Allowed_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_CPIM_Error =
        rtb_TmpSignalConversionAtVeO_le;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_CPIM_Over_Temperature =
        rtb_TmpSignalConversionAtVeOB_i;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_CRC_VO2 = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_DCChrg_BatSideCurrent_VDCM = 50U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_GBT_Charger_Active_Interruption = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_GBT_Desired_SOC_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_GBT_Ready_to_Charge = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_GBT_Target_Cell_Voltage_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_GBT_Target_Voltage_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_HCP_DC_Retry = (uint8)
        rtb_TmpSignalConversionAtVeO_e1;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_HCP_SessionStopCmd =
        rtb_TmpSignalConversionAtVeO_m1;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_MessageCounter_VO2 = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_ReadyToChargeState = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_SelectedAppProtocol = (uint8)
        rtb_TmpSignalConversionAtVeO_ji;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_SelectedSecurityProtocol =
        rtb_TmpSignalConversionAtVeO_fu;

    /* DataTypeConversion: '<S44>/Data Type Conversion47' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion47'
     */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf
        (rtb_TmpSignalConversionAtVeO_mm), 256.0F);

    /* BusCreator: '<S5>/BusVDCM_OBCM2_FD11' incorporates:
     *  Constant: '<S5>/Const168'
     *  Constant: '<S5>/Const169'
     *  Constant: '<S5>/Const170'
     *  DataTypeConversion: '<S44>/Data Type Conversion47'
     *  DataTypeConversion: '<S44>/Data Type Conversion49'
     *  DataTypeConversion: '<S44>/Data Type Conversion51'
     *  DataTypeConversion: '<S44>/Data Type Conversion52'
     *  DataTypeConversion: '<S44>/Data Type Conversion65'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_BattTemp_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_CellVolt_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgCurr_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_SOC_OOR'
     */
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_BattFullSOC_prc = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_BattOverVolt =
        rtb_TmpSignalConversionAtVeO_mo;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_BattTempIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeOB_j;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_BattUnderVolt =
        rtb_TmpSignalConversionAtVeO_e0;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_CellVoltIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_ch;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_ChargeCurrIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_ct;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_ChargingPermitting = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_ChrgCompleteReason = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_ChrgCurrDeviationErr =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_ChrgMode_Req = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_EV_Batt_Max_T_Limit = 60U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_EstChrgTime_min =
        rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_MaxChrgTime_min =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_MaxChrgTime_sec = rtb_switch1;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_VDCM_SOCIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_oa;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11.E_WeldCheck_Complete =
        rtb_TmpSignalConversionAtVeO_ky;

    /* DataTypeConversion: '<S730>/Data Type Conversion56' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion55'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRbChrgCrntDvatonErr

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' */
    rtb_VariantMerge_For_Variant_ks = rtb_TmpSignalConversionAtVeCH_m;

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMChrgCurrDeviationErr' incorporates:
     *  Constant: '<S45>/Const55'
     *  DataTypeConversion: '<S45>/Data Type Conversion55'
     */
    rtb_VariantMerge_For_Variant_ks = false;

#endif

    /* End of DataTypeConversion: '<S730>/Data Type Conversion56' */

    /* DataTypeConversion: '<S731>/Data Type Conversion60' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion59'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtEstChrgTimemin

    rtb_TmpSignalConversionAtVeMT_n = fmodf(floorf
        (rtb_TmpSignalConversionAtVeCHDR), 256.0F);

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' */
    rtb_VariantMerge_For_Variant__k = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeMT_n)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeMT_n))));

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S45>/Const59'
     *  DataTypeConversion: '<S45>/Data Type Conversion59'
     */
    rtb_VariantMerge_For_Variant__k = MAX_uint8_T;

#endif

    /* End of DataTypeConversion: '<S731>/Data Type Conversion60' */

    /* DataTypeConversion: '<S732>/Data Type Conversion62' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion61'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtMaxChrgTimemin

    rtb_TmpSignalConversionAtVeMT_n = fmodf(floorf
        (rtb_TmpSignalConversionAtVeCH_k), 256.0F);

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' */
    rtb_VariantMerge_For_Variant_hn = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeMT_n < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeMT_n)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeMT_n))));

#else

    /* VariantMerge generated from: '<S45>/Vrnt_VDCMMaxChrgTimemin' incorporates:
     *  Constant: '<S45>/Const61'
     *  DataTypeConversion: '<S45>/Data Type Conversion61'
     */
    rtb_VariantMerge_For_Variant_hn = MAX_uint8_T;

#endif

    /* End of DataTypeConversion: '<S732>/Data Type Conversion62' */

    /* Sum: '<S744>/Sum' incorporates:
     *  DataTypeConversion: '<S45>/Data Type Conversion63'
     *  DataTypeConversion: '<S744>/Data Type Conversion'
     *  Gain: '<S744>/Gain'
     */
#if Rte_SysCon_VrntST2B_VDCMOBCM2FD5_VeCHDRtMaxChrgTimesec

    /* Outputs for Atomic SubSystem: '<S744>/Limiter1' */
    /* Switch: '<S745>/Switch1' incorporates:
     *  Constant: '<S744>/Constant Value1'
     *  RelationalOperator: '<S745>/Relational Operator'
     */
    if (2550.0F < rtb_TmpSignalConversionAtVeCH_h)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 2550.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeCH_h;
    }

    /* End of Switch: '<S745>/Switch1' */

    /* Switch: '<S745>/Switch' incorporates:
     *  Constant: '<S744>/Constant Value2'
     *  RelationalOperator: '<S745>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S745>/Switch' */

    /* Switch: '<S30>/switch' */
    rtb_switch_k = (uint8)((sint32)fmodf(floorf(0.1F * rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S744>/Limiter1' */
#else

    /* Switch: '<S30>/switch' incorporates:
     *  Constant: '<S45>/Const63'
     *  DataTypeConversion: '<S45>/Data Type Conversion63'
     */
    rtb_switch_k = MAX_uint8_T;

#endif

    /* End of Sum: '<S744>/Sum' */

    /* BusCreator: '<S5>/BusVDCM_OBCM2_FD5' incorporates:
     *  Constant: '<S5>/Const239'
     *  Constant: '<S5>/Const241'
     *  Constant: '<S5>/Const242'
     *  Constant: '<S5>/Const244'
     *  Constant: '<S5>/Const245'
     *  Constant: '<S5>/Const246'
     *  Constant: '<S5>/Const247'
     *  Constant: '<S5>/Const248'
     *  Constant: '<S5>/Const249'
     *  Constant: '<S5>/Const251'
     *  Constant: '<S5>/Const255'
     *  Constant: '<S5>/Const256'
     *  Constant: '<S5>/Const257'
     *  Constant: '<S5>/Const258'
     *  Constant: '<S5>/Const261'
     *  Constant: '<S5>/Const262'
     *  Constant: '<S5>/Const263'
     *  Constant: '<S5>/Const266'
     *  Constant: '<S5>/Const269'
     *  Constant: '<S5>/Const270'
     *  Constant: '<S5>/Const271'
     *  Constant: '<S5>/Const272'
     *  Constant: '<S5>/Const273'
     *  Constant: '<S5>/Const274'
     *  Constant: '<S5>/Const275'
     *  Constant: '<S5>/Const276'
     *  Constant: '<S5>/Const277'
     *  DataTypeConversion: '<S44>/Data Type Conversion41'
     *  DataTypeConversion: '<S44>/Data Type Conversion45'
     *  DataTypeConversion: '<S44>/Data Type Conversion49'
     *  DataTypeConversion: '<S44>/Data Type Conversion51'
     *  DataTypeConversion: '<S44>/Data Type Conversion52'
     *  DataTypeConversion: '<S44>/Data Type Conversion65'
     *  DataTypeConversion: '<S45>/Data Type Conversion47'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_BattTemp_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_CellVolt_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_ChrgCurr_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_HCP_DC_Retry'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_SOC_OOR'
     *  SignalConversion generated from: '<S2>/VeOBCR_e_SelectAppProtocol'
     */
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_AC_Chrg_Branch_Voltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Cell_Volt_Max_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Cell_Volt_Max_Vldty_VDCM = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Cell_Volt_Min_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Cell_Volt_Min_Vldty_VDCM = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_AC_Char_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_BatActualPower_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_BatIntrlk_InternalStat_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_BatState_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Battery_GFD_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Char_Bus_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Char_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Char_PreCha_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_ChargingBusVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Common_Contactor_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_High_Temp_Thrsh_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_InternalVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Low_Temp_Thrsh_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_NumCellMaxTemp_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_NumCellMaxVolt_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_NumCellMinTemp_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_SOC_AccuracySts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Temperature_Max_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Temperature_Min_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Trac_Bus_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Trac_Main_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_Trac_PreCha_Contac_Sts_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_HV_TractionBusVoltage_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Max_Cell_Volt_Allowed_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Max_Cell_Volt_Allowed_Vldty_VDCM =
        false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_BMS_Max_Pk_Volt_Allowed_VDCM = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_CPIM_Error =
        rtb_TmpSignalConversionAtVeO_le;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_CPIM_Over_Temperature =
        rtb_TmpSignalConversionAtVeOB_i;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_CRC_VO2 = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_DCChrg_BatSideCurrent_VDCM = 50U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_GBT_Charger_Active_Interruption = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_GBT_Desired_SOC_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_GBT_Ready_to_Charge = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_GBT_Target_Cell_Voltage_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_GBT_Target_Voltage_Reached = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_HCP_DC_Retry = (uint8)
        rtb_TmpSignalConversionAtVeO_e1;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_HCP_SessionStopCmd =
        rtb_TmpSignalConversionAtVeO_m1;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_MessageCounter_VO2 = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_ReadyToChargeState = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_SelectedAppProtocol = (uint8)
        rtb_TmpSignalConversionAtVeO_ji;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_SelectedSecurityProtocol =
        rtb_TmpSignalConversionAtVeO_fu;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_BattFullSOC_prc = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_BattOverVolt =
        rtb_TmpSignalConversionAtVeO_mo;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_BattTempIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeOB_j;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_BattUnderVolt =
        rtb_TmpSignalConversionAtVeO_e0;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_CellVoltIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_ch;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_ChargeCurrIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_ct;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_ChargingPermitting = false;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_ChrgCompleteReason = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_ChrgCurrDeviationErr =
        rtb_VariantMerge_For_Variant_ks;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_ChrgMode_Req = 0U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_EV_Batt_Max_T_Limit = 60U;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_EstChrgTime_min =
        rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_MaxChrgTime_min =
        rtb_VariantMerge_For_Variant_hn;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_MaxChrgTime_sec = rtb_switch_k;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_VDCM_SOCIsOOR = (uint8)
        rtb_TmpSignalConversionAtVeO_oa;
    ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5.E_WeldCheck_Complete =
        rtb_TmpSignalConversionAtVeO_ky;

    /* DataTypeConversion: '<S258>/Data Type Conversion2' */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved

    /* Switch: '<S30>/switch' incorporates:
     *  Inport: '<Root>/VeTMDR_e_CmbndDrvMd'
     */
    (void)Rte_Read_VeTMDR_e_CmbndDrvMd_Value(&rtb_switch_k);

#endif

    /* End of DataTypeConversion: '<S258>/Data Type Conversion2' */

    /* DataTypeConversion: '<S23>/Data Type Conversion1' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN4_FD3'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN4FD3_VeTMDReCmbndDrvMd

    /* Switch: '<S30>/switch' incorporates:
     *  Constant: '<S23>/Const1'
     */
    rtb_switch_k = 0U;

#elif !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN2FD3_VeMTIRMMtrCTorqAchieved && !Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN4FD3_VeTMDReCmbndDrvMd

    /* Switch: '<S30>/switch' incorporates:
     *  SignalConversion generated from: '<S5>/BusHYBRID_POWERTRAIN4_FD3'
     */
    rtb_switch_k = 0U;

#endif

    /* End of DataTypeConversion: '<S23>/Data Type Conversion1' */

    /* DataTypeConversion: '<S259>/Data Type Conversion6' incorporates:
     *  DataTypeConversion: '<S23>/Data Type Conversion5'
     */
#if Rte_SysCon_VrntST2B_HYBRIDPOWERTRAIN4FD3_VeTMDReArbTrrnMd

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Inport: '<Root>/VeTMDR_e_Arb_TrrnMd'
     */
    (void)Rte_Read_VeTMDR_e_Arb_TrrnMd_Value(&rtb_VariantMerge_For_Variant__k);

#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S23>/Const5'
     *  DataTypeConversion: '<S23>/Data Type Conversion5'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of DataTypeConversion: '<S259>/Data Type Conversion6' */

    /* BusCreator: '<S5>/BusHYBRID_POWERTRAIN4_FD3' */
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3.E_Actual_DriveMode_Status =
        rtb_switch_k;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3.E_CRC_HYBRID_POWERTRAIN4 = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3.E_MessageCounter_HYBRID_POWERTRAIN4
        = 0U;
    ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3.E_Propulsion_DrvMd_Sts =
        rtb_VariantMerge_For_Variant__k;

    /* Outputs for Atomic SubSystem: '<S591>/Limiter1' */
    /* Switch: '<S600>/Switch1' incorporates:
     *  Constant: '<S591>/Constant Value1'
     *  RelationalOperator: '<S600>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_h2)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_h2;
    }

    /* End of Switch: '<S600>/Switch1' */

    /* Switch: '<S600>/Switch' incorporates:
     *  Constant: '<S591>/Constant Value2'
     *  RelationalOperator: '<S600>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -65534.0F;
    }

    /* End of Switch: '<S600>/Switch' */
    /* End of Outputs for SubSystem: '<S591>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S592>/Limiter1' */
    /* Switch: '<S601>/Switch1' incorporates:
     *  Constant: '<S592>/Constant Value1'
     *  RelationalOperator: '<S601>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_pr)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_pr;
    }

    /* End of Switch: '<S601>/Switch1' */

    /* Switch: '<S601>/Switch' incorporates:
     *  Constant: '<S592>/Constant Value2'
     *  RelationalOperator: '<S601>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAXLR = -65534.0F;
    }

    /* End of Switch: '<S601>/Switch' */
    /* End of Outputs for SubSystem: '<S592>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S594>/Limiter1' */
    /* Switch: '<S603>/Switch1' incorporates:
     *  Constant: '<S594>/Constant Value1'
     *  RelationalOperator: '<S603>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_l;
    }

    /* End of Switch: '<S603>/Switch1' */

    /* Switch: '<S603>/Switch' incorporates:
     *  Constant: '<S594>/Constant Value2'
     *  RelationalOperator: '<S603>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S603>/Switch' */
        rtb_TmpSignalConversionAtVeO_mm = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S603>/Switch' */
        rtb_TmpSignalConversionAtVeO_mm = -500.0F;
    }

    /* End of Switch: '<S603>/Switch' */
    /* End of Outputs for SubSystem: '<S594>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S595>/Limiter1' */
    /* Switch: '<S604>/Switch1' incorporates:
     *  Constant: '<S595>/Constant Value1'
     *  RelationalOperator: '<S604>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeT_cq)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeT_cq;
    }

    /* End of Switch: '<S604>/Switch1' */

    /* Switch: '<S604>/Switch' incorporates:
     *  Constant: '<S595>/Constant Value2'
     *  RelationalOperator: '<S604>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S604>/Switch' */
        rtb_TmpSignalConversionAtVeCHDR = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S604>/Switch' */
        rtb_TmpSignalConversionAtVeCHDR = -500.0F;
    }

    /* End of Switch: '<S604>/Switch' */
    /* End of Outputs for SubSystem: '<S595>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S597>/Limiter1' */
    /* Switch: '<S606>/Switch1' incorporates:
     *  Constant: '<S597>/Constant Value1'
     *  RelationalOperator: '<S606>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_d)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_d;
    }

    /* End of Switch: '<S606>/Switch1' */

    /* Switch: '<S606>/Switch' incorporates:
     *  Constant: '<S597>/Constant Value2'
     *  RelationalOperator: '<S606>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S606>/Switch' */
        rtb_TmpSignalConversionAtVeCH_k = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S606>/Switch' */
        rtb_TmpSignalConversionAtVeCH_k = -500.0F;
    }

    /* End of Switch: '<S606>/Switch' */
    /* End of Outputs for SubSystem: '<S597>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S599>/Limiter1' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S599>/Constant Value1'
     *  RelationalOperator: '<S608>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVe_m2r)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVe_m2r;
    }

    /* End of Switch: '<S608>/Switch1' */

    /* Switch: '<S608>/Switch' incorporates:
     *  Constant: '<S599>/Constant Value2'
     *  RelationalOperator: '<S608>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S608>/Switch' */
    /* End of Outputs for SubSystem: '<S599>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD14' incorporates:
     *  Constant: '<S591>/Constant Value'
     *  Constant: '<S592>/Constant Value'
     *  Constant: '<S594>/Constant Value'
     *  Constant: '<S595>/Constant Value'
     *  Constant: '<S597>/Constant Value'
     *  Constant: '<S599>/Constant Value'
     *  DataTypeConversion: '<S591>/Data Type Conversion'
     *  DataTypeConversion: '<S592>/Data Type Conversion'
     *  DataTypeConversion: '<S594>/Data Type Conversion'
     *  DataTypeConversion: '<S595>/Data Type Conversion'
     *  DataTypeConversion: '<S597>/Data Type Conversion'
     *  DataTypeConversion: '<S599>/Data Type Conversion'
     *  Gain: '<S591>/Gain'
     *  Gain: '<S592>/Gain'
     *  Gain: '<S599>/Gain'
     *  Sum: '<S591>/Sum'
     *  Sum: '<S592>/Sum'
     *  Sum: '<S594>/Sum'
     *  Sum: '<S595>/Sum'
     *  Sum: '<S597>/Sum'
     *  Sum: '<S599>/Sum'
     */
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_ACC_NCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_Accel_Pedal_Override =
        rtb_TmpSignalConversionAtVeDT_k;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_CRC_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_ESC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeSCCR;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_Front_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeWTAR -
            -65534.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_MessageCounter_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_PPPA_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_RRCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_Rear_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeAXLR -
            -65534.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SSC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorqueExp = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorqueMax = (uint16)((sint32)
        fmodf(floorf(rtb_TmpSignalConversionAtVeO_mm - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorqueMin = (uint16)((sint32)
        fmodf(floorf(rtb_TmpSignalConversionAtVeCHDR - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorqueSel_D_TTC = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorqueStatic = (uint16)((sint32)
        fmodf(floorf(rtb_TmpSignalConversionAtVeCH_k - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_SumTorque_DrvReqMod = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14.E_Total_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));

    /* Sum: '<S616>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion4'
     *  DataTypeConversion: '<S616>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontMax

    /* Outputs for Atomic SubSystem: '<S616>/Limiter1' */
    /* Switch: '<S617>/Switch1' incorporates:
     *  Constant: '<S616>/Constant Value1'
     *  RelationalOperator: '<S617>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_l;
    }

    /* End of Switch: '<S617>/Switch1' */

    /* Switch: '<S617>/Switch' incorporates:
     *  Constant: '<S616>/Constant Value2'
     *  RelationalOperator: '<S617>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S617>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S616>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig
        - -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S616>/Limiter1' */
#else

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S38>/Const4'
     *  DataTypeConversion: '<S38>/Data Type Conversion4'
     */
    rtb_VariantMerge_For_Variant_k1 = 0U;

#endif

    /* End of Sum: '<S616>/Sum' */

    /* Sum: '<S618>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion6'
     *  DataTypeConversion: '<S618>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontMin

    /* Outputs for Atomic SubSystem: '<S618>/Limiter1' */
    /* Switch: '<S619>/Switch1' incorporates:
     *  Constant: '<S618>/Constant Value1'
     *  RelationalOperator: '<S619>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeT_d4)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeT_d4;
    }

    /* End of Switch: '<S619>/Switch1' */

    /* Switch: '<S619>/Switch' incorporates:
     *  Constant: '<S618>/Constant Value2'
     *  RelationalOperator: '<S619>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S619>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S618>/Constant Value'
     */
    rtb_VariantMerge_For_Variant__n = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig
        - -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S618>/Limiter1' */
#else

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueMin' incorporates:
     *  Constant: '<S38>/Const6'
     *  DataTypeConversion: '<S38>/Data Type Conversion6'
     */
    rtb_VariantMerge_For_Variant__n = 0U;

#endif

    /* End of Sum: '<S618>/Sum' */

    /* Sum: '<S620>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion8'
     *  DataTypeConversion: '<S620>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptShaped

    /* Outputs for Atomic SubSystem: '<S620>/Limiter1' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  Constant: '<S620>/Constant Value1'
     *  RelationalOperator: '<S621>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeT_gt)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeT_gt;
    }

    /* End of Switch: '<S621>/Switch1' */

    /* Switch: '<S621>/Switch' incorporates:
     *  Constant: '<S620>/Constant Value2'
     *  RelationalOperator: '<S621>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S621>/Switch' */

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S620>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_So = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig
        - -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S620>/Limiter1' */
#else

    /* VariantMerge generated from: '<S38>/Vrnt_SumTorqueSelDTTC' incorporates:
     *  Constant: '<S38>/Const8'
     *  DataTypeConversion: '<S38>/Data Type Conversion8'
     */
    rtb_VariantMerge_For_Variant_So = 0U;

#endif

    /* End of Sum: '<S620>/Sum' */

    /* Sum: '<S624>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion10'
     *  DataTypeConversion: '<S624>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMSumTrqStatic

    /* Outputs for Atomic SubSystem: '<S624>/Limiter1' */
    /* Switch: '<S625>/Switch1' incorporates:
     *  Constant: '<S624>/Constant Value1'
     *  RelationalOperator: '<S625>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_d)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_d;
    }

    /* End of Switch: '<S625>/Switch1' */

    /* Switch: '<S625>/Switch' incorporates:
     *  Constant: '<S624>/Constant Value2'
     *  RelationalOperator: '<S625>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S625>/Switch' */

    /* DataTypeConversion: '<S636>/Data Type Conversion' incorporates:
     *  Constant: '<S624>/Constant Value'
     */
    rtb_DataTypeConversion_pq = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
        -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S624>/Limiter1' */
#else

    /* DataTypeConversion: '<S636>/Data Type Conversion' incorporates:
     *  Constant: '<S38>/Const10'
     *  DataTypeConversion: '<S38>/Data Type Conversion10'
     */
    rtb_DataTypeConversion_pq = 0U;

#endif

    /* End of Sum: '<S624>/Sum' */

    /* Sum: '<S622>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion12'
     *  DataTypeConversion: '<S622>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMSumTrqActSEM

    /* Outputs for Atomic SubSystem: '<S622>/Limiter1' */
    /* Switch: '<S623>/Switch1' incorporates:
     *  Constant: '<S622>/Constant Value1'
     *  RelationalOperator: '<S623>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_m)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_m;
    }

    /* End of Switch: '<S623>/Switch1' */

    /* Switch: '<S623>/Switch' incorporates:
     *  Constant: '<S622>/Constant Value2'
     *  RelationalOperator: '<S623>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S623>/Switch' */

    /* DataTypeConversion: '<S635>/Data Type Conversion' incorporates:
     *  Constant: '<S622>/Constant Value'
     */
    rtb_DataTypeConversion_io = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
        -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S622>/Limiter1' */
#else

    /* DataTypeConversion: '<S635>/Data Type Conversion' incorporates:
     *  Constant: '<S38>/Const12'
     *  DataTypeConversion: '<S38>/Data Type Conversion12'
     */
    rtb_DataTypeConversion_io = 0U;

#endif

    /* End of Sum: '<S622>/Sum' */

    /* Sum: '<S626>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion14'
     *  DataTypeConversion: '<S626>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadTorqFrontOpt

    /* Outputs for Atomic SubSystem: '<S626>/Limiter1' */
    /* Switch: '<S627>/Switch1' incorporates:
     *  Constant: '<S626>/Constant Value1'
     *  RelationalOperator: '<S627>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_p)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_p;
    }

    /* End of Switch: '<S627>/Switch1' */

    /* Switch: '<S627>/Switch' incorporates:
     *  Constant: '<S626>/Constant Value2'
     *  RelationalOperator: '<S627>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S627>/Switch' */

    /* DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
     *  Constant: '<S626>/Constant Value'
     */
    rtb_DataTypeConversion3 = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig -
        -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S626>/Limiter1' */
#else

    /* DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
     *  Constant: '<S38>/Const14'
     *  DataTypeConversion: '<S38>/Data Type Conversion14'
     */
    rtb_DataTypeConversion3 = 0U;

#endif

    /* End of Sum: '<S626>/Sum' */

    /* Sum: '<S628>/Sum' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion16'
     *  DataTypeConversion: '<S628>/Data Type Conversion'
     *  Gain: '<S628>/Gain'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD16_VeTTQRMLoadFrontOptxShaping

    /* Outputs for Atomic SubSystem: '<S628>/Limiter1' */
    /* Switch: '<S629>/Switch1' incorporates:
     *  Constant: '<S628>/Constant Value1'
     *  RelationalOperator: '<S629>/Relational Operator'
     */
    if (1547.5F < rtb_TmpSignalConversionAtVeTT_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1547.5F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_k;
    }

    /* End of Switch: '<S629>/Switch1' */

    /* Switch: '<S629>/Switch' incorporates:
     *  Constant: '<S628>/Constant Value2'
     *  RelationalOperator: '<S629>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S629>/Switch' */

    /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
     *  Constant: '<S628>/Constant Value'
     */
    rtb_DataTypeConversion2 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig -
        -500.0F) * 4.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S628>/Limiter1' */
#else

    /* DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
     *  Constant: '<S38>/Const16'
     *  DataTypeConversion: '<S38>/Data Type Conversion16'
     */
    rtb_DataTypeConversion2 = 0U;

#endif

    /* End of Sum: '<S628>/Sum' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD16' incorporates:
     *  Constant: '<S5>/Const201'
     */
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_Accel_Pedal_Override = false;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_CRC_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_MessageCounter_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueMax =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueMin =
        rtb_VariantMerge_For_Variant__n;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueSel_D_TTC =
        rtb_VariantMerge_For_Variant_So;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueStatic =
        rtb_DataTypeConversion_pq;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueStatic_SEM =
        rtb_DataTypeConversion_io;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorqueTgt_SEM =
        rtb_DataTypeConversion3;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16.E_SumTorque_DrvReqMod =
        rtb_DataTypeConversion2;

    /* Outputs for Atomic SubSystem: '<S630>/Limiter1' */
    /* Switch: '<S643>/Switch1' incorporates:
     *  Constant: '<S630>/Constant Value1'
     *  RelationalOperator: '<S643>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_h2)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_h2;
    }

    /* End of Switch: '<S643>/Switch1' */

    /* Switch: '<S643>/Switch' incorporates:
     *  Constant: '<S630>/Constant Value2'
     *  RelationalOperator: '<S643>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeWTAR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeWTAR = -65534.0F;
    }

    /* End of Switch: '<S643>/Switch' */
    /* End of Outputs for SubSystem: '<S630>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S634>/Limiter1' */
    /* Switch: '<S647>/Switch1' incorporates:
     *  Constant: '<S634>/Constant Value1'
     *  RelationalOperator: '<S647>/Relational Operator'
     */
    if (65534.0F < rtb_TmpSignalConversionAtVeAX_n)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65534.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_n;
    }

    /* End of Switch: '<S647>/Switch1' */

    /* Switch: '<S647>/Switch' incorporates:
     *  Constant: '<S634>/Constant Value2'
     *  RelationalOperator: '<S647>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65535.0F)
    {
        rtb_TmpSignalConversionAtVeAXLR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAXLR = -65535.0F;
    }

    /* End of Switch: '<S647>/Switch' */
    /* End of Outputs for SubSystem: '<S634>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S635>/Limiter1' */
    /* Switch: '<S648>/Switch1' incorporates:
     *  Constant: '<S635>/Constant Value1'
     *  RelationalOperator: '<S648>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVeS_pr)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeS_pr;
    }

    /* End of Switch: '<S648>/Switch1' */

    /* Switch: '<S648>/Switch' incorporates:
     *  Constant: '<S635>/Constant Value2'
     *  RelationalOperator: '<S648>/Relational Operator1'
     */
    if (rtb_Gain_ig > -65534.0F)
    {
        rtb_TmpSignalConversionAtVeHMIR = rtb_Gain_ig;
    }
    else
    {
        rtb_TmpSignalConversionAtVeHMIR = -65534.0F;
    }

    /* End of Switch: '<S648>/Switch' */
    /* End of Outputs for SubSystem: '<S635>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S636>/Limiter1' */
    /* Switch: '<S649>/Switch1' incorporates:
     *  Constant: '<S636>/Constant Value1'
     *  RelationalOperator: '<S649>/Relational Operator'
     */
    if (65534.0F < rtb_TmpSignalConversionAtVeAX_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65534.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeAX_k;
    }

    /* End of Switch: '<S649>/Switch1' */

    /* Switch: '<S649>/Switch' incorporates:
     *  Constant: '<S636>/Constant Value2'
     *  RelationalOperator: '<S649>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65535.0F)
    {
        rtb_Gain_ig = -65535.0F;
    }

    /* End of Switch: '<S649>/Switch' */
    /* End of Outputs for SubSystem: '<S636>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S636>/Constant Value'
     *  DataTypeConversion: '<S636>/Data Type Conversion'
     *  Gain: '<S636>/Gain'
     *  Sum: '<S636>/Sum'
     */
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Rear_Axle_Target_Torque = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65535.0F) * 0.5F), 65536.0F));

    /* Sum: '<S655>/Sum' incorporates:
     *  DataTypeConversion: '<S39>/Data Type Conversion13'
     *  DataTypeConversion: '<S655>/Data Type Conversion'
     */
#if Rte_SysCon_VrntST2B_PTTORQUEFD1FD3_VeTTQRMLoadFrontOptExp

    /* Outputs for Atomic SubSystem: '<S655>/Limiter1' */
    /* Switch: '<S656>/Switch1' incorporates:
     *  Constant: '<S655>/Constant Value1'
     *  RelationalOperator: '<S656>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTTQR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTTQR;
    }

    /* End of Switch: '<S656>/Switch1' */

    /* Switch: '<S656>/Switch' incorporates:
     *  Constant: '<S655>/Constant Value2'
     *  RelationalOperator: '<S656>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -500.0F)
    {
        rtb_Gain_ig = -500.0F;
    }

    /* End of Switch: '<S656>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S655>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf(rtb_Gain_ig
        - -500.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S655>/Limiter1' */
#else

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S39>/Const13'
     *  DataTypeConversion: '<S39>/Data Type Conversion13'
     */
    rtb_VariantMerge_For_Variant_k1 = 0U;

#endif

    /* End of Sum: '<S655>/Sum' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_100' */
    (void)Rte_Read_VeOBCR_t_EstTimeDCFastChrg_100_Value(&tmpRead_12);

    /* Inport: '<Root>/VeOBCR_t_EstTimeDCFastChrg_80' */
    (void)Rte_Read_VeOBCR_t_EstTimeDCFastChrg_80_Value(&tmpRead_11);

    /* Inport: '<Root>/VeSRMR_b_VehStndStillReq_OPD' */
    (void)Rte_Read_VeSRMR_b_VehStndStillReq_OPD_Value(&tmpRead_10);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Outputs for Atomic SubSystem: '<S637>/Limiter1' */
    /* Switch: '<S650>/Switch1' incorporates:
     *  Constant: '<S637>/Constant Value1'
     *  RelationalOperator: '<S650>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_l)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_l;
    }

    /* End of Switch: '<S650>/Switch1' */

    /* Switch: '<S650>/Switch' incorporates:
     *  Constant: '<S637>/Constant Value2'
     *  RelationalOperator: '<S650>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S650>/Switch' */
        rtb_TmpSignalConversionAtVeAX_k = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S650>/Switch' */
        rtb_TmpSignalConversionAtVeAX_k = -500.0F;
    }

    /* End of Switch: '<S650>/Switch' */
    /* End of Outputs for SubSystem: '<S637>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S638>/Limiter1' */
    /* Switch: '<S651>/Switch1' incorporates:
     *  Constant: '<S638>/Constant Value1'
     *  RelationalOperator: '<S651>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeT_cq)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeT_cq;
    }

    /* End of Switch: '<S651>/Switch1' */

    /* Switch: '<S651>/Switch' incorporates:
     *  Constant: '<S638>/Constant Value2'
     *  RelationalOperator: '<S651>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S651>/Switch' */
        rtb_TmpSignalConversionAtVeT_cq = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S651>/Switch' */
        rtb_TmpSignalConversionAtVeT_cq = -500.0F;
    }

    /* End of Switch: '<S651>/Switch' */
    /* End of Outputs for SubSystem: '<S638>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S640>/Limiter1' */
    /* Switch: '<S653>/Switch1' incorporates:
     *  Constant: '<S640>/Constant Value1'
     *  RelationalOperator: '<S653>/Relational Operator'
     */
    if (1546.0F < rtb_TmpSignalConversionAtVeTT_d)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 1546.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeTT_d;
    }

    /* End of Switch: '<S653>/Switch1' */

    /* Switch: '<S653>/Switch' incorporates:
     *  Constant: '<S640>/Constant Value2'
     *  RelationalOperator: '<S653>/Relational Operator1'
     */
    if (rtb_Gain_ig > -500.0F)
    {
        /* Switch: '<S653>/Switch' */
        rtb_TmpSignalConversionAtVeTT_d = rtb_Gain_ig;
    }
    else
    {
        /* Switch: '<S653>/Switch' */
        rtb_TmpSignalConversionAtVeTT_d = -500.0F;
    }

    /* End of Switch: '<S653>/Switch' */
    /* End of Outputs for SubSystem: '<S640>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S633>/Limiter1' */
    /* Switch: '<S646>/Switch1' incorporates:
     *  Constant: '<S633>/Constant Value1'
     *  RelationalOperator: '<S646>/Relational Operator'
     */
    if (65535.0F < rtb_TmpSignalConversionAtVe_m2r)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 65535.0F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVe_m2r;
    }

    /* End of Switch: '<S646>/Switch1' */
    /* End of Outputs for SubSystem: '<S633>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S630>/Constant Value'
     *  Constant: '<S634>/Constant Value'
     *  Constant: '<S635>/Constant Value'
     *  Constant: '<S637>/Constant Value'
     *  Constant: '<S638>/Constant Value'
     *  Constant: '<S640>/Constant Value'
     *  DataTypeConversion: '<S630>/Data Type Conversion'
     *  DataTypeConversion: '<S634>/Data Type Conversion'
     *  DataTypeConversion: '<S635>/Data Type Conversion'
     *  DataTypeConversion: '<S637>/Data Type Conversion'
     *  DataTypeConversion: '<S638>/Data Type Conversion'
     *  DataTypeConversion: '<S640>/Data Type Conversion'
     *  Gain: '<S630>/Gain'
     *  Gain: '<S634>/Gain'
     *  Gain: '<S635>/Gain'
     *  Sum: '<S630>/Sum'
     *  Sum: '<S634>/Sum'
     *  Sum: '<S635>/Sum'
     *  Sum: '<S637>/Sum'
     *  Sum: '<S638>/Sum'
     *  Sum: '<S640>/Sum'
     */
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_ACC_NCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Accel_Pedal_Override =
        rtb_TmpSignalConversionAtVeDT_k;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_CRC_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_ESC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeSCCR;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Front_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeWTAR -
            -65534.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Front_Axle_Target_Torque = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeAXLR -
            -65535.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_MessageCounter_PT_TORQUE_FD_1 = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_PPPA_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_RRCC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Rear_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf(0.5F * (rtb_TmpSignalConversionAtVeHMIR -
            -65534.0F)), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SSC_TrqEnblRq_Allowed =
        rtb_TmpSignalConversionAtVeDT_g;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueExp =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueMax = (uint16)((sint32)fmodf
        (floorf(rtb_TmpSignalConversionAtVeAX_k - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueMin = (uint16)((sint32)fmodf
        (floorf(rtb_TmpSignalConversionAtVeT_cq - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueSel_D_TTC = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueStatic = (uint16)((sint32)
        fmodf(floorf(rtb_TmpSignalConversionAtVeTT_d - -500.0F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueStatic_SEM = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorqueTgt_SEM = 0U;
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_SumTorque_DrvReqMod = 0U;

    /* Outputs for Atomic SubSystem: '<S633>/Limiter1' */
    /* Switch: '<S646>/Switch' incorporates:
     *  Constant: '<S633>/Constant Value2'
     *  RelationalOperator: '<S646>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -65534.0F)
    {
        rtb_Gain_ig = -65534.0F;
    }

    /* End of Switch: '<S646>/Switch' */
    /* End of Outputs for SubSystem: '<S633>/Limiter1' */

    /* BusCreator: '<S5>/BusPT_TORQUE_FD_1_FD3' incorporates:
     *  Constant: '<S633>/Constant Value'
     *  DataTypeConversion: '<S39>/Data Type Conversion23'
     *  DataTypeConversion: '<S633>/Data Type Conversion'
     *  Gain: '<S633>/Gain'
     *  Sum: '<S633>/Sum'
     */
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Total_AxleTorque_Static = (uint16)
        ((sint32)fmodf(floorf((rtb_Gain_ig - -65534.0F) * 0.5F), 65536.0F));
    ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3.E_Veh_StandStill_Req_OPD = tmpRead_10 ?
        ((uint8)1) : ((uint8)0);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeERER_b_EstRange_SNA' */
    (void)Rte_Read_VeERER_b_EstRange_SNA_Value(&tmpRead_14);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* Switch: '<S43>/switch' incorporates:
     *  Inport: '<Root>/VeERER_l_EstRange'
     */
    if (tmpRead_14)
    {
        /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
         *  Constant: '<S43>/Constant'
         *  DataTypeConversion: '<S10>/Data Type Conversion2'
         */
        ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_EstRange = 2047U;
    }
    else
    {
        (void)Rte_Read_VeERER_l_EstRange_Value(&tmpRead_13);

        /* DataTypeConversion: '<S43>/Data Type Conversion5' incorporates:
         *  Inport: '<Root>/VeERER_l_EstRange'
         */
        rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_13), 65536.0F);

        /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
         *  DataTypeConversion: '<S10>/Data Type Conversion2'
         *  DataTypeConversion: '<S43>/Data Type Conversion5'
         */
        ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_EstRange = (uint16)((sint32)
            ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
            (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    }

    /* End of Switch: '<S43>/switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_I_MaxCurrAlwd_PPIM' */
    (void)Rte_Read_VeVTLR_I_MaxCurrAlwd_PPIM_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeOBCR_e_Protocol_Priority3' */
    (void)Rte_Read_VeOBCR_e_Protocol_Priority3_Value(&tmpRead_1h);

    /* Inport: '<Root>/VeOBCR_e_Protocol_Priority2' */
    (void)Rte_Read_VeOBCR_e_Protocol_Priority2_Value(&tmpRead_1g);

    /* Inport: '<Root>/VeOBCR_e_Protocol_Priority1' */
    (void)Rte_Read_VeOBCR_e_Protocol_Priority1_Value(&tmpRead_1f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11' incorporates:
     *  Inport: '<Root>/VeOBCR_k_MaxEntriesSASScheduleTuple'
     */
    (void)Rte_Read_VeOBCR_k_MaxEntriesSASScheduleTuple_Value
        (&ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_MaxEntriesSASScheduleTuple);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeOBCR_t_RemTimeToFullSOC' */
    (void)Rte_Read_VeOBCR_t_RemTimeToFullSOC_Value(&tmpRead_1e);

    /* Inport: '<Root>/VeOBCR_t_RemTimeToBulkSOC' */
    (void)Rte_Read_VeOBCR_t_RemTimeToBulkSOC_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeOBCR_e_HCP_EVErrorCode' */
    (void)Rte_Read_VeOBCR_e_HCP_EVErrorCode_Value(&tmpRead_1c);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyRequest' */
    (void)Rte_Read_VeOBCR_E_EVEnergyRequest_Value(&tmpRead_1b);

    /* Inport: '<Root>/VeOBCR_E_EVEnergyCapacity' */
    (void)Rte_Read_VeOBCR_E_EVEnergyCapacity_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeOBCR_e_ChargeProgress' */
    (void)Rte_Read_VeOBCR_e_ChargeProgress_Value(&tmpRead_19);

    /* Inport: '<Root>/VeOBCR_U_EVMax_V_Limit' */
    (void)Rte_Read_VeOBCR_U_EVMax_V_Limit_Value(&tmpRead_18);

    /* Inport: '<Root>/VeOBCR_I_EVMax_I_Limit' */
    (void)Rte_Read_VeOBCR_I_EVMax_I_Limit_Value(&tmpRead_17);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Inport: '<Root>/VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn'
     */
    (void)Rte_Read_VeSSDR_b_DrvNotAllwdTPChckKeepPlugIn_Value
        (&ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_VDCM_PopUpMessage7);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis' */
    (void)Rte_Read_VeHMIR_e_VDCM_PopUpChrgPrtMis_Value(&tmpRead_16);

    /* Inport: '<Root>/VeERER_l_EstRange_ChrgStpTime' */
    (void)Rte_Read_VeERER_l_EstRange_ChrgStpTime_Value(&tmpRead_15);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Inport: '<Root>/VeHMIR_b_ThrmlRnAway_Lmp'
     */
    (void)Rte_Read_VeHMIR_b_ThrmlRnAway_Lmp_Value
        (&ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_BatteryRunaway_Lamp_PT);

    /* Outputs for Atomic SubSystem: '<S690>/Limiter1' */
    /* Switch: '<S692>/Switch1' incorporates:
     *  Constant: '<S690>/Constant Value1'
     *  RelationalOperator: '<S692>/Relational Operator'
     */
    if (99.6188F < rtb_TmpSignalConversionAtVeH_mk)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 99.6188F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeH_mk;
    }

    /* End of Switch: '<S692>/Switch1' */

    /* Switch: '<S692>/Switch' incorporates:
     *  Constant: '<S690>/Constant Value2'
     *  RelationalOperator: '<S692>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S692>/Switch' */
    /* End of Outputs for SubSystem: '<S690>/Limiter1' */

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' */
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_CRC_VDCM_HMI = 0U;

    /* DataTypeConversion: '<S43>/Data Type Conversion3' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_11), 256.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion3'
     */
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_DC_EstChargeTime1 = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S43>/Data Type Conversion4' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_12), 256.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  DataTypeConversion: '<S43>/Data Type Conversion4'
     *  DataTypeConversion: '<S690>/Data Type Conversion'
     *  Gain: '<S690>/Gain'
     */
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_DC_EstChargeTime2 = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_Est_HVBatSOC_VDCM = (uint8)((sint32)fmodf
        (floorf(2.54971957F * rtb_Gain_ig), 256.0F));

    /* DataTypeConversion: '<S43>/Data Type Conversion7' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_15), 65536.0F);

    /* BusCreator: '<S5>/BusVDCM_HMI_FD3' incorporates:
     *  Constant: '<S5>/Const87'
     *  Constant: '<S5>/Const88'
     *  DataTypeConversion: '<S43>/Data Type Conversion12'
     *  DataTypeConversion: '<S43>/Data Type Conversion7'
     *  Inport: '<Root>/VeHMIR_e_VDCM_PopUpChrgPrtMis'
     */
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_Est_Range_ChrgStopTime = (uint16)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)((sint32)(
        -((sint32)((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint16)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_HVBatteryTempForDisplay = 254U;
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_MessageCounter_VDCM_HMI = 0U;
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_ServiceHVError = false;
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_ThermalRunaway_Alert = false;
    ST2B_FUNC_ac_B.BusVDCM_HMI_FD3.E_VDCM_PopUpMessage5 = (uint8)tmpRead_16;

    /* DataTypeConversion: '<S10>/Data Type Conversion10' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_1a), 4.2949673E+9F);
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_EVEnergyCapacity =
        (rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((uint32)((sint32)(-((sint32)
        ((uint32)((float32)(-rtb_TmpSignalConversionAtVeVS_l))))))) : ((uint32)
        rtb_TmpSignalConversionAtVeVS_l);

    /* DataTypeConversion: '<S10>/Data Type Conversion11' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_1b), 4.2949673E+9F);
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_EVEnergyRequest =
        (rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((uint32)((sint32)(-((sint32)
        ((uint32)((float32)(-rtb_TmpSignalConversionAtVeVS_l))))))) : ((uint32)
        rtb_TmpSignalConversionAtVeVS_l);

    /* DataTypeConversion: '<S10>/Data Type Conversion15' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_1d), 4.2949673E+9F);
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_TimeToBulkSOC =
        (rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((uint32)((sint32)(-((sint32)
        ((uint32)((float32)(-rtb_TmpSignalConversionAtVeVS_l))))))) : ((uint32)
        rtb_TmpSignalConversionAtVeVS_l);

    /* DataTypeConversion: '<S10>/Data Type Conversion16' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_1e), 4.2949673E+9F);
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_TimeToFullSOC =
        (rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((uint32)((sint32)(-((sint32)
        ((uint32)((float32)(-rtb_TmpSignalConversionAtVeVS_l))))))) : ((uint32)
        rtb_TmpSignalConversionAtVeVS_l);

    /* BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11' incorporates:
     *  Constant: '<S10>/CRC_EVCU_ISO15118_STATUS1'
     */
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_CRC_EVCU_ISO15118_STATUS1 =
        0U;

    /* DataTypeConversion: '<S10>/Data Type Conversion2' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_17), 65536.0F);

    /* BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion2'
     */
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_EVMaxCurrent = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));

    /* DataTypeConversion: '<S10>/Data Type Conversion3' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_18), 65536.0F);

    /* BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11' incorporates:
     *  Constant: '<S5>/Const100'
     *  Constant: '<S5>/Const91'
     *  Constant: '<S5>/Const95'
     *  Constant: '<S5>/Const96'
     *  Constant: '<S5>/Const97'
     *  Constant: '<S5>/Const98'
     *  Constant: '<S5>/Const99'
     *  DataTypeConversion: '<S10>/Data Type Conversion12'
     *  DataTypeConversion: '<S10>/Data Type Conversion13'
     *  DataTypeConversion: '<S10>/Data Type Conversion23'
     *  DataTypeConversion: '<S10>/Data Type Conversion24'
     *  DataTypeConversion: '<S10>/Data Type Conversion25'
     *  DataTypeConversion: '<S10>/Data Type Conversion3'
     *  DataTypeConversion: '<S10>/Data Type Conversion6'
     *  DataTypeConversion: '<S10>/Data Type Conversion9'
     *  Inport: '<Root>/VeOBCR_e_ChargeProgress'
     *  Inport: '<Root>/VeOBCR_e_Protocol_Priority1'
     *  Inport: '<Root>/VeOBCR_e_Protocol_Priority2'
     *  Inport: '<Root>/VeOBCR_e_Protocol_Priority3'
     */
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_EVMaxVoltage = (uint16)
        ((sint32)((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint16)
            ((sint32)(-((sint32)((sint16)((uint16)((float32)
                  (-rtb_TmpSignalConversionAtVeVS_l))))))))) : ((sint32)((uint16)
            rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_EVMinCurrent = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Eamount = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_ChargeProgress =
        (uint8)tmpRead_19;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_ChargeSession = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_DepartureTime = 1U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_EVCCID = 0ULL;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_EVErrorCode = (uint8)
        tmpRead_1c;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_SessionID = 0ULL;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_ISO15118_TLS_Connected =
        false;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_MC_EVCU_ISO15118_STATUS1 = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Namespace_Priority_1
        = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Namespace_Priority_2
        = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Namespace_Priority_3
        = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Namespace_Priority_4
        = 0U;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Priority1 = (uint8)
        tmpRead_1f;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Priority2 = (uint8)
        tmpRead_1g;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_Protocol_Priority3 = (uint8)
        tmpRead_1h;
    ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11.E_SelectionParameterSetID = 0U;

    /* Sum: '<S658>/Sum' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion6'
     *  DataTypeConversion: '<S658>/Data Type Conversion'
     *  Gain: '<S658>/Gain'
     */
#if Rte_SysCon_VrntST2B_RPFFD3FD11_VeVTHRPV2HEVMaxPwrLim

    /* Outputs for Atomic SubSystem: '<S658>/Limiter1' */
    /* Switch: '<S659>/Switch1' incorporates:
     *  Constant: '<S658>/Constant Value1'
     *  RelationalOperator: '<S659>/Relational Operator'
     */
    if (819.2F < rtb_TmpSignalConversionAtVeVTHR)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 819.2F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVeVTHR;
    }

    /* End of Switch: '<S659>/Switch1' */

    /* Switch: '<S659>/Switch' incorporates:
     *  Constant: '<S658>/Constant Value2'
     *  RelationalOperator: '<S659>/Relational Operator1'
     */
    if (rtb_Gain_ig <= -819.1F)
    {
        rtb_Gain_ig = -819.1F;
    }

    /* End of Switch: '<S659>/Switch' */

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S658>/Constant Value'
     */
    rtb_VariantMerge_For_Variant_k1 = (uint16)((sint32)fmodf(floorf((rtb_Gain_ig
        - -819.1F) * 10.0F), 65536.0F));

    /* End of Outputs for SubSystem: '<S658>/Limiter1' */
#else

    /* VariantMerge generated from: '<S40>/Vrnt_V2HHVCMSEVMaxPLimit' incorporates:
     *  Constant: '<S40>/Const6'
     *  DataTypeConversion: '<S40>/Data Type Conversion6'
     */
    rtb_VariantMerge_For_Variant_k1 = 0U;

#endif

    /* End of Sum: '<S658>/Sum' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeVTLR_e_PPIM_MdRq' */
    (void)Rte_Read_VeVTLR_e_PPIM_MdRq_Value(&tmpRead_1m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/ST2B_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen1' incorporates:
     *  SubSystem: '<S2>/SigMngt'
     */
    /* BusCreator: '<S5>/BusRPF_FD_3_FD11' incorporates:
     *  Inport: '<Root>/VeVTLR_b_ACFreqCmd'
     */
    (void)Rte_Read_VeVTLR_b_ACFreqCmd_Value
        (&ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_ACFrequencyCommand);
    ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_CRC_RPF_FD_3 = 0U;

    /* DataTypeConversion: '<S40>/Data Type Conversion3' */
    rtb_TmpSignalConversionAtVeVS_l = fmodf(floorf(tmpRead_1l), 256.0F);

    /* BusCreator: '<S5>/BusRPF_FD_3_FD11' incorporates:
     *  DataTypeConversion: '<S40>/Data Type Conversion3'
     *  DataTypeConversion: '<S40>/Data Type Conversion7'
     *  Inport: '<Root>/VeVTLR_e_PPIM_MdRq'
     */
    ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_DCInputCurrentLimit_V2X = (uint8)((sint32)
        ((rtb_TmpSignalConversionAtVeVS_l < 0.0F) ? ((sint32)((uint8)((sint32)
        (-((sint32)((sint8)((uint8)((float32)(-rtb_TmpSignalConversionAtVeVS_l)))))))))
         : ((sint32)((uint8)rtb_TmpSignalConversionAtVeVS_l))));
    ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_MC_RPF_FD_3 = 0U;
    ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_V2H_HVCMS_EVMax_P_Limit =
        rtb_VariantMerge_For_Variant_k1;
    ST2B_FUNC_ac_B.BusRPF_FD_3_FD11.E_V2X_ModeRequest = (uint8)tmpRead_1m;

    /* Switch: '<S29>/switch' incorporates:
     *  Constant: '<S437>/Constant Value1'
     *  RelationalOperator: '<S456>/Relational Operator'
     *  Switch: '<S456>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeP_f0)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD16' incorporates:
         *  Constant: '<S29>/Constant'
         *  Switch: '<S30>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_Pwr_Electr_Loop_FlwRate_MCPA_P
            = MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S437>/Limiter1' */
        if (25.4F < rtb_TmpSignalConversionAtVePMPR)
        {
            /* Switch: '<S456>/Switch1' incorporates:
             *  Constant: '<S437>/Constant Value1'
             *  Gain: '<S437>/Gain'
             */
            rtb_TmpSignalConversionAtVe_m2r = 25.4F;
        }
        else
        {
            /* Gain: '<S437>/Gain' incorporates:
             *  Switch: '<S456>/Switch1'
             */
            rtb_TmpSignalConversionAtVe_m2r = rtb_TmpSignalConversionAtVePMPR;
        }

        /* Switch: '<S456>/Switch' incorporates:
         *  Constant: '<S437>/Constant Value2'
         *  RelationalOperator: '<S456>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVe_m2r <= 0.0F)
        {
            rtb_TmpSignalConversionAtVe_m2r = 0.0F;
        }

        /* End of Switch: '<S456>/Switch' */
        /* End of Outputs for SubSystem: '<S437>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD16' incorporates:
         *  DataTypeConversion: '<S437>/Data Type Conversion'
         *  Gain: '<S437>/Gain'
         *  Switch: '<S30>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_Pwr_Electr_Loop_FlwRate_MCPA_P
            = (uint8)((sint32)fmodf(floorf(10.0F *
                        rtb_TmpSignalConversionAtVe_m2r), 256.0F));
    }

    /* End of Switch: '<S29>/switch' */

    /* Switch: '<S29>/switch1' incorporates:
     *  Constant: '<S438>/Constant Value1'
     *  RelationalOperator: '<S457>/Relational Operator'
     *  Switch: '<S457>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVePM_g)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD16' incorporates:
         *  Constant: '<S29>/Constant1'
         *  Switch: '<S30>/switch1'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_Pwr_Electr_Loop_FlwRate_MCPB_P
            = MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S438>/Limiter1' */
        if (25.4F < rtb_TmpSignalConversionAtVePM_b)
        {
            /* Switch: '<S457>/Switch1' incorporates:
             *  Constant: '<S438>/Constant Value1'
             *  Gain: '<S438>/Gain'
             */
            rtb_TmpSignalConversionAtVe_m2r = 25.4F;
        }
        else
        {
            /* Gain: '<S438>/Gain' incorporates:
             *  Switch: '<S457>/Switch1'
             */
            rtb_TmpSignalConversionAtVe_m2r = rtb_TmpSignalConversionAtVePM_b;
        }

        /* Switch: '<S457>/Switch' incorporates:
         *  Constant: '<S438>/Constant Value2'
         *  RelationalOperator: '<S457>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVe_m2r <= 0.0F)
        {
            rtb_TmpSignalConversionAtVe_m2r = 0.0F;
        }

        /* End of Switch: '<S457>/Switch' */
        /* End of Outputs for SubSystem: '<S438>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD16' incorporates:
         *  DataTypeConversion: '<S438>/Data Type Conversion'
         *  Gain: '<S438>/Gain'
         *  Switch: '<S30>/switch1'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_Pwr_Electr_Loop_FlwRate_MCPB_P
            = (uint8)((sint32)fmodf(floorf(10.0F *
                        rtb_TmpSignalConversionAtVe_m2r), 256.0F));
    }

    /* End of Switch: '<S29>/switch1' */

    /* Sum: '<S443>/Sum' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion9'
     *  DataTypeConversion: '<S443>/Data Type Conversion'
     *  Gain: '<S443>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD16_VePMPRdVGenFlw

    /* Outputs for Atomic SubSystem: '<S443>/Limiter1' */
    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S443>/Constant Value1'
     *  RelationalOperator: '<S444>/Relational Operator'
     */
    if (25.4F < rtb_TmpSignalConversionAtVePM_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.4F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVePM_k;
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Switch: '<S444>/Switch' incorporates:
     *  Constant: '<S443>/Constant Value2'
     *  RelationalOperator: '<S444>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S444>/Switch' */

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' */
    rtb_VariantMerge_For_Variant__k = (uint8)((sint32)fmodf(floorf(10.0F *
        rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S443>/Limiter1' */
#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S29>/Const9'
     *  DataTypeConversion: '<S29>/Data Type Conversion9'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of Sum: '<S443>/Sum' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD16' incorporates:
     *  Constant: '<S29>/CRC_INVTARGET_PROPULSION2'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_CRC_INVTARGET_PROPULSION2 =
        0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_EVCU_MotorA_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_EVCU_MotorB_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_EVCU_MotorC_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_MC_INVTARGET_PROPULSION2 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_Pwr_Electr_Loop_FlwRate_SGCP_P
        = rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_SpdGrdtLim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_SpdGrdtLim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_SpdGrdtLim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_TqGrdtLim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_TqGrdtLim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_TqGrdtLim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMax_Unlim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMax_Unlim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMax_Unlim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMin_Unlim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMin_Unlim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16.E_UDCMin_Unlim_SGCP_P = 0U;

    /* Switch: '<S30>/switch' incorporates:
     *  Constant: '<S474>/Constant Value1'
     *  RelationalOperator: '<S493>/Relational Operator'
     *  Switch: '<S493>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeP_f0)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD5' incorporates:
         *  Constant: '<S30>/Constant'
         *  Switch: '<S30>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_Pwr_Electr_Loop_FlwRate_MCPA_P
            = MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S474>/Limiter1' */
        if (25.4F < rtb_TmpSignalConversionAtVePMPR)
        {
            /* Switch: '<S493>/Switch1' incorporates:
             *  Constant: '<S474>/Constant Value1'
             *  Gain: '<S474>/Gain'
             */
            rtb_TmpSignalConversionAtVePMPR = 25.4F;
        }

        /* Switch: '<S493>/Switch' incorporates:
         *  Constant: '<S474>/Constant Value2'
         *  RelationalOperator: '<S493>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVePMPR <= 0.0F)
        {
            rtb_TmpSignalConversionAtVePMPR = 0.0F;
        }

        /* End of Switch: '<S493>/Switch' */
        /* End of Outputs for SubSystem: '<S474>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD5' incorporates:
         *  DataTypeConversion: '<S474>/Data Type Conversion'
         *  Gain: '<S474>/Gain'
         *  Switch: '<S30>/switch'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_Pwr_Electr_Loop_FlwRate_MCPA_P
            = (uint8)((sint32)fmodf(floorf(10.0F *
                        rtb_TmpSignalConversionAtVePMPR), 256.0F));
    }

    /* End of Switch: '<S30>/switch' */

    /* Switch: '<S30>/switch1' incorporates:
     *  Constant: '<S475>/Constant Value1'
     *  RelationalOperator: '<S494>/Relational Operator'
     *  Switch: '<S494>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVePM_g)
    {
        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD5' incorporates:
         *  Constant: '<S30>/Constant1'
         *  Switch: '<S30>/switch1'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_Pwr_Electr_Loop_FlwRate_MCPB_P
            = MAX_uint8_T;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S475>/Limiter1' */
        if (25.4F < rtb_TmpSignalConversionAtVePM_b)
        {
            /* Switch: '<S494>/Switch1' incorporates:
             *  Constant: '<S475>/Constant Value1'
             *  Gain: '<S475>/Gain'
             */
            rtb_TmpSignalConversionAtVePM_b = 25.4F;
        }

        /* Switch: '<S494>/Switch' incorporates:
         *  Constant: '<S475>/Constant Value2'
         *  RelationalOperator: '<S494>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVePM_b <= 0.0F)
        {
            rtb_TmpSignalConversionAtVePM_b = 0.0F;
        }

        /* End of Switch: '<S494>/Switch' */
        /* End of Outputs for SubSystem: '<S475>/Limiter1' */

        /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD5' incorporates:
         *  DataTypeConversion: '<S475>/Data Type Conversion'
         *  Gain: '<S475>/Gain'
         *  Switch: '<S30>/switch1'
         */
        ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_Pwr_Electr_Loop_FlwRate_MCPB_P
            = (uint8)((sint32)fmodf(floorf(10.0F *
                        rtb_TmpSignalConversionAtVePM_b), 256.0F));
    }

    /* End of Switch: '<S30>/switch1' */

    /* Sum: '<S480>/Sum' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion9'
     *  DataTypeConversion: '<S480>/Data Type Conversion'
     *  Gain: '<S480>/Gain'
     */
#if Rte_SysCon_VrntST2B_INVTARGETPROPULSION2FD5_VePMPRdVGenFlw

    /* Outputs for Atomic SubSystem: '<S480>/Limiter1' */
    /* Switch: '<S481>/Switch1' incorporates:
     *  Constant: '<S480>/Constant Value1'
     *  RelationalOperator: '<S481>/Relational Operator'
     */
    if (25.4F < rtb_TmpSignalConversionAtVePM_k)
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = 25.4F;
    }
    else
    {
        /* Gain: '<S480>/Gain' */
        rtb_Gain_ig = rtb_TmpSignalConversionAtVePM_k;
    }

    /* End of Switch: '<S481>/Switch1' */

    /* Switch: '<S481>/Switch' incorporates:
     *  Constant: '<S480>/Constant Value2'
     *  RelationalOperator: '<S481>/Relational Operator1'
     */
    if (rtb_Gain_ig <= 0.0F)
    {
        rtb_Gain_ig = 0.0F;
    }

    /* End of Switch: '<S481>/Switch' */

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' */
    rtb_VariantMerge_For_Variant__k = (uint8)((sint32)fmodf(floorf(10.0F *
        rtb_Gain_ig), 256.0F));

    /* End of Outputs for SubSystem: '<S480>/Limiter1' */
#else

    /* VariantMerge generated from: '<S30>/Vrnt_PwrElectrLoopFlwRateSGCPP' incorporates:
     *  Constant: '<S30>/Const9'
     *  DataTypeConversion: '<S30>/Data Type Conversion9'
     */
    rtb_VariantMerge_For_Variant__k = 0U;

#endif

    /* End of Sum: '<S480>/Sum' */

    /* BusCreator: '<S5>/BusINVTARGET_PROPULSION2_FD5' incorporates:
     *  Constant: '<S30>/CRC_INVTARGET_PROPULSION2'
     */
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_CRC_INVTARGET_PROPULSION2 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_EVCU_MotorA_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_EVCU_MotorB_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_EVCU_MotorC_Speed = 32768U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_MC_INVTARGET_PROPULSION2 = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_Pwr_Electr_Loop_FlwRate_SGCP_P
        = rtb_VariantMerge_For_Variant__k;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_SpdGrdtLim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_SpdGrdtLim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_SpdGrdtLim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_TqGrdtLim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_TqGrdtLim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_TqGrdtLim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMax_Unlim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMax_Unlim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMax_Unlim_SGCP_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMin_Unlim_MCPA_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMin_Unlim_MCPB_P = 0U;
    ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5.E_UDCMin_Unlim_SGCP_P = 0U;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen1' */

    /* Outputs for Atomic SubSystem: '<S2>/ST2B_FUNC_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S4>/ST2B_FUNC_FastTEF_StopCheckpoint ' */
    Rte_Call_ST2B_FUNC_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/ST2B_FUNC_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_DRIVETRAIN_FD_3_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_DRIVETRAIN_FD_3_FD3_Pkt_COMTX_DRIVETRAIN_FD_3_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_ENGINE_SIMULATOR1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_ENGINE_SIMULATOR1_FD3_Pkt_COMTX_ENGINE_SIMULATOR1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt_COMTX_HYBRID_DISPLAY_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt_COMTX_PT_SYSTEM_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt_COMTX_PT_TORQUE_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_TRANSM_FD_1_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_TRANSM_FD_1_FD3_Pkt_COMTX_TRANSM_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_TRANSM_FD_2_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_TRANSM_FD_2_FD3_Pkt_COMTX_TRANSM_FD_2_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt_COMTX_VDCM_HMI_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_HMI_FD3);

    /* Outport: '<Root>/VeST2B_h_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt' incorporates:
     *  BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt_COMTX_PT_ENERGY_FD_1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_RPF_FD_3_FD11_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_RPF_FD_3_FD11_Pkt_COMTX_RPF_FD_3_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusRPF_FD_3_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_VDCM_OBCM2_FD11_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_OBCM2_FD11_Pkt_COMTX_VDCM_OBCM2_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11);

    /* Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt_COMTX_PT_SYSTEM_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt_COMTX_PT_TORQUE_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD16_Pkt_COMTX_INVTARGET_PROPULSION1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD16_Pkt_COMTX_INVTARGET_PROPULSION2_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD16_Pkt_COMTX_PT_SYSTEM_FD_1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD16_Pkt_COMTX_PT_TORQUE_FD_1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_FD_LHOM_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_FD_LHOM_FD5_Pkt_COMTX_HYBRID_FD_LHOM_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt_COMTX_INVTARGET_PROPULSION1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD5_Pkt_COMTX_INVTARGET_PROPULSION2_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt_COMTX_PT_ENERGY_FD_1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt_COMTX_PT_SYSTEM_FD_1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5);

    /* Outport: '<Root>/VeST2B_h_COMTX_VDCM_OBCM2_FD5_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_OBCM2_FD5_Pkt_COMTX_VDCM_OBCM2_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5);
}

/* Model initialize function */
FUNC(void, ST2B_FUNC_CODE) ST2B_FUNC_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt_COMTX_AXLE_TORQUE_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_DRIVETRAIN_FD_3_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_DRIVETRAIN_FD_3_FD3_Pkt_COMTX_DRIVETRAIN_FD_3_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusDRIVETRAIN_FD_3_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_ENGINE_SIMULATOR1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_ENGINE_SIMULATOR1_FD3_Pkt_COMTX_ENGINE_SIMULATOR1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusENGINE_SIMULATOR1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_DISPLAY_FD3_Pkt_COMTX_HYBRID_DISPLAY_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_DISPLAY_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt_COMTX_HYBRID_POWERTRAIN1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt_COMTX_HYBRID_POWERTRAIN2_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt_COMTX_HYBRID_POWERTRAIN4_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN4_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt_COMTX_HYBRID_POWERTRAIN5_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD3_Pkt_COMTX_PT_SYSTEM_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD3_Pkt_COMTX_PT_TORQUE_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_TRANSM_FD_1_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_TRANSM_FD_1_FD3_Pkt_COMTX_TRANSM_FD_1_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusTRANSM_FD_1_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_TRANSM_FD_2_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_TRANSM_FD_2_FD3_Pkt_COMTX_TRANSM_FD_2_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusTRANSM_FD_2_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_HMI_FD3_Pkt_COMTX_VDCM_HMI_FD3_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_HMI_FD3);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt' incorporates:
     *  BusCreator: '<S5>/BusEVCU_ISO15118_STATUS1_FD11'
     */
    (void)
        Rte_Write_VeST2B_h_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt_COMTX_EVCU_ISO15118_STATUS1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusEVCU_ISO15118_STATUS1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt_COMTX_HYBRID_CHARGING_COMMAND_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt_COMTX_HYBRID_CHARGING_STATUS_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt_COMTX_HYBRID_POWERTRAIN1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD11_Pkt_COMTX_PT_ENERGY_FD_1_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_RPF_FD_3_FD11_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_RPF_FD_3_FD11_Pkt_COMTX_RPF_FD_3_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusRPF_FD_3_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_VDCM_OBCM2_FD11_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_OBCM2_FD11_Pkt_COMTX_VDCM_OBCM2_FD11_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD11);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt_COMTX_AXLE_TORQUE_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusAXLE_TORQUE_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD14_Pkt_COMTX_PT_SYSTEM_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD14_Pkt_COMTX_PT_TORQUE_FD_1_FD14_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD14);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt_COMTX_HYBRID_POWERTRAIN1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt_COMTX_HYBRID_POWERTRAIN2_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN2_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt_COMTX_HYBRID_POWERTRAIN5_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD16_Pkt_COMTX_INVTARGET_PROPULSION1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD16_Pkt_COMTX_INVTARGET_PROPULSION2_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD16_Pkt_COMTX_PT_SYSTEM_FD_1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_TORQUE_FD_1_FD16_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_TORQUE_FD_1_FD16_Pkt_COMTX_PT_TORQUE_FD_1_FD16_Pkt
        (&ST2B_FUNC_ac_B.BusPT_TORQUE_FD_1_FD16);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt_COMTX_HYBRID_CHARGING_COMMAND_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_COMMAND_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt_COMTX_HYBRID_CHARGING_STATUS_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_CHARGING_STATUS_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_FD_LHOM_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_FD_LHOM_FD5_Pkt_COMTX_HYBRID_FD_LHOM_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_FD_LHOM_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt_COMTX_HYBRID_POWERTRAIN1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt_COMTX_HYBRID_POWERTRAIN5_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusHYBRID_POWERTRAIN5_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION1_FD5_Pkt_COMTX_INVTARGET_PROPULSION1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_INVTARGET_PROPULSION2_FD5_Pkt_COMTX_INVTARGET_PROPULSION2_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusINVTARGET_PROPULSION2_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_ENERGY_FD_1_FD5_Pkt_COMTX_PT_ENERGY_FD_1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusPT_ENERGY_FD_1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt' */
    (void)
        Rte_Write_VeST2B_h_COMTX_PT_SYSTEM_FD_1_FD5_Pkt_COMTX_PT_SYSTEM_FD_1_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusPT_SYSTEM_FD_1_FD5);

    /* SystemInitialize for Outport: '<Root>/VeST2B_h_COMTX_VDCM_OBCM2_FD5_Pkt' */
    (void)Rte_Write_VeST2B_h_COMTX_VDCM_OBCM2_FD5_Pkt_COMTX_VDCM_OBCM2_FD5_Pkt
        (&ST2B_FUNC_ac_B.BusVDCM_OBCM2_FD5);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
