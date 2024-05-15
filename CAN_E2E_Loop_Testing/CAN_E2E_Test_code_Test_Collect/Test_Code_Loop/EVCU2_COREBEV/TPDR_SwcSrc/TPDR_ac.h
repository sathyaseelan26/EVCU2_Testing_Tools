/*
 * File: TPDR_ac.h
 *
 * Code generated for Simulink model 'TPDR_ac'.
 *
 * Model version                  : 9.18
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:48:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TPDR_ac_h_
#define RTW_HEADER_TPDR_ac_h_
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#ifndef TPDR_ac_COMMON_INCLUDES_
#define TPDR_ac_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TPDR.h"
#endif                                 /* TPDR_ac_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "Rte_Cfg.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "AHS2_Enums.h"

/* Block signals (default storage) */
typedef struct tag_B_TPDR_ac_T
{
    float32 OutportBufferForVeTPDR_P_Rat_EAC_PwrBdgt;/* '<S141>/Const1' */
    float32 OutportBufferForVeTPDR_P_CabinHeater_Pwr;/* '<S141>/Const2' */
    float32 OutportBufferForVeTPDR_P_BattHeater_PwrB;/* '<S141>/Const3' */
    float32 OutportBufferForVeTPDR_P_RearHtr_PwrBdgt;/* '<S141>/Const4' */
    float32 Vector_m;                  /* '<S127>/Vector' */
    float32 Vector_b;                  /* '<S126>/Vector' */
    float32 Vector_j;                  /* '<S125>/Vector' */
}
B_TPDR_ac_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_TPDR_ac_T
{
    float32 UnitDelay_DSTATE;          /* '<S81>/Unit Delay' */
    float32 UnitDelay_DSTATE_b;        /* '<S77>/Unit Delay' */
    boolean Delay1_DSTATE;             /* '<S65>/Delay1' */
    boolean UnitDelay_DSTATE_l;        /* '<S101>/Unit Delay' */
    boolean UnitDelay_DSTATE_p;        /* '<S96>/Unit Delay' */
    boolean UnitDelay_DSTATE_c;        /* '<S93>/Unit Delay' */
    boolean UnitDelay_DSTATE_d;        /* '<S88>/Unit Delay' */
    boolean UnitDelay_DSTATE_o;        /* '<S80>/Unit Delay' */
    boolean UnitDelay_DSTATE_ly;       /* '<S79>/Unit Delay' */
    boolean UnitDelay_DSTATE_g;        /* '<S78>/Unit Delay' */
    boolean UnitDelay_DSTATE_gv;       /* '<S76>/Unit Delay' */
    boolean UnitDelay_DSTATE_h;        /* '<S75>/Unit Delay' */
    boolean UnitDelay_DSTATE_hx;       /* '<S74>/Unit Delay' */
    boolean UnitDelay_DSTATE_m;        /* '<S50>/Unit Delay' */
    boolean UnitDelay_DSTATE_lys;      /* '<S49>/Unit Delay' */
}
DW_TPDR_ac_T;

/* Invariant block signals (default storage) */
typedef struct
{
    const float32 Const1;              /* '<S141>/Const1' */
    const float32 Const2;              /* '<S141>/Const2' */
    const float32 Const3;              /* '<S141>/Const3' */
    const float32 Const4;              /* '<S141>/Const4' */
    const boolean TmpSignalConversionAtSFunctionInport[7];/* '<S12>/MATLAB_Function' */
}
ConstB_TPDR_ac_T;

/* Constant parameters (default storage) */
typedef struct
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S125>/Vector'
     *   '<S126>/Vector'
     */
    uint32 pooled3[2];

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S127>/Vector'
     */
    uint32 Vector_maxIndex[2];
}
ConstP_TPDR_ac_T;

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

extern VAR(B_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"

extern VAR(DW_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TPDR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

extern CONST(ConstB_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_ConstB;/* constant block i/o */

#define STOP_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TPDR
#include "MemMap.h"

extern CONST(ConstP_TPDR_ac_T, TPDR_VAR_INIT) TPDR_ac_ConstP;

#define STOP_SEC_CONST_UNSPECIFIED_TPDR
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
 * '<Root>' : 'TPDR_ac'
 * '<S1>'   : 'TPDR_ac/TPDR_MedTEH'
 * '<S2>'   : 'TPDR_ac/TPDR_PwrOn'
 * '<S3>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block'
 * '<S4>'   : 'TPDR_ac/TPDR_MedTEH/Power_Distribution'
 * '<S5>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/Compressor_Overwrite'
 * '<S6>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/RearHtr_Overwrite'
 * '<S7>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/Compressor_Overwrite/KeTPDR_P_Rat_EAC_PwrBdgt_Avail_D'
 * '<S8>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/Compressor_Overwrite/KeTPDR_b_Rat_EAC_PwrBdgt_Avail_SD'
 * '<S9>'   : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/RearHtr_Overwrite/KeTPDR_P_RearHtr_PwrBdgt_Avail_D'
 * '<S10>'  : 'TPDR_ac/TPDR_MedTEH/Overwrite_Block/RearHtr_Overwrite/KeTPDR_b_RearHtr_PwrBdgt_Avail_SD'
 * '<S11>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output'
 * '<S12>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Distribution_Matrices'
 * '<S13>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/HeatPump_or_Deice_Active'
 * '<S14>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector'
 * '<S15>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection'
 * '<S16>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits'
 * '<S17>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power'
 * '<S18>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Calculate_the_final_power_outputs'
 * '<S19>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/KeTPDR_b_Enable_Realctn_of_Act_Excess'
 * '<S20>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification'
 * '<S21>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications'
 * '<S22>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Set Block'
 * '<S23>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_BattOnlyHeatPwr_MaxLim'
 * '<S24>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_BattOnlyHeatPwr_MinLim'
 * '<S25>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_DstbtdCoolPwr_MaxLim'
 * '<S26>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_DstbtdCoolPwr_MinLim'
 * '<S27>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_RearHtrPwr_MaxLim'
 * '<S28>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_RearHtrPwr_MinLim'
 * '<S29>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim'
 * '<S30>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/KeTPDR_P_Shrd_orCabOnlyHeatPwr_MinLim'
 * '<S31>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/Limiter1'
 * '<S32>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/Limiter2'
 * '<S33>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/Limiter3'
 * '<S34>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Actuator_Min_Max_Limits/Limiter4'
 * '<S35>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter'
 * '<S36>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter2'
 * '<S37>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter/KeTPDR_P_MaxCabActvHeatPwr'
 * '<S38>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter/KeTPDR_P_MinCabActvHeatPwr'
 * '<S39>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter/Limiter1'
 * '<S40>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter2/KeTPDR_P_MaxBattActvHeatPwr'
 * '<S41>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter2/KeTPDR_P_MinBattActvHeatPwr'
 * '<S42>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Adjust_For_Auxiliary_Power/Limiter2/Limiter'
 * '<S43>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/KeTPDR_P_BattOnlyHeatPwr_MaxLim'
 * '<S44>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/KeTPDR_P_DstbtdCoolPwr_MaxLim'
 * '<S45>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/KeTPDR_P_RearHtrPwr_MaxLim'
 * '<S46>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/KeTPDR_P_Shrd_orCabOnlyHeatPwr_MaxLim'
 * '<S47>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/MATLAB_Function'
 * '<S48>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Overlimit_Modification/Set Block'
 * '<S49>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Hysteresis'
 * '<S50>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Hysteresis1'
 * '<S51>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/IfThenElse4'
 * '<S52>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/IfThenElse5'
 * '<S53>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/IfThenElse7'
 * '<S54>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/IfThenElse8'
 * '<S55>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOff'
 * '<S56>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOn'
 * '<S57>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/KeTPDR_P_SupportBothCabHtrs_MaxHys'
 * '<S58>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/KeTPDR_P_SupportBothCabHtrs_MinHys'
 * '<S59>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/KeTPDR_b_EnblHtrMngnmnt_PerWup_DualHtrs'
 * '<S60>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt'
 * '<S61>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2'
 * '<S62>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem3'
 * '<S63>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4'
 * '<S64>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr1_TmrEnable'
 * '<S65>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr2_TmrEnable'
 * '<S66>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/KeTPDR_b_PerWupHtrToggle_MappingBattHtr'
 * '<S67>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/KeTPDR_t_Htr1EnableTmr_PerWup'
 * '<S68>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/KeTPDR_t_Htr2EnableTmr_PerWup'
 * '<S69>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr1'
 * '<S70>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr2'
 * '<S71>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem1'
 * '<S72>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem2'
 * '<S73>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem3'
 * '<S74>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr1_TmrEnable/EdgeFalling1'
 * '<S75>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr1_TmrEnable/EdgeRising'
 * '<S76>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr1_TmrEnable/EdgeRising5'
 * '<S77>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr1_TmrEnable/Htr1Tmr'
 * '<S78>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr2_TmrEnable/EdgeFalling'
 * '<S79>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr2_TmrEnable/EdgeRising1'
 * '<S80>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr2_TmrEnable/EdgeRising4'
 * '<S81>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Htr2_TmrEnable/Htr2Tmr'
 * '<S82>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr1/IfThenElse1'
 * '<S83>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr1/IfThenElse2'
 * '<S84>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr2/IfThenElse1'
 * '<S85>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/RunHtr2/IfThenElse2'
 * '<S86>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem1/IfThenElse'
 * '<S87>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem2/IfThenElse1'
 * '<S88>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem3/Hysteresis'
 * '<S89>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem3/KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOff'
 * '<S90>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/PerWup_LowBudget_HtrMngmnt/Subsystem3/KeTPDR_P_BattOnlyHeatPwr_MinLim_HtrOn'
 * '<S91>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2/Enumerated_Constant3'
 * '<S92>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2/Enumerated_Constant4'
 * '<S93>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2/Hysteresis'
 * '<S94>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2/KeTPDR_P_HTCLHeatTgtMet_Htroff'
 * '<S95>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem2/KeTPDR_P_HTCLHeatTgtMet_Htron'
 * '<S96>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem3/Hysteresis'
 * '<S97>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem3/KeTPDR_P_SupportBothHtrs_MaxHys'
 * '<S98>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem3/KeTPDR_P_SupportBothHtrs_MinHys'
 * '<S99>'  : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4/Enumerated_Constant1'
 * '<S100>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4/Enumerated_Constant2'
 * '<S101>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4/Hysteresis'
 * '<S102>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4/KeTPDR_P_BattHeatTgtMet_Htroff'
 * '<S103>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Calculating_the_Output/Post_Processing_Modifications/Subsystem4/KeTPDR_P_BattHeatTgtMet_Htron'
 * '<S104>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Distribution_Matrices/HaTPDR_K_DistMatrix'
 * '<S105>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Distribution_Matrices/MATLAB_Function'
 * '<S106>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/HeatPump_or_Deice_Active/Enumerated_Constant'
 * '<S107>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment'
 * '<S108>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/BattHeatUsageRatio'
 * '<S109>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Create_Priority_Vector'
 * '<S110>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/EDUHeatUsageRatio'
 * '<S111>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Enumerated_Constant'
 * '<S112>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Enumerated_Constant1'
 * '<S113>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/HeatPumpRatio'
 * '<S114>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/KeTPDR_b_Use_CellTempMax_BattTemp'
 * '<S115>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/KeTPDR_r_CabinHeatRatioMax'
 * '<S116>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/KeTPDR_r_CabinHeatRatioMin'
 * '<S117>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/KeTPDR_r_HeatPumpRatioMax'
 * '<S118>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/KeTPDR_r_HeatPumpRatioMin'
 * '<S119>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Limiter'
 * '<S120>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Limiter1'
 * '<S121>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/PeriodicWakeUp'
 * '<S122>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Protected Division'
 * '<S123>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Set Block'
 * '<S124>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/Set Block1'
 * '<S125>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/BattHeatUsageRatio/KtTPDR_r_BattHeatUsageRatio'
 * '<S126>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/EDUHeatUsageRatio/KtTPDR_r_EDUHeatUsageRatio'
 * '<S127>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Mode_Selection_Vector/Priority_Assignment/HeatPumpRatio/KtTPDR_r_HeatPumpRatio'
 * '<S128>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Battery_Request_Check'
 * '<S129>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check'
 * '<S130>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Engine_Conditioning_Check'
 * '<S131>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Battery_Request_Check/Enumerated Value1'
 * '<S132>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Battery_Request_Check/Enumerated Value2'
 * '<S133>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Battery_Request_Check/Enumerated Value3'
 * '<S134>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Battery_Request_Check/KeTPDR_b_BattCoolReqOvrrd'
 * '<S135>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/KeTPDR_b_OvrrdCabNotAllow4Pwr'
 * '<S136>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/KeTPDR_b_SetCabHeatAllw_4BattHeatAllw'
 * '<S137>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/Set Block'
 * '<S138>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/Set Block1'
 * '<S139>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/Set Block2'
 * '<S140>' : 'TPDR_ac/TPDR_MedTEH/Power_Distribution/Power_Requests_Inspection/Cabin_Request_Check/Set Block3'
 * '<S141>' : 'TPDR_ac/TPDR_PwrOn/Sub_Out_Init'
 */
#endif                                 /* RTW_HEADER_TPDR_ac_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
