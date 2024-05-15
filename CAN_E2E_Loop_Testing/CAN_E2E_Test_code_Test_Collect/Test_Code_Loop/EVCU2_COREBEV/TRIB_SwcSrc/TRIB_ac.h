/*
 * File: TRIB_ac.h
 *
 * Code generated for Simulink model 'TRIB_ac'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:49:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TRIB_ac_h_
#define RTW_HEADER_TRIB_ac_h_
#include "Rte_Type.h"
#ifndef TRIB_ac_COMMON_INCLUDES_
#define TRIB_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TRIB.h"
#endif                                 /* TRIB_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TRIB_ac_T
{

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 InputRaw0;                 /* '<S198>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 Cnt;                       /* '<S198>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    float32 InputRaw0_g;               /* '<S156>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    float32 Cnt_l;                     /* '<S156>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    float32 InputRaw0_c;               /* '<S93>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    float32 Cnt_j;                     /* '<S93>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    float32 InputRaw0_p;               /* '<S30>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    float32 Cnt_b;                     /* '<S30>/AntiSpkFil' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    TeDFIB_e_FaultDebounceStatus Merge;/* '<S207>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    TeDFIB_e_FaultDebounceStatus Merge_p;/* '<S227>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    TeDFIB_e_FaultDebounceStatus Merge_g;/* '<S164>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    TeDFIB_e_FaultDebounceStatus Merge_f;/* '<S102>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    TeDFIB_e_FaultDebounceStatus Merge_c;/* '<S122>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    TeDFIB_e_FaultDebounceStatus Merge_k;/* '<S39>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    TeDFIB_e_FaultDebounceStatus Merge_e;/* '<S59>/Merge' */

#define B_TRIB_AC_T_VARIANT_EXISTS
#endif

#ifndef B_TRIB_AC_T_VARIANT_EXISTS

    char _rt_unused;

#endif

}
B_TRIB_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TRIB_ac_T
{

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    float32 VeTRIB_T_HCCTISInit_DSTATE;/* '<S197>/VeTRIB_T_HCCTISInit' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    float32 VeTRIB_U_BatClntSnsrInit_DSTATE;/* '<S155>/VeTRIB_U_BatClntSnsrInit' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    float32 VeTRIB_T_BTOSInit_DSTATE;  /* '<S92>/VeTRIB_T_BTOSInit' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    float32 VeTRIB_T_BTISInit_DSTATE;  /* '<S29>/VeTRIB_T_BTISInit' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

    uint16 NeTRIB_Cnt_HCCTISSTG_MFOP;
                                 /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF' */
    uint16 NeTRIB_Cnt_HCCTISSTB_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF1' */
    uint16 NeTRIB_Cnt_BatClntSnsSTG_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF2' */
    uint16 NeTRIB_Cnt_BTISSTG_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF3' */
    uint16 NeTRIB_Cnt_BTISSTB_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF4' */
    uint16 NeTRIB_Cnt_BTOSSTG_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF5' */
    uint16 NeTRIB_Cnt_BTOSSTB_MFOP;
                                /* '<Root>/DSM_NeCDMR_Cnt_CPIMInternal_MSOF6' */

#if Rte_SysCon_Variant_TRIB_BTIS_Presence || Rte_SysCon_Variant_TRIB_BTOS_Presence || Rte_SysCon_Variant_TRIB_BatClntSns_Presence || Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay_DSTATE_l;        /* '<S3>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay_DSTATE_ly;       /* '<S208>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay1_DSTATE;         /* '<S208>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay_DSTATE_m;        /* '<S228>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay1_DSTATE_p;       /* '<S228>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay_DSTATE_g;        /* '<S229>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    boolean UnitDelay_DSTATE_b;        /* '<S209>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    boolean UnitDelay_DSTATE_aw;       /* '<S165>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    boolean UnitDelay1_DSTATE_j;       /* '<S165>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    boolean UnitDelay_DSTATE_bo;       /* '<S166>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay_DSTATE_kx;       /* '<S103>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay1_DSTATE_a;       /* '<S103>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay_DSTATE_ai;       /* '<S123>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay1_DSTATE_i;       /* '<S123>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay_DSTATE_di;       /* '<S124>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    boolean UnitDelay_DSTATE_i2;       /* '<S104>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay_DSTATE_it;       /* '<S40>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay1_DSTATE_m;       /* '<S40>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay_DSTATE_kr;       /* '<S60>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay1_DSTATE_mh;      /* '<S60>/Unit Delay1' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay_DSTATE_m5;       /* '<S61>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    boolean UnitDelay_DSTATE_c;        /* '<S41>/Unit Delay' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    uint8 is_active_c2_TRIB_ac;        /* '<S198>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_HCCTIS_Presence

    uint8 is_c2_TRIB_ac;               /* '<S198>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    uint8 is_active_c1_TRIB_ac;        /* '<S156>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BatClntSns_Presence

    uint8 is_c1_TRIB_ac;               /* '<S156>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    uint8 is_active_c4_TRIB_ac;        /* '<S93>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTOS_Presence

    uint8 is_c4_TRIB_ac;               /* '<S93>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    uint8 is_active_c3_TRIB_ac;        /* '<S30>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRIB_BTIS_Presence

    uint8 is_c3_TRIB_ac;               /* '<S30>/AntiSpkFil' */

#define DW_TRIB_AC_T_VARIANT_EXISTS
#endif

}
DW_TRIB_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

extern VAR(B_TRIB_ac_T, TRIB_VAR_INIT) TRIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
#include "MemMap.h"

extern VAR(DW_TRIB_ac_T, TRIB_VAR_INIT) TRIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRIB
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
 * '<Root>' : 'TRIB_ac'
 * '<S1>'   : 'TRIB_ac/ADIB_PwrOff'
 * '<S2>'   : 'TRIB_ac/Init'
 * '<S3>'   : 'TRIB_ac/SigMngtAndCnvn'
 * '<S4>'   : 'TRIB_ac/Init/BTIS'
 * '<S5>'   : 'TRIB_ac/Init/BTOS'
 * '<S6>'   : 'TRIB_ac/Init/BatClntSns'
 * '<S7>'   : 'TRIB_ac/Init/HCCTIS'
 * '<S8>'   : 'TRIB_ac/Init/BTIS/BTIS'
 * '<S9>'   : 'TRIB_ac/Init/BTIS/BTIS/Enumerated_Constant1'
 * '<S10>'  : 'TRIB_ac/Init/BTIS/BTIS/Enumerated_Constant4'
 * '<S11>'  : 'TRIB_ac/Init/BTIS/BTIS/KeTRIB_T_BTISTempInit'
 * '<S12>'  : 'TRIB_ac/Init/BTOS/BTOS'
 * '<S13>'  : 'TRIB_ac/Init/BTOS/BTOS/Enumerated_Constant1'
 * '<S14>'  : 'TRIB_ac/Init/BTOS/BTOS/Enumerated_Constant4'
 * '<S15>'  : 'TRIB_ac/Init/BTOS/BTOS/KeTRIB_T_BTOSTempInit'
 * '<S16>'  : 'TRIB_ac/Init/BatClntSns/BatClntSns'
 * '<S17>'  : 'TRIB_ac/Init/BatClntSns/BatClntSns/Enumerated_Constant4'
 * '<S18>'  : 'TRIB_ac/Init/BatClntSns/BatClntSns/KeTRIB_U_BatClntLvlInit'
 * '<S19>'  : 'TRIB_ac/Init/HCCTIS/HCCTIS'
 * '<S20>'  : 'TRIB_ac/Init/HCCTIS/HCCTIS/Enumerated_Constant1'
 * '<S21>'  : 'TRIB_ac/Init/HCCTIS/HCCTIS/Enumerated_Constant4'
 * '<S22>'  : 'TRIB_ac/Init/HCCTIS/HCCTIS/KeTRIB_T_HCCTISTempInit'
 * '<S23>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS'
 * '<S24>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS'
 * '<S25>'  : 'TRIB_ac/SigMngtAndCnvn/BatClntSns'
 * '<S26>'  : 'TRIB_ac/SigMngtAndCnvn/HCCTIS'
 * '<S27>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS'
 * '<S28>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys'
 * '<S29>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys'
 * '<S30>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys'
 * '<S31>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys'
 * '<S32>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys'
 * '<S33>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/ResetCountsFOMs'
 * '<S34>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S35>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBFailLimBTIS'
 * '<S36>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBSmplLimBTIS'
 * '<S37>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/KeTRIB_U_STBCktHiFltLimBTIS'
 * '<S38>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/KeTRIB_b_STBDiagEnblBTIS'
 * '<S39>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1'
 * '<S40>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY'
 * '<S41>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/EdgeFalling1'
 * '<S42>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Enumerated Constant16'
 * '<S43>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Fail'
 * '<S44>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Init'
 * '<S45>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Pass'
 * '<S46>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP'
 * '<S47>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S48>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S49>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S50>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S51>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S52>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S53>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S54>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S55>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGFailLimBTIS'
 * '<S56>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGSmplLimBTIS'
 * '<S57>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/KeTRIB_U_STGCktLowFltLim_BTIS'
 * '<S58>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/KeTRIB_b_STGDiagEnbl_BTIS'
 * '<S59>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1'
 * '<S60>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S61>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S62>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S63>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S64>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S65>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S66>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S67>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S68>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S69>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S70>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S71>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S72>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S73>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S74>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/KtTRIB_T_BTISChartc'
 * '<S75>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Override'
 * '<S76>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Recovery'
 * '<S77>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S78>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Override/KeTRIB_T_BTISByp'
 * '<S79>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Override/KeTRIB_b_BTISBypEnbl'
 * '<S80>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Recovery/KeTRIB_T_BTISRcvry'
 * '<S81>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/ElecToPhyCnvnSys/Recovery/KeTRIB_b_BTISRcvryEnbl'
 * '<S82>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/AntiSpkFil'
 * '<S83>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/KeTRIB_Cnt_BTISSpikeThd'
 * '<S84>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/KeTRIB_U_BTISSpikeThd'
 * '<S85>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/KeTRIB_k_BTISFiltGx'
 * '<S86>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/LoPassFil'
 * '<S87>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S88>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S89>'  : 'TRIB_ac/SigMngtAndCnvn/BTIS/BTIS/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S90>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS'
 * '<S91>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys'
 * '<S92>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys'
 * '<S93>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys'
 * '<S94>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys'
 * '<S95>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys'
 * '<S96>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/ResetCountsFOMs'
 * '<S97>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S98>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBFailLimBTOS'
 * '<S99>'  : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBSmplLimBTOS'
 * '<S100>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/KeTRIB_U_STBCktHiFltLimBTOS'
 * '<S101>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/KeTRIB_b_STBDiagEnblBTOS'
 * '<S102>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1'
 * '<S103>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY'
 * '<S104>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/EdgeFalling1'
 * '<S105>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Enumerated Constant16'
 * '<S106>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Fail'
 * '<S107>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Init'
 * '<S108>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Pass'
 * '<S109>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP'
 * '<S110>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S111>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S112>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S113>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S114>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S115>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S116>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S117>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S118>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGFailLimBTOS'
 * '<S119>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGSmplLimBTOS'
 * '<S120>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/KeTRIB_U_STGCktLowFltLim_BTOS'
 * '<S121>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/KeTRIB_b_STGDiagEnbl_BTOS'
 * '<S122>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1'
 * '<S123>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S124>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S125>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S126>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S127>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S128>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S129>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S130>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S131>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S132>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S133>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S134>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S135>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S136>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S137>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/KtTRIB_T_BTOSChartc'
 * '<S138>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Override'
 * '<S139>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Recovery'
 * '<S140>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S141>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Override/KeTRIB_T_BTOSByp'
 * '<S142>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Override/KeTRIB_b_BTOSBypEnbl'
 * '<S143>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Recovery/KeTRIB_T_BTOSRcvry'
 * '<S144>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/ElecToPhyCnvnSys/Recovery/KeTRIB_b_BTOSRcvryEnbl'
 * '<S145>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/AntiSpkFil'
 * '<S146>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/KeTRIB_Cnt_BTOSSpikeThd'
 * '<S147>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/KeTRIB_U_BTOSSpikeThd'
 * '<S148>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/KeTRIB_k_BTOSFiltGx'
 * '<S149>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/LoPassFil'
 * '<S150>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S151>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S152>' : 'TRIB_ac/SigMngtAndCnvn/BTOS/BTOS/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S153>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns'
 * '<S154>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys'
 * '<S155>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys'
 * '<S156>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys'
 * '<S157>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys'
 * '<S158>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/ResetCountsFOMs'
 * '<S159>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S160>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGFailLimBatClntSns'
 * '<S161>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGSmplLimBatClntSns'
 * '<S162>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/KeTRIB_U_STGCktLowFltLimBatClntSns'
 * '<S163>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/KeTRIB_b_STGDiagEnblBatClntSns'
 * '<S164>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1'
 * '<S165>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S166>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S167>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S168>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S169>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S170>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S171>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S172>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S173>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S174>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S175>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S176>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S177>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S178>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S179>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/KtTRIB_U_BatClntSnsrChartc'
 * '<S180>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Override'
 * '<S181>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Recovery1'
 * '<S182>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S183>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Override/KeTRIB_U_BatClntSnsByp'
 * '<S184>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Override/KeTRIB_b_BatClntSnsBypEnbl'
 * '<S185>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Recovery1/KeTRIB_U_BatClntSnsRcvry'
 * '<S186>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/ElecToPhyCnvnSys/Recovery1/KeTRIB_b_BatClntSnsRcvryEnbl'
 * '<S187>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/AntiSpkFil'
 * '<S188>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/KeTRIB_Cnt_BatClntSnsSpikeThd'
 * '<S189>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/KeTRIB_U_BatClntSnsSpikeThd'
 * '<S190>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/KeTRIB_k_BatClntSnsFiltGx'
 * '<S191>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/LoPassFil'
 * '<S192>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S193>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S194>' : 'TRIB_ac/SigMngtAndCnvn/BatClntSns/BatClntSns/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 * '<S195>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS'
 * '<S196>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys'
 * '<S197>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys'
 * '<S198>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys'
 * '<S199>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys'
 * '<S200>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys'
 * '<S201>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/ResetCountsFOMs'
 * '<S202>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S203>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBFailLimHCCTIS'
 * '<S204>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/KeTRIB_Cnt_STBSmplLimHCCTIS'
 * '<S205>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/KeTRIB_U_STBCktHiFltLimHCCTIS'
 * '<S206>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/KeTRIB_b_STBDiagEnblHCCTIS'
 * '<S207>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1'
 * '<S208>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY'
 * '<S209>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/EdgeFalling1'
 * '<S210>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Enumerated Constant16'
 * '<S211>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Fail'
 * '<S212>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Init'
 * '<S213>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Pass'
 * '<S214>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP'
 * '<S215>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S216>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S217>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S218>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S219>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S220>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S221>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircHiFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S222>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr1'
 * '<S223>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGFailLimHCCTIS'
 * '<S224>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/KeTRIB_Cnt_STGSmplLimHCCTIS'
 * '<S225>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/KeTRIB_U_STGCktLowFltLim_HCCTIS'
 * '<S226>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/KeTRIB_b_STGDiagEnbl_HCCTIS'
 * '<S227>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1'
 * '<S228>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY'
 * '<S229>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/EdgeFalling1'
 * '<S230>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Enumerated Constant16'
 * '<S231>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Fail'
 * '<S232>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Init'
 * '<S233>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Pass'
 * '<S234>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP'
 * '<S235>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled '
 * '<S236>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/BaseXofY/Counter Reset  Enabled 1'
 * '<S237>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Fail/Enumerated Constant16'
 * '<S238>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Init/Enumerated Constant16'
 * '<S239>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/Pass/Enumerated Constant16'
 * '<S240>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/Max Fails on Pass FOM'
 * '<S241>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/DiagSys/CircLoFltSys/XofY_v1/UpdateMFOP/ResetLogic'
 * '<S242>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/KtTRIB_T_HCCTISChartc'
 * '<S243>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Override'
 * '<S244>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Recovery'
 * '<S245>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/SWITCH_DOWN'
 * '<S246>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Override/KeTRIB_T_HCCTISByp'
 * '<S247>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Override/KeTRIB_b_HCCTISBypEnbl'
 * '<S248>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Recovery/KeTRIB_T_HCCTISRcvry'
 * '<S249>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/ElecToPhyCnvnSys/Recovery/KeTRIB_b_HCCTISRcvryEnbl'
 * '<S250>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/AntiSpkFil'
 * '<S251>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/KeTRIB_Cnt_HCCTISSpikeThd'
 * '<S252>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/KeTRIB_U_HCCTISSpikeThd'
 * '<S253>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/KeTRIB_k_HCCTISFiltGx'
 * '<S254>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/LoPassFil'
 * '<S255>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/LoPassFil/Inputs_selection'
 * '<S256>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/LoPassFil/Low_Pass_Filter_Fcn'
 * '<S257>' : 'TRIB_ac/SigMngtAndCnvn/HCCTIS/HCCTIS/SigAcqnAndFilSys/LoPassFil/Outputs_assignment'
 */
#endif                                 /* RTW_HEADER_TRIB_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
