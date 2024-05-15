/*
 * File: TITR_ac.h
 *
 * Code generated for Simulink model 'TITR_ac'.
 *
 * Model version                  : 9.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:43:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TITR_ac_h_
#define RTW_HEADER_TITR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef TITR_ac_COMMON_INCLUDES_
#define TITR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TITR.h"
#endif                                 /* TITR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TITR_ac_T
{
    float32 OutportBufferForVeTITR_M_TiFinal_Out_Ini;/* '<S178>/Const1' */
    float32 OutportBufferForVeTITR_M_TiPrdt_Out_Init;/* '<S178>/Const2' */
    float32 OutportBufferForVeTITR_k_TiSEMBlend_Out_;/* '<S178>/Const3' */
    float32 OutportBufferForVeTITR_M_Ti_xSEM_Out_Ini;/* '<S178>/Const4' */
    float32 OutportBufferForVeTITR_M_Ti_CL_Slow_Out_;/* '<S178>/Const5' */
    float32 OutportBufferForVeTITR_M_To_CL_Slow_Out_;/* '<S178>/Const6' */
    float32 OutportBufferForVeTITR_M_TaCLSum_Out_Ini;/* '<S178>/Const7' */
    float32 OutportBufferForVeTITR_M_TbCLSum_Out_Ini;/* '<S178>/Const8' */
    float32 OutportBufferForVeTITR_M_TcCLSum_Out_Ini;/* '<S178>/Const9' */
    float32 OutportBufferForVeTITR_M_Ti_CL_Fast_Out_;/* '<S178>/Const10' */
    float32 OutportBufferForVeTITR_M_To_CL_Fast_Out_;/* '<S178>/Const11' */
    float32 OutportBufferForVeTITR_dn_NxDotCL_Fast_O;/* '<S178>/Const12' */
    float32 OutportBufferForVeTITR_dn_NxDotCL_Slow_O;/* '<S178>/Const13' */

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_SnsdTi_Raw;
                                      /* '<S179>/KeTITR_M_SnsdTiRaw_Out_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_TiPostDamper_Raw;
                                     /* '<S179>/KeTITR_M_TiPostDamp_Raw_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForDn_NiDot;  /* '<S179>/KeTITR_dn_NiDot_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_TiPostDamper_Raw1;/* '<S179>/KeTITR_M_SnsdTi_Flt_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForDn_NiDot1; /* '<S179>/KeTITR_M_SnsdEng_Flt_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_SnsdTi_Raw1;
                                     /* '<S179>/KeTITR_M_TiPostDamp_Flt_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTorqAct;/* '<S180>/KeTITR_M_InputTorqAct_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTrqMax;/* '<S180>/KeTITR_M_InputTrqMax_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTrqMin;/* '<S180>/KeTITR_M_InputTrqMin_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngTrqAirflow;
                                    /* '<S180>/KeTITR_M_InputTrqAirflow_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCapacityMinOff;
                             /* '<S180>/KeTITR_M_InputTrqCapacityMinOff_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCapacityMinRunImmed;
                        /* '<S180>/KeTITR_M_InputTrqCapacityMinRunImmed_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_PumpTorq;/* '<S180>/KeTITR_M_PumpTorq_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCorrTrq;/* '<S180>/KeTITR_M_EngCorrTrq_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngTrqStaticSEM;
                                  /* '<S180>/KeTITR_M_InputTrqStaticSEM_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForEngTrqActual_w_CL;
                                 /* '<S180>/KeTITR_M_InputTorqAct_wPDCL_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTorqAct_e;/* '<S177>/ConstantValue' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTrqMax_o;/* '<S177>/ConstantValue1' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_InputTrqMin_f;/* '<S177>/ConstantValue2' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngTrqAirflow_l;/* '<S177>/ConstantValue3' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCapacityMinOff_o;/* '<S177>/ConstantValue5' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCapacityMinRunImm_a;/* '<S177>/ConstantValue4' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_PumpTorq_l;/* '<S177>/ConstantValue6' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngCorrTrq_m;/* '<S177>/ConstantValue7' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForM_EngTrqStaticSEM_d;/* '<S177>/ConstantValue8' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    float32 OutportBufferForEngTrqActual_w_CL_g;/* '<S177>/ConstantValue9' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 Gain;                      /* '<S125>/Gain' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 Sum;                       /* '<S6>/Sum' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 Gain_k;                    /* '<S126>/Gain' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForSnsdTi_Raw;/* '<S5>/Merge' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForTiPostDamp_Raw;/* '<S5>/Merge2' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 Gain_h;                    /* '<S90>/Gain' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 VariantMerge_For_Variant_Source_VariantS[9];

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTorqAct_wCL;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTrqAirflow;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTrqCapacityMinOff;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTrqCapacityMinRunIm;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTrqMax;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForInputTrqMin;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForPumpTorq;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 OutportBufferForTrqStaticSEM;

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 Gain_d;                    /* '<S159>/Gain' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_NF

    boolean OutportBufferForb_SnsdTi_notVld;
                                      /* '<S179>/KeTITR_b_SnsdTi_notVld_init' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    boolean OutportBufferForSnsdTi_notVld;/* '<S5>/Merge4' */

#define B_TITR_AC_T_VARIANT_EXISTS
#endif

}
B_TITR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TITR_ac_T
{

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay2_DSTATE;         /* '<S6>/UnitDelay2' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay1_DSTATE;         /* '<S6>/UnitDelay1' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE;          /* '<S93>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay1_DSTATE_n;       /* '<S114>/UnitDelay1' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_d;        /* '<S114>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay1_DSTATE_l;       /* '<S113>/UnitDelay1' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_h;        /* '<S113>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_b;        /* '<S116>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_m;        /* '<S115>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

    float32 UnitDelay_DSTATE_f;        /* '<S83>/UnitDelay' */
    float32 UnitDelay_DSTATE_i;        /* '<S14>/UnitDelay' */
    float32 UnitDelay1_DSTATE_b;       /* '<S14>/UnitDelay1' */
    float32 UnitDelay3_DSTATE;         /* '<S14>/UnitDelay3' */
    float32 UnitDelay2_DSTATE_j;       /* '<S14>/UnitDelay2' */
    float32 UnitDelay4_DSTATE;         /* '<S14>/UnitDelay4' */
    float32 UnitDelay5_DSTATE;         /* '<S14>/UnitDelay5' */
    float32 UnitDelay_DSTATE_n;        /* '<S51>/UnitDelay' */

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay2_DSTATE_h[2];    /* '<S134>/UnitDelay2' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_j2;       /* '<S134>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_fi;       /* '<S142>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay3_DSTATE_n;       /* '<S142>/UnitDelay3' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_di;       /* '<S148>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    float32 UnitDelay_DSTATE_ba[2];    /* '<S145>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

    boolean UnitDelay_DSTATE_g;        /* '<S39>/UnitDelay' */
    boolean UnitDelay_DSTATE_j5;       /* '<S82>/UnitDelay' */
    boolean UnitDelay_DSTATE_p;        /* '<S73>/UnitDelay' */
    boolean UnitDelay_DSTATE_j2o;      /* '<S65>/UnitDelay' */
    boolean UnitDelay_DSTATE_k;        /* '<S44>/UnitDelay' */
    boolean UnitDelay_DSTATE_b4;       /* '<S67>/UnitDelay' */
    boolean UnitDelay_DSTATE_nk;       /* '<S13>/UnitDelay' */
    boolean UnitDelay_DSTATE_b5;       /* '<S12>/UnitDelay' */
    boolean UnitDelay_DSTATE_k3;       /* '<S11>/UnitDelay' */

#if Rte_SysCon_Variant_TITR_FUNC

    boolean UnitDelay1_DSTATE_c;       /* '<S142>/UnitDelay1' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TITR_FUNC

    boolean UnitDelay_DSTATE_fu;       /* '<S144>/UnitDelay' */

#define DW_TITR_AC_T_VARIANT_EXISTS
#endif

}
DW_TITR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{

#if Rte_SysCon_Variant_TITR_FUNC

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S155>/Vector'
     */
    uint32 Vector_maxIndex[2];

#define CONSTP_TITR_AC_T_VARIANT_EXISTS
#endif

#ifndef CONSTP_TITR_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
ConstP_TITR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

extern VAR(B_TITR_ac_T, TITR_VAR_INIT) TITR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

extern VAR(DW_TITR_ac_T, TITR_VAR_INIT) TITR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TITR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TITR
#include "MemMap.h"

extern CONST(ConstP_TITR_ac_T, TITR_VAR_INIT) TITR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_TITR
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
 * '<Root>' : 'TITR_ac'
 * '<S1>'   : 'TITR_ac/TITR_MedTEB'
 * '<S2>'   : 'TITR_ac/TITR_PUP'
 * '<S3>'   : 'TITR_ac/TITR_PwrOn'
 * '<S4>'   : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal'
 * '<S5>'   : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl'
 * '<S6>'   : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt'
 * '<S7>'   : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl'
 * '<S8>'   : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck'
 * '<S9>'   : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination'
 * '<S10>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/DocBlock'
 * '<S11>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/EdgeRising1'
 * '<S12>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/EdgeRising2'
 * '<S13>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/EdgeRising3'
 * '<S14>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/HTDL_ChooseTiToMap'
 * '<S15>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/HeTITR_t_12p5_dT'
 * '<S16>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse1'
 * '<S17>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse2'
 * '<S18>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse3'
 * '<S19>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse4'
 * '<S20>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse6'
 * '<S21>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/IfThenElse7'
 * '<S22>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KaTITR_b_ESSRStrtStpSt_CLSlwDsbld'
 * '<S23>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KeTITR_b_ActiveDampingEnabled'
 * '<S24>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KeTITR_b_PulseCancelCmndFdbk'
 * '<S25>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KeTITR_k_TaCLCmdFilt_CLDsbld'
 * '<S26>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KtTITR_k_TaCLCmdFilt_Extnl'
 * '<S27>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KtTITR_k_TbCLCmdFilt_Extnl'
 * '<S28>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/KtTITR_k_TcCLCmdFilt_Extnl'
 * '<S29>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled15'
 * '<S30>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled16'
 * '<S31>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled21'
 * '<S32>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/HTDL_ChooseTiToMap/EnumeratedValue1'
 * '<S33>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/HTDL_ChooseTiToMap/MReportModelInfo'
 * '<S34>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled15/Limiter'
 * '<S35>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled16/Limiter'
 * '<S36>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TITC_TiToFdBck/LowpassTResetEnabled21/Limiter'
 * '<S37>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/KeTITR_b_EnblTiSEMShaping'
 * '<S38>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/SetBlock'
 * '<S39>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend'
 * '<S40>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay'
 * '<S41>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/Blend'
 * '<S42>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD'
 * '<S43>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/ConstantValue9'
 * '<S44>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EdgeRising'
 * '<S45>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue1'
 * '<S46>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue2'
 * '<S47>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue3'
 * '<S48>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue4'
 * '<S49>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue5'
 * '<S50>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/EnumeratedValue6'
 * '<S51>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/GradientLimiter'
 * '<S52>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/HeTITR_b_AllowSEMArb'
 * '<S53>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/HeTITR_b_SEM_TiSlct'
 * '<S54>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/HeTITR_t_12p5_dT'
 * '<S55>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KaTITR_b_TiBlendSEM_RngEqnMap'
 * '<S56>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_b_RespType_Ovrd'
 * '<S57>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_b_SEMTiOffset_Enbl'
 * '<S58>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_b_TiActForSEM_DEC'
 * '<S59>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_b_UseEngTrqCmndDuringSEM'
 * '<S60>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_t_TeSEM_Filt'
 * '<S61>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTITR_t_TiRamp'
 * '<S62>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/KeTSXR_r_P1f'
 * '<S63>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/LowpassTResetEnabled'
 * '<S64>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/ModelInfo1'
 * '<S65>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/SignalLatchOnWithReset'
 * '<S66>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD/AccumulatorResetLimited'
 * '<S67>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD/EdgeFalling'
 * '<S68>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD/HeTITR_t_12p5_dT'
 * '<S69>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD/KtTITR_dk_LD_TiSEMBlend'
 * '<S70>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/BlendFactor_LD/AccumulatorResetLimited/Limiter'
 * '<S71>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/TRAR_TITR_SEMBlend/GradientLimiter/Limiter'
 * '<S72>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/ClosedInterval'
 * '<S73>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/EdgeRising'
 * '<S74>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/HeTITR_t_12p5_dT'
 * '<S75>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/KeTITR_M_TiCombDlyNegRst'
 * '<S76>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/KeTITR_M_TiCombDlyPosRst'
 * '<S77>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/KeTITR_k_CmbDlySettlgTmFact'
 * '<S78>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/KeTITR_t_CombDelayDisblTime'
 * '<S79>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/Limiter'
 * '<S80>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/ProtectedDivision'
 * '<S81>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/ProtectedDivision1'
 * '<S82>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/SignalLatchOnWithReset'
 * '<S83>'  : 'TITR_ac/TITR_MedTEB/TITC_CalcTiFinal/TiFinalDetermination/Ti_CombusitonDelay/UnitDelayResetEnabled'
 * '<S84>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/CalcTiFromTSXR'
 * '<S85>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/DocBlock'
 * '<S86>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/FixedGear_Case'
 * '<S87>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/HaTITR_b_EnblTiSnsd4Strt'
 * '<S88>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/HeTITR_t_12p5_dT'
 * '<S89>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/KeTITR_b_UseTuskindT'
 * '<S90>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/SetBlock'
 * '<S91>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem'
 * '<S92>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1'
 * '<S93>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem2'
 * '<S94>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/CalcTiFromTSXR/SetBlock'
 * '<S95>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/CalcTiFromTSXR/SetBlock1'
 * '<S96>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/FixedGear_Case/SetBlock'
 * '<S97>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/FixedGear_Case/SetBlock1'
 * '<S98>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Nc1DotErrorFactor'
 * '<S99>'  : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Nc1ErrorFactor'
 * '<S100>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_NiDotErrorFactor'
 * '<S101>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_NiErrorFactor'
 * '<S102>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_NoDotErrorFactor'
 * '<S103>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_NoErrorFactor'
 * '<S104>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_TaErrorFactor'
 * '<S105>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_TbErrorFactor'
 * '<S106>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Tc1ErrorFactor'
 * '<S107>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Tc2ErrorFactor'
 * '<S108>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Tc3ErrorFactor'
 * '<S109>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_Tc4ErrorFactor'
 * '<S110>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_TcErrorFactor'
 * '<S111>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_TimpErrorFactor'
 * '<S112>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem/KeTITR_r_TlfErrorFactor'
 * '<S113>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/Derivative_filtered1'
 * '<S114>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/Derivative_filtered3'
 * '<S115>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/DifferenceQuotient3'
 * '<S116>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/DifferenceQuotient4'
 * '<S117>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/KeTITR_b_NiDotBuffCranked'
 * '<S118>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/KeTITR_t_NiDotTimePeriod'
 * '<S119>' : 'TITR_ac/TITR_MedTEB/TITC_InTorqEstCtrl/Subsystem1/KeTITR_t_NoDotTimePeriod'
 * '<S120>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/ApplyFILT_1stOrderLag_flt1'
 * '<S121>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/ApplyFILT_1stOrderLag_flt2'
 * '<S122>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/DocBlock'
 * '<S123>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/KeTITR_K_SnsdTi_FltCoef'
 * '<S124>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/KeTITR_K_TiPstDamp_Flt'
 * '<S125>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/SetBlock'
 * '<S126>' : 'TITR_ac/TITR_MedTEB/TITC_InTrqEstFlt/SetBlock1'
 * '<S127>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/DocBlock'
 * '<S128>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/KaTITR_T_SumpOilTempAxis'
 * '<S129>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/KaTITR_k_PmpTorqOffset'
 * '<S130>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/KaTITR_k_PmpTorqSlope'
 * '<S131>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/KaTITR_n_PumpSpdAxis'
 * '<S132>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/KeTITR_K_EVT_PTO_GrRat'
 * '<S133>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/SubPumpTrq_FrmEngineCap'
 * '<S134>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr'
 * '<S135>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_Engine_Capacities'
 * '<S136>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpSpd'
 * '<S137>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque'
 * '<S138>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_TransOilTemp'
 * '<S139>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/SubPumpTrq_FrmEngineCap/SetBlock'
 * '<S140>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/SubPumpTrq_FrmEngineCap/SetBlock1'
 * '<S141>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/SubPumpTrq_FrmEngineCap/SetBlock2'
 * '<S142>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Blend_x_yTerm_TimeBased'
 * '<S143>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Cal_LULD'
 * '<S144>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/EdgeBi'
 * '<S145>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/EngActualTrqSS_Lowpass_Fltr'
 * '<S146>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/EnumeratedValue'
 * '<S147>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/EnumeratedValue1'
 * '<S148>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/GradientLimiter1'
 * '<S149>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/HeTITR_t_12p5_dT'
 * '<S150>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KaTITR_b_EnableTiProtectn'
 * '<S151>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KeTITR_M_DialEngTorqDevOnly'
 * '<S152>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KeTITR_k_InputTorqFilterECMIdle'
 * '<S153>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KeTITR_t_UndershootBlendInTime'
 * '<S154>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KeTITR_t_UndershootBlendOutTime'
 * '<S155>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KtTITR_M_TiAdjst_NiErr'
 * '<S156>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/KtTITR_k_InputTorqFilterConst'
 * '<S157>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Limiter'
 * '<S158>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/NoLULD'
 * '<S159>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/SetBlock'
 * '<S160>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Blend_x_yTerm_TimeBased/ProtectedDivision'
 * '<S161>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Cal_LULD/KeTITR_M_EngTrqCrrctnShpd_Decr'
 * '<S162>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/Cal_LULD/KeTITR_M_EngTrqCrrctnShpd_Incr'
 * '<S163>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_EngActualTrqSS_Fltr/GradientLimiter1/Limiter'
 * '<S164>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_Engine_Capacities/SetBlock1'
 * '<S165>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_Engine_Capacities/SetBlock2'
 * '<S166>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/DocBlock'
 * '<S167>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/KeTITR_M_PumpTorqueMax'
 * '<S168>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/KeTITR_M_PumpTorqueMin'
 * '<S169>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/Limiter'
 * '<S170>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITL_Offset_Lkup2D_WInterp'
 * '<S171>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITL_Slope_Lkup2D_WInterp'
 * '<S172>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITR_Dynamic1DBSearch07pts'
 * '<S173>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITR_Dynamic1DBSearch12pts'
 * '<S174>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITR_Dynamic1DBSearch07pts/Index_Search'
 * '<S175>' : 'TITR_ac/TITR_MedTEB/TITC_InputTorqLimCntrl/TITC_PumpTorque/TITR_Dynamic1DBSearch12pts/Index_Search'
 * '<S176>' : 'TITR_ac/TITR_PUP/TITC_PuPInitInTorqEst'
 * '<S177>' : 'TITR_ac/TITR_PUP/TITC_PuPInitInputTorqLim'
 * '<S178>' : 'TITR_ac/TITR_PwrOn/Sub_Out_Init'
 * '<S179>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst'
 * '<S180>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim'
 * '<S181>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_M_SnsdEng_Flt_init'
 * '<S182>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_M_SnsdTiRaw_Out_init'
 * '<S183>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_M_SnsdTi_Flt_init'
 * '<S184>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_M_TiPostDamp_Flt_init'
 * '<S185>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_M_TiPostDamp_Raw_init'
 * '<S186>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_b_SnsdTi_notVld_init'
 * '<S187>' : 'TITR_ac/TITR_PwrOn/TITC_InitInTorqEst/KeTITR_dn_NiDot_init'
 * '<S188>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_EngCorrTrq_init'
 * '<S189>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTorqAct_init'
 * '<S190>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTorqAct_wPDCL_init'
 * '<S191>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqAirflow_init'
 * '<S192>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqCapacityMinOff_init'
 * '<S193>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqCapacityMinRunImmed_init'
 * '<S194>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqMax_init'
 * '<S195>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqMin_init'
 * '<S196>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_InputTrqStaticSEM_init'
 * '<S197>' : 'TITR_ac/TITR_PwrOn/TITC_InitInputTorqLim/KeTITR_M_PumpTorq_init'
 */
#endif                                 /* RTW_HEADER_TITR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
