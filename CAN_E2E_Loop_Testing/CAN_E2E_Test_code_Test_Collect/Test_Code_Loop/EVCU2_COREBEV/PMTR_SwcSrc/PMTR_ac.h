/*
 * File: PMTR_ac.h
 *
 * Code generated for Simulink model 'PMTR_ac'.
 *
 * Model version                  : 9.66
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:39:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PMTR_ac_h_
#define RTW_HEADER_PMTR_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef PMTR_ac_COMMON_INCLUDES_
#define PMTR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PMTR.h"
#endif                                 /* PMTR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_PMTR_ac_T
{
    boolean OutportBufferForVePMTR_b_ThrmlSystRly_En;/* '<S200>/Const3' */
    boolean OutportBufferForVePMTR_b_REM_BattHeatAct;/* '<S200>/Const4' */
    boolean OutportBufferForVePMTR_b_REM_CabHeatActi;/* '<S200>/Const5' */
    boolean OutportBufferForVePMTR_b_REM_BattCoolAct;/* '<S200>/Const6' */
    boolean OutportBufferForVePMTR_b_REM_CabCoolActi;/* '<S200>/Const7' */
    boolean OutportBufferForVePMTR_b_ThrmlSystEnbl_R;/* '<S200>/Const9' */
    boolean OutportBufferForVePMTR_b_ThrmlShtdwnReqH;/* '<S200>/Const10' */
    boolean OutportBufferForOut1;      /* '<S180>/Constant Value1' */
    boolean OutportBufferForOut1_b;    /* '<S25>/Constant Value1' */
    TePMTR_e_ThrmlDevisEnbl OutportBufferForVePMTR_e_ThrmlDevEnbl_Ou;/* '<S200>/Const2' */
    TePMTR_e_ThermlEnblReason OutportBufferForVePMTR_e_ThrmlEnblRsn_Ou;/* '<S200>/Const1' */
    TePMTR_e_ThermlEnblReason VePMTR_e_ThermalEnableReason_B4Dbnc;/* '<S3>/Merge1' */
    TePMTR_e_ThermlEnblReason In1;     /* '<S25>/In1' */
    TePMTR_e_ThermalRelayStatus OutportBufferForVePMTR_e_ThrmlSystEnbl_R;/* '<S200>/Const8' */
}
B_PMTR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PMTR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S36>/Unit Delay' */
    uint16 UnitDelay_DSTATE_a;         /* '<S169>/Unit Delay' */
    uint16 UnitDelay_DSTATE_i;         /* '<S163>/Unit Delay' */
    uint16 UnitDelay_DSTATE_h;         /* '<S157>/Unit Delay' */
    uint16 UnitDelay_DSTATE_l;         /* '<S151>/Unit Delay' */
    uint16 UnitDelay_DSTATE_ie;        /* '<S176>/Unit Delay' */
    uint16 UnitDelay_DSTATE_p;         /* '<S21>/Unit Delay' */
    boolean UnitDelay_DSTATE_is;       /* '<S156>/Unit Delay' */
    boolean UnitDelay_DSTATE_e;        /* '<S168>/Unit Delay' */
    boolean UnitDelay_DSTATE_lu;       /* '<S150>/Unit Delay' */
    boolean UnitDelay_DSTATE_ay;       /* '<S162>/Unit Delay' */
    boolean UnitDelay_DSTATE_ei;       /* '<S170>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S164>/Unit Delay' */
    boolean UnitDelay_DSTATE_hi;       /* '<S158>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S152>/Unit Delay' */
    boolean UnitDelay_DSTATE_m;        /* '<S171>/Unit Delay' */
    boolean UnitDelay2_DSTATE;         /* '<S171>/Unit Delay2' */
    boolean UnitDelay_DSTATE_k;        /* '<S178>/Unit Delay' */
    boolean UnitDelay_DSTATE_a2;       /* '<S177>/Unit Delay' */
    boolean UnitDelay2_DSTATE_a;       /* '<S11>/Unit Delay2' */
    boolean UnitDelay_DSTATE_c;        /* '<S37>/Unit Delay' */
    boolean UnitDelay_DSTATE_a2o;      /* '<S23>/Unit Delay' */
    boolean UnitDelay_DSTATE_l1;       /* '<S22>/Unit Delay' */
    TePMTR_e_ThermlEnblReason UnitDelay1_DSTATE;/* '<S11>/Unit Delay1' */
    uint8 StatusByte_ThrmlRlyCtrlCkt;
                                    /* '<Root>/DS_StatusByte_ThrmlRlyCtrlCkt' */
}
DW_PMTR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const TePMTR_e_ThrmlDevisEnbl Const2;/* '<S200>/Const2' */
    const TePMTR_e_ThermlEnblReason Const1;/* '<S200>/Const1' */
    const TePMTR_e_ThermalRelayStatus Const8;/* '<S200>/Const8' */
}
ConstB_PMTR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

extern VAR(B_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"

extern VAR(DW_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMTR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_PMTR
#include "MemMap.h"

extern CONST(ConstB_PMTR_ac_T, PMTR_VAR_INIT) PMTR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_PMTR
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
 * '<Root>' : 'PMTR_ac'
 * '<S1>'   : 'PMTR_ac/PMTR_MedTEH'
 * '<S2>'   : 'PMTR_ac/PMTR_PwrOn'
 * '<S3>'   : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl'
 * '<S4>'   : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk'
 * '<S5>'   : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt'
 * '<S6>'   : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb'
 * '<S7>'   : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd'
 * '<S8>'   : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt'
 * '<S9>'   : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic'
 * '<S10>'  : 'PMTR_ac/PMTR_MedTEH/Thrml_Shtdwn_Req'
 * '<S11>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1'
 * '<S12>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Enumerated_Constant'
 * '<S13>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/KePMTR_Cnt_DebncThrmlEnblRsnNew'
 * '<S14>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/KePMTR_b_DsblThrmlEnblRsnDbnc'
 * '<S15>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/KePMTR_b_HTCoolReq_Enbl'
 * '<S16>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/KePMTR_b_Key_DisabDebnc_RST'
 * '<S17>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem'
 * '<S18>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem1'
 * '<S19>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem2'
 * '<S20>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3'
 * '<S21>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1/Count Down  Reset Enabled'
 * '<S22>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1/EdgeRising'
 * '<S23>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1/EdgeRising1'
 * '<S24>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1/IfThenElse'
 * '<S25>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Discrete Debounce1/Subsystem2'
 * '<S26>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem/Enumerated Value20'
 * '<S27>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem/Enumerated Value21'
 * '<S28>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem/KePMTR_b_ThrmlEnblRsnNew_FanAftrrunEnbl'
 * '<S29>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem/KePMTR_b_ThrmlEnblRsnNew_PmpAftrrunEnbl'
 * '<S30>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem1/Truth_Table'
 * '<S31>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem2/Truth_Table'
 * '<S32>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/Enumerated_Constant'
 * '<S33>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/Enumerated_Constant2'
 * '<S34>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/KePMTR_T_HoodAjarKeyCrankTimer'
 * '<S35>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/KePMTR_dT_KeyCrankSampleTime'
 * '<S36>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/Turn On Delay Time'
 * '<S37>'  : 'PMTR_ac/PMTR_MedTEH/EnblReas_DvceEnbl/Subsystem3/Turn On Delay Time/EdgeRising'
 * '<S38>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_U_HB_SysVolt_D'
 * '<S39>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_BPCM_OVActv_D'
 * '<S40>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_BPCM_OVActv_SD'
 * '<S41>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_BattCntctrOpenPndg_D'
 * '<S42>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_BattCntctrOpenPndg_SD'
 * '<S43>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_HB_SysVolt_SD'
 * '<S44>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_HVDspt_Enbl_D'
 * '<S45>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_HVDspt_Enbl_SD'
 * '<S46>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_HV_BatCntctrStat_SD'
 * '<S47>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_InFieldMode_D'
 * '<S48>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_InFieldMode_SD'
 * '<S49>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_KeyInIgn_SD'
 * '<S50>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_KeySts_SD'
 * '<S51>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_LatcdImpct_D'
 * '<S52>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_LatcdImpct_SD'
 * '<S53>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PMPRRdyToShtDwn_D'
 * '<S54>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PMPRRdyToShtDwn_SD'
 * '<S55>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PrepareToShtdwn_D'
 * '<S56>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PrepareToShtdwn_SD'
 * '<S57>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PropSysActv_D'
 * '<S58>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_PropSysActv_SD'
 * '<S59>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_RCVRRdyToShtDwn_D'
 * '<S60>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_RCVRRdyToShtDwn_SD'
 * '<S61>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_REMDisabled_D'
 * '<S62>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_REMDisabled_SD'
 * '<S63>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_ShippingMode_SD'
 * '<S64>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktHi_D'
 * '<S65>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktHi_SD'
 * '<S66>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktLo_D'
 * '<S67>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktLo_SD'
 * '<S68>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_D'
 * '<S69>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktShotoBatt_SD'
 * '<S70>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_D'
 * '<S71>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_b_VehDynaCMPwrRlyCktShotoGnd_SD'
 * '<S72>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_e_HV_BatCntctrStat_D'
 * '<S73>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_e_KeyInIgn_D'
 * '<S74>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_e_KeySts_D'
 * '<S75>'  : 'PMTR_ac/PMTR_MedTEH/Input_Overrd_Blk/KePMTR_e_ShippingMode_D'
 * '<S76>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMBattCoolAction_D'
 * '<S77>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMBattCoolAction_SD'
 * '<S78>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMBattHeatAction_D'
 * '<S79>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMBattHeatAction_SD'
 * '<S80>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMCabCoolAction_D'
 * '<S81>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMCabCoolAction_SD'
 * '<S82>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMCabHeatAction_D'
 * '<S83>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_RedEngyMgt/KePMTR_b_REMCabHeatAction_SD'
 * '<S84>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_b_ThrmlDevisEnbl_SD'
 * '<S85>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_b_ThrmlEnbled_Reason_SD'
 * '<S86>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_b_ThrmlShtdwnReqHonrd_D'
 * '<S87>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_b_ThrmlShtdwnReqHonrd_SD'
 * '<S88>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_e_ThrmlDevisEnbl_D'
 * '<S89>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmDvceEnb/KePMTR_e_ThrmlEnbled_Reason_D'
 * '<S90>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_b_ThrmlRlyState_SD'
 * '<S91>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_b_ThrmlRlySts_D'
 * '<S92>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_b_ThrmlRlySts_SD'
 * '<S93>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_b_ThrmlSystEnbl_RlySts_D'
 * '<S94>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_b_ThrmlSystEnbl_RlySts_SD'
 * '<S95>'  : 'PMTR_ac/PMTR_MedTEH/OutOvd_ThrmRlyCmd/KePMTR_e_ThrmlRlyState_D'
 * '<S96>'  : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant'
 * '<S97>'  : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant1'
 * '<S98>'  : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant3'
 * '<S99>'  : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant4'
 * '<S100>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant5'
 * '<S101>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant6'
 * '<S102>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant7'
 * '<S103>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/Enumerated_Constant8'
 * '<S104>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem1'
 * '<S105>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem2'
 * '<S106>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem3'
 * '<S107>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem4'
 * '<S108>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem5'
 * '<S109>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse'
 * '<S110>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse10'
 * '<S111>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse11'
 * '<S112>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse2'
 * '<S113>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse3'
 * '<S114>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse4'
 * '<S115>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse5'
 * '<S116>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse6'
 * '<S117>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse7'
 * '<S118>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse8'
 * '<S119>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/IfThenElse9'
 * '<S120>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblBattCoolTime'
 * '<S121>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblBattHeatTime'
 * '<S122>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblCabCoolTime'
 * '<S123>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblCabHeatTime'
 * '<S124>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblDefCabCoolTime'
 * '<S125>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_RemEnblDefCabHeatTime'
 * '<S126>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_ShipNDefCabCoolTime'
 * '<S127>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_Cnt_ShipNDefCabHeatTime'
 * '<S128>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_b_LogtxMode_EnblBattAlways'
 * '<S129>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_b_REMMode_EnblBattAlways'
 * '<S130>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_b_ShipNDefDsblNoTimer'
 * '<S131>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_b_ShipNDefEnblNoTimer'
 * '<S132>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/KePMTR_b_ShipNDefTimer'
 * '<S133>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time'
 * '<S134>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem1/Enumerated_Constant3'
 * '<S135>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem2/Enumerated_Constant1'
 * '<S136>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem3/Enumerated_Constant3'
 * '<S137>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem4/Enumerated_Constant1'
 * '<S138>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/If Action Subsystem5/Enumerated_Constant3'
 * '<S139>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/KePMTR_P_BattCoolReqMin'
 * '<S140>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/KePMTR_P_BattHeatReqMin'
 * '<S141>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/KePMTR_P_CabCoolReqMin'
 * '<S142>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/KePMTR_P_CabHeatReqMin'
 * '<S143>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1'
 * '<S144>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2'
 * '<S145>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3'
 * '<S146>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4'
 * '<S147>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/If Action Subsystem1'
 * '<S148>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/If Action Subsystem2'
 * '<S149>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/If Action Subsystem3'
 * '<S150>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/Subsystem1'
 * '<S151>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/Subsystem1/Count Down  Reset Enabled'
 * '<S152>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem1/Subsystem1/EdgeRising1'
 * '<S153>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/If Action Subsystem1'
 * '<S154>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/If Action Subsystem2'
 * '<S155>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/If Action Subsystem3'
 * '<S156>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/Subsystem1'
 * '<S157>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/Subsystem1/Count Down  Reset Enabled'
 * '<S158>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem2/Subsystem1/EdgeRising1'
 * '<S159>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/If Action Subsystem1'
 * '<S160>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/If Action Subsystem2'
 * '<S161>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/If Action Subsystem3'
 * '<S162>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/Subsystem1'
 * '<S163>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/Subsystem1/Count Down  Reset Enabled'
 * '<S164>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem3/Subsystem1/EdgeRising1'
 * '<S165>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/If Action Subsystem1'
 * '<S166>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/If Action Subsystem2'
 * '<S167>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/If Action Subsystem3'
 * '<S168>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/Subsystem1'
 * '<S169>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/Subsystem1/Count Down  Reset Enabled'
 * '<S170>' : 'PMTR_ac/PMTR_MedTEH/Reduc_Enrgy_Mgmt/REM_Limited_Conditioning_Run_Time/Subsystem4/Subsystem1/EdgeRising1'
 * '<S171>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1'
 * '<S172>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/KePMTR_Cnt_DbncLatchdImpct_tim'
 * '<S173>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/KePMTR_b_Impct_DisabDebnc_RST'
 * '<S174>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem1'
 * '<S175>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2'
 * '<S176>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/Count Down  Reset Enabled'
 * '<S177>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/EdgeRising'
 * '<S178>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/EdgeRising1'
 * '<S179>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/IfThenElse'
 * '<S180>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/Subsystem2'
 * '<S181>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Discrete Debounce1/Subsystem2/Set Block3'
 * '<S182>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem1/KePMTR_b_LatchImpctDbncd_SD'
 * '<S183>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Enumerated_Constant'
 * '<S184>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Enumerated_Constant1'
 * '<S185>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Enumerated_Constant2'
 * '<S186>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Enumerated_Constant3'
 * '<S187>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/EvtInfo_ThrmlRlyCtrlCkt_FaultActive_1'
 * '<S188>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/IfThenElse'
 * '<S189>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/IfThenElse1'
 * '<S190>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/IfThenElse2'
 * '<S191>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/KePMTR_b_ThrmlRelyCmd_Disb_P1A1E'
 * '<S192>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem'
 * '<S193>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/EvtInfo_ThrmlRlyCtrlCkt_FaultActive_2'
 * '<S194>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/KePMTR_U_SysVltLwrLim_BF3'
 * '<S195>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/KePMTR_U_SysVltUprLim_BF3'
 * '<S196>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/KePMTR_b_RadFanEOL_ThrmlEnable'
 * '<S197>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/KePMTR_b_ThrmlRelyCmd_Disb_BF3'
 * '<S198>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Rly_Logic/Subsystem2/Subsystem/KePMTR_b_ThrmlRelyCmd_Disb_P1A1E'
 * '<S199>' : 'PMTR_ac/PMTR_MedTEH/Thrml_Shtdwn_Req/Enumerated_Constant'
 * '<S200>' : 'PMTR_ac/PMTR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_PMTR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
