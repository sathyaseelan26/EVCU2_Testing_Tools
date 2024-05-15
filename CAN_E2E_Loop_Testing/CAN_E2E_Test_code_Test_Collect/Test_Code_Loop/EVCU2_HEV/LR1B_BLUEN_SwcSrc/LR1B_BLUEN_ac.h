/*
 * File: LR1B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'LR1B_BLUEN_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:47:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LR1B_BLUEN_ac_h_
#define RTW_HEADER_LR1B_BLUEN_ac_h_
#include <math.h>
#include "Rte_Type.h"
#ifndef LR1B_BLUEN_ac_COMMON_INCLUDES_
#define LR1B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LR1B_BLUEN.h"
#endif                                 /* LR1B_BLUEN_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_LR1B_BLUEN_ac_T
{
    float32 TmpSignalConversionAtVeLINR_I_B;
    float32 TmpSignalConversionAtVeLINR_Pct;
    float32 TmpSignalConversionAtVeLINR_P_p;
    float32 TmpSignalConversionAtVeLINR_T_B;
    float32 TmpSignalConversionAtVeLINR_U_B;
    float32 TmpSignalConversionAtVeLINR_y_B;
    uint8 TmpSignalConversionAtVeLINR_e_B;
    uint8 TmpSignalConversionAtVeLINR_e_h;
    uint8 TmpSignalConversionAtVeLINR_e_m;
    uint8 TmpSignalConversionAtVeLINR_e_d;
    uint8 TmpSignalConversionAtVeLINR_e_a;
    uint8 TmpSignalConversionAtVeLINR_e_j;
    uint8 TmpSignalConversionAtVeLINR_e_l;
    uint8 TmpSignalConversionAtVeLINR_e_f;
    uint8 TmpSignalConversionAtVeLINR_e_e;
    uint8 TmpSignalConversionAtVeLINR_e_i;
    uint8 TmpSignalConversionAtVeLINR_e_c;
    uint8 TmpSignalConversionAtVeLINR_e_o;
    boolean TmpSignalConversionAtVeLINR_b_R;
}
B_LR1B_BLUEN_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
#include "MemMap.h"

extern VAR(B_LR1B_BLUEN_ac_T, LR1B_BLUEN_VAR_INIT) LR1B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR1B_BLUEN
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
 * '<Root>' : 'LR1B_BLUEN_ac'
 * '<S1>'   : 'LR1B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'LR1B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT'
 * '<S4>'   : 'LR1B_BLUEN_ac/SigMngt/BCP_VER'
 * '<S5>'   : 'LR1B_BLUEN_ac/SigMngt/Enumerated_Constant1'
 * '<S6>'   : 'LR1B_BLUEN_ac/SigMngt/Enumerated_Constant2'
 * '<S7>'   : 'LR1B_BLUEN_ac/SigMngt/KeLR1B_b_CanLocStatusBypEnbl'
 * '<S8>'   : 'LR1B_BLUEN_ac/SigMngt/KeLR1B_e_CanLocStatus'
 * '<S9>'   : 'LR1B_BLUEN_ac/SigMngt/SWITCH_UP'
 * '<S10>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR'
 * '<S11>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR'
 * '<S12>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV'
 * '<S13>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR'
 * '<S14>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD'
 * '<S15>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON'
 * '<S16>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM'
 * '<S17>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR'
 * '<S18>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR'
 * '<S19>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR'
 * '<S20>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT'
 * '<S21>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL'
 * '<S22>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET'
 * '<S23>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP'
 * '<S24>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG'
 * '<S25>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR'
 * '<S26>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP'
 * '<S27>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/ArbtrLogic_NotProtected'
 * '<S28>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/Fsft'
 * '<S29>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/Poke'
 * '<S30>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/Tmot'
 * '<S31>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S32>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/Fsft/Failsoft'
 * '<S33>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_AIR_PRE_ERR/Poke/Poke'
 * '<S34>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/ArbtrLogic_NotProtected'
 * '<S35>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/Fsft'
 * '<S36>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/Poke'
 * '<S37>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/Tmot'
 * '<S38>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/ArbtrLogic_NotProtected/Chart'
 * '<S39>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/Fsft/Failsoft'
 * '<S40>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_CURR/Poke/Poke'
 * '<S41>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/ArbtrLogic_NotProtected'
 * '<S42>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/Fsft'
 * '<S43>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/Poke'
 * '<S44>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/Tmot'
 * '<S45>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/ArbtrLogic_NotProtected/Chart'
 * '<S46>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/Fsft/Failsoft'
 * '<S47>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DBLK_ACTV/Poke/Poke'
 * '<S48>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/ArbtrLogic_NotProtected'
 * '<S49>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/Fsft'
 * '<S50>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/Poke'
 * '<S51>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/Tmot'
 * '<S52>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S53>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/Fsft/Failsoft'
 * '<S54>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_DR_RN_ERR/Poke/Poke'
 * '<S55>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/ArbtrLogic_NotProtected'
 * '<S56>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/Fsft'
 * '<S57>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/Poke'
 * '<S58>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/Tmot'
 * '<S59>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/ArbtrLogic_NotProtected/Chart'
 * '<S60>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/Fsft/Failsoft'
 * '<S61>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_FL_SAFE_ACTVTD/Poke/Poke'
 * '<S62>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/ArbtrLogic_NotProtected'
 * '<S63>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/Fsft'
 * '<S64>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/Poke'
 * '<S65>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/Tmot'
 * '<S66>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/ArbtrLogic_NotProtected/Chart'
 * '<S67>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/Fsft/Failsoft'
 * '<S68>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_LMP_HM_AN_ON/Poke/Poke'
 * '<S69>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/ArbtrLogic_NotProtected'
 * '<S70>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/Fsft'
 * '<S71>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/Poke'
 * '<S72>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/Tmot'
 * '<S73>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/ArbtrLogic_NotProtected/Chart'
 * '<S74>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/Fsft/Failsoft'
 * '<S75>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_MONTRNG_RPM/Poke/Poke'
 * '<S76>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/ArbtrLogic_NotProtected'
 * '<S77>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/Fsft'
 * '<S78>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/Poke'
 * '<S79>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/Tmot'
 * '<S80>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S81>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/Fsft/Failsoft'
 * '<S82>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_NODE_ERR/Poke/Poke'
 * '<S83>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/ArbtrLogic_NotProtected'
 * '<S84>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/Fsft'
 * '<S85>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/Poke'
 * '<S86>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/Tmot'
 * '<S87>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S88>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/Fsft/Failsoft'
 * '<S89>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_CUR_ERR/Poke/Poke'
 * '<S90>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/ArbtrLogic_NotProtected'
 * '<S91>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/Fsft'
 * '<S92>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/Poke'
 * '<S93>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/Tmot'
 * '<S94>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S95>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/Fsft/Failsoft'
 * '<S96>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_OVR_TMP_ERR/Poke/Poke'
 * '<S97>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/ArbtrLogic_NotProtected'
 * '<S98>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/Fsft'
 * '<S99>'  : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/Poke'
 * '<S100>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/Tmot'
 * '<S101>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/ArbtrLogic_NotProtected/Chart'
 * '<S102>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/Fsft/Failsoft'
 * '<S103>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_POST_RUN_STAT/Poke/Poke'
 * '<S104>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/ArbtrLogic_NotProtected'
 * '<S105>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/Fsft'
 * '<S106>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/Poke'
 * '<S107>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/Tmot'
 * '<S108>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/ArbtrLogic_NotProtected/Chart'
 * '<S109>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/Fsft/Failsoft'
 * '<S110>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_ACTUAL/Poke/Poke'
 * '<S111>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/ArbtrLogic_NotProtected'
 * '<S112>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/Fsft'
 * '<S113>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/Poke'
 * '<S114>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/Tmot'
 * '<S115>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/ArbtrLogic_NotProtected/Chart'
 * '<S116>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/Fsft/Failsoft'
 * '<S117>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_RPM_TARGET/Poke/Poke'
 * '<S118>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/ArbtrLogic_NotProtected'
 * '<S119>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/Fsft'
 * '<S120>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/Poke'
 * '<S121>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/Tmot'
 * '<S122>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/ArbtrLogic_NotProtected/Chart'
 * '<S123>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/Fsft/Failsoft'
 * '<S124>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_TEMP/Poke/Poke'
 * '<S125>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/ArbtrLogic_NotProtected'
 * '<S126>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/Fsft'
 * '<S127>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/Poke'
 * '<S128>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/Tmot'
 * '<S129>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/ArbtrLogic_NotProtected/Chart'
 * '<S130>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/Fsft/Failsoft'
 * '<S131>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG/Poke/Poke'
 * '<S132>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/ArbtrLogic_NotProtected'
 * '<S133>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/Fsft'
 * '<S134>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/Poke'
 * '<S135>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/Tmot'
 * '<S136>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/ArbtrLogic_NotProtected/Chart'
 * '<S137>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/Fsft/Failsoft'
 * '<S138>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/BCP_VLTG_ERR/Poke/Poke'
 * '<S139>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP/ArbtrLogic_NotProtected'
 * '<S140>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP/Poke'
 * '<S141>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP/Tmot'
 * '<S142>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP/ArbtrLogic_NotProtected/Chart'
 * '<S143>' : 'LR1B_BLUEN_ac/SigMngt/BCP_STAT/RsErr_BCP_PUMP/Poke/Poke'
 * '<S144>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER'
 * '<S145>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION'
 * '<S146>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER/ArbtrLogic_NotProtected'
 * '<S147>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER/Poke'
 * '<S148>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER/Tmot'
 * '<S149>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER/ArbtrLogic_NotProtected/Chart'
 * '<S150>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_SUPPLIER/Poke/Poke'
 * '<S151>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION/ArbtrLogic_NotProtected'
 * '<S152>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION/Poke'
 * '<S153>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION/Tmot'
 * '<S154>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION/ArbtrLogic_NotProtected/Chart'
 * '<S155>' : 'LR1B_BLUEN_ac/SigMngt/BCP_VER/BCP_VERSION/Poke/Poke'
 */
#endif                                 /* RTW_HEADER_LR1B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
