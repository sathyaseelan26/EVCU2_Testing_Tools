/*
 * File: CR4B_FUNC_ac.h
 *
 * Code generated for Simulink model 'CR4B_FUNC_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 09:30:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CR4B_FUNC_ac_h_
#define RTW_HEADER_CR4B_FUNC_ac_h_
#include "Rte_Type.h"
#ifndef CR4B_FUNC_ac_COMMON_INCLUDES_
#define CR4B_FUNC_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CR4B_FUNC.h"
#endif                                 /* CR4B_FUNC_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_CR4B_FUNC_ac_T
{

#if Rte_SysCon_VrntCR4B_EngTorqACCCapability

    float32 TmpSignalConversionAtVeCRDB_M_E;/* '<S2>/VeCRDB_M_EngTqACCCapability' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq

    float32 TmpSignalConversionAtVeCRDB_M_e;/* '<S2>/VeCRDB_M_EngTqCapbltMaxOfTq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq

    float32 TmpSignalConversionAtVeCRDB__ek;/* '<S2>/VeCRDB_M_EngTqCapbltyMaxTq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq

    float32 TmpSignalConversionAtVeCRDB_M_m;/* '<S2>/VeCRDB_M_EngTqCapbltMinRnTq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq

    float32 TmpSignalConversionAtVeCRDB_M_n;/* '<S2>/VeCRDB_M_EngTqCapbltyMinTq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    float32 TmpSignalConversionAtVeCRDB_n_E;/* '<S2>/VeCRDB_n_EngTqCpbltRfEngSpd' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxTrqDes

    float32 TmpSignalConversionAtVeSR1B_M_M;/* '<S2>/VeSR1B_M_MRGB_MaxTrqDes' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBMtrBTrqRq

    float32 TmpSignalConversionAtVeSR1B_M_i;/* '<S2>/VeSR1B_M_MRGB_MtrBTrqRq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBOutputSpeed

    float32 TmpSignalConversionAtVeSR1B_n_M;/* '<S2>/VeSR1B_n_MRGB_Output_Speed' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBTransmOilTemp

    float32 TmpSignalConversionAtVeSR1B_T_M;
                                      /* '<S2>/VeSR1B_T_MRGB_Transm_Oil_Temp' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBUpshiftTime

    float32 TmpSignalConversionAtVeSR1B_y_M;/* '<S2>/VeSR1B_y_MRGB_Upshift_Time' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_TCapActualC2

    float32 TmpSignalConversionAtVeSR1B_M_T;/* '<S2>/VeSR1B_M_TCapActual_C2' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_TransTrqRatio

    float32 TmpSignalConversionAtVeSR1B_h_T;/* '<S2>/VeSR1B_h_TransTrqRatio' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngineSpeedW

    float32 TmpSignalConversionAtVeSR1B_d_E;/* '<S2>/VeSR1B_d_EngineSpeed_W_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngActStdyStTorq

    float32 TmpSignalConversionAtVeSR1B_M_E;
                                     /* '<S2>/VeSR1B_M_EngActStdyStTorq_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngAirFlwStdyStTorq

    float32 TmpSignalConversionAtVeSR1B__ii;
                                    /* '<S2>/VeSR1B_M_EngAirFlwStdyStTrqFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngMinSparkNomCurrAirTorqCap

    float32 TmpSignalConversionAtVeCRDB__mc;/* '<S2>/VeCRDB_M_EngMnSpkNmCrArTqCp' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTrqReserveReq

    float32 TmpSignalConversionAtVeSR1B_M_k;
                                     /* '<S2>/VeSR1B_M_EngTrqReserveReq_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MAP4BARPHEV

    float32 TmpSignalConversionAtVeSR1B_p_M;/* '<S2>/VeSR1B_p_MAP_4_BAR_PHEV' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MaxOffEngTorqCap

    float32 TmpSignalConversionAtVeSR1B_M_g;
                                     /* '<S2>/VeSR1B_M_MaxOffEngTorqCap_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MaxPrdtdEngTorqCap

    float32 TmpSignalConversionAtVeSR1B_M_d;
                                    /* '<S2>/VeSR1B_M_MaxPrdtdEngTorqCapFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinAirFlowMinSparkTorqCap

    float32 TmpSignalConversionAtVeSR1B_M_h;
                                    /* '<S2>/VeSR1B_M_MinArFlwMinSpkTqCpFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinEngTorqCap

    float32 TmpSignalConversionAtVeSR1B_M_c;/* '<S2>/VeSR1B_M_MinEngTorqCap_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinImmedEngTorqCap

    float32 TmpSignalConversionAtVeSR1B_M_j;
                                    /* '<S2>/VeSR1B_M_MinImmedEngTorqCapFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinPrdtdEngRunTorqCap

    float32 TmpSignalConversionAtVeSR1B__kx;
                                    /* '<S2>/VeSR1B_M_MinPrdtdEngRunTqCpFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngCltTmp

    float32 TmpSignalConversionAtVeSR1B_T_E;/* '<S2>/VeSR1B_T_EngCltTmp_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MaxEngSpdCap

    float32 TmpSignalConversionAtVeCRDB_n_M;/* '<S2>/VeCRDB_n_MaxEngSpdCap' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinEngSpdCap

    float32 TmpSignalConversionAtVeCRDB_n_b;/* '<S2>/VeCRDB_n_MinEngSpdCap' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrA_AccelRaw) || (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrC_AccelRaw)

    float32 TmpSignalConversionAtVeCRDB_y_M;/* '<S2>/VeCRDB_y_MCPA_AccelRaw_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd)

    float32 TmpSignalConversionAtVeCRDB_n_j;
                                    /* '<S2>/VeCRDB_n_MCPA_CpbltySpdDvVolt_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADeratingFactorP && Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrADeratingFactor) || (Rte_SysCon_VrntCR4B_MCPADeratingFactorP && Rte_SysCon_VrntCR4B_MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor)

    float32 TmpSignalConversionAtVeCRDB_h_M;
                                     /* '<S2>/VeCRDB_h_MCPA_DeratingFactor_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAMaxTorqP && Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq) || (Rte_SysCon_VrntCR4B_MCPAMaxTorqP && Rte_SysCon_VrntCR4B_MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq)

    float32 TmpSignalConversionAtVeCRDB_M_M;/* '<S2>/VeCRDB_M_MCPA_MaxTorq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAMinTorqP && Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrA_MinTorq) || (Rte_SysCon_VrntCR4B_MCPAMinTorqP && Rte_SysCon_VrntCR4B_MCPAMinTorqP_PokeMTIRMtrC_MinTorq)

    float32 TmpSignalConversionAtVeCRDB_M_c;/* '<S2>/VeCRDB_M_MCPA_MinTorq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax)

    float32 TmpSignalConversionAtVeCRDB_M_d;
                                    /* '<S2>/VeCRDB_M_MCPA_MtrMaxCpbltyTrq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin)

    float32 TmpSignalConversionAtVeCRDB__mv;
                                    /* '<S2>/VeCRDB_M_MCPA_MtrMinCpbltyTrq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrA_SpdRaw) || (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrC_SpdRaw)

    float32 TmpSignalConversionAtVeCRDB_n_m;/* '<S2>/VeCRDB_n_MCPA_RPM_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPASpdLimP && Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt) || (Rte_SysCon_VrntCR4B_MCPASpdLimP && Rte_SysCon_VrntCR4B_MCPASpdLimP_PokeMSPRMaxP1SpdLmt)

    float32 TmpSignalConversionAtVeCRDB__my;/* '<S2>/VeCRDB_n_MCPA_Spd_Lim_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPATempP && Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrA_Temp) || (Rte_SysCon_VrntCR4B_MCPATempP && Rte_SysCon_VrntCR4B_MCPATempP_PokeINVRMtrC_Temp)

    float32 TmpSignalConversionAtVeCRDB_T_M;/* '<S2>/VeCRDB_T_MCPA_Temp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD) || (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD)

    float32 TmpSignalConversionAtVeCRDB__nz;
                                    /* '<S2>/VeCRDB_M_MCPA_TorqAchved_AEMD_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved) || (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved)

    float32 TmpSignalConversionAtVeCRDB__eh;
                                    /* '<S2>/VeCRDB_M_MCPA_Torque_Achieved_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP && Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Te) || (Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP && Rte_SysCon_VrntCR4B_MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Te)

    float32 TmpSignalConversionAtVeCRDB_T_c;/* '<S2>/VeCRDB_T_MCPACtrlBoarTempP' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrA_DC_Crnt) || (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrC_DC_Crnt)

    float32 TmpSignalConversionAtVeCRDB_I_M;/* '<S2>/VeCRDB_I_MCPA_DC_Current_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrA_DC_Volt) || (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrC_DC_Volt)

    float32 TmpSignalConversionAtVeCRDB_U_M;/* '<S2>/VeCRDB_U_MCPA_DC_Voltage_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAInverterTempP && Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp) || (Rte_SysCon_VrntCR4B_MCPAInverterTempP && Rte_SysCon_VrntCR4B_MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp)

    float32 TmpSignalConversionAtVeCRDB_T_p;/* '<S2>/VeCRDB_T_MCPA_InvertTemp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP && Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp) || (Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP && Rte_SysCon_VrntCR4B_MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp)

    float32 TmpSignalConversionAtVeCRDB__p3;/* '<S2>/VeCRDB_T_MCPAPIMDCSdBusTmpP' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPARotorTemperatureP && Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp) || (Rte_SysCon_VrntCR4B_MCPARotorTemperatureP && Rte_SysCon_VrntCR4B_MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp)

    float32 TmpSignalConversionAtVeCRDB_T_e;/* '<S2>/VeCRDB_T_MCPARotorTemp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

    float32 TmpSignalConversionAtVeCRDB_y_h;
    float32 TmpSignalConversionAtVeCRDB_U_f;
    float32 TmpSignalConversionAtVeCRDB_h_b;
    float32 TmpSignalConversionAtVeCRDB_M_a;
    float32 TmpSignalConversionAtVeCRDB_M_g;
    float32 TmpSignalConversionAtVeCRDB__ny;
    float32 TmpSignalConversionAtVeCRDB_M_l;
    float32 TmpSignalConversionAtVeCRDB_n_c;
    float32 TmpSignalConversionAtVeCRDB__cp;
    float32 TmpSignalConversionAtVeCRDB_y_b;
    float32 TmpSignalConversionAtVeCRDB_M_p;
    float32 TmpSignalConversionAtVeCRDB__pj;
    float32 TmpSignalConversionAtVeCRDB_y_k;
    float32 TmpSignalConversionAtVeCRDB_I_k;
    float32 TmpSignalConversionAtVeCRDB_U_j;
    float32 TmpSignalConversionAtVeCRDB_T_j;
    float32 TmpSignalConversionAtVeCRDB__ea;
    float32 TmpSignalConversionAtVeCRDB_T_d;

#if Rte_SysCon_VrntCR4B_SGCPAccelRawP

    float32 TmpSignalConversionAtVeCRDB_y_S;/* '<S2>/VeCRDB_y_SGCP_AccelRaw_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP

    float32 TmpSignalConversionAtVeCRDB_n_S;
                                    /* '<S2>/VeCRDB_n_SGCP_CpbltySpdDvVolt_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPDeratingFactorP

    float32 TmpSignalConversionAtVeCRDB_h_S;
                                     /* '<S2>/VeCRDB_h_SGCP_DeratingFactor_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPMaxTorqP

    float32 TmpSignalConversionAtVeCRDB_M_S;/* '<S2>/VeCRDB_M_SGCP_MaxTorq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPMinTorqP

    float32 TmpSignalConversionAtVeCRDB__mz;/* '<S2>/VeCRDB_M_SGCP_MinTorq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP

    float32 TmpSignalConversionAtVeCRDB_M_o;
                                    /* '<S2>/VeCRDB_M_SGCP_MtrMaxCpbltyTrq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    float32 TmpSignalConversionAtVeCRDB__m5;
                                    /* '<S2>/VeCRDB_M_SGCP_MtrMinCpbltyTrq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMP

    float32 TmpSignalConversionAtVeCRDB__jg;/* '<S2>/VeCRDB_n_SGCP_RPM_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPSpdLimP

    float32 TmpSignalConversionAtVeCRDB_n_p;/* '<S2>/VeCRDB_n_SGCP_Spd_Lim_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPTempP

    float32 TmpSignalConversionAtVeCRDB_y_n;/* '<S2>/VeCRDB_y_SGCP_Temp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqAchievedAEMDP

    float32 TmpSignalConversionAtVeCRDB__o1;
                                    /* '<S2>/VeCRDB_M_SGCP_TorqAchved_AEMD_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedP

    float32 TmpSignalConversionAtVeCRDB__mr;
                                    /* '<S2>/VeCRDB_M_SGCP_Torque_Achieved_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPControlBoardTemperatureP

    float32 TmpSignalConversionAtVeCRDB_T_S;/* '<S2>/VeCRDB_T_SGCPCtrlBoarTempP' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPDCCurrentP

    float32 TmpSignalConversionAtVeCRDB_I_S;/* '<S2>/VeCRDB_I_SGCP_DC_Current_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPDCVoltageP

    float32 TmpSignalConversionAtVeCRDB_U_S;/* '<S2>/VeCRDB_U_SGCP_DC_Voltage_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPInverterTempP

    float32 TmpSignalConversionAtVeCRDB_T_g;/* '<S2>/VeCRDB_T_SGCP_InvertTemp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMACSideBusbarTempP

    float32 TmpSignalConversionAtVeCRDB__nm;/* '<S2>/VeCRDB_y_SGCPPIMACSdBusTmpP' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPPIMDCSideBusbarTempP

    float32 TmpSignalConversionAtVeCRDB__ei;/* '<S2>/VeCRDB_T_SGCPPIMDCSdBusTmpP' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPRotorTemperatureP

    float32 TmpSignalConversionAtVeCRDB_T_i;/* '<S2>/VeCRDB_T_SGCPRotorTemp_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

    uint8 TmpSignalConversionAtVeSR1B_y_A;
    uint8 TmpSignalConversionAtVeSR1B_y_S;

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    uint8 TmpSignalConversionAtVeCRDB_y_E;/* '<S2>/VeCRDB_y_EngTqCapbltFrmCntr' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_C1Status

    uint8 TmpSignalConversionAtVeSR1B_y_C;/* '<S2>/VeSR1B_y_C1_Status' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_GearShiftType

    uint8 TmpSignalConversionAtVeSR1B_y_G;/* '<S2>/VeSR1B_y_GearShiftType' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBCurrentGr

    uint8 TmpSignalConversionAtVeSR1B_y_d;/* '<S2>/VeSR1B_y_MRGB_Current_Gr' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBMaxGrAllwd

    uint8 TmpSignalConversionAtVeSR1B_y_k;/* '<S2>/VeSR1B_y_MRGB_MaxGrAllwd' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBMinGrAllwd

    uint8 TmpSignalConversionAtVeSR1B_y_e;/* '<S2>/VeSR1B_y_MRGB_MinGrAllwd' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBTargetGr

    uint8 TmpSignalConversionAtVeSR1B_y_i;/* '<S2>/VeSR1B_y_MRGB_Target_Gr' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MRGBTrqCtrlModeReq

    uint8 TmpSignalConversionAtVeSR1B__dp;/* '<S2>/VeSR1B_y_MRGB_TrqCtrlModeReq' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_ECMLHOMTransW

    uint8 TmpSignalConversionAtVeSR1B_y_E;
                                     /* '<S2>/VeSR1B_y_ECM_LHOM_Trans_W_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EssEngSt

    uint8 TmpSignalConversionAtVeSR1B__dq;/* '<S2>/VeSR1B_y_EssEngSt_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwdID

    uint8 TmpSignalConversionAtVeSR1B_y_l;
                                    /* '<S2>/VeSR1B_y_EssEngStpIsNtAldIDFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwdID

    uint8 TmpSignalConversionAtVeSR1B__et;
                                     /* '<S2>/VeSR1B_y_EssEngStrtNtAldIDFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDil

    uint8 TmpSignalConversionAtVeSR1B_y_b;/* '<S2>/VeSR1B_y_C2_Status' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_ETRQMode

    uint8 TmpSignalConversionAtVeSR1B_y_o;/* '<S2>/VeSR1B_y_ETRQ_Mode_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngActuatorsStat

    uint8 TmpSignalConversionAtVeSR1B_y_c;/* '<S2>/VeSR1B_y_EngActuatorsStat' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_HybActEngTorqRespTyp

    uint8 TmpSignalConversionAtVeSR1B_y_H;
                                    /* '<S2>/VeSR1B_y_HybActEngTqRespTypFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPA6SOStatusP && Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl) || (Rte_SysCon_VrntCR4B_MCPA6SOStatusP && Rte_SysCon_VrntCR4B_MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl)

    uint8 TmpSignalConversionAtVeCRDB_y_m;/* '<S2>/VeCRDB_y_MCPA_6SO_Status_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP && Rte_SysCon_VrntCR4B_MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin) || (Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP && Rte_SysCon_VrntCR4B_MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin)

    uint8 TmpSignalConversionAtVeSR1B_y_j;
                                      /* '<S2>/VeSR1B_y_MCPA_MtrIndex_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADschrgeStatusP && Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat) || (Rte_SysCon_VrntCR4B_MCPADschrgeStatusP && Rte_SysCon_VrntCR4B_MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat)

    uint8 TmpSignalConversionAtVeCRDB_y_d;
                                     /* '<S2>/VeCRDB_y_MCPA_Dschrge_Status_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAInterlockStsP && Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPA_HVILSts) || (Rte_SysCon_VrntCR4B_MCPAInterlockStsP && Rte_SysCon_VrntCR4B_MCPAInterlockStsP_PokeINVRMCPC_HVILSts)

    uint8 TmpSignalConversionAtVeCRDB__hj;/* '<S2>/VeCRDB_y_MCPA_InterlockSts_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAInvrtrStateP && Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt) || (Rte_SysCon_VrntCR4B_MCPAInvrtrStateP && Rte_SysCon_VrntCR4B_MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt)

    uint8 TmpSignalConversionAtVeCRDB__hn;/* '<S2>/VeCRDB_y_MCPA_Invrtr_State_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPASPTStatP && Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPA_SPT_State) || (Rte_SysCon_VrntCR4B_MCPASPTStatP && Rte_SysCon_VrntCR4B_MCPASPTStatP_PokeINVRMCPC_SPT_State)

    uint8 TmpSignalConversionAtVeCRDB__b1;/* '<S2>/VeCRDB_y_MCPA_SPT_Stat_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADerateReasonP && Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrA_DrtRsn) || (Rte_SysCon_VrntCR4B_MCPADerateReasonP && Rte_SysCon_VrntCR4B_MCPADerateReasonP_PokeINVRMtrC_DrtRsn)

    uint8 TmpSignalConversionAtVeCRDB_e_M;/* '<S2>/VeCRDB_e_MCPA_DerateResn_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

    uint8 TmpSignalConversionAtVeCRDB_y_p;
    uint8 TmpSignalConversionAtVeSR1B__ez;
    uint8 TmpSignalConversionAtVeCRDB__m2;
    uint8 TmpSignalConversionAtVeCRDB__ku;
    uint8 TmpSignalConversionAtVeCRDB_y_o;
    uint8 TmpSignalConversionAtVeCRDB__po;
    uint8 TmpSignalConversionAtVeCRDB__py;
    uint8 TmpSignalConversionAtVeCRDB_y_P;
    uint8 TmpSignalConversionAtVeCRDB_y_a;
    uint8 TmpSignalConversionAtVeCRDB__kn;
    uint8 TmpSignalConversionAtVeCRDB__a4;
    uint8 TmpSignalConversionAtVeCRDB_e_j;

#if Rte_SysCon_VrntCR4B_SGCP6SOStatusP

    uint8 TmpSignalConversionAtVeCRDB__kg;/* '<S2>/VeCRDB_y_SGCP_6SO_Status_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPCpbltySpdDivVoltP || Rte_SysCon_VrntCR4B_SGCPMtrMaxCpbltyTrqP || Rte_SysCon_VrntCR4B_SGCPMtrMinCpbltyTrqP

    uint8 TmpSignalConversionAtVeSR1B__bx;
                                      /* '<S2>/VeSR1B_y_SGCP_MtrIndex_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPDschrgeStatusP

    uint8 TmpSignalConversionAtVeCRDB__nw;
                                     /* '<S2>/VeCRDB_y_SGCP_Dschrge_Status_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPInterlockStsP

    uint8 TmpSignalConversionAtVeCRDB__de;/* '<S2>/VeCRDB_y_SGCP_InterlockSts_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPInvrtrStateP

    uint8 TmpSignalConversionAtVeCRDB__nd;/* '<S2>/VeCRDB_y_SGCP_Invrtr_State_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPSPTStatP

    uint8 TmpSignalConversionAtVeCRDB_y_j;/* '<S2>/VeCRDB_y_SGCP_SPT_Stat_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPDerateReasonP

    uint8 TmpSignalConversionAtVeCRDB_e_S;/* '<S2>/VeCRDB_e_SGCP_DerateResn_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

    boolean TmpSignalConversionAtVeSR1B_b_P;
    boolean TmpSignalConversionAtVeSR1B_b_i;

#if Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxOffTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMaxTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinRunTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyMinTorq || Rte_SysCon_VrntCR4B_EngTorqCapbltyRefEngSpd

    boolean TmpSignalConversionAtVeCRDB_b_E;/* '<S2>/VeCRDB_b_EngTqCapbltEngOpMd' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_CompressionTest

    boolean TmpSignalConversionAtVeSR1B_b_C;/* '<S2>/VeSR1B_b_CompressionTest' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngTrqEnblRqTCMW

    boolean TmpSignalConversionAtVeSR1B_b_E;
                                     /* '<S2>/VeSR1B_b_EngTrqEnblRqTCM_WFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngineStallDetected

    boolean TmpSignalConversionAtVeSR1B_b_d;
                                     /* '<S2>/VeSR1B_b_Engine_Stall_Detected' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EssEngStopIsNotAllwd

    boolean TmpSignalConversionAtVeSR1B_b_j;
                                    /* '<S2>/VeSR1B_b_EssEngStpIsNtAllwdFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EssEngStrtIsNotAllwd

    boolean TmpSignalConversionAtVeSR1B_b_m;
                                     /* '<S2>/VeSR1B_b_EssEngStrtIsNtAldFD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_LV12PwrFreeRqW

    boolean TmpSignalConversionAtVeSR1B_b_L;
                                      /* '<S2>/VeSR1B_b_LV12PwrFreeRq_W_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MinEngPowerReqForOilDilEnabler

    boolean TmpSignalConversionAtVeSR1B_b_M;
                                 /* '<S2>/VeSR1B_b_MinEngPwrReqFrOilDilEnblr' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_EngRunCrnkAct

    boolean TmpSignalConversionAtVeSR1B_b_g;/* '<S2>/VeSR1B_b_EngRunCrnkAct' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_FeedbackHCP

    boolean TmpSignalConversionAtVeSR1B_b_F;/* '<S2>/VeSR1B_b_Feedback_HCP_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_GasFlwEnblsFuAtStr

    boolean TmpSignalConversionAtVeCRDB_b_G;/* '<S2>/VeCRDB_b_GasFlwEnblsFuAtStr' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_RedSpkAuthorityAvbl

    boolean TmpSignalConversionAtVeCRDB_b_R;/* '<S2>/VeCRDB_b_RedSpkAuthrtAvbl' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_ServiceHybSys

    boolean TmpSignalConversionAtVeSR1B_b_S;/* '<S2>/VeSR1B_b_ServiceHybSys' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MCPA3PSPosP

    boolean TmpSignalConversionAtVeCRDB_b_M;/* '<S2>/VeCRDB_b_MCPA_3PS_Pos_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrA_AccelRaw) || (Rte_SysCon_VrntCR4B_MCPAAccelRawP && Rte_SysCon_VrntCR4B_MCPAAccelRawP_PokeMSPRMtrC_AccelRaw)

    boolean TmpSignalConversionAtVeSR1B_b_l;
                                     /* '<S2>/VeSR1B_b_MCPA_AccelRawV_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP && Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq) || (Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP && Rte_SysCon_VrntCR4B_MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq)

    boolean TmpSignalConversionAtVeCRDB_b_l;
                                    /* '<S2>/VeCRDB_b_MCPA_HV_CnctrOpn_Req_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrA_SpdRaw) || (Rte_SysCon_VrntCR4B_MCPARPMP && Rte_SysCon_VrntCR4B_MCPARPMP_PokeMSPRMtrC_SpdRaw)

    boolean TmpSignalConversionAtVeSR1B__gy;/* '<S2>/VeSR1B_b_MCPA_RPM_V_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MCPARPMVP

    boolean TmpSignalConversionAtVeCRDB_b_i;/* '<S2>/VeCRDB_b_MCPA_RPM_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD) || (Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP && Rte_SysCon_VrntCR4B_MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD)

    boolean TmpSignalConversionAtVeSR1B__dy;
                               /* '<S2>/VeSR1B_b_MCPA_TrqAchvd_AEMD_V_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved) || (Rte_SysCon_VrntCR4B_MCPATorqueAchievedP && Rte_SysCon_VrntCR4B_MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved)

    boolean TmpSignalConversionAtVeSR1B__mo;
                               /* '<S2>/VeSR1B_b_MCPA_Torque_Achved_V_P_FD16' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_MCPATorqueAchievedVP

    boolean TmpSignalConversionAtVeCRDB_b_d;
                                    /* '<S2>/VeCRDB_b_MCPA_Torque_Achved_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrA_DC_Crnt) || (Rte_SysCon_VrntCR4B_MCPADCCurrentP && Rte_SysCon_VrntCR4B_MCPADCCurrentP_PokeINVRMtrC_DC_Crnt)

    boolean TmpSignalConversionAtVeCRDB_b_g;/* '<S2>/VeCRDB_b_MCPA_DC_Crrnt_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrA_DC_Volt) || (Rte_SysCon_VrntCR4B_MCPADCVoltageP && Rte_SysCon_VrntCR4B_MCPADCVoltageP_PokeINVRMtrC_DC_Volt)

    boolean TmpSignalConversionAtVeCRDB__gy;/* '<S2>/VeCRDB_b_MCPA_DC_Volt_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if (Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP && Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Requ) || (Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP && Rte_SysCon_VrntCR4B_MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Requ)

    boolean TmpSignalConversionAtVeCRDB__dk;/* '<S2>/VeCRDB_b_MCPAServLampReq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

    boolean TmpSignalConversionAtVeCRDB_b_n;
    boolean TmpSignalConversionAtVeCRDB__it;

#if Rte_SysCon_VrntCR4B_SGCPHVCnctrOpnReqP

    boolean TmpSignalConversionAtVeCRDB_b_S;
                                    /* '<S2>/VeCRDB_b_SGCP_HV_CnctrOpn_Req_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPRPMVP

    boolean TmpSignalConversionAtVeCRDB_b_e;/* '<S2>/VeCRDB_b_SGCP_RPM_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPTorqueAchievedVP

    boolean TmpSignalConversionAtVeCRDB_b_b;
                                    /* '<S2>/VeCRDB_b_SGCP_Torque_Achved_V_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_VrntCR4B_SGCPServiceLampRequestP

    boolean TmpSignalConversionAtVeCRDB_b_m;/* '<S2>/VeCRDB_b_SGCPServLampReq_P' */

#define B_CR4B_FUNC_AC_T_VARIANT_EXISTS
#endif

}
B_CR4B_FUNC_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
#include "MemMap.h"

extern VAR(B_CR4B_FUNC_ac_T, CR4B_FUNC_VAR_INIT) CR4B_FUNC_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CR4B_FUNC
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
 * '<Root>' : 'CR4B_FUNC_ac'
 * '<S1>'   : 'CR4B_FUNC_ac/Initialize Function'
 * '<S2>'   : 'CR4B_FUNC_ac/SigMngt'
 * '<S3>'   : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2'
 * '<S4>'   : 'CR4B_FUNC_ac/SigMngt/Custom'
 * '<S5>'   : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1'
 * '<S6>'   : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2'
 * '<S7>'   : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1'
 * '<S8>'   : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3'
 * '<S9>'   : 'CR4B_FUNC_ac/SigMngt/Enumerated_Constant1'
 * '<S10>'  : 'CR4B_FUNC_ac/SigMngt/Enumerated_Constant2'
 * '<S11>'  : 'CR4B_FUNC_ac/SigMngt/KeCR4B_b_CanLocStatusBypEnbl'
 * '<S12>'  : 'CR4B_FUNC_ac/SigMngt/KeCR4B_e_CanLocStatus'
 * '<S13>'  : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION'
 * '<S14>'  : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS'
 * '<S15>'  : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION'
 * '<S16>'  : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS'
 * '<S17>'  : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION'
 * '<S18>'  : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS'
 * '<S19>'  : 'CR4B_FUNC_ac/SigMngt/SWITCH_UP'
 * '<S20>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat'
 * '<S21>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts'
 * '<S22>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts'
 * '<S23>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq'
 * '<S24>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/ArbtrLogic_Protected'
 * '<S25>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/Fsft'
 * '<S26>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/Poke'
 * '<S27>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/ArbtrLogic_Protected/Chart'
 * '<S28>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/Fsft/Failsoft'
 * '<S29>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/APCM_Stat/Poke/Poke'
 * '<S30>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/ArbtrLogic_Protected'
 * '<S31>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/Fsft'
 * '<S32>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/Poke'
 * '<S33>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/ArbtrLogic_Protected/Chart'
 * '<S34>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/Fsft/Failsoft'
 * '<S35>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDFailSts/Poke/Poke'
 * '<S36>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/ArbtrLogic_Protected'
 * '<S37>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/Fsft'
 * '<S38>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/Poke'
 * '<S39>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/ArbtrLogic_Protected/Chart'
 * '<S40>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/Fsft/Failsoft'
 * '<S41>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/PRNDdisplayFailSts/Poke/Poke'
 * '<S42>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/ArbtrLogic_Protected'
 * '<S43>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/Fsft'
 * '<S44>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/Poke'
 * '<S45>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/ArbtrLogic_Protected/Chart'
 * '<S46>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/Fsft/Failsoft'
 * '<S47>'  : 'CR4B_FUNC_ac/SigMngt/AGSM_FD_2/ShiftLeverPositionReq/Poke/Poke'
 * '<S48>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4'
 * '<S49>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability'
 * '<S50>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxOffTorq'
 * '<S51>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxTorq'
 * '<S52>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinRunTorq'
 * '<S53>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinTorq'
 * '<S54>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyRefEngSpd'
 * '<S55>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability/EngTorqACCCapability'
 * '<S56>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability/EngTorqACCCapability/ArbtrLogic_Protected'
 * '<S57>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability/EngTorqACCCapability/Fsft'
 * '<S58>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability/EngTorqACCCapability/Poke'
 * '<S59>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqACCCapability/EngTorqACCCapability/ArbtrLogic_Protected/Chart'
 * '<S60>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxOffTorq/EngTorqCapbltyMaxOffTorq'
 * '<S61>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxOffTorq/EngTorqCapbltyMaxOffTorq/ArbtrLogic_Protected'
 * '<S62>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxOffTorq/EngTorqCapbltyMaxOffTorq/Poke'
 * '<S63>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxOffTorq/EngTorqCapbltyMaxOffTorq/ArbtrLogic_Protected/Chart'
 * '<S64>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxTorq/EngTorqCapbltyMaxTorq'
 * '<S65>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxTorq/EngTorqCapbltyMaxTorq/ArbtrLogic_Protected'
 * '<S66>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxTorq/EngTorqCapbltyMaxTorq/Poke'
 * '<S67>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMaxTorq/EngTorqCapbltyMaxTorq/ArbtrLogic_Protected/Chart'
 * '<S68>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinRunTorq/EngTorqCapbltyMinRunTorq'
 * '<S69>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinRunTorq/EngTorqCapbltyMinRunTorq/ArbtrLogic_Protected'
 * '<S70>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinRunTorq/EngTorqCapbltyMinRunTorq/Poke'
 * '<S71>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinRunTorq/EngTorqCapbltyMinRunTorq/ArbtrLogic_Protected/Chart'
 * '<S72>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinTorq/EngTorqCapbltyMinTorq'
 * '<S73>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinTorq/EngTorqCapbltyMinTorq/ArbtrLogic_Protected'
 * '<S74>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinTorq/EngTorqCapbltyMinTorq/Poke'
 * '<S75>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyMinTorq/EngTorqCapbltyMinTorq/ArbtrLogic_Protected/Chart'
 * '<S76>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyRefEngSpd/EngTorqCapbltyRefEngSpd'
 * '<S77>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyRefEngSpd/EngTorqCapbltyRefEngSpd/ArbtrLogic_Protected'
 * '<S78>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyRefEngSpd/EngTorqCapbltyRefEngSpd/Poke'
 * '<S79>'  : 'CR4B_FUNC_ac/SigMngt/Custom/ENGINE_HYBD_FD_4/EngTorqCapbltyRefEngSpd/EngTorqCapbltyRefEngSpd/ArbtrLogic_Protected/Chart'
 * '<S80>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status'
 * '<S81>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType'
 * '<S82>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr'
 * '<S83>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd'
 * '<S84>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes'
 * '<S85>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd'
 * '<S86>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq'
 * '<S87>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed'
 * '<S88>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr'
 * '<S89>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp'
 * '<S90>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq'
 * '<S91>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time'
 * '<S92>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2'
 * '<S93>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio'
 * '<S94>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status'
 * '<S95>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/ArbtrLogic_Protected'
 * '<S96>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/Fsft'
 * '<S97>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/Poke'
 * '<S98>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/ArbtrLogic_Protected/Chart'
 * '<S99>'  : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/Fsft/Failsoft'
 * '<S100>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/C1_Status/C1_Status/Poke/Poke'
 * '<S101>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType'
 * '<S102>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/ArbtrLogic_Protected'
 * '<S103>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/Fsft'
 * '<S104>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/Poke'
 * '<S105>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/ArbtrLogic_Protected/Chart'
 * '<S106>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/Fsft/Failsoft'
 * '<S107>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/GearShiftType/GearShiftType/Poke/Poke'
 * '<S108>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr'
 * '<S109>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/ArbtrLogic_Protected'
 * '<S110>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/Fsft'
 * '<S111>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/Poke'
 * '<S112>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/ArbtrLogic_Protected/Chart'
 * '<S113>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/Fsft/Failsoft'
 * '<S114>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Current_Gr/MRGB_Current_Gr/Poke/Poke'
 * '<S115>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd'
 * '<S116>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/ArbtrLogic_Protected'
 * '<S117>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/Fsft'
 * '<S118>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/Poke'
 * '<S119>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/ArbtrLogic_Protected/Chart'
 * '<S120>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/Fsft/Failsoft'
 * '<S121>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxGrAllwd/MRGB_MaxGrAllwd/Poke/Poke'
 * '<S122>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes'
 * '<S123>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/ArbtrLogic_Protected'
 * '<S124>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/Fsft'
 * '<S125>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/Poke'
 * '<S126>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/ArbtrLogic_Protected/Chart'
 * '<S127>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/Fsft/Failsoft'
 * '<S128>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MaxTrqDes/MRGB_MaxTrqDes/Poke/Poke'
 * '<S129>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd'
 * '<S130>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/ArbtrLogic_Protected'
 * '<S131>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/Fsft'
 * '<S132>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/Poke'
 * '<S133>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/ArbtrLogic_Protected/Chart'
 * '<S134>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/Fsft/Failsoft'
 * '<S135>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MinGrAllwd/MRGB_MinGrAllwd/Poke/Poke'
 * '<S136>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq'
 * '<S137>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/ArbtrLogic_Protected'
 * '<S138>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/Fsft'
 * '<S139>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/Poke'
 * '<S140>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/ArbtrLogic_Protected/Chart'
 * '<S141>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/Fsft/Failsoft'
 * '<S142>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_MtrBTrqRq/MRGB_MtrBTrqRq/Poke/Poke'
 * '<S143>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed'
 * '<S144>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/ArbtrLogic_Protected'
 * '<S145>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/Fsft'
 * '<S146>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/Poke'
 * '<S147>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/ArbtrLogic_Protected/Chart'
 * '<S148>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/Fsft/Failsoft'
 * '<S149>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Output_Speed/MRGB_Output_Speed/Poke/Poke'
 * '<S150>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr'
 * '<S151>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/ArbtrLogic_Protected'
 * '<S152>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/Fsft'
 * '<S153>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/Poke'
 * '<S154>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/ArbtrLogic_Protected/Chart'
 * '<S155>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/Fsft/Failsoft'
 * '<S156>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Target_Gr/MRGB_Target_Gr/Poke/Poke'
 * '<S157>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp/MRGB_Transm_Oil_Temp'
 * '<S158>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp/MRGB_Transm_Oil_Temp/ArbtrLogic_Protected'
 * '<S159>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp/MRGB_Transm_Oil_Temp/Poke'
 * '<S160>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp/MRGB_Transm_Oil_Temp/ArbtrLogic_Protected/Chart'
 * '<S161>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Transm_Oil_Temp/MRGB_Transm_Oil_Temp/Poke/Poke'
 * '<S162>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq'
 * '<S163>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/ArbtrLogic_Protected'
 * '<S164>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/Fsft'
 * '<S165>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/Poke'
 * '<S166>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/ArbtrLogic_Protected/Chart'
 * '<S167>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/Fsft/Failsoft'
 * '<S168>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_TrqCtrlModeReq/MRGB_TrqCtrlModeReq/Poke/Poke'
 * '<S169>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time/MRGB_Upshift_Time'
 * '<S170>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time/MRGB_Upshift_Time/ArbtrLogic_Protected'
 * '<S171>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time/MRGB_Upshift_Time/Poke'
 * '<S172>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time/MRGB_Upshift_Time/ArbtrLogic_Protected/Chart'
 * '<S173>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/MRGB_Upshift_Time/MRGB_Upshift_Time/Poke/Poke'
 * '<S174>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2'
 * '<S175>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/ArbtrLogic_Protected'
 * '<S176>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/Fsft'
 * '<S177>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/Poke'
 * '<S178>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/ArbtrLogic_Protected/Chart'
 * '<S179>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/Fsft/Failsoft'
 * '<S180>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TCapActual_C2/TCapActual_C2/Poke/Poke'
 * '<S181>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio'
 * '<S182>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/ArbtrLogic_Protected'
 * '<S183>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/Fsft'
 * '<S184>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/Poke'
 * '<S185>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/ArbtrLogic_Protected/Chart'
 * '<S186>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/Fsft/Failsoft'
 * '<S187>' : 'CR4B_FUNC_ac/SigMngt/ELSDM_FD_1/TransTrqRatio/TransTrqRatio/Poke/Poke'
 * '<S188>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest'
 * '<S189>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W'
 * '<S190>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W'
 * '<S191>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W'
 * '<S192>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected'
 * '<S193>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt'
 * '<S194>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd'
 * '<S195>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID'
 * '<S196>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd'
 * '<S197>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID'
 * '<S198>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W'
 * '<S199>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil'
 * '<S200>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler'
 * '<S201>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest/CompressionTest'
 * '<S202>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest/CompressionTest/ArbtrLogic_Protected'
 * '<S203>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest/CompressionTest/Poke'
 * '<S204>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest/CompressionTest/ArbtrLogic_Protected/Chart'
 * '<S205>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/CompressionTest/CompressionTest/Poke/Poke'
 * '<S206>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W/ECM_LHOM_Trans_W'
 * '<S207>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W/ECM_LHOM_Trans_W/ArbtrLogic_Protected'
 * '<S208>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W/ECM_LHOM_Trans_W/Poke'
 * '<S209>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W/ECM_LHOM_Trans_W/ArbtrLogic_Protected/Chart'
 * '<S210>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/ECM_LHOM_Trans_W/ECM_LHOM_Trans_W/Poke/Poke'
 * '<S211>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W/EngTrq_Enbl_Rq_TCM_W'
 * '<S212>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W/EngTrq_Enbl_Rq_TCM_W/ArbtrLogic_Protected'
 * '<S213>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W/EngTrq_Enbl_Rq_TCM_W/Poke'
 * '<S214>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W/EngTrq_Enbl_Rq_TCM_W/ArbtrLogic_Protected/Chart'
 * '<S215>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngTrq_Enbl_Rq_TCM_W/EngTrq_Enbl_Rq_TCM_W/Poke/Poke'
 * '<S216>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W'
 * '<S217>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/ArbtrLogic_Protected'
 * '<S218>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/Fsft'
 * '<S219>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/Poke'
 * '<S220>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/ArbtrLogic_Protected/Chart'
 * '<S221>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/Fsft/Failsoft'
 * '<S222>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EngineSpeed_W/EngineSpeed_W/Poke/Poke'
 * '<S223>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected/Engine_Stall_Detected'
 * '<S224>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected/Engine_Stall_Detected/ArbtrLogic_Protected'
 * '<S225>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected/Engine_Stall_Detected/Poke'
 * '<S226>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected/Engine_Stall_Detected/ArbtrLogic_Protected/Chart'
 * '<S227>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/Engine_Stall_Detected/Engine_Stall_Detected/Poke/Poke'
 * '<S228>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt/EssEngSt'
 * '<S229>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt/EssEngSt/ArbtrLogic_Protected'
 * '<S230>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt/EssEngSt/Poke'
 * '<S231>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt/EssEngSt/ArbtrLogic_Protected/Chart'
 * '<S232>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngSt/EssEngSt/Poke/Poke'
 * '<S233>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd'
 * '<S234>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/ArbtrLogic_Protected'
 * '<S235>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/Fsft'
 * '<S236>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/Poke'
 * '<S237>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/ArbtrLogic_Protected/Chart'
 * '<S238>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/Fsft/Failsoft'
 * '<S239>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwd/EssEngStopIsNotAllwd/Poke/Poke'
 * '<S240>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID'
 * '<S241>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/ArbtrLogic_Protected'
 * '<S242>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/Fsft'
 * '<S243>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/Poke'
 * '<S244>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/ArbtrLogic_Protected/Chart'
 * '<S245>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/Fsft/Failsoft'
 * '<S246>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStopIsNotAllwdID/EssEngStopIsNotAllwdID/Poke/Poke'
 * '<S247>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd'
 * '<S248>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/ArbtrLogic_Protected'
 * '<S249>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/Fsft'
 * '<S250>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/Poke'
 * '<S251>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/ArbtrLogic_Protected/Chart'
 * '<S252>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/Fsft/Failsoft'
 * '<S253>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwd/EssEngStrtIsNotAllwd/Poke/Poke'
 * '<S254>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID'
 * '<S255>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/ArbtrLogic_Protected'
 * '<S256>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/Fsft'
 * '<S257>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/Poke'
 * '<S258>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/ArbtrLogic_Protected/Chart'
 * '<S259>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/Fsft/Failsoft'
 * '<S260>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/EssEngStrtIsNotAllwdID/EssEngStrtIsNotAllwdID/Poke/Poke'
 * '<S261>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W/LV12PwrFreeRq_W'
 * '<S262>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W/LV12PwrFreeRq_W/ArbtrLogic_Protected'
 * '<S263>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W/LV12PwrFreeRq_W/Poke'
 * '<S264>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W/LV12PwrFreeRq_W/ArbtrLogic_Protected/Chart'
 * '<S265>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/LV12PwrFreeRq_W/LV12PwrFreeRq_W/Poke/Poke'
 * '<S266>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil'
 * '<S267>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/ArbtrLogic_Protected'
 * '<S268>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/Fsft'
 * '<S269>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/Poke'
 * '<S270>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/ArbtrLogic_Protected/Chart'
 * '<S271>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/Fsft/Failsoft'
 * '<S272>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDil/MinEngPowerReqForOilDil/Poke/Poke'
 * '<S273>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler'
 * '<S274>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/ArbtrLogic_Protected'
 * '<S275>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/Fsft'
 * '<S276>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/Poke'
 * '<S277>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/ArbtrLogic_Protected/Chart'
 * '<S278>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/Fsft/Failsoft'
 * '<S279>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_FD_2/MinEngPowerReqForOilDilEnabler/MinEngPowerReqForOilDilEnabler/Poke/Poke'
 * '<S280>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode'
 * '<S281>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq'
 * '<S282>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat'
 * '<S283>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq'
 * '<S284>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap'
 * '<S285>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct'
 * '<S286>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq'
 * '<S287>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP'
 * '<S288>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr'
 * '<S289>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp'
 * '<S290>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV'
 * '<S291>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap'
 * '<S292>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap'
 * '<S293>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap'
 * '<S294>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap'
 * '<S295>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap'
 * '<S296>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap'
 * '<S297>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl'
 * '<S298>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode/ETRQ_Mode'
 * '<S299>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode/ETRQ_Mode/ArbtrLogic_Protected'
 * '<S300>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode/ETRQ_Mode/Poke'
 * '<S301>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode/ETRQ_Mode/ArbtrLogic_Protected/Chart'
 * '<S302>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/ETRQ_Mode/ETRQ_Mode/Poke/Poke'
 * '<S303>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq'
 * '<S304>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/ArbtrLogic_Protected'
 * '<S305>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/Fsft'
 * '<S306>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/Poke'
 * '<S307>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/ArbtrLogic_Protected/Chart'
 * '<S308>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/Fsft/Failsoft'
 * '<S309>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActStdyStTorq/EngActStdyStTorq/Poke/Poke'
 * '<S310>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat/EngActuatorsStat'
 * '<S311>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat/EngActuatorsStat/ArbtrLogic_Protected'
 * '<S312>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat/EngActuatorsStat/Poke'
 * '<S313>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat/EngActuatorsStat/ArbtrLogic_Protected/Chart'
 * '<S314>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngActuatorsStat/EngActuatorsStat/Poke/Poke'
 * '<S315>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq'
 * '<S316>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/ArbtrLogic_Protected'
 * '<S317>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/Fsft'
 * '<S318>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/Poke'
 * '<S319>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/ArbtrLogic_Protected/Chart'
 * '<S320>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/Fsft/Failsoft'
 * '<S321>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngAirFlwStdyStTorq/EngAirFlwStdyStTorq/Poke/Poke'
 * '<S322>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap'
 * '<S323>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/ArbtrLogic_Protected'
 * '<S324>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/Fsft'
 * '<S325>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/Poke'
 * '<S326>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/ArbtrLogic_Protected/Chart'
 * '<S327>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/Fsft/Failsoft'
 * '<S328>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngMinSparkNomCurrAirTorqCap/EngMinSparkNomCurrAirTorqCap/Poke/Poke'
 * '<S329>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct'
 * '<S330>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/ArbtrLogic_Protected'
 * '<S331>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/Fsft'
 * '<S332>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/Poke'
 * '<S333>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/ArbtrLogic_Protected/Chart'
 * '<S334>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/Fsft/Failsoft'
 * '<S335>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngRunCrnkAct/EngRunCrnkAct/Poke/Poke'
 * '<S336>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq'
 * '<S337>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/ArbtrLogic_Protected'
 * '<S338>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/Fsft'
 * '<S339>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/Poke'
 * '<S340>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/ArbtrLogic_Protected/Chart'
 * '<S341>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/Fsft/Failsoft'
 * '<S342>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/EngTrqReserveReq/EngTrqReserveReq/Poke/Poke'
 * '<S343>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP'
 * '<S344>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/ArbtrLogic_Protected'
 * '<S345>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/Fsft'
 * '<S346>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/Poke'
 * '<S347>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/ArbtrLogic_Protected/Chart'
 * '<S348>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/Fsft/Failsoft'
 * '<S349>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/Feedback_HCP/Feedback_HCP/Poke/Poke'
 * '<S350>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr/GasFlwEnblsFuAtStr'
 * '<S351>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr/GasFlwEnblsFuAtStr/ArbtrLogic_Protected'
 * '<S352>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr/GasFlwEnblsFuAtStr/Poke'
 * '<S353>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr/GasFlwEnblsFuAtStr/ArbtrLogic_Protected/Chart'
 * '<S354>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/GasFlwEnblsFuAtStr/GasFlwEnblsFuAtStr/Poke/Poke'
 * '<S355>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp/HybActEngTorqRespTyp'
 * '<S356>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp/HybActEngTorqRespTyp/ArbtrLogic_Protected'
 * '<S357>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp/HybActEngTorqRespTyp/Poke'
 * '<S358>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp/HybActEngTorqRespTyp/ArbtrLogic_Protected/Chart'
 * '<S359>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/HybActEngTorqRespTyp/HybActEngTorqRespTyp/Poke/Poke'
 * '<S360>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV'
 * '<S361>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/ArbtrLogic_Protected'
 * '<S362>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/Fsft'
 * '<S363>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/Poke'
 * '<S364>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/ArbtrLogic_Protected/Chart'
 * '<S365>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/Fsft/Failsoft'
 * '<S366>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MAP_4_BAR_PHEV/MAP_4_BAR_PHEV/Poke/Poke'
 * '<S367>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap/MaxOffEngTorqCap'
 * '<S368>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap/MaxOffEngTorqCap/ArbtrLogic_Protected'
 * '<S369>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap/MaxOffEngTorqCap/Poke'
 * '<S370>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap/MaxOffEngTorqCap/ArbtrLogic_Protected/Chart'
 * '<S371>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxOffEngTorqCap/MaxOffEngTorqCap/Poke/Poke'
 * '<S372>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap'
 * '<S373>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/ArbtrLogic_Protected'
 * '<S374>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/Fsft'
 * '<S375>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/Poke'
 * '<S376>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/ArbtrLogic_Protected/Chart'
 * '<S377>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/Fsft/Failsoft'
 * '<S378>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MaxPrdtdEngTorqCap/MaxPrdtdEngTorqCap/Poke/Poke'
 * '<S379>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap'
 * '<S380>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/ArbtrLogic_Protected'
 * '<S381>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/Fsft'
 * '<S382>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/Poke'
 * '<S383>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/ArbtrLogic_Protected/Chart'
 * '<S384>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/Fsft/Failsoft'
 * '<S385>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinAirFlowMinSparkTorqCap/MinAirFlowMinSparkTorqCap/Poke/Poke'
 * '<S386>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap'
 * '<S387>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/ArbtrLogic_Protected'
 * '<S388>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/Fsft'
 * '<S389>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/Poke'
 * '<S390>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/ArbtrLogic_Protected/Chart'
 * '<S391>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/Fsft/Failsoft'
 * '<S392>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinEngTorqCap/MinEngTorqCap/Poke/Poke'
 * '<S393>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap'
 * '<S394>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/ArbtrLogic_Protected'
 * '<S395>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/Fsft'
 * '<S396>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/Poke'
 * '<S397>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/ArbtrLogic_Protected/Chart'
 * '<S398>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/Fsft/Failsoft'
 * '<S399>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinImmedEngTorqCap/MinImmedEngTorqCap/Poke/Poke'
 * '<S400>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap'
 * '<S401>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/ArbtrLogic_Protected'
 * '<S402>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/Fsft'
 * '<S403>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/Poke'
 * '<S404>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/ArbtrLogic_Protected/Chart'
 * '<S405>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/Fsft/Failsoft'
 * '<S406>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/MinPrdtdEngRunTorqCap/MinPrdtdEngRunTorqCap/Poke/Poke'
 * '<S407>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl'
 * '<S408>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/ArbtrLogic_Protected'
 * '<S409>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/Fsft'
 * '<S410>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/Poke'
 * '<S411>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/ArbtrLogic_Protected/Chart'
 * '<S412>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/Fsft/Failsoft'
 * '<S413>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_1/RedSpkAuthorityAvbl/RedSpkAuthorityAvbl/Poke/Poke'
 * '<S414>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp'
 * '<S415>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap'
 * '<S416>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap'
 * '<S417>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys'
 * '<S418>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp'
 * '<S419>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/ArbtrLogic_Protected'
 * '<S420>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/Fsft'
 * '<S421>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/Poke'
 * '<S422>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/ArbtrLogic_Protected/Chart'
 * '<S423>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/Fsft/Failsoft'
 * '<S424>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/EngCltTmp/EngCltTmp/Poke/Poke'
 * '<S425>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap'
 * '<S426>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/ArbtrLogic_Protected'
 * '<S427>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/Fsft'
 * '<S428>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/Poke'
 * '<S429>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/ArbtrLogic_Protected/Chart'
 * '<S430>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/Fsft/Failsoft'
 * '<S431>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MaxEngSpdCap/MaxEngSpdCap/Poke/Poke'
 * '<S432>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap'
 * '<S433>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/ArbtrLogic_Protected'
 * '<S434>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/Fsft'
 * '<S435>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/Poke'
 * '<S436>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/ArbtrLogic_Protected/Chart'
 * '<S437>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/Fsft/Failsoft'
 * '<S438>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/MinEngSpdCap/MinEngSpdCap/Poke/Poke'
 * '<S439>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys'
 * '<S440>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/ArbtrLogic_Protected'
 * '<S441>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/Fsft'
 * '<S442>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/Poke'
 * '<S443>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/ArbtrLogic_Protected/Chart'
 * '<S444>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/Fsft/Failsoft'
 * '<S445>' : 'CR4B_FUNC_ac/SigMngt/ENGINE_HYBD_FD_3/ServiceHybSys/ServiceHybSys/Poke/Poke'
 * '<S446>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P'
 * '<S447>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P'
 * '<S448>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P'
 * '<S449>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P'
 * '<S450>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P'
 * '<S451>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P'
 * '<S452>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P'
 * '<S453>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P'
 * '<S454>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P'
 * '<S455>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P'
 * '<S456>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P'
 * '<S457>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P'
 * '<S458>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P'
 * '<S459>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P'
 * '<S460>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P'
 * '<S461>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P'
 * '<S462>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P'
 * '<S463>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P'
 * '<S464>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P'
 * '<S465>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P'
 * '<S466>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P'
 * '<S467>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P'
 * '<S468>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/ArbtrLogic_Protected'
 * '<S469>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Fsft'
 * '<S470>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Poke'
 * '<S471>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Tmot'
 * '<S472>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/ArbtrLogic_Protected/Chart'
 * '<S473>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Fsft/Failsoft'
 * '<S474>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Poke/Poke'
 * '<S475>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_3PS_Pos_P/MCPA_3PS_Pos_P/Tmot/Timeout'
 * '<S476>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P'
 * '<S477>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/ArbtrLogic_Protected'
 * '<S478>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Poke'
 * '<S479>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Tmot'
 * '<S480>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/ArbtrLogic_Protected/Chart'
 * '<S481>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Poke/MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl'
 * '<S482>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Poke/MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl'
 * '<S483>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Poke/MCPA6SOStatusP_PokeINVRMtrA_6SOEnbl/Poke'
 * '<S484>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Poke/MCPA6SOStatusP_PokeINVRMtrC_6SOEnbl/Poke1'
 * '<S485>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Tmot/MCPA6SOStatusP_TmotINVRMtrA_6SOEnbl'
 * '<S486>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Tmot/MCPA6SOStatusP_TmotINVRMtrC_6SOEnbl'
 * '<S487>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Tmot/MCPA6SOStatusP_TmotINVRMtrA_6SOEnbl/Timeout'
 * '<S488>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_6SO_Status_P/MCPA_6SO_Status_P/Tmot/MCPA6SOStatusP_TmotINVRMtrC_6SOEnbl/Timeout1'
 * '<S489>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P'
 * '<S490>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/ArbtrLogic_Protected'
 * '<S491>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Fsft'
 * '<S492>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Poke'
 * '<S493>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Tmot'
 * '<S494>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/ArbtrLogic_Protected/Chart'
 * '<S495>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Fsft/MCPAAccelRawP_FsftMSPRMtrA_AccelRaw'
 * '<S496>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Fsft/MCPAAccelRawP_FsftMSPRMtrC_AccelRaw'
 * '<S497>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Fsft/MCPAAccelRawP_FsftMSPRMtrA_AccelRaw/Failsoft'
 * '<S498>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Fsft/MCPAAccelRawP_FsftMSPRMtrC_AccelRaw/Failsoft1'
 * '<S499>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Poke/MCPAAccelRawP_PokeMSPRMtrA_AccelRaw'
 * '<S500>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Poke/MCPAAccelRawP_PokeMSPRMtrC_AccelRaw'
 * '<S501>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Poke/MCPAAccelRawP_PokeMSPRMtrA_AccelRaw/Poke'
 * '<S502>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Poke/MCPAAccelRawP_PokeMSPRMtrC_AccelRaw/Poke1'
 * '<S503>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Tmot/MCPAAccelRawP_TmotMSPRMtrA_AccelRaw'
 * '<S504>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Tmot/MCPAAccelRawP_TmotMSPRMtrC_AccelRaw'
 * '<S505>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Tmot/MCPAAccelRawP_TmotMSPRMtrA_AccelRaw/Timeout'
 * '<S506>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_AccelRaw_P/MCPA_AccelRaw_P/Tmot/MCPAAccelRawP_TmotMSPRMtrC_AccelRaw/Timeout1'
 * '<S507>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P'
 * '<S508>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/ArbtrLogic_Protected'
 * '<S509>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Fsft'
 * '<S510>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Poke'
 * '<S511>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/ArbtrLogic_Protected/Chart'
 * '<S512>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Fsft/MCPACpbltySpdDivVoltP_FsftMTIRMtrACapabilitySpd'
 * '<S513>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Fsft/MCPACpbltySpdDivVoltP_FsftMTIRMtrCCapabilitySpd'
 * '<S514>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Fsft/MCPACpbltySpdDivVoltP_FsftMTIRMtrACapabilitySpd/Failsoft'
 * '<S515>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Fsft/MCPACpbltySpdDivVoltP_FsftMTIRMtrCCapabilitySpd/Failsoft1'
 * '<S516>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Poke/MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd'
 * '<S517>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Poke/MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd'
 * '<S518>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Poke/MCPACpbltySpdDivVoltP_PokeMTIRMtrACapabilitySpd/Poke'
 * '<S519>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_CpbltySpdDivVolt_P/MCPA_CpbltySpdDivVolt_P/Poke/MCPACpbltySpdDivVoltP_PokeMTIRMtrCCapabilitySpd/Poke1'
 * '<S520>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P'
 * '<S521>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/ArbtrLogic_Protected'
 * '<S522>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Fsft'
 * '<S523>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Poke'
 * '<S524>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/ArbtrLogic_Protected/Chart'
 * '<S525>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Fsft/MCPADeratingFactorP_FsftMTIRMtrADeratingFactor'
 * '<S526>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Fsft/MCPADeratingFactorP_FsftMTIRMtrCDeratingFactor'
 * '<S527>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Fsft/MCPADeratingFactorP_FsftMTIRMtrADeratingFactor/Failsoft'
 * '<S528>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Fsft/MCPADeratingFactorP_FsftMTIRMtrCDeratingFactor/Failsoft1'
 * '<S529>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Poke/MCPADeratingFactorP_PokeMTIRMtrADeratingFactor'
 * '<S530>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Poke/MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor'
 * '<S531>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Poke/MCPADeratingFactorP_PokeMTIRMtrADeratingFactor/Poke'
 * '<S532>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_DeratingFactor_P/MCPA_DeratingFactor_P/Poke/MCPADeratingFactorP_PokeMTIRMtrCDeratingFactor/Poke1'
 * '<S533>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P'
 * '<S534>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/ArbtrLogic_Protected'
 * '<S535>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Fsft'
 * '<S536>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Poke'
 * '<S537>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/ArbtrLogic_Protected/Chart'
 * '<S538>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Fsft/MCPADschrgeStatusP_FsftINVRMtrA_Dschrge_Stat'
 * '<S539>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Fsft/MCPADschrgeStatusP_FsftINVRMtrC_Dschrge_Stat'
 * '<S540>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Fsft/MCPADschrgeStatusP_FsftINVRMtrA_Dschrge_Stat/Failsoft'
 * '<S541>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Fsft/MCPADschrgeStatusP_FsftINVRMtrC_Dschrge_Stat/Failsoft1'
 * '<S542>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Poke/MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat'
 * '<S543>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Poke/MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat'
 * '<S544>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Poke/MCPADschrgeStatusP_PokeINVRMtrA_Dschrge_Stat/Poke'
 * '<S545>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Dschrge_Status_P/MCPA_Dschrge_Status_P/Poke/MCPADschrgeStatusP_PokeINVRMtrC_Dschrge_Stat/Poke1'
 * '<S546>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P'
 * '<S547>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/ArbtrLogic_Protected'
 * '<S548>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Fsft'
 * '<S549>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Poke'
 * '<S550>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/ArbtrLogic_Protected/Chart'
 * '<S551>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Fsft/MCPAHVCnctrOpnReqP_FsftINVRMtrAFlt_HV_CntctrOpnRq'
 * '<S552>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Fsft/MCPAHVCnctrOpnReqP_FsftINVRMtrCFlt_HV_CntctrOpnRq'
 * '<S553>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Fsft/MCPAHVCnctrOpnReqP_FsftINVRMtrAFlt_HV_CntctrOpnRq/Failsoft'
 * '<S554>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Fsft/MCPAHVCnctrOpnReqP_FsftINVRMtrCFlt_HV_CntctrOpnRq/Failsoft1'
 * '<S555>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Poke/MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq'
 * '<S556>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Poke/MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq'
 * '<S557>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Poke/MCPAHVCnctrOpnReqP_PokeINVRMtrAFlt_HV_CntctrOpnRq/Poke'
 * '<S558>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_HV_CnctrOpn_Req_P/MCPA_HV_CnctrOpn_Req_P/Poke/MCPAHVCnctrOpnReqP_PokeINVRMtrCFlt_HV_CntctrOpnRq/Poke1'
 * '<S559>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P'
 * '<S560>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/ArbtrLogic_Protected'
 * '<S561>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Fsft'
 * '<S562>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Poke'
 * '<S563>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/ArbtrLogic_Protected/Chart'
 * '<S564>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Fsft/MCPAInterlockStsP_FsftINVRMCPA_HVILSts'
 * '<S565>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Fsft/MCPAInterlockStsP_FsftINVRMCPC_HVILSts'
 * '<S566>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Fsft/MCPAInterlockStsP_FsftINVRMCPA_HVILSts/Failsoft'
 * '<S567>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Fsft/MCPAInterlockStsP_FsftINVRMCPC_HVILSts/Failsoft1'
 * '<S568>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Poke/MCPAInterlockStsP_PokeINVRMCPA_HVILSts'
 * '<S569>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Poke/MCPAInterlockStsP_PokeINVRMCPC_HVILSts'
 * '<S570>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Poke/MCPAInterlockStsP_PokeINVRMCPA_HVILSts/Poke'
 * '<S571>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_InterlockSts_P/MCPA_InterlockSts_P/Poke/MCPAInterlockStsP_PokeINVRMCPC_HVILSts/Poke1'
 * '<S572>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P'
 * '<S573>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/ArbtrLogic_Protected'
 * '<S574>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Fsft'
 * '<S575>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Poke'
 * '<S576>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Tmot'
 * '<S577>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/ArbtrLogic_Protected/Chart'
 * '<S578>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Fsft/MCPAInvrtrStateP_FsftINVRMtrA_InvrtrSt'
 * '<S579>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Fsft/MCPAInvrtrStateP_FsftINVRMtrC_InvrtrSt'
 * '<S580>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Fsft/MCPAInvrtrStateP_FsftINVRMtrA_InvrtrSt/Failsoft'
 * '<S581>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Fsft/MCPAInvrtrStateP_FsftINVRMtrC_InvrtrSt/Failsoft1'
 * '<S582>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Poke/MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt'
 * '<S583>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Poke/MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt'
 * '<S584>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Poke/MCPAInvrtrStateP_PokeINVRMtrA_InvrtrSt/Poke'
 * '<S585>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Poke/MCPAInvrtrStateP_PokeINVRMtrC_InvrtrSt/Poke1'
 * '<S586>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Tmot/MCPAInvrtrStateP_TmotINVRMtrA_InvrtrSt'
 * '<S587>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Tmot/MCPAInvrtrStateP_TmotINVRMtrC_InvrtrSt'
 * '<S588>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Tmot/MCPAInvrtrStateP_TmotINVRMtrA_InvrtrSt/Timeout'
 * '<S589>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Invrtr_State_P/MCPA_Invrtr_State_P/Tmot/MCPAInvrtrStateP_TmotINVRMtrC_InvrtrSt/Timeout1'
 * '<S590>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P'
 * '<S591>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/ArbtrLogic_Protected'
 * '<S592>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Fsft'
 * '<S593>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Poke'
 * '<S594>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/ArbtrLogic_Protected/Chart'
 * '<S595>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Fsft/MCPAMaxTorqP_FsftMTIRMtrA_MaxTorq'
 * '<S596>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Fsft/MCPAMaxTorqP_FsftMTIRMtrC_MaxTorq'
 * '<S597>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Fsft/MCPAMaxTorqP_FsftMTIRMtrA_MaxTorq/Failsoft'
 * '<S598>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Fsft/MCPAMaxTorqP_FsftMTIRMtrC_MaxTorq/Failsoft1'
 * '<S599>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Poke/MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq'
 * '<S600>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Poke/MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq'
 * '<S601>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Poke/MCPAMaxTorqP_PokeMTIRMtrA_MaxTorq/Poke'
 * '<S602>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MaxTorq_P/MCPA_MaxTorq_P/Poke/MCPAMaxTorqP_PokeMTIRMtrC_MaxTorq/Poke1'
 * '<S603>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P'
 * '<S604>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/ArbtrLogic_Protected'
 * '<S605>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Fsft'
 * '<S606>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Poke'
 * '<S607>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/ArbtrLogic_Protected/Chart'
 * '<S608>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Fsft/MCPAMinTorqP_FsftMTIRMtrA_MinTorq'
 * '<S609>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Fsft/MCPAMinTorqP_FsftMTIRMtrC_MinTorq'
 * '<S610>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Fsft/MCPAMinTorqP_FsftMTIRMtrA_MinTorq/Failsoft'
 * '<S611>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Fsft/MCPAMinTorqP_FsftMTIRMtrC_MinTorq/Failsoft1'
 * '<S612>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Poke/MCPAMinTorqP_PokeMTIRMtrA_MinTorq'
 * '<S613>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Poke/MCPAMinTorqP_PokeMTIRMtrC_MinTorq'
 * '<S614>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Poke/MCPAMinTorqP_PokeMTIRMtrA_MinTorq/Poke'
 * '<S615>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MinTorq_P/MCPA_MinTorq_P/Poke/MCPAMinTorqP_PokeMTIRMtrC_MinTorq/Poke1'
 * '<S616>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P'
 * '<S617>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S618>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Fsft'
 * '<S619>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Poke'
 * '<S620>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S621>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Fsft/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrACapabilityMax'
 * '<S622>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Fsft/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrCCapabilityMax'
 * '<S623>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Fsft/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrACapabilityMax/Failsoft'
 * '<S624>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Fsft/MCPAMtrMaxCpbltyTrqP_FsftMTIRMtrCCapabilityMax/Failsoft1'
 * '<S625>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Poke/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax'
 * '<S626>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Poke/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax'
 * '<S627>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Poke/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrACapabilityMax/Poke'
 * '<S628>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMaxCpbltyTrq_P/MCPA_MtrMaxCpbltyTrq_P/Poke/MCPAMtrMaxCpbltyTrqP_PokeMTIRMtrCCapabilityMax/Poke1'
 * '<S629>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P'
 * '<S630>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S631>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Fsft'
 * '<S632>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Poke'
 * '<S633>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S634>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Fsft/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrACapabilityMin'
 * '<S635>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Fsft/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrCCapabilityMin'
 * '<S636>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Fsft/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrACapabilityMin/Failsoft'
 * '<S637>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Fsft/MCPAMtrMinCpbltyTrqP_FsftMTIRMtrCCapabilityMin/Failsoft1'
 * '<S638>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Poke/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin'
 * '<S639>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Poke/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin'
 * '<S640>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Poke/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrACapabilityMin/Poke'
 * '<S641>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_MtrMinCpbltyTrq_P/MCPA_MtrMinCpbltyTrq_P/Poke/MCPAMtrMinCpbltyTrqP_PokeMTIRMtrCCapabilityMin/Poke1'
 * '<S642>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P'
 * '<S643>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/ArbtrLogic_Protected'
 * '<S644>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Fsft'
 * '<S645>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Poke'
 * '<S646>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Tmot'
 * '<S647>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/ArbtrLogic_Protected/Chart'
 * '<S648>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Fsft/MCPARPMP_FsftMSPRMtrA_SpdRaw'
 * '<S649>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Fsft/MCPARPMP_FsftMSPRMtrC_SpdRaw'
 * '<S650>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Fsft/MCPARPMP_FsftMSPRMtrA_SpdRaw/Failsoft'
 * '<S651>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Fsft/MCPARPMP_FsftMSPRMtrC_SpdRaw/Failsoft1'
 * '<S652>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Poke/MCPARPMP_PokeMSPRMtrA_SpdRaw'
 * '<S653>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Poke/MCPARPMP_PokeMSPRMtrC_SpdRaw'
 * '<S654>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Poke/MCPARPMP_PokeMSPRMtrA_SpdRaw/Poke'
 * '<S655>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Poke/MCPARPMP_PokeMSPRMtrC_SpdRaw/Poke1'
 * '<S656>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Tmot/MCPARPMP_TmotMSPRMtrA_SpdRaw'
 * '<S657>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Tmot/MCPARPMP_TmotMSPRMtrC_SpdRaw'
 * '<S658>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Tmot/MCPARPMP_TmotMSPRMtrA_SpdRaw/Timeout'
 * '<S659>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_P/MCPA_RPM_P/Tmot/MCPARPMP_TmotMSPRMtrC_SpdRaw/Timeout1'
 * '<S660>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P/MCPA_RPM_V_P'
 * '<S661>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P/MCPA_RPM_V_P/ArbtrLogic_Protected'
 * '<S662>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P/MCPA_RPM_V_P/Poke'
 * '<S663>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P/MCPA_RPM_V_P/ArbtrLogic_Protected/Chart'
 * '<S664>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_RPM_V_P/MCPA_RPM_V_P/Poke/Poke'
 * '<S665>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P'
 * '<S666>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/ArbtrLogic_Protected'
 * '<S667>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Fsft'
 * '<S668>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Poke'
 * '<S669>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Tmot'
 * '<S670>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/ArbtrLogic_Protected/Chart'
 * '<S671>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Fsft/MCPASPTStatP_FsftINVRMCPA_SPT_State'
 * '<S672>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Fsft/MCPASPTStatP_FsftINVRMCPC_SPT_State'
 * '<S673>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Fsft/MCPASPTStatP_FsftINVRMCPA_SPT_State/Failsoft'
 * '<S674>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Fsft/MCPASPTStatP_FsftINVRMCPC_SPT_State/Failsoft1'
 * '<S675>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Poke/MCPASPTStatP_PokeINVRMCPA_SPT_State'
 * '<S676>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Poke/MCPASPTStatP_PokeINVRMCPC_SPT_State'
 * '<S677>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Poke/MCPASPTStatP_PokeINVRMCPA_SPT_State/Poke'
 * '<S678>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Poke/MCPASPTStatP_PokeINVRMCPC_SPT_State/Poke1'
 * '<S679>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Tmot/MCPASPTStatP_TmotINVRMCPA_SPT_State'
 * '<S680>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Tmot/MCPASPTStatP_TmotINVRMCPC_SPT_State'
 * '<S681>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Tmot/MCPASPTStatP_TmotINVRMCPA_SPT_State/Timeout'
 * '<S682>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_SPT_Stat_P/MCPA_SPT_Stat_P/Tmot/MCPASPTStatP_TmotINVRMCPC_SPT_State/Timeout1'
 * '<S683>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P'
 * '<S684>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/ArbtrLogic_Protected'
 * '<S685>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Fsft'
 * '<S686>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Poke'
 * '<S687>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Tmot'
 * '<S688>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/ArbtrLogic_Protected/Chart'
 * '<S689>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Fsft/MCPASpdLimP_FsftMSPRMaxMtrCSpdLmt'
 * '<S690>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Fsft/MCPASpdLimP_FsftMSPRMaxP1SpdLmt'
 * '<S691>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Fsft/MCPASpdLimP_FsftMSPRMaxMtrCSpdLmt/Failsoft'
 * '<S692>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Fsft/MCPASpdLimP_FsftMSPRMaxP1SpdLmt/Failsoft1'
 * '<S693>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Poke/MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt'
 * '<S694>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Poke/MCPASpdLimP_PokeMSPRMaxP1SpdLmt'
 * '<S695>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Poke/MCPASpdLimP_PokeMSPRMaxMtrCSpdLmt/Poke'
 * '<S696>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Poke/MCPASpdLimP_PokeMSPRMaxP1SpdLmt/Poke1'
 * '<S697>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Tmot/MCPASpdLimP_TmotMSPRMaxMtrCSpdLmt'
 * '<S698>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Tmot/MCPASpdLimP_TmotMSPRMaxP1SpdLmt'
 * '<S699>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Tmot/MCPASpdLimP_TmotMSPRMaxMtrCSpdLmt/Timeout'
 * '<S700>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Spd_Lim_P/MCPA_Spd_Lim_P/Tmot/MCPASpdLimP_TmotMSPRMaxP1SpdLmt/Timeout1'
 * '<S701>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P'
 * '<S702>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/ArbtrLogic_Protected'
 * '<S703>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Fsft'
 * '<S704>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Poke'
 * '<S705>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Tmot'
 * '<S706>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S707>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Fsft/MCPATempP_FsftINVRMtrA_Temp'
 * '<S708>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Fsft/MCPATempP_FsftINVRMtrC_Temp'
 * '<S709>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Fsft/MCPATempP_FsftINVRMtrA_Temp/Failsoft'
 * '<S710>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Fsft/MCPATempP_FsftINVRMtrC_Temp/Failsoft1'
 * '<S711>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Poke/MCPATempP_PokeINVRMtrA_Temp'
 * '<S712>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Poke/MCPATempP_PokeINVRMtrC_Temp'
 * '<S713>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Poke/MCPATempP_PokeINVRMtrA_Temp/Poke'
 * '<S714>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Poke/MCPATempP_PokeINVRMtrC_Temp/Poke1'
 * '<S715>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Tmot/MCPATempP_TmotINVRMtrA_Temp'
 * '<S716>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Tmot/MCPATempP_TmotINVRMtrC_Temp'
 * '<S717>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Tmot/MCPATempP_TmotINVRMtrA_Temp/Timeout'
 * '<S718>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Temp_P/MCPA_Temp_P/Tmot/MCPATempP_TmotINVRMtrC_Temp/Timeout1'
 * '<S719>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P'
 * '<S720>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/ArbtrLogic_Protected'
 * '<S721>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Fsft'
 * '<S722>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Poke'
 * '<S723>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Tmot'
 * '<S724>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/ArbtrLogic_Protected/Chart'
 * '<S725>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Fsft/MCPATorqAchievedAEMDP_FsftMTIRMtrA_TorqAchieved_AEMD'
 * '<S726>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Fsft/MCPATorqAchievedAEMDP_FsftMTIRMtrC_TorqAchieved_AEMD'
 * '<S727>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Fsft/MCPATorqAchievedAEMDP_FsftMTIRMtrA_TorqAchieved_AEMD/Failsoft'
 * '<S728>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Fsft/MCPATorqAchievedAEMDP_FsftMTIRMtrC_TorqAchieved_AEMD/Failsoft1'
 * '<S729>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Poke/MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD'
 * '<S730>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Poke/MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD'
 * '<S731>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Poke/MCPATorqAchievedAEMDP_PokeMTIRMtrA_TorqAchieved_AEMD/Poke'
 * '<S732>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Poke/MCPATorqAchievedAEMDP_PokeMTIRMtrC_TorqAchieved_AEMD/Poke1'
 * '<S733>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Tmot/MCPATorqAchievedAEMDP_TmotMTIRMtrA_TorqAchieved_AEMD'
 * '<S734>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Tmot/MCPATorqAchievedAEMDP_TmotMTIRMtrC_TorqAchieved_AEMD'
 * '<S735>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Tmot/MCPATorqAchievedAEMDP_TmotMTIRMtrA_TorqAchieved_AEMD/Timeout'
 * '<S736>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_TorqAchieved_AEMD_P/MCPA_TorqAchieved_AEMD_P/Tmot/MCPATorqAchievedAEMDP_TmotMTIRMtrC_TorqAchieved_AEMD/Timeout1'
 * '<S737>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P'
 * '<S738>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/ArbtrLogic_Protected'
 * '<S739>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Fsft'
 * '<S740>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Poke'
 * '<S741>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/ArbtrLogic_Protected/Chart'
 * '<S742>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Fsft/MCPATorqueAchievedP_FsftMTIRMtrA_TorqAchieved'
 * '<S743>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Fsft/MCPATorqueAchievedP_FsftMTIRMtrC_TorqAchieved'
 * '<S744>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Fsft/MCPATorqueAchievedP_FsftMTIRMtrA_TorqAchieved/Failsoft'
 * '<S745>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Fsft/MCPATorqueAchievedP_FsftMTIRMtrC_TorqAchieved/Failsoft1'
 * '<S746>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Poke/MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved'
 * '<S747>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Poke/MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved'
 * '<S748>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Poke/MCPATorqueAchievedP_PokeMTIRMtrA_TorqAchieved/Poke'
 * '<S749>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_P/MCPA_Torque_Achieved_P/Poke/MCPATorqueAchievedP_PokeMTIRMtrC_TorqAchieved/Poke1'
 * '<S750>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P/MCPA_Torque_Achieved_V_P'
 * '<S751>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P/MCPA_Torque_Achieved_V_P/ArbtrLogic_Protected'
 * '<S752>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P/MCPA_Torque_Achieved_V_P/Poke'
 * '<S753>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P/MCPA_Torque_Achieved_V_P/ArbtrLogic_Protected/Chart'
 * '<S754>' : 'CR4B_FUNC_ac/SigMngt/MCPA_PROPULSION/MCPA_Torque_Achieved_V_P/MCPA_Torque_Achieved_V_P/Poke/Poke'
 * '<S755>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P'
 * '<S756>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P'
 * '<S757>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P'
 * '<S758>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P'
 * '<S759>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P'
 * '<S760>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P'
 * '<S761>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P'
 * '<S762>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P'
 * '<S763>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P'
 * '<S764>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/ArbtrLogic_Protected'
 * '<S765>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Fsft'
 * '<S766>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Poke'
 * '<S767>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Tmot'
 * '<S768>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S769>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Fsft/MCPAControlBoardTemperatureP_FsftINVRMtrA_CtrlBoard_Temp'
 * '<S770>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Fsft/MCPAControlBoardTemperatureP_FsftINVRMtrC_CtrlBoard_Temp'
 * '<S771>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Fsft/MCPAControlBoardTemperatureP_FsftINVRMtrA_CtrlBoard_Temp/Failsoft'
 * '<S772>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Fsft/MCPAControlBoardTemperatureP_FsftINVRMtrC_CtrlBoard_Temp/Failsoft1'
 * '<S773>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Poke/MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Temp'
 * '<S774>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Poke/MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Temp'
 * '<S775>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Poke/MCPAControlBoardTemperatureP_PokeINVRMtrA_CtrlBoard_Temp/Poke'
 * '<S776>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Poke/MCPAControlBoardTemperatureP_PokeINVRMtrC_CtrlBoard_Temp/Poke1'
 * '<S777>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Tmot/MCPAControlBoardTemperatureP_TmotINVRMtrA_CtrlBoard_Temp'
 * '<S778>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Tmot/MCPAControlBoardTemperatureP_TmotINVRMtrC_CtrlBoard_Temp'
 * '<S779>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Tmot/MCPAControlBoardTemperatureP_TmotINVRMtrA_CtrlBoard_Temp/Timeout'
 * '<S780>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Control_Board_Temperature_P/MCPA_Control_Board_Temperature_P/Tmot/MCPAControlBoardTemperatureP_TmotINVRMtrC_CtrlBoard_Temp/Timeout1'
 * '<S781>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P'
 * '<S782>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/ArbtrLogic_Protected'
 * '<S783>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Fsft'
 * '<S784>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Poke'
 * '<S785>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Tmot'
 * '<S786>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/ArbtrLogic_Protected/Chart'
 * '<S787>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Fsft/MCPADCCurrentP_FsftINVRMtrA_DC_Crnt'
 * '<S788>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Fsft/MCPADCCurrentP_FsftINVRMtrC_DC_Crnt'
 * '<S789>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Fsft/MCPADCCurrentP_FsftINVRMtrA_DC_Crnt/Failsoft'
 * '<S790>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Fsft/MCPADCCurrentP_FsftINVRMtrC_DC_Crnt/Failsoft1'
 * '<S791>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Poke/MCPADCCurrentP_PokeINVRMtrA_DC_Crnt'
 * '<S792>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Poke/MCPADCCurrentP_PokeINVRMtrC_DC_Crnt'
 * '<S793>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Poke/MCPADCCurrentP_PokeINVRMtrA_DC_Crnt/Poke'
 * '<S794>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Poke/MCPADCCurrentP_PokeINVRMtrC_DC_Crnt/Poke1'
 * '<S795>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Tmot/MCPADCCurrentP_TmotINVRMtrA_DC_Crnt'
 * '<S796>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Tmot/MCPADCCurrentP_TmotINVRMtrC_DC_Crnt'
 * '<S797>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Tmot/MCPADCCurrentP_TmotINVRMtrA_DC_Crnt/Timeout'
 * '<S798>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Current_P/MCPA_DC_Current_P/Tmot/MCPADCCurrentP_TmotINVRMtrC_DC_Crnt/Timeout1'
 * '<S799>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P'
 * '<S800>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/ArbtrLogic_Protected'
 * '<S801>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Fsft'
 * '<S802>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Poke'
 * '<S803>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Tmot'
 * '<S804>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/ArbtrLogic_Protected/Chart'
 * '<S805>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Fsft/MCPADCVoltageP_FsftINVRMtrA_DC_Volt'
 * '<S806>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Fsft/MCPADCVoltageP_FsftINVRMtrC_DC_Volt'
 * '<S807>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Fsft/MCPADCVoltageP_FsftINVRMtrA_DC_Volt/Failsoft'
 * '<S808>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Fsft/MCPADCVoltageP_FsftINVRMtrC_DC_Volt/Failsoft1'
 * '<S809>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Poke/MCPADCVoltageP_PokeINVRMtrA_DC_Volt'
 * '<S810>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Poke/MCPADCVoltageP_PokeINVRMtrC_DC_Volt'
 * '<S811>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Poke/MCPADCVoltageP_PokeINVRMtrA_DC_Volt/Poke'
 * '<S812>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Poke/MCPADCVoltageP_PokeINVRMtrC_DC_Volt/Poke1'
 * '<S813>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Tmot/MCPADCVoltageP_TmotINVRMtrA_DC_Volt'
 * '<S814>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Tmot/MCPADCVoltageP_TmotINVRMtrC_DC_Volt'
 * '<S815>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Tmot/MCPADCVoltageP_TmotINVRMtrA_DC_Volt/Timeout'
 * '<S816>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DC_Voltage_P/MCPA_DC_Voltage_P/Tmot/MCPADCVoltageP_TmotINVRMtrC_DC_Volt/Timeout1'
 * '<S817>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P'
 * '<S818>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/ArbtrLogic_Protected'
 * '<S819>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Poke'
 * '<S820>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Tmot'
 * '<S821>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/ArbtrLogic_Protected/Chart'
 * '<S822>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Poke/MCPADerateReasonP_PokeINVRMtrA_DrtRsn'
 * '<S823>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Poke/MCPADerateReasonP_PokeINVRMtrC_DrtRsn'
 * '<S824>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Poke/MCPADerateReasonP_PokeINVRMtrA_DrtRsn/Poke'
 * '<S825>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_DerateReason_P/MCPA_DerateReason_P/Poke/MCPADerateReasonP_PokeINVRMtrC_DrtRsn/Poke1'
 * '<S826>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P'
 * '<S827>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/ArbtrLogic_Protected'
 * '<S828>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Fsft'
 * '<S829>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Poke'
 * '<S830>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Tmot'
 * '<S831>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S832>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Fsft/MCPAInverterTempP_FsftINVRMtrA_InvrtrTemp'
 * '<S833>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Fsft/MCPAInverterTempP_FsftINVRMtrC_InvrtrTemp'
 * '<S834>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Fsft/MCPAInverterTempP_FsftINVRMtrA_InvrtrTemp/Failsoft'
 * '<S835>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Fsft/MCPAInverterTempP_FsftINVRMtrC_InvrtrTemp/Failsoft1'
 * '<S836>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Poke/MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp'
 * '<S837>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Poke/MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp'
 * '<S838>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Poke/MCPAInverterTempP_PokeINVRMtrA_InvrtrTemp/Poke'
 * '<S839>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Poke/MCPAInverterTempP_PokeINVRMtrC_InvrtrTemp/Poke1'
 * '<S840>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Tmot/MCPAInverterTempP_TmotINVRMtrA_InvrtrTemp'
 * '<S841>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Tmot/MCPAInverterTempP_TmotINVRMtrC_InvrtrTemp'
 * '<S842>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Tmot/MCPAInverterTempP_TmotINVRMtrA_InvrtrTemp/Timeout'
 * '<S843>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Inverter_Temp_P/MCPA_Inverter_Temp_P/Tmot/MCPAInverterTempP_TmotINVRMtrC_InvrtrTemp/Timeout1'
 * '<S844>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P'
 * '<S845>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected'
 * '<S846>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Fsft'
 * '<S847>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Poke'
 * '<S848>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Tmot'
 * '<S849>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S850>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Fsft/MCPAPIMDCSideBusbarTempP_FsftINVRGPIMDCBusBarTemp'
 * '<S851>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Fsft/MCPAPIMDCSideBusbarTempP_FsftINVRMtrCBusBarTemp'
 * '<S852>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Fsft/MCPAPIMDCSideBusbarTempP_FsftINVRGPIMDCBusBarTemp/Failsoft'
 * '<S853>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Fsft/MCPAPIMDCSideBusbarTempP_FsftINVRMtrCBusBarTemp/Failsoft1'
 * '<S854>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Poke/MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp'
 * '<S855>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Poke/MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp'
 * '<S856>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Poke/MCPAPIMDCSideBusbarTempP_PokeINVRGPIMDCBusBarTemp/Poke'
 * '<S857>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_PIM_DC_Side_Busbar_Temp_P/MCPA_PIM_DC_Side_Busbar_Temp_P/Poke/MCPAPIMDCSideBusbarTempP_PokeINVRMtrCBusBarTemp/Poke1'
 * '<S858>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P'
 * '<S859>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/ArbtrLogic_Protected'
 * '<S860>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Fsft'
 * '<S861>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Poke'
 * '<S862>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Tmot'
 * '<S863>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S864>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Fsft/MCPARotorTemperatureP_FsftINVRMtrA_RotrTemp'
 * '<S865>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Fsft/MCPARotorTemperatureP_FsftINVRMtrC_RotrTemp'
 * '<S866>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Fsft/MCPARotorTemperatureP_FsftINVRMtrA_RotrTemp/Failsoft'
 * '<S867>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Fsft/MCPARotorTemperatureP_FsftINVRMtrC_RotrTemp/Failsoft1'
 * '<S868>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Poke/MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp'
 * '<S869>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Poke/MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp'
 * '<S870>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Poke/MCPARotorTemperatureP_PokeINVRMtrA_RotrTemp/Poke'
 * '<S871>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Poke/MCPARotorTemperatureP_PokeINVRMtrC_RotrTemp/Poke1'
 * '<S872>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Tmot/MCPARotorTemperatureP_TmotINVRMtrA_RotrTemp'
 * '<S873>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Tmot/MCPARotorTemperatureP_TmotINVRMtrC_RotrTemp'
 * '<S874>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Tmot/MCPARotorTemperatureP_TmotINVRMtrA_RotrTemp/Timeout'
 * '<S875>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Rotor_Temperature_P/MCPA_Rotor_Temperature_P/Tmot/MCPARotorTemperatureP_TmotINVRMtrC_RotrTemp/Timeout1'
 * '<S876>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P'
 * '<S877>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/ArbtrLogic_Protected'
 * '<S878>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Poke'
 * '<S879>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Tmot'
 * '<S880>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/ArbtrLogic_Protected/Chart'
 * '<S881>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Poke/MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Request'
 * '<S882>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Poke/MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Request'
 * '<S883>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Poke/MCPAServiceLampRequestP_PokeHMIRMCPA_Service_Lamp_Request/Poke'
 * '<S884>' : 'CR4B_FUNC_ac/SigMngt/MCPA_STATUS/MCPA_Service_Lamp_Request_P/MCPA_Service_Lamp_Request_P/Poke/MCPAServiceLampRequestP_PokeHMIRMCPC_Service_Lamp_Request/Poke1'
 * '<S885>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P'
 * '<S886>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P'
 * '<S887>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P'
 * '<S888>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P'
 * '<S889>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P'
 * '<S890>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P'
 * '<S891>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P'
 * '<S892>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P'
 * '<S893>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P'
 * '<S894>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P'
 * '<S895>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P'
 * '<S896>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P'
 * '<S897>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P'
 * '<S898>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P'
 * '<S899>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P'
 * '<S900>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P'
 * '<S901>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P'
 * '<S902>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P'
 * '<S903>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P'
 * '<S904>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P'
 * '<S905>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P'
 * '<S906>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P'
 * '<S907>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P'
 * '<S908>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/ArbtrLogic_Protected'
 * '<S909>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/Poke'
 * '<S910>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/Tmot'
 * '<S911>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/ArbtrLogic_Protected/Chart'
 * '<S912>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/Poke/Poke'
 * '<S913>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_6SO_Status_P/Tmot/Timeout'
 * '<S914>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/ArbtrLogic_Protected'
 * '<S915>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Fsft'
 * '<S916>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Poke'
 * '<S917>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Tmot'
 * '<S918>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/ArbtrLogic_Protected/Chart'
 * '<S919>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Fsft/Failsoft'
 * '<S920>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Poke/Poke'
 * '<S921>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_AccelRaw_P/Tmot/Timeout'
 * '<S922>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/ArbtrLogic_Protected'
 * '<S923>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/Fsft'
 * '<S924>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/Poke'
 * '<S925>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/ArbtrLogic_Protected/Chart'
 * '<S926>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/Fsft/Failsoft'
 * '<S927>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_CpbltySpdDivVolt_P/Poke/Poke'
 * '<S928>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/ArbtrLogic_Protected'
 * '<S929>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/Fsft'
 * '<S930>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/Poke'
 * '<S931>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/ArbtrLogic_Protected/Chart'
 * '<S932>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/Fsft/Failsoft'
 * '<S933>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_DeratingFactor_P/Poke/Poke'
 * '<S934>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/ArbtrLogic_Protected'
 * '<S935>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/Fsft'
 * '<S936>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/Poke'
 * '<S937>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/ArbtrLogic_Protected/Chart'
 * '<S938>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/Fsft/Failsoft'
 * '<S939>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Dschrge_Status_P/Poke/Poke'
 * '<S940>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/ArbtrLogic_Protected'
 * '<S941>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Fsft'
 * '<S942>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Poke'
 * '<S943>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Tmot'
 * '<S944>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/ArbtrLogic_Protected/Chart'
 * '<S945>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Fsft/Failsoft'
 * '<S946>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Poke/Poke'
 * '<S947>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_HV_CnctrOpn_Req_P/Tmot/Timeout'
 * '<S948>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/ArbtrLogic_Protected'
 * '<S949>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/Fsft'
 * '<S950>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/Poke'
 * '<S951>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/ArbtrLogic_Protected/Chart'
 * '<S952>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/Fsft/Failsoft'
 * '<S953>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/Poke/Poke'
 * '<S954>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_InterlockSts_P/Poke/Poke/Compare To Constant'
 * '<S955>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/ArbtrLogic_Protected'
 * '<S956>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Fsft'
 * '<S957>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Poke'
 * '<S958>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Tmot'
 * '<S959>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/ArbtrLogic_Protected/Chart'
 * '<S960>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Fsft/Failsoft'
 * '<S961>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Poke/Poke'
 * '<S962>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Invrtr_State_P/Tmot/Timeout'
 * '<S963>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/ArbtrLogic_Protected'
 * '<S964>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/Fsft'
 * '<S965>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/Poke'
 * '<S966>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/ArbtrLogic_Protected/Chart'
 * '<S967>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/Fsft/Failsoft'
 * '<S968>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MaxTorq_P/Poke/Poke'
 * '<S969>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/ArbtrLogic_Protected'
 * '<S970>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/Fsft'
 * '<S971>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/Poke'
 * '<S972>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/ArbtrLogic_Protected/Chart'
 * '<S973>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/Fsft/Failsoft'
 * '<S974>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MinTorq_P/Poke/Poke'
 * '<S975>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S976>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/Fsft'
 * '<S977>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/Poke'
 * '<S978>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S979>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/Fsft/Failsoft'
 * '<S980>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMaxCpbltyTrq_P/Poke/Poke'
 * '<S981>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S982>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/Fsft'
 * '<S983>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/Poke'
 * '<S984>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S985>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/Fsft/Failsoft'
 * '<S986>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_MtrMinCpbltyTrq_P/Poke/Poke'
 * '<S987>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/ArbtrLogic_Protected'
 * '<S988>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Fsft'
 * '<S989>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Poke'
 * '<S990>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Tmot'
 * '<S991>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/ArbtrLogic_Protected/Chart'
 * '<S992>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Fsft/Failsoft'
 * '<S993>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Poke/Poke'
 * '<S994>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_RPM_P/Tmot/Timeout'
 * '<S995>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/ArbtrLogic_Protected'
 * '<S996>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Fsft'
 * '<S997>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Poke'
 * '<S998>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Tmot'
 * '<S999>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/ArbtrLogic_Protected/Chart'
 * '<S1000>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Fsft/Failsoft'
 * '<S1001>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Poke/Poke'
 * '<S1002>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_SPT_Stat_P/Tmot/Timeout'
 * '<S1003>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/ArbtrLogic_Protected'
 * '<S1004>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Fsft'
 * '<S1005>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Poke'
 * '<S1006>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Tmot'
 * '<S1007>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/ArbtrLogic_Protected/Chart'
 * '<S1008>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Fsft/Failsoft'
 * '<S1009>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Poke/Poke'
 * '<S1010>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Spd_Lim_P/Tmot/Timeout'
 * '<S1011>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/ArbtrLogic_Protected'
 * '<S1012>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Fsft'
 * '<S1013>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Poke'
 * '<S1014>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Tmot'
 * '<S1015>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1016>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Fsft/Failsoft'
 * '<S1017>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Poke/Poke'
 * '<S1018>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Temp_P/Tmot/Timeout'
 * '<S1019>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/ArbtrLogic_Protected'
 * '<S1020>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Fsft'
 * '<S1021>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Poke'
 * '<S1022>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Tmot'
 * '<S1023>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/ArbtrLogic_Protected/Chart'
 * '<S1024>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Fsft/Failsoft'
 * '<S1025>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Poke/Poke'
 * '<S1026>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_TorqAchieved_AEMD_P/Tmot/Timeout'
 * '<S1027>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/ArbtrLogic_Protected'
 * '<S1028>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/Fsft'
 * '<S1029>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/Poke'
 * '<S1030>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/ArbtrLogic_Protected/Chart'
 * '<S1031>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/Fsft/Failsoft'
 * '<S1032>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MCPB_Torque_Achieved_P/Poke/Poke'
 * '<S1033>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/ArbtrLogic_Protected'
 * '<S1034>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/Fsft'
 * '<S1035>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/Poke'
 * '<S1036>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/ArbtrLogic_Protected/Chart'
 * '<S1037>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/Fsft/Failsoft'
 * '<S1038>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/MPR_PosSensor_P/Poke/Poke'
 * '<S1039>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/ArbtrLogic_Protected'
 * '<S1040>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/Fsft'
 * '<S1041>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/Poke'
 * '<S1042>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/ArbtrLogic_Protected/Chart'
 * '<S1043>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/Fsft/Failsoft'
 * '<S1044>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/PlockFailSts_P/Poke/Poke'
 * '<S1045>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/ArbtrLogic_Protected'
 * '<S1046>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/Fsft'
 * '<S1047>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/Poke'
 * '<S1048>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/ArbtrLogic_Protected/Chart'
 * '<S1049>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/Fsft/Failsoft'
 * '<S1050>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_MotorPosSts_P/Poke/Poke'
 * '<S1051>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/ArbtrLogic_Protected'
 * '<S1052>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/Fsft'
 * '<S1053>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/Poke'
 * '<S1054>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/ArbtrLogic_Protected/Chart'
 * '<S1055>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/Fsft/Failsoft'
 * '<S1056>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_PosSensor_P/Poke/Poke'
 * '<S1057>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/ArbtrLogic_Protected'
 * '<S1058>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/Fsft'
 * '<S1059>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/Poke'
 * '<S1060>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/ArbtrLogic_Protected/Chart'
 * '<S1061>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/Fsft/Failsoft'
 * '<S1062>' : 'CR4B_FUNC_ac/SigMngt/MCPB_PROPULSION/Plock_fdbk_sts_P/Poke/Poke'
 * '<S1063>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P'
 * '<S1064>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P'
 * '<S1065>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P'
 * '<S1066>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DerateReason_P'
 * '<S1067>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P'
 * '<S1068>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P'
 * '<S1069>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P'
 * '<S1070>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Service_Lamp_Request_P'
 * '<S1071>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/ArbtrLogic_Protected'
 * '<S1072>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Fsft'
 * '<S1073>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Poke'
 * '<S1074>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Tmot'
 * '<S1075>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S1076>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Fsft/Failsoft'
 * '<S1077>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Poke/Poke'
 * '<S1078>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Control_Board_Temperature_P/Tmot/Timeout'
 * '<S1079>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/ArbtrLogic_Protected'
 * '<S1080>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Fsft'
 * '<S1081>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Poke'
 * '<S1082>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Tmot'
 * '<S1083>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/ArbtrLogic_Protected/Chart'
 * '<S1084>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Fsft/Failsoft'
 * '<S1085>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Poke/Poke'
 * '<S1086>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Current_P/Tmot/Timeout'
 * '<S1087>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/ArbtrLogic_Protected'
 * '<S1088>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Fsft'
 * '<S1089>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Poke'
 * '<S1090>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Tmot'
 * '<S1091>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/ArbtrLogic_Protected/Chart'
 * '<S1092>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Fsft/Failsoft'
 * '<S1093>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Poke/Poke'
 * '<S1094>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DC_Voltage_P/Tmot/Timeout'
 * '<S1095>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DerateReason_P/ArbtrLogic_Protected'
 * '<S1096>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DerateReason_P/Poke'
 * '<S1097>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DerateReason_P/ArbtrLogic_Protected/Chart'
 * '<S1098>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_DerateReason_P/Poke/Poke'
 * '<S1099>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/ArbtrLogic_Protected'
 * '<S1100>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Fsft'
 * '<S1101>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Poke'
 * '<S1102>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Tmot'
 * '<S1103>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1104>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Fsft/Failsoft'
 * '<S1105>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Poke/Poke'
 * '<S1106>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Inverter_Temp_P/Tmot/Timeout'
 * '<S1107>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected'
 * '<S1108>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/Fsft'
 * '<S1109>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/Poke'
 * '<S1110>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1111>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/Fsft/Failsoft'
 * '<S1112>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_PIM_DC_Side_Busbar_Temp_P/Poke/Poke'
 * '<S1113>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/ArbtrLogic_Protected'
 * '<S1114>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Fsft'
 * '<S1115>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Poke'
 * '<S1116>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Tmot'
 * '<S1117>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S1118>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Fsft/Failsoft'
 * '<S1119>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Poke/Poke'
 * '<S1120>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Rotor_Temperature_P/Tmot/Timeout'
 * '<S1121>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Service_Lamp_Request_P/ArbtrLogic_Protected'
 * '<S1122>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Service_Lamp_Request_P/Poke'
 * '<S1123>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Service_Lamp_Request_P/ArbtrLogic_Protected/Chart'
 * '<S1124>' : 'CR4B_FUNC_ac/SigMngt/MCPB_STATUS/MCPB_Service_Lamp_Request_P/Poke/Poke'
 * '<S1125>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P'
 * '<S1126>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P'
 * '<S1127>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P'
 * '<S1128>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P'
 * '<S1129>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P'
 * '<S1130>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P'
 * '<S1131>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P'
 * '<S1132>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P'
 * '<S1133>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P'
 * '<S1134>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P'
 * '<S1135>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P'
 * '<S1136>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P'
 * '<S1137>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P'
 * '<S1138>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P'
 * '<S1139>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P'
 * '<S1140>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P'
 * '<S1141>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P'
 * '<S1142>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P'
 * '<S1143>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P'
 * '<S1144>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P'
 * '<S1145>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P'
 * '<S1146>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/ArbtrLogic_Protected'
 * '<S1147>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/Poke'
 * '<S1148>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/Tmot'
 * '<S1149>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/ArbtrLogic_Protected/Chart'
 * '<S1150>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/Poke/Poke'
 * '<S1151>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_6SO_Status_P/SGCP_6SO_Status_P/Tmot/Timeout'
 * '<S1152>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P'
 * '<S1153>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/ArbtrLogic_Protected'
 * '<S1154>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Fsft'
 * '<S1155>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Poke'
 * '<S1156>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Tmot'
 * '<S1157>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/ArbtrLogic_Protected/Chart'
 * '<S1158>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Fsft/Failsoft'
 * '<S1159>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Poke/Poke'
 * '<S1160>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_AccelRaw_P/SGCP_AccelRaw_P/Tmot/Timeout'
 * '<S1161>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P'
 * '<S1162>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/ArbtrLogic_Protected'
 * '<S1163>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/Fsft'
 * '<S1164>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/Poke'
 * '<S1165>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/ArbtrLogic_Protected/Chart'
 * '<S1166>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/Fsft/Failsoft'
 * '<S1167>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_CpbltySpdDivVolt_P/SGCP_CpbltySpdDivVolt_P/Poke/Poke'
 * '<S1168>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P'
 * '<S1169>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/ArbtrLogic_Protected'
 * '<S1170>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/Fsft'
 * '<S1171>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/Poke'
 * '<S1172>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/ArbtrLogic_Protected/Chart'
 * '<S1173>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/Fsft/Failsoft'
 * '<S1174>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_DeratingFactor_P/SGCP_DeratingFactor_P/Poke/Poke'
 * '<S1175>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P'
 * '<S1176>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/ArbtrLogic_Protected'
 * '<S1177>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/Fsft'
 * '<S1178>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/Poke'
 * '<S1179>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/ArbtrLogic_Protected/Chart'
 * '<S1180>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/Fsft/Failsoft'
 * '<S1181>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Dschrge_Status_P/SGCP_Dschrge_Status_P/Poke/Poke'
 * '<S1182>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P'
 * '<S1183>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/ArbtrLogic_Protected'
 * '<S1184>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Fsft'
 * '<S1185>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Poke'
 * '<S1186>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Tmot'
 * '<S1187>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/ArbtrLogic_Protected/Chart'
 * '<S1188>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Fsft/Failsoft'
 * '<S1189>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Poke/Poke'
 * '<S1190>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_HV_CnctrOpn_Req_P/SGCP_HV_CnctrOpn_Req_P/Tmot/Timeout'
 * '<S1191>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P'
 * '<S1192>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/ArbtrLogic_Protected'
 * '<S1193>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/Fsft'
 * '<S1194>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/Poke'
 * '<S1195>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/ArbtrLogic_Protected/Chart'
 * '<S1196>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/Fsft/Failsoft'
 * '<S1197>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_InterlockSts_P/SGCP_InterlockSts_P/Poke/Poke'
 * '<S1198>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P'
 * '<S1199>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/ArbtrLogic_Protected'
 * '<S1200>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Fsft'
 * '<S1201>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Poke'
 * '<S1202>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Tmot'
 * '<S1203>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/ArbtrLogic_Protected/Chart'
 * '<S1204>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Fsft/Failsoft'
 * '<S1205>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Poke/Poke'
 * '<S1206>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Invrtr_State_P/SGCP_Invrtr_State_P/Tmot/Timeout'
 * '<S1207>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P'
 * '<S1208>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/ArbtrLogic_Protected'
 * '<S1209>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/Fsft'
 * '<S1210>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/Poke'
 * '<S1211>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/ArbtrLogic_Protected/Chart'
 * '<S1212>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/Fsft/Failsoft'
 * '<S1213>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MaxTorq_P/SGCP_MaxTorq_P/Poke/Poke'
 * '<S1214>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P'
 * '<S1215>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/ArbtrLogic_Protected'
 * '<S1216>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/Fsft'
 * '<S1217>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/Poke'
 * '<S1218>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/ArbtrLogic_Protected/Chart'
 * '<S1219>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/Fsft/Failsoft'
 * '<S1220>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MinTorq_P/SGCP_MinTorq_P/Poke/Poke'
 * '<S1221>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P'
 * '<S1222>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S1223>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/Fsft'
 * '<S1224>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/Poke'
 * '<S1225>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S1226>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/Fsft/Failsoft'
 * '<S1227>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMaxCpbltyTrq_P/SGCP_MtrMaxCpbltyTrq_P/Poke/Poke'
 * '<S1228>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P'
 * '<S1229>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/ArbtrLogic_Protected'
 * '<S1230>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/Fsft'
 * '<S1231>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/Poke'
 * '<S1232>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/ArbtrLogic_Protected/Chart'
 * '<S1233>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/Fsft/Failsoft'
 * '<S1234>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_MtrMinCpbltyTrq_P/SGCP_MtrMinCpbltyTrq_P/Poke/Poke'
 * '<S1235>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P'
 * '<S1236>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/ArbtrLogic_Protected'
 * '<S1237>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Fsft'
 * '<S1238>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Poke'
 * '<S1239>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Tmot'
 * '<S1240>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/ArbtrLogic_Protected/Chart'
 * '<S1241>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Fsft/Failsoft'
 * '<S1242>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Poke/Poke'
 * '<S1243>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_P/SGCP_RPM_P/Tmot/Timeout'
 * '<S1244>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P/SGCP_RPM_V_P'
 * '<S1245>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P/SGCP_RPM_V_P/ArbtrLogic_Protected'
 * '<S1246>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P/SGCP_RPM_V_P/Poke'
 * '<S1247>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P/SGCP_RPM_V_P/ArbtrLogic_Protected/Chart'
 * '<S1248>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_RPM_V_P/SGCP_RPM_V_P/Poke/Poke'
 * '<S1249>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P'
 * '<S1250>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/ArbtrLogic_Protected'
 * '<S1251>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Fsft'
 * '<S1252>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Poke'
 * '<S1253>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Tmot'
 * '<S1254>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/ArbtrLogic_Protected/Chart'
 * '<S1255>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Fsft/Failsoft'
 * '<S1256>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Poke/Poke'
 * '<S1257>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_SPT_Stat_P/SGCP_SPT_Stat_P/Tmot/Timeout'
 * '<S1258>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P'
 * '<S1259>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/ArbtrLogic_Protected'
 * '<S1260>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Fsft'
 * '<S1261>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Poke'
 * '<S1262>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Tmot'
 * '<S1263>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/ArbtrLogic_Protected/Chart'
 * '<S1264>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Fsft/Failsoft'
 * '<S1265>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Poke/Poke'
 * '<S1266>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Spd_Lim_P/SGCP_Spd_Lim_P/Tmot/Timeout'
 * '<S1267>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P'
 * '<S1268>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/ArbtrLogic_Protected'
 * '<S1269>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Fsft'
 * '<S1270>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Poke'
 * '<S1271>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Tmot'
 * '<S1272>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1273>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Fsft/Failsoft'
 * '<S1274>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Poke/Poke'
 * '<S1275>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Temp_P/SGCP_Temp_P/Tmot/Timeout'
 * '<S1276>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P'
 * '<S1277>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/ArbtrLogic_Protected'
 * '<S1278>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Fsft'
 * '<S1279>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Poke'
 * '<S1280>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Tmot'
 * '<S1281>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/ArbtrLogic_Protected/Chart'
 * '<S1282>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Fsft/Failsoft'
 * '<S1283>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Poke/Poke'
 * '<S1284>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_TorqAchieved_AEMD_P/SGCP_TorqAchieved_AEMD_P/Tmot/Timeout'
 * '<S1285>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P'
 * '<S1286>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/ArbtrLogic_Protected'
 * '<S1287>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/Fsft'
 * '<S1288>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/Poke'
 * '<S1289>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/ArbtrLogic_Protected/Chart'
 * '<S1290>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/Fsft/Failsoft'
 * '<S1291>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_P/SGCP_Torque_Achieved_P/Poke/Poke'
 * '<S1292>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P/SGCP_Torque_Achieved_V_P'
 * '<S1293>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P/SGCP_Torque_Achieved_V_P/ArbtrLogic_Protected'
 * '<S1294>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P/SGCP_Torque_Achieved_V_P/Poke'
 * '<S1295>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P/SGCP_Torque_Achieved_V_P/ArbtrLogic_Protected/Chart'
 * '<S1296>' : 'CR4B_FUNC_ac/SigMngt/SGCP_PROPULSION/SGCP_Torque_Achieved_V_P/SGCP_Torque_Achieved_V_P/Poke/Poke'
 * '<S1297>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P'
 * '<S1298>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P'
 * '<S1299>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P'
 * '<S1300>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P'
 * '<S1301>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P'
 * '<S1302>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P'
 * '<S1303>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P'
 * '<S1304>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P'
 * '<S1305>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P'
 * '<S1306>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P'
 * '<S1307>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/ArbtrLogic_Protected'
 * '<S1308>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Fsft'
 * '<S1309>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Poke'
 * '<S1310>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Tmot'
 * '<S1311>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S1312>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Fsft/Failsoft'
 * '<S1313>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Poke/Poke'
 * '<S1314>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Control_Board_Temperature_P/SGCP_Control_Board_Temperature_P/Tmot/Timeout'
 * '<S1315>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P'
 * '<S1316>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/ArbtrLogic_Protected'
 * '<S1317>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Fsft'
 * '<S1318>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Poke'
 * '<S1319>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Tmot'
 * '<S1320>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/ArbtrLogic_Protected/Chart'
 * '<S1321>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Fsft/Failsoft'
 * '<S1322>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Poke/Poke'
 * '<S1323>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Current_P/SGCP_DC_Current_P/Tmot/Timeout'
 * '<S1324>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P'
 * '<S1325>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/ArbtrLogic_Protected'
 * '<S1326>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Fsft'
 * '<S1327>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Poke'
 * '<S1328>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Tmot'
 * '<S1329>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/ArbtrLogic_Protected/Chart'
 * '<S1330>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Fsft/Failsoft'
 * '<S1331>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Poke/Poke'
 * '<S1332>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DC_Voltage_P/SGCP_DC_Voltage_P/Tmot/Timeout'
 * '<S1333>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P'
 * '<S1334>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P/ArbtrLogic_Protected'
 * '<S1335>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P/Poke'
 * '<S1336>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P/Tmot'
 * '<S1337>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P/ArbtrLogic_Protected/Chart'
 * '<S1338>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_DerateReason_P/SGCP_DerateReason_P/Poke/Poke'
 * '<S1339>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P'
 * '<S1340>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/ArbtrLogic_Protected'
 * '<S1341>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Fsft'
 * '<S1342>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Poke'
 * '<S1343>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Tmot'
 * '<S1344>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1345>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Fsft/Failsoft'
 * '<S1346>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Poke/Poke'
 * '<S1347>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Inverter_Temp_P/SGCP_Inverter_Temp_P/Tmot/Timeout'
 * '<S1348>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P'
 * '<S1349>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/ArbtrLogic_Protected'
 * '<S1350>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/Fsft'
 * '<S1351>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/Poke'
 * '<S1352>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/Tmot'
 * '<S1353>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1354>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/Fsft/Failsoft'
 * '<S1355>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_AC_Side_Busbar_Temp_P/SGCP_PIM_AC_Side_Busbar_Temp_P/Poke/Poke'
 * '<S1356>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P'
 * '<S1357>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected'
 * '<S1358>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/Fsft'
 * '<S1359>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/Poke'
 * '<S1360>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/Tmot'
 * '<S1361>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/ArbtrLogic_Protected/Chart'
 * '<S1362>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/Fsft/Failsoft'
 * '<S1363>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_PIM_DC_Side_Busbar_Temp_P/SGCP_PIM_DC_Side_Busbar_Temp_P/Poke/Poke'
 * '<S1364>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P'
 * '<S1365>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/ArbtrLogic_Protected'
 * '<S1366>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Fsft'
 * '<S1367>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Poke'
 * '<S1368>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Tmot'
 * '<S1369>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/ArbtrLogic_Protected/Chart'
 * '<S1370>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Fsft/Failsoft'
 * '<S1371>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Poke/Poke'
 * '<S1372>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Rotor_Temperature_P/SGCP_Rotor_Temperature_P/Tmot/Timeout'
 * '<S1373>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P'
 * '<S1374>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P/ArbtrLogic_Protected'
 * '<S1375>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P/Poke'
 * '<S1376>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P/Tmot'
 * '<S1377>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P/ArbtrLogic_Protected/Chart'
 * '<S1378>' : 'CR4B_FUNC_ac/SigMngt/SGCP_STATUS/SGCP_Service_Lamp_Request_P/SGCP_Service_Lamp_Request_P/Poke/Poke'
 */
#endif                                 /* RTW_HEADER_CR4B_FUNC_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
