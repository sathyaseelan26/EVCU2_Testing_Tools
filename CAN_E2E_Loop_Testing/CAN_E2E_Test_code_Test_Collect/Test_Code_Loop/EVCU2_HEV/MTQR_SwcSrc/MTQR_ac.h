/*
 * File: MTQR_ac.h
 *
 * Code generated for Simulink model 'MTQR_ac'.
 *
 * Model version                  : 9.240
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:31:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MTQR_ac_h_
#define RTW_HEADER_MTQR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef MTQR_ac_COMMON_INCLUDES_
#define MTQR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_MTQR.h"
#endif                                 /* MTQR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals for system '<S139>/X_Data_and_Fractions1' */
typedef struct
{
    float32 UpperIndex;                /* '<S139>/X_Data_and_Fractions1' */
    float32 LowerIndex;                /* '<S139>/X_Data_and_Fractions1' */
    float32 fra;                       /* '<S139>/X_Data_and_Fractions1' */
}
B_X_Data_and_Fractions1_MTQR_ac_T;

/* Block signals (default storage) */
typedef struct tag_B_MTQR_ac_T
{
    float32 OutportBufferForVaMTQR_n_MtrBCpbltyspd_O[16];/* '<S295>/Const3' */
    float32 OutportBufferForVaMTQR_r_MtrA_FEADCoeff_[3];/* '<S295>/Const4' */
    float32 OutportBufferForVeMTQR_M_MtrA_TorqAchiev;/* '<S295>/Const5' */
    float32 OutportBufferForVeMTQR_M_MtrA_TorqAchi_f;/* '<S295>/Const6' */
    float32 OutportBufferForVeMTQR_M_MtrA_MaxTorq_ST;/* '<S295>/Const7' */
    float32 OutportBufferForVeMTQR_M_MtrA_MaxTorq_HT;/* '<S295>/Const8' */
    float32 OutportBufferForVeMTQR_M_MtrB_MaxTorq_ST;/* '<S295>/Const9' */
    float32 OutportBufferForVeMTQR_M_MtrC_MaxTorq_ST;/* '<S295>/Const10' */
    float32 OutportBufferForVeMTQR_M_MtrA_MinTorq_ST;/* '<S295>/Const11' */
    float32 OutportBufferForVeMTQR_M_MtrA_MinTorq_HT;/* '<S295>/Const12' */
    float32 OutportBufferForVeMTQR_M_MtrB_MinTorq_ST;/* '<S295>/Const13' */
    float32 OutportBufferForVeMTQR_M_MtrC_MinTorq_ST;/* '<S295>/Const14' */
    float32 OutportBufferForVaMTQR_M_MtrBMaxCpblty_S[16];/* '<S295>/Const15' */
    float32 OutportBufferForVaMTQR_M_MtrAMaxCpblty_S[16];/* '<S295>/Const16' */
    float32 OutportBufferForVaMTQR_M_MtrAMinCpblty_S[16];/* '<S295>/Const17' */
    float32 OutportBufferForVaMTQR_M_MtrBMinCpblty_S[16];/* '<S295>/Const18' */
    float32 OutportBufferForVaMTQR_M_MtrCMaxCpblty_S[16];/* '<S295>/Const19' */
    float32 OutportBufferForVaMTQR_M_MtrCMinCpblty_S[16];/* '<S295>/Const20' */
    float32 OutportBufferForVaMTQR_M_MtrBMinCpblty_L[16];/* '<S295>/Const21' */
    float32 OutportBufferForVaMTQR_M_MtrCMaxCpblty_L[16];/* '<S295>/Const22' */
    float32 OutportBufferForVaMTQR_M_MtrCMinCpblty_L[16];/* '<S295>/Const23' */
    float32 OutportBufferForVeMTQR_M_MtrA_MaxTorq_LT;/* '<S295>/Const24' */
    float32 OutportBufferForVeMTQR_M_MtrA_MaxTorq__a;/* '<S295>/Const25' */
    float32 OutportBufferForVeMTQR_M_MtrB_MaxTorq_LT;/* '<S295>/Const26' */
    float32 OutportBufferForVeMTQR_M_MtrC_MaxTorq_LT;/* '<S295>/Const27' */
    float32 OutportBufferForVeMTQR_M_MtrA_MinTorq_LT;/* '<S295>/Const28' */
    float32 OutportBufferForVeMTQR_M_MtrA_MinTorq__m;/* '<S295>/Const29' */
    float32 OutportBufferForVeMTQR_M_MtrB_MinTorq_LT;/* '<S295>/Const30' */
    float32 OutportBufferForVeMTQR_M_MtrC_MinTorq_LT;/* '<S295>/Const31' */
    float32 OutportBufferForVaMTQR_M_MtrBMaxCpblty_L[16];/* '<S295>/Const32' */
    float32 OutportBufferForVaMTQR_M_MtrAMaxCpblty_L[16];/* '<S295>/Const33' */
    float32 OutportBufferForVaMTQR_M_MtrAMinCpblty_L[16];/* '<S295>/Const34' */
    float32 OutportBufferForVaMTQR_n_MtrACpbltyspd_O[16];/* '<S295>/Const35' */
    float32 OutportBufferForVaMTQR_n_MtrCCpbltyspd_O[16];/* '<S295>/Const36' */
    float32 OutportBufferForVeMTQR_M_TaMin_Out_Init;/* '<S295>/Const37' */
    float32 OutportBufferForVeMTQR_M_TaMax_Out_Init;/* '<S295>/Const38' */
    float32 OutportBufferForVeMTQR_M_TbMin_Out_Init;/* '<S295>/Const39' */
    float32 OutportBufferForVeMTQR_M_TbMax_Out_Init;/* '<S295>/Const40' */
    float32 OutportBufferForVeMTQR_M_TcMin_Out_Init;/* '<S295>/Const41' */
    float32 OutportBufferForVeMTQR_M_TcMax_Out_Init;/* '<S295>/Const42' */
    float32 VariantMerge_For_Variant_Source_VariantS[3];
    boolean OutportBufferForVeMTQR_b_AlternatorMd_Mt;/* '<S295>/Const1' */
    boolean OutportBufferForVeMTQR_b_AlternatorMd__k;/* '<S295>/Const2' */

#if Rte_SysCon_Variant_HSCL_FEAD1

    B_X_Data_and_Fractions1_MTQR_ac_T sf_X_Data_and_Fractions;/* '<S288>/X_Data_and_Fractions' */

#define B_MTQR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

    B_X_Data_and_Fractions1_MTQR_ac_T sf_X_Data_and_Fractions1;/* '<S139>/X_Data_and_Fractions1' */

#define B_MTQR_AC_T_VARIANT_EXISTS
#endif

}
B_MTQR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_MTQR_ac_T
{
    float32 UnitDelay1_DSTATE[2];      /* '<S14>/UnitDelay1' */
    float32 UnitDelay_DSTATE;          /* '<S218>/UnitDelay' */
    float32 UnitDelay_DSTATE_e[2];     /* '<S12>/UnitDelay' */
    float32 UnitDelay_DSTATE_f;        /* '<S196>/UnitDelay' */
    float32 UnitDelay4_DSTATE[2];      /* '<S19>/UnitDelay4' */
    float32 UnitDelay_DSTATE_d;        /* '<S254>/UnitDelay' */
    float32 UnitDelay1_DSTATE_m[2];    /* '<S17>/UnitDelay1' */
    float32 UnitDelay_DSTATE_k[2];     /* '<S17>/UnitDelay' */
    float32 UnitDelay_DSTATE_g;        /* '<S241>/UnitDelay' */
    float32 UnitDelay4_DSTATE_a[2];    /* '<S23>/UnitDelay4' */
    float32 UnitDelay_DSTATE_j;        /* '<S270>/UnitDelay' */
    float32 UnitDelay_DSTATE_i[2];     /* '<S21>/UnitDelay' */
    float32 UnitDelay_DSTATE_m;        /* '<S262>/UnitDelay' */
    float32 UnitDelay_DSTATE_i2[2];    /* '<S264>/UnitDelay' */
    float32 UnitDelay_DSTATE_c[2];     /* '<S256>/UnitDelay' */
    float32 UnitDelay_DSTATE_jm[2];    /* '<S248>/UnitDelay' */
    float32 UnitDelay_DSTATE_cg[2];    /* '<S228>/UnitDelay' */
    float32 UnitDelay_DSTATE_my;       /* '<S227>/UnitDelay' */
    float32 UnitDelay_DSTATE_h[2];     /* '<S206>/UnitDelay' */
    float32 UnitDelay_DSTATE_bk[2];    /* '<S184>/UnitDelay' */
    float32 UnitDelay_DSTATE_iw;       /* '<S115>/UnitDelay' */
    float32 UnitDelay_DSTATE_a;        /* '<S114>/UnitDelay' */
    boolean UnitDelay_DSTATE_l;        /* '<S4>/UnitDelay' */
    boolean UnitDelay_DSTATE_co[2];    /* '<S267>/UnitDelay' */
    boolean UnitDelay_DSTATE_ij[2];    /* '<S259>/UnitDelay' */
    boolean UnitDelay_DSTATE_hi[2];    /* '<S251>/UnitDelay' */
    boolean UnitDelay_DSTATE_p[2];     /* '<S237>/UnitDelay' */
    boolean UnitDelay_DSTATE_ei[2];    /* '<S212>/UnitDelay' */
    boolean UnitDelay_DSTATE_eq[2];    /* '<S190>/UnitDelay' */
    boolean UnitDelay_DSTATE_ha;       /* '<S159>/UnitDelay' */
    boolean UnitDelay_DSTATE_ff;       /* '<S66>/UnitDelay' */
    boolean UnitDelay_DSTATE_a4;       /* '<S65>/UnitDelay' */
    boolean UnitDelay_DSTATE_f5;       /* '<S64>/UnitDelay' */
    boolean UnitDelay_DSTATE_mc;       /* '<S63>/UnitDelay' */
    boolean UnitDelay_DSTATE_lk;       /* '<S62>/UnitDelay' */
    boolean UnitDelay_DSTATE_jy;       /* '<S61>/UnitDelay' */
    boolean UnitDelay_DSTATE_dl;       /* '<S60>/UnitDelay' */
    boolean UnitDelay_DSTATE_jf;       /* '<S59>/UnitDelay' */
}
DW_MTQR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

extern VAR(B_MTQR_ac_T, MTQR_VAR_INIT) MTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

extern VAR(DW_MTQR_ac_T, MTQR_VAR_INIT) MTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
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
 * '<Root>' : 'MTQR_ac'
 * '<S1>'   : 'MTQR_ac/MTQR_FastTEF'
 * '<S2>'   : 'MTQR_ac/MTQR_MedTED'
 * '<S3>'   : 'MTQR_ac/MTQR_PwrOn'
 * '<S4>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25'
 * '<S5>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset'
 * '<S6>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl'
 * '<S7>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate'
 * '<S8>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb'
 * '<S9>'   : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims'
 * '<S10>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M'
 * '<S11>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn'
 * '<S12>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD'
 * '<S13>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn'
 * '<S14>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD'
 * '<S15>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxCapability'
 * '<S16>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn'
 * '<S17>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD'
 * '<S18>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn'
 * '<S19>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD'
 * '<S20>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMaxTrqArbtrtn'
 * '<S21>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD'
 * '<S22>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMinTrqArbtrtn'
 * '<S23>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD'
 * '<S24>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd'
 * '<S25>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock'
 * '<S26>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock1'
 * '<S27>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock10'
 * '<S28>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock11'
 * '<S29>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock12'
 * '<S30>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock13'
 * '<S31>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock14'
 * '<S32>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock15'
 * '<S33>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock16'
 * '<S34>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock17'
 * '<S35>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock18'
 * '<S36>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock19'
 * '<S37>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock2'
 * '<S38>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock20'
 * '<S39>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock21'
 * '<S40>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock22'
 * '<S41>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock23'
 * '<S42>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock24'
 * '<S43>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock25'
 * '<S44>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock26'
 * '<S45>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock3'
 * '<S46>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock37'
 * '<S47>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock38'
 * '<S48>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock4'
 * '<S49>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock5'
 * '<S50>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock6'
 * '<S51>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock7'
 * '<S52>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock8'
 * '<S53>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/SetBlock9'
 * '<S54>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/ConstantValue1'
 * '<S55>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/ConstantValue2'
 * '<S56>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/ConstantValue3'
 * '<S57>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/ConstantValue4'
 * '<S58>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/ConstantValue7'
 * '<S59>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeFalling1'
 * '<S60>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeFalling2'
 * '<S61>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeFalling3'
 * '<S62>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeFalling4'
 * '<S63>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeRising1'
 * '<S64>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeRising2'
 * '<S65>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeRising3'
 * '<S66>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/EdgeRising4'
 * '<S67>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/HeMTQR_b_AllowConventional'
 * '<S68>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/CalcReset/HeMTQR_b_MtrA_MinLimits'
 * '<S69>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseBothMotors'
 * '<S70>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseMotorsSelectively'
 * '<S71>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/Enumerated_Constant'
 * '<S72>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/HeMTQR_b_AltMd_CollpsBothMtrs'
 * '<S73>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/KeMTQR_b_InvtrtrASwitchCmd_Ovrrd'
 * '<S74>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/KeMTQR_b_InvtrtrBSwitchCmd_Ovrrd'
 * '<S75>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/KeMTQR_e_InvtrtrASwitchCmd_OvrrdVal'
 * '<S76>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/KeMTQR_e_InvtrtrBSwitchCmd_OvrrdVal'
 * '<S77>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseBothMotors/HeMTQR_b_AltMd_CollapseMtrA'
 * '<S78>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseBothMotors/HeMTQR_b_AltMd_CollapseMtrB'
 * '<S79>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseBothMotors/MReportModelInfo'
 * '<S80>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseMotorsSelectively/HeMTQR_b_AltMd_CollapseMtrAOnly'
 * '<S81>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseMotorsSelectively/HeMTQR_b_AltMd_CollapseMtrBOnly'
 * '<S82>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Calc_MtrABVoltCtrl/CollapseMotorsSelectively/MReportModelInfo'
 * '<S83>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA'
 * '<S84>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB'
 * '<S85>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC'
 * '<S86>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/KeMTQR_K_Derate_LD'
 * '<S87>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/KeMTQR_K_Derate_LD_TempStop'
 * '<S88>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/KeMTQR_K_Derate_LU'
 * '<S89>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/KeMTQR_K_Derate_LU_TempStop'
 * '<S90>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter'
 * '<S91>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter1'
 * '<S92>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter2'
 * '<S93>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter3'
 * '<S94>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter4'
 * '<S95>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/HeMTQR_K_MtrAMaxCpblty'
 * '<S96>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/KtMTQR_K_MtrAInvrtTmp_Derate'
 * '<S97>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/KtMTQR_K_MtrATmp_Derate'
 * '<S98>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/Limiter'
 * '<S99>'  : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter/Limiter'
 * '<S100>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter1/Limiter'
 * '<S101>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter2/Limiter'
 * '<S102>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter3/Limiter'
 * '<S103>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrA/GradientLimiter4/Limiter'
 * '<S104>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter'
 * '<S105>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter1'
 * '<S106>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter2'
 * '<S107>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/KtMTQR_K_MtrBInvrtTmp_Derate'
 * '<S108>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/KtMTQR_K_MtrBTmp_Derate'
 * '<S109>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/Limiter'
 * '<S110>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter/Limiter'
 * '<S111>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter1/Limiter'
 * '<S112>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrB/GradientLimiter2/Limiter'
 * '<S113>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter'
 * '<S114>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter1'
 * '<S115>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter2'
 * '<S116>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/KtMTQR_K_MtrCInvrtTmp_Derate'
 * '<S117>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/KtMTQR_K_MtrCTmp_Derate'
 * '<S118>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/Limiter'
 * '<S119>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter/Limiter'
 * '<S120>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter1/Limiter'
 * '<S121>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/Derate/DerateMtrC/GradientLimiter2/Limiter'
 * '<S122>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/Adjust_Rotor_Losses'
 * '<S123>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj'
 * '<S124>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/KeHSCR_b_FEADadj'
 * '<S125>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/NoFEADadj'
 * '<S126>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/SetBlock'
 * '<S127>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/SetBlock1'
 * '<S128>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/Adjust_Rotor_Losses/ProtectedDivision'
 * '<S129>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/Adjust_Rotor_Losses/SafetyCheck'
 * '<S130>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses'
 * '<S131>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/KeTSXR_r_P1f'
 * '<S132>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff'
 * '<S133>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/ProtectedDivision'
 * '<S134>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses/KeTSXR_r_P1f'
 * '<S135>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses/ProtectedDivision'
 * '<S136>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses/ProtectedDivision1'
 * '<S137>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses/SafetyCheck'
 * '<S138>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/Adjust_Rotor_Losses/SafetyCheck1'
 * '<S139>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate'
 * '<S140>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/KaHSCR_n_FEADLoss_CoeffA'
 * '<S141>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/KaHSCR_n_FEADLoss_CoeffB'
 * '<S142>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/KaHSCR_n_FEADLoss_CoeffC'
 * '<S143>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/CreateArrays'
 * '<S144>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/KaHSCR_n_Eng_Speed'
 * '<S145>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/X_Data_and_Fractions1'
 * '<S146>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/DocBlock'
 * '<S147>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_MtrTrqMaxWindow'
 * '<S148>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_MtrTrqMinWindow'
 * '<S149>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TaMaxReserve'
 * '<S150>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TaMinReserve'
 * '<S151>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TbMaxReserve'
 * '<S152>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TbMinReserve'
 * '<S153>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TcMaxReserve'
 * '<S154>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/HTDC_GenMtrLims/KeMTQR_M_TcMinReserve'
 * '<S155>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem'
 * '<S156>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem1'
 * '<S157>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem2'
 * '<S158>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem3'
 * '<S159>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/SignalLatchOnWithReset1'
 * '<S160>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem/KeMTQR_M_MtrMaxTrq_FailMode_LD'
 * '<S161>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem/KeMTQR_M_MtrMaxTrq_FailMode_LU'
 * '<S162>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem/KeMTQR_M_MtrMinTrq_FailMode_LD'
 * '<S163>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem/KeMTQR_M_MtrMinTrq_FailMode_LU'
 * '<S164>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem1/KeMTQR_M_MtrMaxTrq_LD'
 * '<S165>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem1/KeMTQR_M_MtrMaxTrq_LU'
 * '<S166>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem1/KeMTQR_M_MtrMinTrq_LD'
 * '<S167>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem1/KeMTQR_M_MtrMinTrq_LU'
 * '<S168>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem2/KeMTQR_M_MtrMaxTrq_LD'
 * '<S169>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem2/KeMTQR_M_MtrMaxTrq_LU'
 * '<S170>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem2/KeMTQR_M_MtrTrq_eBoost_LD'
 * '<S171>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem2/KeMTQR_M_MtrTrq_eBoost_LU'
 * '<S172>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem3/KeMTQR_M_MtrMaxTrq_TempStop_LD'
 * '<S173>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem3/KeMTQR_M_MtrMaxTrq_TempStop_LU'
 * '<S174>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem3/KeMTQR_M_MtrMinTrq_TempStop_LD'
 * '<S175>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/M/IfActionSubsystem3/KeMTQR_M_MtrMinTrq_TempStop_LU'
 * '<S176>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/GradientLimiter1'
 * '<S177>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/KeMTQR_M_Conv_MtrA_MaxTorq'
 * '<S178>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/KeMTQR_M_ESSNotActive_MtrA_MaxTorq'
 * '<S179>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/KeMTQR_M_MtrMinTrq_LD'
 * '<S180>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/KeMTQR_M_MtrMinTrq_LU'
 * '<S181>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/KeMTQR_M_VoltCtrl_MtrA_MaxTorq'
 * '<S182>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMaxTrqArbtrtn/GradientLimiter1/Limiter'
 * '<S183>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Adjust_Rotor_Losses'
 * '<S184>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/GradientLimiter4'
 * '<S185>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Gradient_Limiter_With_Reset'
 * '<S186>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/HeMTQR_M_12VBSG_MtrA_MaxTrq'
 * '<S187>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/HeMTQR_b_MtrA_12VBSGTorqPathEnbl'
 * '<S188>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/KeHSCR_b_FEADadj'
 * '<S189>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/KeMTQR_M_ThrdMtrAMax'
 * '<S190>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/SignalLatchOnWithReset1'
 * '<S191>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Adjust_Rotor_Losses/KeTSXR_r_P1f'
 * '<S192>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Adjust_Rotor_Losses/ProtectedDivision'
 * '<S193>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Adjust_Rotor_Losses/SafetyCheck'
 * '<S194>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/GradientLimiter4/Limiter'
 * '<S195>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Gradient_Limiter_With_Reset/Limiter'
 * '<S196>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMax_LU_LD/Gradient_Limiter_With_Reset/UnitDelayResetEnabled'
 * '<S197>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/GradientLimiter1'
 * '<S198>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_Conv_MtrA_MinTorq'
 * '<S199>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_ESSNotActive_MtrA_MinTorq'
 * '<S200>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_LimNotActive_MtrA_MinTorq'
 * '<S201>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_MtrMaxTrq_LD'
 * '<S202>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_MtrMaxTrq_LU'
 * '<S203>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/KeMTQR_M_VoltCtrl_MtrA_MinTorq'
 * '<S204>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMinTrqArbtrtn/GradientLimiter1/Limiter'
 * '<S205>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Adjust_Rotor_Losses'
 * '<S206>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/GradientLimiter5'
 * '<S207>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Gradient_Limiter_With_Reset'
 * '<S208>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/HeMTQR_M_12VBSG_MtrA_MinTrq'
 * '<S209>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/HeMTQR_b_MtrA_12VBSGTorqPathEnbl'
 * '<S210>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/KeHSCR_b_FEADadj'
 * '<S211>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/KeMTQR_M_ThrdMtrAMin'
 * '<S212>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/SignalLatchOnWithReset2'
 * '<S213>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Adjust_Rotor_Losses/KeTSXR_r_P1f'
 * '<S214>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Adjust_Rotor_Losses/ProtectedDivision'
 * '<S215>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Adjust_Rotor_Losses/SafetyCheck'
 * '<S216>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/GradientLimiter5/Limiter'
 * '<S217>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Gradient_Limiter_With_Reset/Limiter'
 * '<S218>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrAMin_LU_LD/Gradient_Limiter_With_Reset/UnitDelayResetEnabled'
 * '<S219>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxCapability/KeMTQR_P_xEboostMtrBPwrLimit'
 * '<S220>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxCapability/ProtectedDivision'
 * '<S221>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/GradientLimiter1'
 * '<S222>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/KeMTQR_M_Conv_MtrB_MaxTorq'
 * '<S223>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/KeMTQR_M_MtrMinTrq_LD'
 * '<S224>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/KeMTQR_M_MtrMinTrq_LU'
 * '<S225>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/KeMTQR_M_VoltCtrl_MtrB_MaxTorq'
 * '<S226>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMaxTrqArbtrtn/GradientLimiter1/Limiter'
 * '<S227>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/GradientLimiter1'
 * '<S228>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/GradientLimiter6'
 * '<S229>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/Gradient_Limiter_With_Reset1'
 * '<S230>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KeMTQR_M_MtrBMax_HighTmp_LD'
 * '<S231>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KeMTQR_M_MtrBMax_HighTmp_LU'
 * '<S232>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KeMTQR_M_ThrdMtrBMax'
 * '<S233>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KeMTQR_P_xEboostMtrBPwrLimit'
 * '<S234>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KeMTQR_T_InvBTemp_Rcvr'
 * '<S235>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/KtMTQR_M_MtrBMax_InvTmp'
 * '<S236>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/ProtectedDivision'
 * '<S237>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/SignalLatchOnWithReset3'
 * '<S238>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/GradientLimiter1/Limiter'
 * '<S239>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/GradientLimiter6/Limiter'
 * '<S240>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/Gradient_Limiter_With_Reset1/Limiter'
 * '<S241>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMax_LU_LD/Gradient_Limiter_With_Reset1/UnitDelayResetEnabled'
 * '<S242>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/GradientLimiter1'
 * '<S243>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/KeMTQR_M_Conv_MtrB_MinTorq'
 * '<S244>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/KeMTQR_M_MtrMaxTrq_LD'
 * '<S245>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/KeMTQR_M_MtrMaxTrq_LU'
 * '<S246>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/KeMTQR_M_VoltCtrl_MtrB_MinTorq'
 * '<S247>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMinTrqArbtrtn/GradientLimiter1/Limiter'
 * '<S248>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/GradientLimiter7'
 * '<S249>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/Gradient_Limiter_With_Reset1'
 * '<S250>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/KeMTQR_M_ThrdMtrBMin'
 * '<S251>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/SignalLatchOnWithReset4'
 * '<S252>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/GradientLimiter7/Limiter'
 * '<S253>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/Gradient_Limiter_With_Reset1/Limiter'
 * '<S254>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrBMin_LU_LD/Gradient_Limiter_With_Reset1/UnitDelayResetEnabled'
 * '<S255>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMaxTrqArbtrtn/SetBlock'
 * '<S256>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/GradientLimiter6'
 * '<S257>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/Gradient_Limiter_With_Reset1'
 * '<S258>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/KeMTQR_M_ThrdMtrCMax'
 * '<S259>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/SignalLatchOnWithReset3'
 * '<S260>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/GradientLimiter6/Limiter'
 * '<S261>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/Gradient_Limiter_With_Reset1/Limiter'
 * '<S262>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMax_LU_LD/Gradient_Limiter_With_Reset1/UnitDelayResetEnabled'
 * '<S263>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMinTrqArbtrtn/SetBlock'
 * '<S264>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/GradientLimiter7'
 * '<S265>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/Gradient_Limiter_With_Reset1'
 * '<S266>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/KeMTQR_M_ThrdMtrCMin'
 * '<S267>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/SignalLatchOnWithReset4'
 * '<S268>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/GradientLimiter7/Limiter'
 * '<S269>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/Gradient_Limiter_With_Reset1/Limiter'
 * '<S270>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrCMin_LU_LD/Gradient_Limiter_With_Reset1/UnitDelayResetEnabled'
 * '<S271>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/DocBlock'
 * '<S272>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/EnumeratedValue1'
 * '<S273>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/EnumeratedValue2'
 * '<S274>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_Astrt_MtrAEnbl'
 * '<S275>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_Astrt_MtrBEnbl'
 * '<S276>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_ESCFrnt_MtrAEnbl'
 * '<S277>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_ESCFrnt_MtrBEnbl'
 * '<S278>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_ESCRear_MtrAEnbl'
 * '<S279>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_ESCRear_MtrCEnbl'
 * '<S280>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_NiCL_MtrAEnbl'
 * '<S281>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_NiCL_MtrBEnbl'
 * '<S282>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_NxCL_MtrAEnbl'
 * '<S283>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_NxCL_MtrBEnbl'
 * '<S284>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/KeMTQR_b_NxCL_MtrCEnbl'
 * '<S285>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/SetBlock1'
 * '<S286>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/SetBlock14'
 * '<S287>' : 'MTQR_ac/MTQR_FastTEF/MTQC_6p25/MtrTrqOvrrd/SetBlock2'
 * '<S288>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain'
 * '<S289>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/KaHSCR_n_Eng_Speed'
 * '<S290>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/KaHSCR_n_FEADLoss_CoeffA'
 * '<S291>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/KaHSCR_n_FEADLoss_CoeffB'
 * '<S292>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/KaHSCR_n_FEADLoss_CoeffC'
 * '<S293>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/KeHSCR_b_FEADadj'
 * '<S294>' : 'MTQR_ac/MTQR_MedTED/Eff_Domain/X_Data_and_Fractions'
 * '<S295>' : 'MTQR_ac/MTQR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_MTQR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
