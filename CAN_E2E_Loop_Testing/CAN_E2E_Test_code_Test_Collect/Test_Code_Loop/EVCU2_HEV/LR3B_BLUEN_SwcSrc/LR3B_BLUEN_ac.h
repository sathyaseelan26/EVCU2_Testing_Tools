/*
 * File: LR3B_BLUEN_ac.h
 *
 * Code generated for Simulink model 'LR3B_BLUEN_ac'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Apr  6 18:49:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LR3B_BLUEN_ac_h_
#define RTW_HEADER_LR3B_BLUEN_ac_h_
#include "Rte_Type.h"
#ifndef LR3B_BLUEN_ac_COMMON_INCLUDES_
#define LR3B_BLUEN_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_LR3B_BLUEN.h"
#endif                                 /* LR3B_BLUEN_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_LR3B_BLUEN_ac_T
{
    uint8 TmpSignalConversionAtVeLINR_e_A;
    uint8 TmpSignalConversionAtVeLINR_e_l;
    boolean TmpSignalConversionAtVeLINR_b_A;
    boolean TmpSignalConversionAtVeLINR_b_g;
    boolean TmpSignalConversionAtVeLINR_b_m;
    boolean TmpSignalConversionAtVeLINR_b_d;
    boolean TmpSignalConversionAtVeLINR_b_j;
    boolean TmpSignalConversionAtVeLINR_b_e;
    boolean TmpSignalConversionAtVeLINR_b_f;
    boolean TmpSignalConversionAtVeLINR__fw;
    boolean TmpSignalConversionAtVeLINR_b_R;
}
B_LR3B_BLUEN_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
#include "MemMap.h"

extern VAR(B_LR3B_BLUEN_ac_T, LR3B_BLUEN_VAR_INIT) LR3B_BLUEN_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LR3B_BLUEN
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
 * '<Root>' : 'LR3B_BLUEN_ac'
 * '<S1>'   : 'LR3B_BLUEN_ac/Initialize Function'
 * '<S2>'   : 'LR3B_BLUEN_ac/SigMngt'
 * '<S3>'   : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS'
 * '<S4>'   : 'LR3B_BLUEN_ac/SigMngt/Enumerated_Constant1'
 * '<S5>'   : 'LR3B_BLUEN_ac/SigMngt/Enumerated_Constant2'
 * '<S6>'   : 'LR3B_BLUEN_ac/SigMngt/KeLR3B_b_CanLocStatusBypEnbl'
 * '<S7>'   : 'LR3B_BLUEN_ac/SigMngt/KeLR3B_e_CanLocStatus'
 * '<S8>'   : 'LR3B_BLUEN_ac/SigMngt/SWITCH_UP'
 * '<S9>'   : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat'
 * '<S10>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv'
 * '<S11>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat'
 * '<S12>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos'
 * '<S13>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN'
 * '<S14>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak'
 * '<S15>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck'
 * '<S16>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp'
 * '<S17>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt'
 * '<S18>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt'
 * '<S19>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS'
 * '<S20>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat/ArbtrLogic_NotProtected'
 * '<S21>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat/Poke'
 * '<S22>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat/Tmot'
 * '<S23>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat/ArbtrLogic_NotProtected/Chart'
 * '<S24>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_BoostStat/Poke/Poke'
 * '<S25>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv/ArbtrLogic_NotProtected'
 * '<S26>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv/Poke'
 * '<S27>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv/Tmot'
 * '<S28>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv/ArbtrLogic_NotProtected/Chart'
 * '<S29>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalActv/Poke/Poke'
 * '<S30>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat/ArbtrLogic_NotProtected'
 * '<S31>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat/Poke'
 * '<S32>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat/Tmot'
 * '<S33>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat/ArbtrLogic_NotProtected/Chart'
 * '<S34>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CalStat/Poke/Poke'
 * '<S35>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/ArbtrLogic_NotProtected'
 * '<S36>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/Fsft'
 * '<S37>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/Poke'
 * '<S38>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/Tmot'
 * '<S39>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/ArbtrLogic_NotProtected/Chart'
 * '<S40>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/Fsft/Failsoft'
 * '<S41>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_CurrPos/Poke/Poke'
 * '<S42>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/ArbtrLogic_NotProtected'
 * '<S43>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/Fsft'
 * '<S44>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/Poke'
 * '<S45>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/Tmot'
 * '<S46>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/ArbtrLogic_NotProtected/Chart'
 * '<S47>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/Fsft/Failsoft'
 * '<S48>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrLIN/Poke/Poke'
 * '<S49>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak/ArbtrLogic_NotProtected'
 * '<S50>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak/Poke'
 * '<S51>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak/Tmot'
 * '<S52>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak/ArbtrLogic_NotProtected/Chart'
 * '<S53>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechBreak/Poke/Poke'
 * '<S54>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck/ArbtrLogic_NotProtected'
 * '<S55>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck/Poke'
 * '<S56>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck/Tmot'
 * '<S57>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck/ArbtrLogic_NotProtected/Chart'
 * '<S58>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrMechStuck/Poke/Poke'
 * '<S59>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp/ArbtrLogic_NotProtected'
 * '<S60>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp/Poke'
 * '<S61>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp/Tmot'
 * '<S62>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp/ArbtrLogic_NotProtected/Chart'
 * '<S63>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrTemp/Poke/Poke'
 * '<S64>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt/ArbtrLogic_NotProtected'
 * '<S65>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt/Poke'
 * '<S66>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt/Tmot'
 * '<S67>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt/ArbtrLogic_NotProtected/Chart'
 * '<S68>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrOvrVolt/Poke/Poke'
 * '<S69>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt/ArbtrLogic_NotProtected'
 * '<S70>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt/Poke'
 * '<S71>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt/Tmot'
 * '<S72>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt/ArbtrLogic_NotProtected/Chart'
 * '<S73>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/AGS_ErrUnVolt/Poke/Poke'
 * '<S74>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS/ArbtrLogic_NotProtected'
 * '<S75>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS/Poke'
 * '<S76>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS/Tmot'
 * '<S77>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS/ArbtrLogic_NotProtected/Chart'
 * '<S78>'  : 'LR3B_BLUEN_ac/SigMngt/AGS_ECM_STATUS/RsErr_AGS/Poke/Poke'
 */
#endif                                 /* RTW_HEADER_LR3B_BLUEN_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
