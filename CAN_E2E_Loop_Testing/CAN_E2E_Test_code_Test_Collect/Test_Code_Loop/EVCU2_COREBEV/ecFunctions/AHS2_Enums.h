/*
* File: AHS2_Enums.h
* Date:07-Apr-2024
*/

#include "rtwtypes.h"

/*
* Enum TeAADR_e_AAD_Calibration_Sts 
* Default Value:CeAADR_e_AAD_Calibrated 
*/
#ifndef TeAADR_e_AAD_Calibration_Sts
typedef uint8 TeAADR_e_AAD_Calibration_Sts;
#define CeAADR_e_AAD_Calibrated		((TeAADR_e_AAD_Calibration_Sts)0U)
#define CeAADR_e_AAD_NotCalibrated		((TeAADR_e_AAD_Calibration_Sts)1U)
#endif

/*
* Enum TeAADR_e_AAD_EOLCalibration 
* Default Value:CeAADR_e_AAD_CalInProgress 
*/
#ifndef TeAADR_e_AAD_EOLCalibration
typedef uint8 TeAADR_e_AAD_EOLCalibration;
#define CeAADR_e_AAD_CalInProgress		((TeAADR_e_AAD_EOLCalibration)0U)
#define CeAADR_e_AAD_CalFailed		((TeAADR_e_AAD_EOLCalibration)1U)
#define CeAADR_e_AAD_CalPassed		((TeAADR_e_AAD_EOLCalibration)2U)
#endif

/*
* Enum TeAADR_e_AAD_Pos 
* Default Value:CeAADR_e_SNA 
*/
#ifndef TeAADR_e_AAD_Pos
typedef uint8 TeAADR_e_AAD_Pos;
#define CeAADR_e_Deploy100		((TeAADR_e_AAD_Pos)0U)
#define CeAADR_e_Deploy89		((TeAADR_e_AAD_Pos)1U)
#define CeAADR_e_Deploy77		((TeAADR_e_AAD_Pos)2U)
#define CeAADR_e_Deploy66		((TeAADR_e_AAD_Pos)3U)
#define CeAADR_e_Deploy55		((TeAADR_e_AAD_Pos)4U)
#define CeAADR_e_Deploy44		((TeAADR_e_AAD_Pos)5U)
#define CeAADR_e_Deploy33		((TeAADR_e_AAD_Pos)6U)
#define CeAADR_e_Deploy22		((TeAADR_e_AAD_Pos)7U)
#define CeAADR_e_Deploy11		((TeAADR_e_AAD_Pos)8U)
#define CeAADR_e_Deploy0		((TeAADR_e_AAD_Pos)9U)
#define CeAADR_e_Unused1		((TeAADR_e_AAD_Pos)10U)
#define CeAADR_e_Unused2		((TeAADR_e_AAD_Pos)11U)
#define CeAADR_e_Unused3		((TeAADR_e_AAD_Pos)12U)
#define CeAADR_e_Unused4		((TeAADR_e_AAD_Pos)13U)
#define CeAADR_e_Unused5		((TeAADR_e_AAD_Pos)14U)
#define CeAADR_e_SNA		((TeAADR_e_AAD_Pos)15U)
#endif

/*
* Enum TeAATR_e_AmbAirTempSource 
* Default Value:CeAATR_e_AmbAirTemp_Dflt 
*/
#ifndef TeAATR_e_AmbAirTempSource
typedef uint8 TeAATR_e_AmbAirTempSource;
#define CeAATR_e_AmbAirTemp_Dflt		((TeAATR_e_AmbAirTempSource)0U)
#define CeAATR_e_AmbAirTemp_CBC		((TeAATR_e_AmbAirTempSource)1U)
#define CeAATR_e_AmbAirTemp_ECM		((TeAATR_e_AmbAirTempSource)2U)
#define CeAATR_e_AmbAirTemp_SCP_Inlet		((TeAATR_e_AmbAirTempSource)3U)
#define CeAATR_e_AmbAirTemp_SCP_DCPstvTemp		((TeAATR_e_AmbAirTempSource)4U)
#define CeAATR_e_AmbAirTemp_SCP_DCNegtvTemp		((TeAATR_e_AmbAirTempSource)5U)
#endif

/*
* Enum TeAATR_e_AmbSnsr 
* Default Value:CeAATR_e_CBC 
*/
#ifndef TeAATR_e_AmbSnsr
typedef uint8 TeAATR_e_AmbSnsr;
#define CeAATR_e_CBC		((TeAATR_e_AmbSnsr)1U)
#define CeAATR_e_SCP_Inlet		((TeAATR_e_AmbSnsr)2U)
#define CeAATR_e_SCP_DC_Pos_Temps		((TeAATR_e_AmbSnsr)3U)
#define CeAATR_e_SCP_DC_Neg_Temps		((TeAATR_e_AmbSnsr)4U)
#endif

/*
* Enum TeAATR_e_CBC_AmbientAirVoltSrc 
* Default Value:CeAATR_e_CBC_AmbVoltSrc_Dflt 
*/
#ifndef TeAATR_e_CBC_AmbientAirVoltSrc
typedef uint8 TeAATR_e_CBC_AmbientAirVoltSrc;
#define CeAATR_e_CBC_AmbVoltSrc_Dflt		((TeAATR_e_CBC_AmbientAirVoltSrc)1U)
#define CeAATR_e_CBC_AmbVoltSrc_PkeOut		((TeAATR_e_CBC_AmbientAirVoltSrc)2U)
#define CeAATR_e_CBC_AmbVoltSrc_FsOut		((TeAATR_e_CBC_AmbientAirVoltSrc)3U)
#define CeAATR_e_CBC_AmbVoltSrc_TmOut		((TeAATR_e_CBC_AmbientAirVoltSrc)4U)
#endif

/*
* Enum TeAATR_e_PlgInTimer_CalSet 
* Default Value:CeAATR_e_InitTime 
*/
#ifndef TeAATR_e_PlgInTimer_CalSet
typedef uint8 TeAATR_e_PlgInTimer_CalSet;
#define CeAATR_e_InitTime		((TeAATR_e_PlgInTimer_CalSet)0U)
#define CeAATR_e_LongTime		((TeAATR_e_PlgInTimer_CalSet)2U)
#define CeAATR_e_ShrtTime		((TeAATR_e_PlgInTimer_CalSet)1U)
#endif

/*
* Enum TeAATR_e_RatThrLvl 
* Default Value:CeAATR_e_LessThr 
*/
#ifndef TeAATR_e_RatThrLvl
typedef uint8 TeAATR_e_RatThrLvl;
#define CeAATR_e_LessThr		((TeAATR_e_RatThrLvl)1U)
#define CeAATR_e_MedThr		((TeAATR_e_RatThrLvl)2U)
#define CeAATR_e_MaxThr		((TeAATR_e_RatThrLvl)3U)
#endif

/*
* Enum TeAATR_e_Rat_Level 
* Default Value:CeAATR_e_Thr1 
*/
#ifndef TeAATR_e_Rat_Level
typedef uint8 TeAATR_e_Rat_Level;
#define CeAATR_e_Thr1		((TeAATR_e_Rat_Level)1U)
#define CeAATR_e_Thr2		((TeAATR_e_Rat_Level)2U)
#define CeAATR_e_Thr3		((TeAATR_e_Rat_Level)3U)
#define CeAATR_e_Thr4		((TeAATR_e_Rat_Level)4U)
#define CeAATR_e_Thr5		((TeAATR_e_Rat_Level)5U)
#define CeAATR_e_Thr6		((TeAATR_e_Rat_Level)6U)
#define CeAATR_e_Thr7		((TeAATR_e_Rat_Level)7U)
#endif

/*
* Enum TeACCR_e_BatteryThermalFault 
* Default Value:CeACCR_e_BattThermalNoFault 
*/
#ifndef TeACCR_e_BatteryThermalFault
typedef uint8 TeACCR_e_BatteryThermalFault;
#define CeACCR_e_BattThermalNoFault		((TeACCR_e_BatteryThermalFault)0U)
#define CeACCR_e_BattThermalCompFault		((TeACCR_e_BatteryThermalFault)1U)
#endif

/*
* Enum TeACCR_e_CompFltSts 
* Default Value:CeACCR_e_CompFltSts_NoFault 
*/
#ifndef TeACCR_e_CompFltSts
typedef uint8 TeACCR_e_CompFltSts;
#define CeACCR_e_CompFltSts_NoFault		((TeACCR_e_CompFltSts)0U)
#define CeACCR_e_CompFltSts_UdrVltg		((TeACCR_e_CompFltSts)1U)
#define CeACCR_e_CompFltSts_OvrVltg		((TeACCR_e_CompFltSts)2U)
#define CeACCR_e_CompFltSts_OvrTmp		((TeACCR_e_CompFltSts)3U)
#define CeACCR_e_CompFltSts_InputCtlr		((TeACCR_e_CompFltSts)4U)
#define CeACCR_e_CompFltSts_CrntFlty		((TeACCR_e_CompFltSts)5U)
#define CeACCR_e_CompFltSts_InternFlt		((TeACCR_e_CompFltSts)6U)
#define CeACCR_e_CompFltSts_MemoryFlty		((TeACCR_e_CompFltSts)7U)
#define CeACCR_e_CompFltSts_Rotor_Lock		((TeACCR_e_CompFltSts)8U)
#define CeACCR_e_CompFltSts_LOC_with_HCP		((TeACCR_e_CompFltSts)9U)
#define CeACCR_e_CompFltSts_LOC_with_ORC		((TeACCR_e_CompFltSts)10U)
#define CeACCR_e_CompFltSts_SNA		((TeACCR_e_CompFltSts)15U)
#endif

/*
* Enum TeACCR_e_CompStat 
* Default Value:CeACCR_e_NormalOp 
*/
#ifndef TeACCR_e_CompStat
typedef uint8 TeACCR_e_CompStat;
#define CeACCR_e_NormalOp		((TeACCR_e_CompStat)0U)
#define CeACCR_e_Degraded		((TeACCR_e_CompStat)1U)
#define CeACCR_e_Inoperative		((TeACCR_e_CompStat)2U)
#endif

/*
* Enum TeACCR_e_CompSpdTgt_IO_CntrlSt_AD 
* Default Value:CeACCR_e_Return_Control_to_ECU 
*/
#ifndef TeACCR_e_CompSpdTgt_IO_CntrlSt_AD
typedef uint8 TeACCR_e_CompSpdTgt_IO_CntrlSt_AD;
#define CeACCR_e_Return_Control_to_ECU		((TeACCR_e_CompSpdTgt_IO_CntrlSt_AD)0U)
#define CeACCR_e_Reset_to_Default		((TeACCR_e_CompSpdTgt_IO_CntrlSt_AD)1U)
#define CeACCR_e_Short_Term_Adjustment		((TeACCR_e_CompSpdTgt_IO_CntrlSt_AD)3U)
#endif

/*
* Enum TeACCR_e_AC_CompEnb 
* Default Value:CeACCR_e_ACComp_Enable 
*/
#ifndef TeACCR_e_AC_CompEnb
typedef uint8 TeACCR_e_AC_CompEnb;
#define CeACCR_e_ACComp_Disable		((TeACCR_e_AC_CompEnb)0U)
#define CeACCR_e_ACComp_Enable		((TeACCR_e_AC_CompEnb)1U)
#define CeACCR_e_ACComp_SNA		((TeACCR_e_AC_CompEnb)3U)
#endif

/*
* Enum TeACCR_e_BattDischg_State 
* Default Value:CeACCR_e_No_Dischrg 
*/
#ifndef TeACCR_e_BattDischg_State
typedef uint8 TeACCR_e_BattDischg_State;
#define CeACCR_e_No_Dischrg		((TeACCR_e_BattDischg_State)0U)
#define CeACCR_e_Dischrg_BatTempCriticl		((TeACCR_e_BattDischg_State)1U)
#define CeACCR_e_Dischrg_BatTempNotOpt		((TeACCR_e_BattDischg_State)2U)
#define CeACCR_e_Dischrg_AmbTempLow		((TeACCR_e_BattDischg_State)3U)
#define CeACCR_e_Dischrg_ForcBatCool_Hys		((TeACCR_e_BattDischg_State)4U)
#define CeACCR_e_Dischrg_CabReqPrsnt		((TeACCR_e_BattDischg_State)5U)
#define CeACCR_e_Dischrg_BatAndCab_Cndtn		((TeACCR_e_BattDischg_State)6U)
#define CeACCR_e_Dischrg_ForcBatHeat_Hys		((TeACCR_e_BattDischg_State)7U)
#define CeACCR_e_Dischrg_CabReqInOV		((TeACCR_e_BattDischg_State)8U)
#define CeACCR_e_NoValidReq		((TeACCR_e_BattDischg_State)255U)
#endif

/*
* Enum TeADAR_e_ActuationStatus 
* Default Value:CeADAR_e_SS_Indeterminate 
*/
#ifndef TeADAR_e_ActuationStatus
typedef uint8 TeADAR_e_ActuationStatus;
#define CeADAR_e_SS_Indeterminate		((TeADAR_e_ActuationStatus)0U)
#define CeADAR_e_SS_Open		((TeADAR_e_ActuationStatus)1U)
#define CeADAR_e_WEDOpening		((TeADAR_e_ActuationStatus)2U)
#define CeADAR_e_WEDClosing		((TeADAR_e_ActuationStatus)3U)
#define CeADAR_e_SS_Closed		((TeADAR_e_ActuationStatus)4U)
#endif

/*
* Enum TeADAR_e_ActuationCmndStates 
* Default Value:CeADAR_e_Indeterminate 
*/
#ifndef TeADAR_e_ActuationCmndStates
typedef uint8 TeADAR_e_ActuationCmndStates;
#define CeADAR_e_ActuateOpening		((TeADAR_e_ActuationCmndStates)0U)
#define CeADAR_e_OpeningWithHold		((TeADAR_e_ActuationCmndStates)1U)
#define CeADAR_e_ActuateClosing		((TeADAR_e_ActuationCmndStates)2U)
#define CeADAR_e_ClosingWithHold		((TeADAR_e_ActuationCmndStates)3U)
#define CeADAR_e_SSOpened		((TeADAR_e_ActuationCmndStates)4U)
#define CeADAR_e_SSClosed		((TeADAR_e_ActuationCmndStates)5U)
#define CeADAR_e_Indeterminate		((TeADAR_e_ActuationCmndStates)6U)
#endif

/*
* Enum TeADAR_e_ActuationStages 
* Default Value:CeADAR_e_OpnAtEndStp 
*/
#ifndef TeADAR_e_ActuationStages
typedef uint8 TeADAR_e_ActuationStages;
#define CeADAR_e_OpnAtEndStp		((TeADAR_e_ActuationStages)0U)
#define CeADAR_e_ClsngPreTthAbtmnt		((TeADAR_e_ActuationStages)1U)
#define CeADAR_e_ClsngTthAbtmnt		((TeADAR_e_ActuationStages)2U)
#define CeADAR_e_ClsngTorqTrap		((TeADAR_e_ActuationStages)3U)
#define CeADAR_e_ClsngHldAtEndStp		((TeADAR_e_ActuationStages)4U)
#define CeADAR_e_ClsdAtEndStp		((TeADAR_e_ActuationStages)5U)
#define CeADAR_e_OpngTorqTrap		((TeADAR_e_ActuationStages)6U)
#define CeADAR_e_OpngPstTorqTrap		((TeADAR_e_ActuationStages)7U)
#define CeADAR_e_OpngSoftLanding		((TeADAR_e_ActuationStages)9U)
#define CeADAR_e_OpngHldAtEndStp		((TeADAR_e_ActuationStages)8U)
#endif

/*
* Enum TeADAR_e_WEDID 
* Default Value:CeADAR_e_LeftWED 
*/
#ifndef TeADAR_e_WEDID
typedef uint8 TeADAR_e_WEDID;
#define CeADAR_e_LeftWED		((TeADAR_e_WEDID)0U)
#define CeADAR_e_RightWED		((TeADAR_e_WEDID)1U)
#define CeADAR_e_BothWED		((TeADAR_e_WEDID)2U)
#endif

/*
* Enum TeADAR_e_CurrntProtectionStatus 
* Default Value:CeADAR_e_NormalActuation 
*/
#ifndef TeADAR_e_CurrntProtectionStatus
typedef uint8 TeADAR_e_CurrntProtectionStatus;
#define CeADAR_e_NormalActuation		((TeADAR_e_CurrntProtectionStatus)0U)
#define CeADAR_e_CoolDownSteadyStates		((TeADAR_e_CurrntProtectionStatus)1U)
#define CeADAR_e_CoolDownActuation		((TeADAR_e_CurrntProtectionStatus)2U)
#endif

/*
* Enum TeADCR_e_AWDClchStat 
* Default Value:CeADCR_e_Released 
*/
#ifndef TeADCR_e_AWDClchStat
typedef uint8 TeADCR_e_AWDClchStat;
#define CeADCR_e_Released		((TeADCR_e_AWDClchStat)0U)
#define CeADCR_e_Synched		((TeADCR_e_AWDClchStat)1U)
#define CeADCR_e_Locked		((TeADCR_e_AWDClchStat)2U)
#endif

/*
* Enum TeADCR_e_WEDPriority 
* Default Value:CeADCR_e_WEDLeft 
*/
#ifndef TeADCR_e_WEDPriority
typedef uint8 TeADCR_e_WEDPriority;
#define CeADCR_e_WEDLeft		((TeADCR_e_WEDPriority)0U)
#define CeADCR_e_WEDRight		((TeADCR_e_WEDPriority)1U)
#define CeADCR_e_WEDSimultaneous		((TeADCR_e_WEDPriority)2U)
#endif

/*
* Enum TeADCR_e_WEDStatus 
* Default Value:CeADCR_e_Init 
*/
#ifndef TeADCR_e_WEDStatus
typedef uint8 TeADCR_e_WEDStatus;
#define CeADCR_e_Init		((TeADCR_e_WEDStatus)0U)
#define CeADCR_e_Open		((TeADCR_e_WEDStatus)1U)
#define CeADCR_e_Opening		((TeADCR_e_WEDStatus)2U)
#define CeADCR_e_Closing		((TeADCR_e_WEDStatus)3U)
#define CeADCR_e_Closed		((TeADCR_e_WEDStatus)4U)
#endif

/*
* Enum TeADCR_e_WEDActnCmnd 
* Default Value:CeADCR_e_NoCmnd 
*/
#ifndef TeADCR_e_WEDActnCmnd
typedef uint8 TeADCR_e_WEDActnCmnd;
#define CeADCR_e_NoCmnd		((TeADCR_e_WEDActnCmnd)0U)
#define CeADCR_e_CmndClsd		((TeADCR_e_WEDActnCmnd)1U)
#define CeADCR_e_CmndOpen		((TeADCR_e_WEDActnCmnd)2U)
#endif

/*
* Enum TeADCR_e_AWDReq 
* Default Value:CeADCR_e_ReqOpt 
*/
#ifndef TeADCR_e_AWDReq
typedef uint8 TeADCR_e_AWDReq;
#define CeADCR_e_ReqOpt		((TeADCR_e_AWDReq)0U)
#define CeADCR_e_ForceClosed		((TeADCR_e_AWDReq)1U)
#define CeADCR_e_ForceOpen		((TeADCR_e_AWDReq)2U)
#endif

/*
* Enum TeADCR_e_AWDDiscSt 
* Default Value:CeADCR_e_AWDInit 
*/
#ifndef TeADCR_e_AWDDiscSt
typedef uint8 TeADCR_e_AWDDiscSt;
#define CeADCR_e_AWDInit		((TeADCR_e_AWDDiscSt)0U)
#define CeADCR_e_AWDOpen		((TeADCR_e_AWDDiscSt)1U)
#define CeADCR_e_AWDModeX		((TeADCR_e_AWDDiscSt)2U)
#define CeADCR_e_AWDModeY		((TeADCR_e_AWDDiscSt)3U)
#define CeADCR_e_AWDLocked		((TeADCR_e_AWDDiscSt)4U)
#define CeADCR_e_AWDOpenToModeX		((TeADCR_e_AWDDiscSt)5U)
#define CeADCR_e_AWDOpenToModeY		((TeADCR_e_AWDDiscSt)6U)
#define CeADCR_e_AWDOpenToLocked		((TeADCR_e_AWDDiscSt)7U)
#define CeADCR_e_AWDOpen_All		((TeADCR_e_AWDDiscSt)8U)
#define CeADCR_e_AWDModeXToModeY		((TeADCR_e_AWDDiscSt)9U)
#define CeADCR_e_AWDModeXToLocked		((TeADCR_e_AWDDiscSt)10U)
#define CeADCR_e_AWDModeYToModeX		((TeADCR_e_AWDDiscSt)11U)
#define CeADCR_e_AWDModeYToLocked		((TeADCR_e_AWDDiscSt)12U)
#endif

/*
* Enum TeADCR_e_WEDStGrp 
* Default Value:CeADCR_e_WEDInit_Group 
*/
#ifndef TeADCR_e_WEDStGrp
typedef uint8 TeADCR_e_WEDStGrp;
#define CeADCR_e_WEDInit_Group		((TeADCR_e_WEDStGrp)0U)
#define CeADCR_e_WEDClosing_Group		((TeADCR_e_WEDStGrp)1U)
#define CeADCR_e_WEDOpening_Group		((TeADCR_e_WEDStGrp)2U)
#define CeADCR_e_WEDSteadyState_Group		((TeADCR_e_WEDStGrp)3U)
#endif

/*
* Enum TeADCR_e_AWDDiscSlipSpdEqn 
* Default Value:CeADCR_e_AWDDiscSlipSpdEqnOpen 
*/
#ifndef TeADCR_e_AWDDiscSlipSpdEqn
typedef uint8 TeADCR_e_AWDDiscSlipSpdEqn;
#define CeADCR_e_AWDDiscSlipSpdEqnOpen		((TeADCR_e_AWDDiscSlipSpdEqn)0U)
#define CeADCR_e_AWDDiscSlipSpdEqnMX		((TeADCR_e_AWDDiscSlipSpdEqn)1U)
#define CeADCR_e_AWDDiscSlipSpdEqnMY		((TeADCR_e_AWDDiscSlipSpdEqn)2U)
#define CeADCR_e_AWDDiscSlipSpdEqnLocked		((TeADCR_e_AWDDiscSlipSpdEqn)3U)
#endif

/*
* Enum TeADCR_e_AWDSysStat 
* Default Value:CeADCR_e_TwoWheelDrive 
*/
#ifndef TeADCR_e_AWDSysStat
typedef uint8 TeADCR_e_AWDSysStat;
#define CeADCR_e_TwoWheelDrive		((TeADCR_e_AWDSysStat)0U)
#define CeADCR_e_AllWheelDrive		((TeADCR_e_AWDSysStat)1U)
#define CeADCR_e_ReservedSysStat		((TeADCR_e_AWDSysStat)2U)
#define CeADCR_e_SNA		((TeADCR_e_AWDSysStat)3U)
#endif

/*
* Enum TeADCR_e_AWDDiscProfEqn 
* Default Value:CeADCR_e_AWDDiscProfEqnTgtZero 
*/
#ifndef TeADCR_e_AWDDiscProfEqn
typedef uint8 TeADCR_e_AWDDiscProfEqn;
#define CeADCR_e_AWDDiscProfEqnTgtZero		((TeADCR_e_AWDDiscProfEqn)0U)
#define CeADCR_e_AWDDiscProfEqnTgtClchX		((TeADCR_e_AWDDiscProfEqn)1U)
#define CeADCR_e_AWDDiscProfEqnTgtClchY		((TeADCR_e_AWDDiscProfEqn)2U)
#define CeADCR_e_AWDDiscProfEqnTgtAvg		((TeADCR_e_AWDDiscProfEqn)3U)
#define CeADCR_e_AWDDiscProfEqnInactive		((TeADCR_e_AWDDiscProfEqn)4U)
#endif

/*
* Enum TeADCR_e_AWDReqArb 
* Default Value:CeADCR_e_AWDReqArb_NoArb 
*/
#ifndef TeADCR_e_AWDReqArb
typedef uint8 TeADCR_e_AWDReqArb;
#define CeADCR_e_AWDReqArb_NoArb		((TeADCR_e_AWDReqArb)0U)
#define CeADCR_e_AWDReqArb_VehSpdHigh_A		((TeADCR_e_AWDReqArb)1U)
#define CeADCR_e_AWDReqArb_VehSpdHigh_B		((TeADCR_e_AWDReqArb)2U)
#define CeADCR_e_AWDReqArb_VehSpdLow		((TeADCR_e_AWDReqArb)3U)
#define CeADCR_e_AWDReqArb_BSM		((TeADCR_e_AWDReqArb)4U)
#define CeADCR_e_AWDReqArb_VehDyn		((TeADCR_e_AWDReqArb)5U)
#endif

/*
* Enum TeADCR_e_WEDCmndState 
* Default Value:CeADCR_e_WEDCmndInit 
*/
#ifndef TeADCR_e_WEDCmndState
typedef uint8 TeADCR_e_WEDCmndState;
#define CeADCR_e_WEDCmndInit		((TeADCR_e_WEDCmndState)0U)
#define CeADCR_e_SSOpen		((TeADCR_e_WEDCmndState)1U)
#define CeADCR_e_ActuateOpen		((TeADCR_e_WEDCmndState)2U)
#define CeADCR_e_ActuateOpenForRetry		((TeADCR_e_WEDCmndState)3U)
#define CeADCR_e_StuckInMiddle		((TeADCR_e_WEDCmndState)4U)
#define CeADCR_e_ActuateClosedForRetry		((TeADCR_e_WEDCmndState)5U)
#define CeADCR_e_ActuateClosed		((TeADCR_e_WEDCmndState)6U)
#define CeADCR_e_SSClosed		((TeADCR_e_WEDCmndState)7U)
#define CeADCR_e_UnintentedOpen		((TeADCR_e_WEDCmndState)8U)
#define CeADCR_e_WgglActuateOpen		((TeADCR_e_WEDCmndState)9U)
#define CeADCR_e_WgglClosed		((TeADCR_e_WEDCmndState)10U)
#define CeADCR_e_WgglActuateClosed		((TeADCR_e_WEDCmndState)11U)
#endif

/*
* Enum TeADIR_e_WEDRetryDiagState 
* Default Value:CeADIR_e_DiagActive 
*/
#ifndef TeADIR_e_WEDRetryDiagState
typedef uint8 TeADIR_e_WEDRetryDiagState;
#define CeADIR_e_DiagActive		((TeADIR_e_WEDRetryDiagState)0U)
#define CeADIR_e_WaitForSSClosed		((TeADIR_e_WEDRetryDiagState)1U)
#define CeADIR_e_WaitForSSOpen		((TeADIR_e_WEDRetryDiagState)2U)
#define CeADIR_e_TestPassed		((TeADIR_e_WEDRetryDiagState)3U)
#define CeADIR_e_TestFailed		((TeADIR_e_WEDRetryDiagState)4U)
#endif

/*
* Enum TeADIR_e_WEDFailureDiagState 
* Default Value:CeADIR_e_BrkgDiag_Init 
*/
#ifndef TeADIR_e_WEDFailureDiagState
typedef uint8 TeADIR_e_WEDFailureDiagState;
#define CeADIR_e_BrkgDiag_Init		((TeADIR_e_WEDFailureDiagState)0U)
#define CeADIR_e_BrknOpnDiag_Active		((TeADIR_e_WEDFailureDiagState)1U)
#define CeADIR_e_BrknOpnDiag_Standby		((TeADIR_e_WEDFailureDiagState)2U)
#define CeADIR_e_BrknClsdDiag_Wait		((TeADIR_e_WEDFailureDiagState)3U)
#define CeADIR_e_BrknClsdDiag_Active		((TeADIR_e_WEDFailureDiagState)4U)
#define CeADIR_e_BrknClsdDiag_Standby		((TeADIR_e_WEDFailureDiagState)5U)
#endif

/*
* Enum TeADIR_e_WEDFailureSts 
* Default Value:CeADIR_e_BreakageNotTested 
*/
#ifndef TeADIR_e_WEDFailureSts
typedef uint8 TeADIR_e_WEDFailureSts;
#define CeADIR_e_BreakageNotTested		((TeADIR_e_WEDFailureSts)0U)
#define CeADIR_e_NoBreakage		((TeADIR_e_WEDFailureSts)1U)
#define CeADIR_e_BrokenOpen		((TeADIR_e_WEDFailureSts)2U)
#define CeADIR_e_BrokenClosed		((TeADIR_e_WEDFailureSts)3U)
#endif

/*
* Enum TeADIR_e_WEDExtToolCmd 
* Default Value:CeADIR_e_ECUNormalControl 
*/
#ifndef TeADIR_e_WEDExtToolCmd
typedef uint8 TeADIR_e_WEDExtToolCmd;
#define CeADIR_e_ECUNormalControl		((TeADIR_e_WEDExtToolCmd)0U)
#define CeADIR_e_Engage		((TeADIR_e_WEDExtToolCmd)1U)
#define CeADIR_e_Disengage		((TeADIR_e_WEDExtToolCmd)2U)
#define CeADIR_e_Reserved		((TeADIR_e_WEDExtToolCmd)3U)
#endif

/*
* Enum TeAECR_e_PopUpMessage 
* Default Value:CeAECR_e_MaxRegenOff 
*/
#ifndef TeAECR_e_PopUpMessage
typedef uint8 TeAECR_e_PopUpMessage;
#define CeAECR_e_MaxRegenOff		((TeAECR_e_PopUpMessage)0U)
#define CeAECR_e_MaxRegenOn		((TeAECR_e_PopUpMessage)1U)
#define CeAECR_e_MaxRegenUnavailable		((TeAECR_e_PopUpMessage)2U)
#define CeAECR_e_MaxRegenND		((TeAECR_e_PopUpMessage)3U)
#endif

/*
* Enum TeAECR_e_Telltale 
* Default Value:CeAECR_e_TelltaleOff 
*/
#ifndef TeAECR_e_Telltale
typedef uint8 TeAECR_e_Telltale;
#define CeAECR_e_TelltaleOff		((TeAECR_e_Telltale)0U)
#define CeAECR_e_TelltaleWhite		((TeAECR_e_Telltale)1U)
#define CeAECR_e_TelltaleGreen		((TeAECR_e_Telltale)2U)
#define CeAECR_e_TelltaleND		((TeAECR_e_Telltale)3U)
#endif

/*
* Enum TeAECR_e_LEDCmd 
* Default Value:CeAECR_e_LEDOff 
*/
#ifndef TeAECR_e_LEDCmd
typedef uint8 TeAECR_e_LEDCmd;
#define CeAECR_e_LEDOff		((TeAECR_e_LEDCmd)0U)
#define CeAECR_e_LEDCont		((TeAECR_e_LEDCmd)1U)
#define CeAECR_e_LEDBlink		((TeAECR_e_LEDCmd)2U)
#define CeAECR_e_LEDND		((TeAECR_e_LEDCmd)3U)
#endif

/*
* Enum TeAECR_e_MaxRegenDsrdSt 
* Default Value:CeAECR_e_MaxRegenDsrdFault 
*/
#ifndef TeAECR_e_MaxRegenDsrdSt
typedef uint8 TeAECR_e_MaxRegenDsrdSt;
#define CeAECR_e_MaxRegenDsrdStActive		((TeAECR_e_MaxRegenDsrdSt)0U)
#define CeAECR_e_MaxRegenDsrdNotActive		((TeAECR_e_MaxRegenDsrdSt)1U)
#define CeAECR_e_MaxRegenDsrdFault		((TeAECR_e_MaxRegenDsrdSt)2U)
#endif

/*
* Enum TeAECR_e_AeCoastSt 
* Default Value:CeAECR_e_AeCoastStNotActive 
*/
#ifndef TeAECR_e_AeCoastSt
typedef uint8 TeAECR_e_AeCoastSt;
#define CeAECR_e_AeCoastStActiveEEPROM		((TeAECR_e_AeCoastSt)0U)
#define CeAECR_e_AeCoastStNotActiveEEPROM		((TeAECR_e_AeCoastSt)1U)
#define CeAECR_e_AeCoastStFaultEEPROM		((TeAECR_e_AeCoastSt)2U)
#define CeAECR_e_AeCoastStActive		((TeAECR_e_AeCoastSt)3U)
#define CeAECR_e_AeCoastStNotActive		((TeAECR_e_AeCoastSt)4U)
#define CeAECR_e_AeCoastStOnHold		((TeAECR_e_AeCoastSt)5U)
#define CeAECR_e_AeCoastStLatchTerrainFault		((TeAECR_e_AeCoastSt)6U)
#define CeAECR_e_AeCoastStImpSkidActive		((TeAECR_e_AeCoastSt)7U)
#define CeAECR_e_AeCoastStImpSkidNotActive		((TeAECR_e_AeCoastSt)8U)
#endif

/*
* Enum TeAECR_e_Aecoasting_Status 
* Default Value:CeAECR_e_AecoastingTemporarily_Unavailable 
*/
#ifndef TeAECR_e_Aecoasting_Status
typedef uint8 TeAECR_e_Aecoasting_Status;
#define CeAECR_e_AecoastingFaulted		((TeAECR_e_Aecoasting_Status)0U)
#define CeAECR_e_AecoastingTemporarily_Unavailable		((TeAECR_e_Aecoasting_Status)1U)
#define CeAECR_e_AecoastingAvailable		((TeAECR_e_Aecoasting_Status)2U)
#define CeAECR_e_AecoastingActive		((TeAECR_e_Aecoasting_Status)3U)
#endif

/*
* Enum TeAPMR_e_SysState 
* Default Value:CeAPMR_e_Init 
*/
#ifndef TeAPMR_e_SysState
typedef uint8 TeAPMR_e_SysState;
#define CeAPMR_e_Init		((TeAPMR_e_SysState)1U)
#define CeAPMR_e_Wakeup		((TeAPMR_e_SysState)2U)
#define CeAPMR_e_Run		((TeAPMR_e_SysState)3U)
#define CeAPMR_e_PostRun		((TeAPMR_e_SysState)5U)
#define CeAPMR_e_Shutdown		((TeAPMR_e_SysState)6U)
#define CeAPMR_e_Run_Charging		((TeAPMR_e_SysState)4U)
#endif

/*
* Enum TeAPMR_e_ModeReq 
* Default Value:CeAPMR_e_WakeupMode 
*/
#ifndef TeAPMR_e_ModeReq
typedef uint8 TeAPMR_e_ModeReq;
#define CeAPMR_e_WakeupMode		((TeAPMR_e_ModeReq)4U)
#define CeAPMR_e_RunMode		((TeAPMR_e_ModeReq)1U)
#define CeAPMR_e_PostRunMode		((TeAPMR_e_ModeReq)0U)
#define CeAPMR_e_ShutdownMode		((TeAPMR_e_ModeReq)2U)
#define CeAPMR_e_StartupMode		((TeAPMR_e_ModeReq)3U)
#endif

/*
* Enum TeAPMR_e_CommStatus 
* Default Value:CeAPMR_e_NoComm 
*/
#ifndef TeAPMR_e_CommStatus
typedef uint8 TeAPMR_e_CommStatus;
#define CeAPMR_e_NoComm		((TeAPMR_e_CommStatus)0U)
#define CeAPMR_e_SilentComm		((TeAPMR_e_CommStatus)1U)
#define CeAPMR_e_FullComm		((TeAPMR_e_CommStatus)2U)
#endif

/*
* Enum TeAPMR_e_NvMStatus 
* Default Value:CeAPMR_e_Pending 
*/
#ifndef TeAPMR_e_NvMStatus
typedef uint8 TeAPMR_e_NvMStatus;
#define CeAPMR_e_Ok		((TeAPMR_e_NvMStatus)0U)
#define CeAPMR_e_Not_Ok		((TeAPMR_e_NvMStatus)1U)
#define CeAPMR_e_Pending		((TeAPMR_e_NvMStatus)2U)
#define CeAPMR_e_Integrity_Failed		((TeAPMR_e_NvMStatus)3U)
#define CeAPMR_e_Block_Skipped		((TeAPMR_e_NvMStatus)4U)
#define CeAPMR_e_NV_invalidated		((TeAPMR_e_NvMStatus)5U)
#define CeAPMR_e_Canceled		((TeAPMR_e_NvMStatus)6U)
#define CeAPMR_e_Redundancy_Failed		((TeAPMR_e_NvMStatus)7U)
#define CeAPMR_e_Restored_From_ROM		((TeAPMR_e_NvMStatus)8U)
#endif

/*
* Enum TeAPMR_e_HCPShutDwnCmd 
* Default Value:CeAPMR_e_Default 
*/
#ifndef TeAPMR_e_HCPShutDwnCmd
typedef uint8 TeAPMR_e_HCPShutDwnCmd;
#define CeAPMR_e_Default		((TeAPMR_e_HCPShutDwnCmd)0U)
#define CeAPMR_e_Initiate_Powerdown		((TeAPMR_e_HCPShutDwnCmd)1U)
#define CeAPMR_e_HCPShutdown		((TeAPMR_e_HCPShutDwnCmd)2U)
#define CeAPMR_e_CancelPowerdown		((TeAPMR_e_HCPShutDwnCmd)3U)
#define CeAPMR_e_SNA		((TeAPMR_e_HCPShutDwnCmd)7U)
#endif

/*
* Enum TeAPMR_e_EptLOC_DiagEnable 
* Default Value:CeAPMR_e_ePTLOC_Default 
*/
#ifndef TeAPMR_e_EptLOC_DiagEnable
typedef uint8 TeAPMR_e_EptLOC_DiagEnable;
#define CeAPMR_e_ePTLOC_Default		((TeAPMR_e_EptLOC_DiagEnable)0U)
#define CeAPMR_e_ENB_LOC_LIMIT		((TeAPMR_e_EptLOC_DiagEnable)1U)
#define CeAPMR_e_ENB_LOC		((TeAPMR_e_EptLOC_DiagEnable)2U)
#endif

/*
* Enum TeAPSR_e_Lv1PvMode 
* Default Value:CeAPSR_e_LV1PVMode_NotValid 
*/
#ifndef TeAPSR_e_Lv1PvMode
typedef uint8 TeAPSR_e_Lv1PvMode;
#define CeAPSR_e_LV1PVMode_PVOk		((TeAPSR_e_Lv1PvMode)1U)
#define CeAPSR_e_LV1PVMode_PV2Fail		((TeAPSR_e_Lv1PvMode)2U)
#define CeAPSR_e_LV1PVMode_PV1Fail		((TeAPSR_e_Lv1PvMode)3U)
#define CeAPSR_e_LV1PVMode_CohFail		((TeAPSR_e_Lv1PvMode)4U)
#define CeAPSR_e_LV1PVMode_NotValid		((TeAPSR_e_Lv1PvMode)5U)
#endif

/*
* Enum TeASLR_e_TSRSts 
* Default Value:CeASLR_e_TSRNotActive 
*/
#ifndef TeASLR_e_TSRSts
typedef uint8 TeASLR_e_TSRSts;
#define CeASLR_e_TSRNotActive		((TeASLR_e_TSRSts)0U)
#define CeASLR_e_TSRActive		((TeASLR_e_TSRSts)1U)
#define CeASLR_e_TSRBlinded		((TeASLR_e_TSRSts)2U)
#define CeASLR_e_TSRFaulted		((TeASLR_e_TSRSts)3U)
#endif

/*
* Enum TeASLR_e_DsplydSpdLimSts 
* Default Value:CeASLR_e_SignNotDetected 
*/
#ifndef TeASLR_e_DsplydSpdLimSts
typedef uint8 TeASLR_e_DsplydSpdLimSts;
#define CeASLR_e_SignNotDetected		((TeASLR_e_DsplydSpdLimSts)0U)
#define CeASLR_e_SpdLim05		((TeASLR_e_DsplydSpdLimSts)1U)
#define CeASLR_e_SpdLim10		((TeASLR_e_DsplydSpdLimSts)2U)
#define CeASLR_e_SpdLim15		((TeASLR_e_DsplydSpdLimSts)3U)
#define CeASLR_e_SpdLim20		((TeASLR_e_DsplydSpdLimSts)4U)
#define CeASLR_e_SpdLim25		((TeASLR_e_DsplydSpdLimSts)5U)
#define CeASLR_e_SpdLim30		((TeASLR_e_DsplydSpdLimSts)6U)
#define CeASLR_e_SpdLim35		((TeASLR_e_DsplydSpdLimSts)7U)
#define CeASLR_e_SpdLim40		((TeASLR_e_DsplydSpdLimSts)8U)
#define CeASLR_e_SpdLim45		((TeASLR_e_DsplydSpdLimSts)9U)
#define CeASLR_e_SpdLim50		((TeASLR_e_DsplydSpdLimSts)10U)
#define CeASLR_e_SpdLim55		((TeASLR_e_DsplydSpdLimSts)11U)
#define CeASLR_e_SpdLim60		((TeASLR_e_DsplydSpdLimSts)12U)
#define CeASLR_e_SpdLim65		((TeASLR_e_DsplydSpdLimSts)13U)
#define CeASLR_e_SpdLim70		((TeASLR_e_DsplydSpdLimSts)14U)
#define CeASLR_e_SpdLim75		((TeASLR_e_DsplydSpdLimSts)15U)
#define CeASLR_e_SpdLim80		((TeASLR_e_DsplydSpdLimSts)16U)
#define CeASLR_e_SpdLim85		((TeASLR_e_DsplydSpdLimSts)17U)
#define CeASLR_e_SpdLim90		((TeASLR_e_DsplydSpdLimSts)18U)
#define CeASLR_e_SpdLim95		((TeASLR_e_DsplydSpdLimSts)19U)
#define CeASLR_e_SpdLim100		((TeASLR_e_DsplydSpdLimSts)20U)
#define CeASLR_e_SpdLim105		((TeASLR_e_DsplydSpdLimSts)21U)
#define CeASLR_e_SpdLim110		((TeASLR_e_DsplydSpdLimSts)22U)
#define CeASLR_e_SpdLim115		((TeASLR_e_DsplydSpdLimSts)23U)
#define CeASLR_e_SpdLim120		((TeASLR_e_DsplydSpdLimSts)24U)
#define CeASLR_e_SpdLim125		((TeASLR_e_DsplydSpdLimSts)25U)
#define CeASLR_e_SpdLim130		((TeASLR_e_DsplydSpdLimSts)26U)
#define CeASLR_e_SpdLim135		((TeASLR_e_DsplydSpdLimSts)27U)
#define CeASLR_e_SpdLim140		((TeASLR_e_DsplydSpdLimSts)28U)
#define CeASLR_e_SpdLim145		((TeASLR_e_DsplydSpdLimSts)29U)
#define CeASLR_e_SpdLimUnlim		((TeASLR_e_DsplydSpdLimSts)62U)
#define CeASLR_e_EndSpdLim		((TeASLR_e_DsplydSpdLimSts)63U)
#endif

/*
* Enum TeASLR_e_HDC_Status 
* Default Value:CeASLR_e_HDC_UNAVL 
*/
#ifndef TeASLR_e_HDC_Status
typedef uint8 TeASLR_e_HDC_Status;
#define CeASLR_e_HDC_UNAVL		((TeASLR_e_HDC_Status)0U)
#define CeASLR_e_HDC_ACT		((TeASLR_e_HDC_Status)1U)
#define CeASLR_e_HDC_AVL		((TeASLR_e_HDC_Status)2U)
#define CeASLR_e_HDC_THRML_DEACT		((TeASLR_e_HDC_Status)3U)
#define CeASLR_e_HDC_OVERRIDE		((TeASLR_e_HDC_Status)4U)
#endif

/*
* Enum TeASMR_e_EngStrtStpMd 
* Default Value:CeASMR_e_Stop 
*/
#ifndef TeASMR_e_EngStrtStpMd
typedef uint8 TeASMR_e_EngStrtStpMd;
#define CeASMR_e_Stop		((TeASMR_e_EngStrtStpMd)0U)
#define CeASMR_e_ImmediateStop		((TeASMR_e_EngStrtStpMd)1U)
#define CeASMR_e_StartPending		((TeASMR_e_EngStrtStpMd)2U)
#define CeASMR_e_EnableFuel		((TeASMR_e_EngStrtStpMd)3U)
#define CeASMR_e_EngineTorqueStart		((TeASMR_e_EngStrtStpMd)4U)
#define CeASMR_e_ProducingTorque		((TeASMR_e_EngStrtStpMd)5U)
#define CeASMR_e_DisableFuel		((TeASMR_e_EngStrtStpMd)6U)
#define CeASMR_e_StopPending		((TeASMR_e_EngStrtStpMd)7U)
#define CeASMR_e_StartFailed		((TeASMR_e_EngStrtStpMd)8U)
#define CeASMR_e_CompressionTest		((TeASMR_e_EngStrtStpMd)9U)
#define CeASMR_e_SNA_Md		((TeASMR_e_EngStrtStpMd)15U)
#endif

/*
* Enum TeASMR_e_TransRangeState 
* Default Value:CeASMR_e_NoSelectionAvailable 
*/
#ifndef TeASMR_e_TransRangeState
typedef uint8 TeASMR_e_TransRangeState;
#define CeASMR_e_NoSelectionAvailable		((TeASMR_e_TransRangeState)0U)
#define CeASMR_e_TransRangePark		((TeASMR_e_TransRangeState)1U)
#define CeASMR_e_TransRangeReverse		((TeASMR_e_TransRangeState)2U)
#define CeASMR_e_TransRangeNeutral		((TeASMR_e_TransRangeState)3U)
#define CeASMR_e_TransRangeDrive		((TeASMR_e_TransRangeState)4U)
#define CeASMR_e_TransRangeDrive1		((TeASMR_e_TransRangeState)5U)
#define CeASMR_e_TransRangeDrive2		((TeASMR_e_TransRangeState)6U)
#define CeASMR_e_TransRangeDrive3		((TeASMR_e_TransRangeState)7U)
#define CeASMR_e_TransRangeDrive4		((TeASMR_e_TransRangeState)8U)
#define CeASMR_e_TransRangeDrive5		((TeASMR_e_TransRangeState)9U)
#define CeASMR_e_TransRangeDrive6		((TeASMR_e_TransRangeState)10U)
#define CeASMR_e_TransRangeDrive7		((TeASMR_e_TransRangeState)11U)
#define CeASMR_e_TransRangeDrive8		((TeASMR_e_TransRangeState)12U)
#define CeASMR_e_TransRangeDrive9		((TeASMR_e_TransRangeState)13U)
#define CeASMR_e_TransRangeDrive10		((TeASMR_e_TransRangeState)14U)
#define CeASMR_e_TransRangeDrive11		((TeASMR_e_TransRangeState)15U)
#define CeASMR_e_TransRangeDrive12		((TeASMR_e_TransRangeState)16U)
#define CeASMR_e_ParkToReverse		((TeASMR_e_TransRangeState)17U)
#define CeASMR_e_ParkToNeutral		((TeASMR_e_TransRangeState)18U)
#define CeASMR_e_ParkToDrive		((TeASMR_e_TransRangeState)19U)
#define CeASMR_e_ReverseToPark		((TeASMR_e_TransRangeState)20U)
#define CeASMR_e_ReverseToNeutral		((TeASMR_e_TransRangeState)21U)
#define CeASMR_e_ReverseToDrive		((TeASMR_e_TransRangeState)22U)
#define CeASMR_e_NeutralToPark		((TeASMR_e_TransRangeState)23U)
#define CeASMR_e_NeutralToReverse		((TeASMR_e_TransRangeState)24U)
#define CeASMR_e_NeutralToDrive		((TeASMR_e_TransRangeState)25U)
#define CeASMR_e_DriveToPark		((TeASMR_e_TransRangeState)26U)
#define CeASMR_e_DriveToReverse		((TeASMR_e_TransRangeState)27U)
#define CeASMR_e_DriveToNeutral		((TeASMR_e_TransRangeState)28U)
#define CeASMR_e_TransRangeIllegal		((TeASMR_e_TransRangeState)29U)
#endif

/*
* Enum TeASMR_e_KeySts 
* Default Value:CeASMR_e_Lv2_OFF 
*/
#ifndef TeASMR_e_KeySts
typedef uint8 TeASMR_e_KeySts;
#define CeASMR_e_Lv2_OFF		((TeASMR_e_KeySts)0U)
#define CeASMR_e_Lv2_ACC		((TeASMR_e_KeySts)3U)
#define CeASMR_e_Lv2_RUN		((TeASMR_e_KeySts)4U)
#define CeASMR_e_Lv2_Crank		((TeASMR_e_KeySts)5U)
#define CeASMR_e_Lv2_SNA		((TeASMR_e_KeySts)7U)
#endif

/*
* Enum TeASMR_e_ESS_Engine_State 
* Default Value:CeASMR_e_ENS_STOPPED 
*/
#ifndef TeASMR_e_ESS_Engine_State
typedef uint8 TeASMR_e_ESS_Engine_State;
#define CeASMR_e_ENS_STOPPED		((TeASMR_e_ESS_Engine_State)1U)
#define CeASMR_e_ENS_RQ_ST		((TeASMR_e_ESS_Engine_State)2U)
#define CeASMR_e_ENS_RUN		((TeASMR_e_ESS_Engine_State)3U)
#define CeASMR_e_ENS_STOP_PEND		((TeASMR_e_ESS_Engine_State)4U)
#define CeASMR_e_ENS_ST_PRTCT		((TeASMR_e_ESS_Engine_State)5U)
#define CeASMR_e_ENS_ST_INH		((TeASMR_e_ESS_Engine_State)6U)
#define CeASMR_e_ENS_DSBL		((TeASMR_e_ESS_Engine_State)7U)
#define CeASMR_e_ENS_IHB_LATCH		((TeASMR_e_ESS_Engine_State)8U)
#define CeASMR_e_ENS_ST		((TeASMR_e_ESS_Engine_State)9U)
#define CeASMR_e_KEY_START		((TeASMR_e_ESS_Engine_State)10U)
#define CeASMR_e_CHANGED_MIND		((TeASMR_e_ESS_Engine_State)11U)
#define CeASMR_e_KEY_TORQUE_START		((TeASMR_e_ESS_Engine_State)12U)
#define CeASMR_e_SNA_ESS		((TeASMR_e_ESS_Engine_State)15U)
#endif

/*
* Enum TeAVTR_e_BFC_AllowedSt 
* Default Value:CeAVTR_e_BFC_NotAllowed 
*/
#ifndef TeAVTR_e_BFC_AllowedSt
typedef uint8 TeAVTR_e_BFC_AllowedSt;
#define CeAVTR_e_BFC_NotAllowed		((TeAVTR_e_BFC_AllowedSt)0U)
#define CeAVTR_e_BFC_Allowed		((TeAVTR_e_BFC_AllowedSt)1U)
#define CeAVTR_e_BFC_SNA		((TeAVTR_e_BFC_AllowedSt)3U)
#endif

/*
* Enum TeAVTR_e_HCP_MaxCoolingReq 
* Default Value:CeAVTR_e_HCP_MaxCoolingNotRequested 
*/
#ifndef TeAVTR_e_HCP_MaxCoolingReq
typedef uint8 TeAVTR_e_HCP_MaxCoolingReq;
#define CeAVTR_e_HCP_MaxCoolingNotRequested		((TeAVTR_e_HCP_MaxCoolingReq)0U)
#define CeAVTR_e_HCP_MaxCoolingRequested		((TeAVTR_e_HCP_MaxCoolingReq)1U)
#define CeAVTR_e_HCP_MaxCoolingReqSNA		((TeAVTR_e_HCP_MaxCoolingReq)3U)
#endif

/*
* Enum TeAVTR_e_HCP_MaxCoolingSt 
* Default Value:CeAVTR_e_HCP_MaxCoolingOFF 
*/
#ifndef TeAVTR_e_HCP_MaxCoolingSt
typedef uint8 TeAVTR_e_HCP_MaxCoolingSt;
#define CeAVTR_e_HCP_MaxCoolingOFF		((TeAVTR_e_HCP_MaxCoolingSt)0U)
#define CeAVTR_e_HCP_MaxCoolingON		((TeAVTR_e_HCP_MaxCoolingSt)1U)
#define CeAVTR_e_HCP_MaxCoolingSNA		((TeAVTR_e_HCP_MaxCoolingSt)3U)
#endif

/*
* Enum TeAVTR_e_SDS_ActualState 
* Default Value:CeAVTR_e_SDS_OFF 
*/
#ifndef TeAVTR_e_SDS_ActualState
typedef uint8 TeAVTR_e_SDS_ActualState;
#define CeAVTR_e_SDS_OFF		((TeAVTR_e_SDS_ActualState)0U)
#define CeAVTR_e_SDS_ON		((TeAVTR_e_SDS_ActualState)1U)
#define CeAVTR_e_SDS_SNA		((TeAVTR_e_SDS_ActualState)3U)
#endif

/*
* Enum TeAVTR_e_EVA_ThermalState 
* Default Value:CeAVTR_e_NoEVACond 
*/
#ifndef TeAVTR_e_EVA_ThermalState
typedef uint8 TeAVTR_e_EVA_ThermalState;
#define CeAVTR_e_NoEVAState		((TeAVTR_e_EVA_ThermalState)0U)
#define CeAVTR_e_NoEVACond		((TeAVTR_e_EVA_ThermalState)1U)
#define CeAVTR_e_EVA_Cool		((TeAVTR_e_EVA_ThermalState)2U)
#define CeAVTR_e_EVA_Heat		((TeAVTR_e_EVA_ThermalState)3U)
#define CeAVTR_e_EVA_MaxCool		((TeAVTR_e_EVA_ThermalState)4U)
#define CeAVTR_e_EVA_Balancing		((TeAVTR_e_EVA_ThermalState)5U)
#define CeAVTR_e_EVA_SNA		((TeAVTR_e_EVA_ThermalState)6U)
#endif

/*
* Enum TeBACR_e_HEVCharge_State 
* Default Value:CeBACR_e_ChargeSustaining 
*/
#ifndef TeBACR_e_HEVCharge_State
typedef uint8 TeBACR_e_HEVCharge_State;
#define CeBACR_e_ChargeSustaining		((TeBACR_e_HEVCharge_State)0U)
#define CeBACR_e_ChargeDepleting		((TeBACR_e_HEVCharge_State)1U)
#define CeBACR_e_ChargeIncreasing		((TeBACR_e_HEVCharge_State)2U)
#define CeBACR_e_PropSystem_NotActive		((TeBACR_e_HEVCharge_State)3U)
#endif

/*
* Enum TeBACR_e_HybridEV_Type 
* Default Value:CeBACR_e_HybridEV 
*/
#ifndef TeBACR_e_HybridEV_Type
typedef uint8 TeBACR_e_HybridEV_Type;
#define CeBACR_e_HybridEV		((TeBACR_e_HybridEV_Type)0U)
#define CeBACR_e_PlugInHybridEV		((TeBACR_e_HybridEV_Type)1U)
#define CeBACR_e_EnhancedHybridEV		((TeBACR_e_HybridEV_Type)2U)
#endif

/*
* Enum TeBACR_e_PrioWarmup 
* Default Value:CeBACR_e_PrioBatteryWarmUp 
*/
#ifndef TeBACR_e_PrioWarmup
typedef uint8 TeBACR_e_PrioWarmup;
#define CeBACR_e_PrioBatteryWarmUp		((TeBACR_e_PrioWarmup)0U)
#define CeBACR_e_PrioCatWarmUp		((TeBACR_e_PrioWarmup)1U)
#endif

/*
* Enum TeBPCR_e_BPCMShtDwnRdy 
* Default Value:CeBPCR_e_Not_Ready_for_Shutdown 
*/
#ifndef TeBPCR_e_BPCMShtDwnRdy
typedef uint8 TeBPCR_e_BPCMShtDwnRdy;
#define CeBPCR_e_Not_Ready_for_Shutdown		((TeBPCR_e_BPCMShtDwnRdy)0U)
#define CeBPCR_e_Ready_for_Shutdown_Req		((TeBPCR_e_BPCMShtDwnRdy)1U)
#define CeBPCR_e_Shutdown_in_Process		((TeBPCR_e_BPCMShtDwnRdy)2U)
#define CeBPCR_e_Shutdown_Complete		((TeBPCR_e_BPCMShtDwnRdy)3U)
#endif

/*
* Enum TeBPCR_e_HVBatPerWU_Rsn 
* Default Value:CeBPCR_e_NormalWakeup 
*/
#ifndef TeBPCR_e_HVBatPerWU_Rsn
typedef uint8 TeBPCR_e_HVBatPerWU_Rsn;
#define CeBPCR_e_NormalWakeup		((TeBPCR_e_HVBatPerWU_Rsn)0U)
#define CeBPCR_e_HVBatPerWU12VChrg		((TeBPCR_e_HVBatPerWU_Rsn)1U)
#define CeBPCR_e_HVBatPerWUBal		((TeBPCR_e_HVBatPerWU_Rsn)2U)
#define CeBPCR_e_HVBatPerWUChrg		((TeBPCR_e_HVBatPerWU_Rsn)3U)
#define CeBPCR_e_HVBatPerWUThermal		((TeBPCR_e_HVBatPerWU_Rsn)4U)
#define CeBPCR_e_HVBatPerWUSts		((TeBPCR_e_HVBatPerWU_Rsn)5U)
#define CeBPCR_e_WakeupSNA		((TeBPCR_e_HVBatPerWU_Rsn)7U)
#endif

/*
* Enum TeBPCR_e_HVBatIntrlk_InternalStat 
* Default Value:CeBPCR_e_HVBatIntrlkSNA 
*/
#ifndef TeBPCR_e_HVBatIntrlk_InternalStat
typedef uint8 TeBPCR_e_HVBatIntrlk_InternalStat;
#define CeBPCR_e_HVBatIntrlkSNA		((TeBPCR_e_HVBatIntrlk_InternalStat)0U)
#define CeBPCR_e_HVBatIntrlkPass		((TeBPCR_e_HVBatIntrlk_InternalStat)1U)
#define CeBPCR_e_HVBatIntrlkFail		((TeBPCR_e_HVBatIntrlk_InternalStat)2U)
#define CeBPCR_e_HVBatIntrlkINV		((TeBPCR_e_HVBatIntrlk_InternalStat)3U)
#endif

/*
* Enum TeBPCR_e_HVBatCntrWeld_ImpdOpn 
* Default Value:CeBPCR_e_Normal 
*/
#ifndef TeBPCR_e_HVBatCntrWeld_ImpdOpn
typedef uint8 TeBPCR_e_HVBatCntrWeld_ImpdOpn;
#define CeBPCR_e_Normal		((TeBPCR_e_HVBatCntrWeld_ImpdOpn)0U)
#define CeBPCR_e_StuckOpen		((TeBPCR_e_HVBatCntrWeld_ImpdOpn)1U)
#define CeBPCR_e_StuckClosed		((TeBPCR_e_HVBatCntrWeld_ImpdOpn)2U)
#define CeBPCR_e_SNA		((TeBPCR_e_HVBatCntrWeld_ImpdOpn)3U)
#endif

/*
* Enum TeBPCR_e_PWMDecoded_CntctrSts 
* Default Value:CeBPCR_e_CloseCntctrCmd 
*/
#ifndef TeBPCR_e_PWMDecoded_CntctrSts
typedef uint8 TeBPCR_e_PWMDecoded_CntctrSts;
#define CeBPCR_e_CloseCntctrCmd		((TeBPCR_e_PWMDecoded_CntctrSts)0U)
#define CeBPCR_e_OpenCntctrCmd		((TeBPCR_e_PWMDecoded_CntctrSts)1U)
#define CeBPCR_e_OpenCntctrReq		((TeBPCR_e_PWMDecoded_CntctrSts)2U)
#define CeBPCR_e_OpenedCntctrSts		((TeBPCR_e_PWMDecoded_CntctrSts)3U)
#define CeBPCR_e_ClosedCntctrSts		((TeBPCR_e_PWMDecoded_CntctrSts)4U)
#define CeBPCR_e_Okay2CloseCntctr		((TeBPCR_e_PWMDecoded_CntctrSts)5U)
#define CeBPCR_e_ThrmlRnawy_Warn		((TeBPCR_e_PWMDecoded_CntctrSts)6U)
#define CeBPCR_e_DefaultCntctrSts		((TeBPCR_e_PWMDecoded_CntctrSts)7U)
#endif

/*
* Enum TeBPCR_e_ThrmlRnawy_WarnSts 
* Default Value:CeBPCR_e_DefaultThrmlRnawy 
*/
#ifndef TeBPCR_e_ThrmlRnawy_WarnSts
typedef uint8 TeBPCR_e_ThrmlRnawy_WarnSts;
#define CeBPCR_e_DefaultThrmlRnawy		((TeBPCR_e_ThrmlRnawy_WarnSts)0U)
#define CeBPCR_e_NoThrmlRnawy		((TeBPCR_e_ThrmlRnawy_WarnSts)1U)
#define CeBPCR_e_DetectThrmlRnawy		((TeBPCR_e_ThrmlRnawy_WarnSts)2U)
#define CeBPCR_e_ThrmlRnawy_SNA		((TeBPCR_e_ThrmlRnawy_WarnSts)3U)
#endif

/*
* Enum TeBPCR_e_ChargingStat_BPCM 
* Default Value:CeBPCR_e_BattNotReady 
*/
#ifndef TeBPCR_e_ChargingStat_BPCM
typedef uint8 TeBPCR_e_ChargingStat_BPCM;
#define CeBPCR_e_BattNotReady		((TeBPCR_e_ChargingStat_BPCM)0U)
#define CeBPCR_e_ReadyForCommand		((TeBPCR_e_ChargingStat_BPCM)1U)
#define CeBPCR_e_Chrg_CurntAllow		((TeBPCR_e_ChargingStat_BPCM)2U)
#define CeBPCR_e_Chrg_CurntDisAllow		((TeBPCR_e_ChargingStat_BPCM)3U)
#define CeBPCR_e_Dischrg_CurntAllow		((TeBPCR_e_ChargingStat_BPCM)4U)
#define CeBPCR_e_Dischrg_CurntDisAllow		((TeBPCR_e_ChargingStat_BPCM)5U)
#define CeBPCR_e_Complete		((TeBPCR_e_ChargingStat_BPCM)6U)
#define CeBPCR_e_ChargingStat_SNA		((TeBPCR_e_ChargingStat_BPCM)7U)
#define CeBPCR_e_ChargingStat_Pass		((TeBPCR_e_ChargingStat_BPCM)8U)
#endif

/*
* Enum TeBPCR_e_ComFailBPCM_ePtCAN 
* Default Value:CeBPCR_e_NoFaultBPCM_ePT 
*/
#ifndef TeBPCR_e_ComFailBPCM_ePtCAN
typedef uint8 TeBPCR_e_ComFailBPCM_ePtCAN;
#define CeBPCR_e_NoFaultBPCM_ePT		((TeBPCR_e_ComFailBPCM_ePtCAN)0U)
#define CeBPCR_e_LoC_HCP_BPCM_ePT		((TeBPCR_e_ComFailBPCM_ePtCAN)1U)
#define CeBPCR_e_undefine2BPCM_ePT		((TeBPCR_e_ComFailBPCM_ePtCAN)2U)
#define CeBPCR_e_BusFailBPCM_ePTCAN		((TeBPCR_e_ComFailBPCM_ePtCAN)3U)
#endif

/*
* Enum TeBPCR_e_DC_IsolDsblSts 
* Default Value:CeBPCR_e_DC_IsolDsblSts_Enbl 
*/
#ifndef TeBPCR_e_DC_IsolDsblSts
typedef uint8 TeBPCR_e_DC_IsolDsblSts;
#define CeBPCR_e_DC_IsolDsblSts_Enbl		((TeBPCR_e_DC_IsolDsblSts)0U)
#define CeBPCR_e_DC_IsolDsblSts_Dsbl		((TeBPCR_e_DC_IsolDsblSts)1U)
#define CeBPCR_e_DC_IsolDsblSts_SNA		((TeBPCR_e_DC_IsolDsblSts)3U)
#endif

/*
* Enum TeBPCR_e_LOC_BatClntHtr 
* Default Value:CeBPCR_e_LOC_BatClntHtr_False 
*/
#ifndef TeBPCR_e_LOC_BatClntHtr
typedef uint8 TeBPCR_e_LOC_BatClntHtr;
#define CeBPCR_e_LOC_BatClntHtr_False		((TeBPCR_e_LOC_BatClntHtr)0U)
#define CeBPCR_e_LOC_BatClntHtr_True		((TeBPCR_e_LOC_BatClntHtr)1U)
#define CeBPCR_e_LOC_BatClntHtr_SNA		((TeBPCR_e_LOC_BatClntHtr)3U)
#endif

/*
* Enum TeBPCR_e_LOC_BCP 
* Default Value:CeBPCR_e_LOC_BCP_False 
*/
#ifndef TeBPCR_e_LOC_BCP
typedef uint8 TeBPCR_e_LOC_BCP;
#define CeBPCR_e_LOC_BCP_False		((TeBPCR_e_LOC_BCP)0U)
#define CeBPCR_e_LOC_BCP_True		((TeBPCR_e_LOC_BCP)1U)
#define CeBPCR_e_LOC_BCP_SNA		((TeBPCR_e_LOC_BCP)3U)
#endif

/*
* Enum TeBPCR_e_LIN_BusOff 
* Default Value:CeBPCR_e_LIN_BusOff_Disabled 
*/
#ifndef TeBPCR_e_LIN_BusOff
typedef uint8 TeBPCR_e_LIN_BusOff;
#define CeBPCR_e_LIN_BusOff_Disabled		((TeBPCR_e_LIN_BusOff)0U)
#define CeBPCR_e_LIN_BusOff_Enabled		((TeBPCR_e_LIN_BusOff)1U)
#define CeBPCR_e_LIN_BusOff_SNA		((TeBPCR_e_LIN_BusOff)3U)
#endif

/*
* Enum TeBPCR_e_DCIsolSts 
* Default Value:CeBPCR_e_DCIsolSts_NotPerformed 
*/
#ifndef TeBPCR_e_DCIsolSts
typedef uint8 TeBPCR_e_DCIsolSts;
#define CeBPCR_e_DCIsolSts_NotPerformed		((TeBPCR_e_DCIsolSts)0U)
#define CeBPCR_e_DCIsolSts_NoFailure		((TeBPCR_e_DCIsolSts)1U)
#define CeBPCR_e_DCIsolSts_Failure		((TeBPCR_e_DCIsolSts)3U)
#define CeBPCR_e_DCIsolSts_Error		((TeBPCR_e_DCIsolSts)4U)
#define CeBPCR_e_DCIsolSts_SNA		((TeBPCR_e_DCIsolSts)7U)
#endif

/*
* Enum TeBPCR_e_HVDcChargeTypeStat 
* Default Value:CeBPCR_e_HVDcChargeStat_400V 
*/
#ifndef TeBPCR_e_HVDcChargeTypeStat
typedef uint8 TeBPCR_e_HVDcChargeTypeStat;
#define CeBPCR_e_HVDcChargeStat_800V		((TeBPCR_e_HVDcChargeTypeStat)1U)
#define CeBPCR_e_HVDcChargeStat_400V		((TeBPCR_e_HVDcChargeTypeStat)2U)
#define CeBPCR_e_HVDcChargeStat_FAILED		((TeBPCR_e_HVDcChargeTypeStat)3U)
#define CeBPCR_e_HVDcChargeStat_WeldCheck_800V		((TeBPCR_e_HVDcChargeTypeStat)4U)
#define CeBPCR_e_HVDcChargeStat_SNA		((TeBPCR_e_HVDcChargeTypeStat)7U)
#endif

/*
* Enum TeBPCR_e_HVTracBatCntctrConfig 
* Default Value:CeBPCR_e_HVTracBatConfig_Closed_Parallel 
*/
#ifndef TeBPCR_e_HVTracBatCntctrConfig
typedef uint8 TeBPCR_e_HVTracBatCntctrConfig;
#define CeBPCR_e_HVTracBatConfig_Closed_Parallel		((TeBPCR_e_HVTracBatCntctrConfig)1U)
#define CeBPCR_e_HVTracBatConfig_Closed_Single_B1		((TeBPCR_e_HVTracBatCntctrConfig)2U)
#define CeBPCR_e_HVTracBatConfig_Closed_Single_B2		((TeBPCR_e_HVTracBatCntctrConfig)3U)
#define CeBPCR_e_HVTracBatConfig_Closed_SNA		((TeBPCR_e_HVTracBatCntctrConfig)7U)
#endif

/*
* Enum TeBPCR_e_HV_IsolStat_raw 
* Default Value:CeBPCR_e_GFD_NotPerformed 
*/
#ifndef TeBPCR_e_HV_IsolStat_raw
typedef uint8 TeBPCR_e_HV_IsolStat_raw;
#define CeBPCR_e_GFD_NotPerformed		((TeBPCR_e_HV_IsolStat_raw)0U)
#define CeBPCR_e_GFD_OK		((TeBPCR_e_HV_IsolStat_raw)1U)
#define CeBPCR_e_GFD_Fail		((TeBPCR_e_HV_IsolStat_raw)2U)
#define CeBPCR_e_GFD_INVALID_mn		((TeBPCR_e_HV_IsolStat_raw)3U)
#define CeBPCR_e_Disabled		((TeBPCR_e_HV_IsolStat_raw)4U)
#endif

/*
* Enum TeBPCR_e_DCCntctrSts 
* Default Value:CeBPCR_e_DCCntctrSts_Open 
*/
#ifndef TeBPCR_e_DCCntctrSts
typedef uint8 TeBPCR_e_DCCntctrSts;
#define CeBPCR_e_DCCntctrSts_Open		((TeBPCR_e_DCCntctrSts)0U)
#define CeBPCR_e_DCCntctrSts_Closed		((TeBPCR_e_DCCntctrSts)1U)
#define CeBPCR_e_DCCntctrSts_Prechrg		((TeBPCR_e_DCCntctrSts)2U)
#define CeBPCR_e_DCCntctrSts_Faulted		((TeBPCR_e_DCCntctrSts)3U)
#define CeBPCR_e_PrechrgInhibited		((TeBPCR_e_DCCntctrSts)4U)
#define CeBPCR_e_DCCntctrSts_SNA		((TeBPCR_e_DCCntctrSts)7U)
#endif

/*
* Enum TeBPSR_e_BrakeStatus 
* Default Value:CeBPSR_e_UnKnown 
*/
#ifndef TeBPSR_e_BrakeStatus
typedef uint8 TeBPSR_e_BrakeStatus;
#define CeBPSR_e_UnKnown		((TeBPSR_e_BrakeStatus)0U)
#define CeBPSR_e_BrkApplied		((TeBPSR_e_BrakeStatus)1U)
#define CeBPSR_e_BrkNotApplied		((TeBPSR_e_BrakeStatus)2U)
#define CeBPSR_e_BrkSW1Fault		((TeBPSR_e_BrakeStatus)3U)
#endif

/*
* Enum TeBRDR_e_BatCltLvlLo 
* Default Value:CeBRDR_e_BatCltLvlNotLo 
*/
#ifndef TeBRDR_e_BatCltLvlLo
typedef uint8 TeBRDR_e_BatCltLvlLo;
#define CeBRDR_e_BatCltLvlNotLo		((TeBRDR_e_BatCltLvlLo)0U)
#define CeBRDR_e_BatCltLvlLo		((TeBRDR_e_BatCltLvlLo)1U)
#define CeBRDR_e_BatCltLvlLo_SNA		((TeBRDR_e_BatCltLvlLo)3U)
#endif

/*
* Enum TeBRKR_e_ShiftInhibit 
* Default Value:CeBRKR_e_NoAction 
*/
#ifndef TeBRKR_e_ShiftInhibit
typedef uint8 TeBRKR_e_ShiftInhibit;
#define CeBRKR_e_NoAction		((TeBRKR_e_ShiftInhibit)0U)
#define CeBRKR_e_InhibitDownShift		((TeBRKR_e_ShiftInhibit)1U)
#define CeBRKR_e_InhibitUpShift		((TeBRKR_e_ShiftInhibit)2U)
#define CeBRKR_e_InhibitShift		((TeBRKR_e_ShiftInhibit)3U)
#endif

/*
* Enum TeBRKR_e_WhlSlpSt 
* Default Value:CeBRKR_e_NoWhlSlpDetected 
*/
#ifndef TeBRKR_e_WhlSlpSt
typedef uint8 TeBRKR_e_WhlSlpSt;
#define CeBRKR_e_NoWhlSlpDetected		((TeBRKR_e_WhlSlpSt)0U)
#define CeBRKR_e_NegWhlSlpDetected		((TeBRKR_e_WhlSlpSt)1U)
#define CeBRKR_e_PosWhlSlpDetected		((TeBRKR_e_WhlSlpSt)2U)
#define CeBRKR_e_WhlSlpDetectionFlt		((TeBRKR_e_WhlSlpSt)3U)
#endif

/*
* Enum TeBRKR_e_BrkPdl_Stat 
* Default Value:CeBRKR_e_BrkNotApplied 
*/
#ifndef TeBRKR_e_BrkPdl_Stat
typedef uint8 TeBRKR_e_BrkPdl_Stat;
#define CeBRKR_e_BrkNotApplied		((TeBRKR_e_BrkPdl_Stat)0U)
#define CeBRKR_e_BrkApplied		((TeBRKR_e_BrkPdl_Stat)1U)
#define CeBRKR_e_UNKNOWN		((TeBRKR_e_BrkPdl_Stat)2U)
#define CeBRKR_e_BrkSts_SNA		((TeBRKR_e_BrkPdl_Stat)3U)
#endif

/*
* Enum TeBRKR_e_DiagStatus 
* Default Value:CeBRKR_e_Idle 
*/
#ifndef TeBRKR_e_DiagStatus
typedef uint8 TeBRKR_e_DiagStatus;
#define CeBRKR_e_Idle		((TeBRKR_e_DiagStatus)0U)
#define CeBRKR_e_Unpressed		((TeBRKR_e_DiagStatus)1U)
#define CeBRKR_e_Pressed		((TeBRKR_e_DiagStatus)2U)
#define CeBRKR_e_Pass		((TeBRKR_e_DiagStatus)3U)
#define CeBRKR_e_Fail		((TeBRKR_e_DiagStatus)4U)
#define CeBRKR_e_Mismatch		((TeBRKR_e_DiagStatus)5U)
#define CeBRKR_e_ShortDetected		((TeBRKR_e_DiagStatus)6U)
#endif

/*
* Enum TeBRKR_e_AHH_ReadyStatus 
* Default Value:CeBRKR_e_AHH_NotReady 
*/
#ifndef TeBRKR_e_AHH_ReadyStatus
typedef uint8 TeBRKR_e_AHH_ReadyStatus;
#define CeBRKR_e_AHH_NotReady		((TeBRKR_e_AHH_ReadyStatus)0U)
#define CeBRKR_e_AHH_Ready		((TeBRKR_e_AHH_ReadyStatus)1U)
#define CeBRKR_e_AHH_Active		((TeBRKR_e_AHH_ReadyStatus)2U)
#define CeBRKR_e_AHH_EPB_Ready		((TeBRKR_e_AHH_ReadyStatus)3U)
#define CeBRKR_e_AHH_Hydrl_Ready		((TeBRKR_e_AHH_ReadyStatus)4U)
#define CeBRKR_e_AHH_Hyd_Releasing_EPB_Not_Avail		((TeBRKR_e_AHH_ReadyStatus)5U)
#define CeBRKR_e_AHH_StatusNotDefined_6		((TeBRKR_e_AHH_ReadyStatus)6U)
#define CeBRKR_e_AHH_SNA		((TeBRKR_e_AHH_ReadyStatus)7U)
#endif

/*
* Enum TeBRKR_e_AeCoastSwitchStat 
* Default Value:CeBRKR_e_Button_Unpressed 
*/
#ifndef TeBRKR_e_AeCoastSwitchStat
typedef uint8 TeBRKR_e_AeCoastSwitchStat;
#define CeBRKR_e_Button_Unpressed		((TeBRKR_e_AeCoastSwitchStat)0U)
#define CeBRKR_e_Button_Pressed		((TeBRKR_e_AeCoastSwitchStat)1U)
#define CeBRKR_e_ShortToGround		((TeBRKR_e_AeCoastSwitchStat)2U)
#define CeBRKR_e_ShortToPower		((TeBRKR_e_AeCoastSwitchStat)3U)
#define CeBRKR_e_Indeterminate		((TeBRKR_e_AeCoastSwitchStat)4U)
#define CeBRKR_e_Contact1_ShortToGround		((TeBRKR_e_AeCoastSwitchStat)5U)
#define CeBRKR_e_Contact1_ShortToPower		((TeBRKR_e_AeCoastSwitchStat)6U)
#define CeBRKR_e_SwitchSNA		((TeBRKR_e_AeCoastSwitchStat)7U)
#endif

/*
* Enum TeBRKR_e_BSMComFail_C1CAN 
* Default Value:CeBRKR_e_NoFaultBSM_C1 
*/
#ifndef TeBRKR_e_BSMComFail_C1CAN
typedef uint8 TeBRKR_e_BSMComFail_C1CAN;
#define CeBRKR_e_NoFaultBSM_C1		((TeBRKR_e_BSMComFail_C1CAN)0U)
#define CeBRKR_e_LoC_BSM_HCP_C1		((TeBRKR_e_BSMComFail_C1CAN)1U)
#define CeBRKR_e_undefineBSM_C1		((TeBRKR_e_BSMComFail_C1CAN)2U)
#define CeBRKR_e_BusFailBSM_C1CAN		((TeBRKR_e_BSMComFail_C1CAN)3U)
#endif

/*
* Enum TeBRKR_e_BSMComFail_C2CAN 
* Default Value:CeBRKR_e_NoFaultBSM_C2 
*/
#ifndef TeBRKR_e_BSMComFail_C2CAN
typedef uint8 TeBRKR_e_BSMComFail_C2CAN;
#define CeBRKR_e_NoFaultBSM_C2		((TeBRKR_e_BSMComFail_C2CAN)0U)
#define CeBRKR_e_LoC_BSM_HCP_C2		((TeBRKR_e_BSMComFail_C2CAN)1U)
#define CeBRKR_e_undefineBSM_C2		((TeBRKR_e_BSMComFail_C2CAN)2U)
#define CeBRKR_e_BusFailBSM_C2CAN		((TeBRKR_e_BSMComFail_C2CAN)3U)
#endif

/*
* Enum TeBRKR_e_OPDHoldStatus 
* Default Value:CeBRKR_e_In_Active 
*/
#ifndef TeBRKR_e_OPDHoldStatus
typedef uint8 TeBRKR_e_OPDHoldStatus;
#define CeBRKR_e_In_Active		((TeBRKR_e_OPDHoldStatus)0U)
#define CeBRKR_e_Holding		((TeBRKR_e_OPDHoldStatus)1U)
#define CeBRKR_e_Ready_to_Release		((TeBRKR_e_OPDHoldStatus)2U)
#define CeBRKR_e_SNA		((TeBRKR_e_OPDHoldStatus)3U)
#endif

/*
* Enum TeBRKR_e_BrakeSrc 
* Default Value:CeBRKR_e_BrkPdlDscrtInpt 
*/
#ifndef TeBRKR_e_BrakeSrc
typedef uint8 TeBRKR_e_BrakeSrc;
#define CeBRKR_e_BrkPdlDscrtInpt		((TeBRKR_e_BrakeSrc)0U)
#define CeBRKR_e_BrkTravelSts		((TeBRKR_e_BrakeSrc)1U)
#define CeBRKR_e_Brake_NO		((TeBRKR_e_BrakeSrc)2U)
#define CeBRKR_e_Unknown		((TeBRKR_e_BrakeSrc)3U)
#endif

/*
* Enum TeBRKR_e_ExtBrkReqOff 
* Default Value:CeBRKR_e_NoReq 
*/
#ifndef TeBRKR_e_ExtBrkReqOff
typedef uint8 TeBRKR_e_ExtBrkReqOff;
#define CeBRKR_e_NoReq		((TeBRKR_e_ExtBrkReqOff)0U)
#define CeBRKR_e_ExtSysTemporaryOff		((TeBRKR_e_ExtBrkReqOff)1U)
#define CeBRKR_e_ExtSysContinuousOff		((TeBRKR_e_ExtBrkReqOff)2U)
#define CeBRKR_e_ExtBrkReq_SNA		((TeBRKR_e_ExtBrkReqOff)3U)
#endif

/*
* Enum TeBRKR_e_Not_OK_To_Race 
* Default Value:CeBRKR_e_OK 
*/
#ifndef TeBRKR_e_Not_OK_To_Race
typedef uint8 TeBRKR_e_Not_OK_To_Race;
#define CeBRKR_e_OK		((TeBRKR_e_Not_OK_To_Race)0U)
#define CeBRKR_e_AwE		((TeBRKR_e_Not_OK_To_Race)1U)
#define CeBRKR_e_AwA		((TeBRKR_e_Not_OK_To_Race)2U)
#define CeBRKR_e_Not_Level		((TeBRKR_e_Not_OK_To_Race)3U)
#define CeBRKR_e_Yaw_Limit_Exceeded		((TeBRKR_e_Not_OK_To_Race)4U)
#define CeBRKR_e_Max_Revs_Exceeded		((TeBRKR_e_Not_OK_To_Race)5U)
#define CeBRKR_e_SNA_Race		((TeBRKR_e_Not_OK_To_Race)7U)
#endif

/*
* Enum TeBTQR_e_ExternalBrkRequestsDisabled 
* Default Value:CeBTQR_e_NoRequest 
*/
#ifndef TeBTQR_e_ExternalBrkRequestsDisabled
typedef uint8 TeBTQR_e_ExternalBrkRequestsDisabled;
#define CeBTQR_e_NoRequest		((TeBTQR_e_ExternalBrkRequestsDisabled)0U)
#define CeBTQR_e_ExtSysTemporaryOff		((TeBTQR_e_ExternalBrkRequestsDisabled)1U)
#define CeBTQR_e_ExtSysContinousOff		((TeBTQR_e_ExternalBrkRequestsDisabled)2U)
#define CeBTQR_e_SNA		((TeBTQR_e_ExternalBrkRequestsDisabled)3U)
#endif

/*
* Enum TeBTQR_e_ReqTorqueOverLayActive 
* Default Value:CeBTQR_e_NotApplied 
*/
#ifndef TeBTQR_e_ReqTorqueOverLayActive
typedef uint8 TeBTQR_e_ReqTorqueOverLayActive;
#define CeBTQR_e_NotApplied		((TeBTQR_e_ReqTorqueOverLayActive)0U)
#define CeBTQR_e_Applied		((TeBTQR_e_ReqTorqueOverLayActive)1U)
#define CeBTQR_e_Faild		((TeBTQR_e_ReqTorqueOverLayActive)2U)
#define CeBTQR_e_SNA1		((TeBTQR_e_ReqTorqueOverLayActive)3U)
#endif

/*
* Enum TeBTQR_e_AVHSts 
* Default Value:CeBTQR_e_NotEnabled 
*/
#ifndef TeBTQR_e_AVHSts
typedef uint8 TeBTQR_e_AVHSts;
#define CeBTQR_e_Enabled		((TeBTQR_e_AVHSts)0U)
#define CeBTQR_e_NotEnabled		((TeBTQR_e_AVHSts)1U)
#define CeBTQR_e_Active		((TeBTQR_e_AVHSts)2U)
#define CeBTQR_e_Failed		((TeBTQR_e_AVHSts)3U)
#endif

/*
* Enum TeBTRR_e_BatCondPriority 
* Default Value:CeBTRR_e_BatCond_NoPriority 
*/
#ifndef TeBTRR_e_BatCondPriority
typedef uint8 TeBTRR_e_BatCondPriority;
#define CeBTRR_e_BatCond_NoPriority		((TeBTRR_e_BatCondPriority)0U)
#define CeBTRR_e_BatCond_LoPriority		((TeBTRR_e_BatCondPriority)1U)
#define CeBTRR_e_BatCond_HiPriority		((TeBTRR_e_BatCondPriority)2U)
#endif

/*
* Enum TeBTRR_e_BatCritCondSt 
* Default Value:CeBTRR_e_BatNotCrit 
*/
#ifndef TeBTRR_e_BatCritCondSt
typedef uint8 TeBTRR_e_BatCritCondSt;
#define CeBTRR_e_BatNotCrit		((TeBTRR_e_BatCritCondSt)0U)
#define CeBTRR_e_BatMarginal		((TeBTRR_e_BatCritCondSt)1U)
#define CeBTRR_e_BatCrit		((TeBTRR_e_BatCritCondSt)2U)
#define CeBTRR_e_BatOutOfRng		((TeBTRR_e_BatCritCondSt)3U)
#define CeBTRR_e_BatCritErrSt		((TeBTRR_e_BatCritCondSt)4U)
#endif

/*
* Enum TeBTRR_e_BatTmpRng 
* Default Value:CeBTRR_e_BatTmpDfltRng 
*/
#ifndef TeBTRR_e_BatTmpRng
typedef uint8 TeBTRR_e_BatTmpRng;
#define CeBTRR_e_BatTmpOutOfRng		((TeBTRR_e_BatTmpRng)0U)
#define CeBTRR_e_BatTmpNormalRng		((TeBTRR_e_BatTmpRng)1U)
#define CeBTRR_e_BatTmpColdRng		((TeBTRR_e_BatTmpRng)2U)
#define CeBTRR_e_BatTmpHysColdRng		((TeBTRR_e_BatTmpRng)3U)
#define CeBTRR_e_BatTmpHotRng		((TeBTRR_e_BatTmpRng)4U)
#define CeBTRR_e_BatTmpHysHotRng		((TeBTRR_e_BatTmpRng)5U)
#define CeBTRR_e_BatTmpDfltRng		((TeBTRR_e_BatTmpRng)6U)
#endif

/*
* Enum TeBTRR_e_BatCltLvlLo 
* Default Value:CeBTRR_e_BatCltLvlNotLo 
*/
#ifndef TeBTRR_e_BatCltLvlLo
typedef uint8 TeBTRR_e_BatCltLvlLo;
#define CeBTRR_e_BatCltLvlNotLo		((TeBTRR_e_BatCltLvlLo)0U)
#define CeBTRR_e_BatCltLvlLo		((TeBTRR_e_BatCltLvlLo)1U)
#define CeBTRR_e_BatCltLvlLo_SNA		((TeBTRR_e_BatCltLvlLo)3U)
#endif

/*
* Enum TeCBPR_e_CommStat 
* Default Value:CeCBPR_e_CommValid 
*/
#ifndef TeCBPR_e_CommStat
typedef uint8 TeCBPR_e_CommStat;
#define CeCBPR_e_CommValid		((TeCBPR_e_CommStat)0U)
#define CeCBPR_e_CommTmOutFlt		((TeCBPR_e_CommStat)1U)
#define CeCBPR_e_CommCRC_Flt		((TeCBPR_e_CommStat)2U)
#define CeCBPR_e_CommARC_Flt		((TeCBPR_e_CommStat)4U)
#define CeCBPR_e_CommTmOut_ARC_Flt		((TeCBPR_e_CommStat)5U)
#define CeCBPR_e_CommCRC_ARC_Flt		((TeCBPR_e_CommStat)6U)
#define CeCBPR_e_CommTmOutCRC_ARC_Flt		((TeCBPR_e_CommStat)7U)
#endif

/*
* Enum TeCCMR_e_TransMode 
* Default Value:CeCCMR_e_Neut 
*/
#ifndef TeCCMR_e_TransMode
typedef uint8 TeCCMR_e_TransMode;
#define CeCCMR_e_Neut		((TeCCMR_e_TransMode)1U)
#define CeCCMR_e_Mode1		((TeCCMR_e_TransMode)2U)
#define CeCCMR_e_Mode2		((TeCCMR_e_TransMode)3U)
#define CeCCMR_e_Gr1		((TeCCMR_e_TransMode)4U)
#define CeCCMR_e_Gr2		((TeCCMR_e_TransMode)5U)
#define CeCCMR_e_Gr3		((TeCCMR_e_TransMode)6U)
#define CeCCMR_e_Gr4		((TeCCMR_e_TransMode)7U)
#define CeCCMR_e_InvalidRngSt		((TeCCMR_e_TransMode)45U)
#endif

/*
* Enum TeCCTR_e_Lv2CrusCANState 
* Default Value:CeCCTR_e_Open 
*/
#ifndef TeCCTR_e_Lv2CrusCANState
typedef uint8 TeCCTR_e_Lv2CrusCANState;
#define CeCCTR_e_Open		((TeCCTR_e_Lv2CrusCANState)0U)
#define CeCCTR_e_Cancel		((TeCCTR_e_Lv2CrusCANState)1U)
#define CeCCTR_e_Coast		((TeCCTR_e_Lv2CrusCANState)2U)
#define CeCCTR_e_On		((TeCCTR_e_Lv2CrusCANState)3U)
#define CeCCTR_e_Resume		((TeCCTR_e_Lv2CrusCANState)4U)
#define CeCCTR_e_Off		((TeCCTR_e_Lv2CrusCANState)5U)
#define CeCCTR_e_Accel		((TeCCTR_e_Lv2CrusCANState)6U)
#endif

/*
* Enum TeCHDR_e_CHDMOChrgSysStat 
* Default Value:CeCHDR_e_CHDMOinit 
*/
#ifndef TeCHDR_e_CHDMOChrgSysStat
typedef uint8 TeCHDR_e_CHDMOChrgSysStat;
#define CeCHDR_e_CHDMOinit		((TeCHDR_e_CHDMOChrgSysStat)0U)
#define CeCHDR_e_CHDMOChrgInit		((TeCHDR_e_CHDMOChrgSysStat)1U)
#define CeCHDR_e_CHDMOEVReady		((TeCHDR_e_CHDMOChrgSysStat)2U)
#define CeCHDR_e_CHDMOReadyToChargeState		((TeCHDR_e_CHDMOChrgSysStat)3U)
#define CeCHDR_e_CHDMOIsoDisable		((TeCHDR_e_CHDMOChrgSysStat)4U)
#define CeCHDR_e_CHDMODCCntctrCmd		((TeCHDR_e_CHDMOChrgSysStat)5U)
#define CeCHDR_e_CHDMORdyEnrgTranfer		((TeCHDR_e_CHDMOChrgSysStat)6U)
#define CeCHDR_e_CHDMOCrntDmd		((TeCHDR_e_CHDMOChrgSysStat)7U)
#define CeCHDR_e_CHDMOShtDwn		((TeCHDR_e_CHDMOChrgSysStat)8U)
#define CeCHDR_e_CHDMONShtdwn		((TeCHDR_e_CHDMOChrgSysStat)9U)
#define CeCHDR_e_CHDMOEShtdwn		((TeCHDR_e_CHDMOChrgSysStat)10U)
#define CeCHDR_e_CHDMOSwKoff		((TeCHDR_e_CHDMOChrgSysStat)11U)
#define CeCHDR_e_CHDMODCcntctropen		((TeCHDR_e_CHDMOChrgSysStat)12U)
#define CeCHDR_e_CHDMODCcntctrfastopen		((TeCHDR_e_CHDMOChrgSysStat)13U)
#define CeCHDR_e_CHDMODCIsolation		((TeCHDR_e_CHDMOChrgSysStat)14U)
#define CeCHDR_e_CHDMOShtDwnCompl		((TeCHDR_e_CHDMOChrgSysStat)15U)
#endif

/*
* Enum TeCITR_e_CPIM_LED_Sts 
* Default Value:CeCITR_e_CPIM_LEDNormal 
*/
#ifndef TeCITR_e_CPIM_LED_Sts
typedef uint8 TeCITR_e_CPIM_LED_Sts;
#define CeCITR_e_CPIM_LEDNormal		((TeCITR_e_CPIM_LED_Sts)0U)
#define CeCITR_e_CPIM_LEDOpen		((TeCITR_e_CPIM_LED_Sts)1U)
#define CeCITR_e_CPIM_LEDShort		((TeCITR_e_CPIM_LED_Sts)2U)
#endif

/*
* Enum TeCITR_e_CPIM_BlinkRate 
* Default Value:CeCITR_e_CPIM_NoBlink 
*/
#ifndef TeCITR_e_CPIM_BlinkRate
typedef uint8 TeCITR_e_CPIM_BlinkRate;
#define CeCITR_e_CPIM_NoBlink		((TeCITR_e_CPIM_BlinkRate)0U)
#define CeCITR_e_CPIM_BlinkRate1		((TeCITR_e_CPIM_BlinkRate)1U)
#define CeCITR_e_CPIM_BlinkRate2		((TeCITR_e_CPIM_BlinkRate)2U)
#define CeCITR_e_CPIM_BlinkRate3		((TeCITR_e_CPIM_BlinkRate)3U)
#define CeCITR_e_CPIM_BlinkRate4		((TeCITR_e_CPIM_BlinkRate)4U)
#define CeCITR_e_CPIM_BlinkRate5		((TeCITR_e_CPIM_BlinkRate)5U)
#define CeCITR_e_CPIM_BlinkRate6		((TeCITR_e_CPIM_BlinkRate)6U)
#define CeCITR_e_CPIM_BlinkSNA		((TeCITR_e_CPIM_BlinkRate)7U)
#endif

/*
* Enum TeCITR_e_CPIM_Color 
* Default Value:CeCITR_e_CPIM_NoColor 
*/
#ifndef TeCITR_e_CPIM_Color
typedef uint8 TeCITR_e_CPIM_Color;
#define CeCITR_e_CPIM_NoColor		((TeCITR_e_CPIM_Color)0U)
#define CeCITR_e_CPIM_Red		((TeCITR_e_CPIM_Color)1U)
#define CeCITR_e_CPIM_Green		((TeCITR_e_CPIM_Color)2U)
#define CeCITR_e_CPIM_Blue		((TeCITR_e_CPIM_Color)3U)
#define CeCITR_e_CPIM_Yellow		((TeCITR_e_CPIM_Color)4U)
#define CeCITR_e_CPIM_ColorSNA		((TeCITR_e_CPIM_Color)7U)
#endif

/*
* Enum TeCITR_e_CPIM_Indication 
* Default Value:CeCITR_e_CPIM_Ind_Off 
*/
#ifndef TeCITR_e_CPIM_Indication
typedef uint8 TeCITR_e_CPIM_Indication;
#define CeCITR_e_CPIM_Ind_Off		((TeCITR_e_CPIM_Indication)0U)
#define CeCITR_e_CPIM_Ind_On		((TeCITR_e_CPIM_Indication)1U)
#define CeCITR_e_CPIM_Ind_Blink		((TeCITR_e_CPIM_Indication)2U)
#define CeCITR_e_CPIM_Ind_SNA		((TeCITR_e_CPIM_Indication)3U)
#endif

/*
* Enum TeCITR_e_CPIMType 
* Default Value:CeCITR_e_CPIMType_Default 
*/
#ifndef TeCITR_e_CPIMType
typedef uint8 TeCITR_e_CPIMType;
#define CeCITR_e_CPIMType_Default		((TeCITR_e_CPIMType)0U)
#define CeCITR_e_CPIMType_A		((TeCITR_e_CPIMType)1U)
#define CeCITR_e_CPIMType_B		((TeCITR_e_CPIMType)2U)
#endif

/*
* Enum TeCITR_e_ChrgPort_Req 
* Default Value:CeCITR_e_PortNoRequest 
*/
#ifndef TeCITR_e_ChrgPort_Req
typedef uint8 TeCITR_e_ChrgPort_Req;
#define CeCITR_e_PortNoRequest		((TeCITR_e_ChrgPort_Req)0U)
#define CeCITR_e_UnlockInlet		((TeCITR_e_ChrgPort_Req)1U)
#define CeCITR_e_LockInlet		((TeCITR_e_ChrgPort_Req)2U)
#define CeCITR_e_PortSNA		((TeCITR_e_ChrgPort_Req)3U)
#endif

/*
* Enum TeCITR_e_ChrgrFlapSts 
* Default Value:CeCITR_e_ChrgrFlap_Closed 
*/
#ifndef TeCITR_e_ChrgrFlapSts
typedef uint8 TeCITR_e_ChrgrFlapSts;
#define CeCITR_e_ChrgrFlap_Closed		((TeCITR_e_ChrgrFlapSts)0U)
#define CeCITR_e_ChrgrFlap_Open		((TeCITR_e_ChrgrFlapSts)1U)
#define CeCITR_e_ChrgrFlap_Moving		((TeCITR_e_ChrgrFlapSts)2U)
#define CeCITR_e_ChrgrFlap_SNA		((TeCITR_e_ChrgrFlapSts)3U)
#endif

/*
* Enum TeCITR_e_DoorLockSts 
* Default Value:CeCITR_e_LKD 
*/
#ifndef TeCITR_e_DoorLockSts
typedef uint8 TeCITR_e_DoorLockSts;
#define CeCITR_e_LKD		((TeCITR_e_DoorLockSts)0U)
#define CeCITR_e_Drv_Dr_Unlkd		((TeCITR_e_DoorLockSts)1U)
#define CeCITR_e_All_Dr_Unlkd		((TeCITR_e_DoorLockSts)2U)
#define CeCITR_e_DoorSNA		((TeCITR_e_DoorLockSts)3U)
#endif

/*
* Enum TeCITR_e_FOTA_Install_Status 
* Default Value:CeCITR_e_Installation_Default 
*/
#ifndef TeCITR_e_FOTA_Install_Status
typedef uint8 TeCITR_e_FOTA_Install_Status;
#define CeCITR_e_Installation_Default		((TeCITR_e_FOTA_Install_Status)0U)
#define CeCITR_e_Installation_Started		((TeCITR_e_FOTA_Install_Status)1U)
#define CeCITR_e_Installation_Complete		((TeCITR_e_FOTA_Install_Status)2U)
#define CeCITR_e_Installation_Reserved		((TeCITR_e_FOTA_Install_Status)3U)
#endif

/*
* Enum TeCITR_e_FOTA_Install_Type 
* Default Value:CeCITR_e_NoFOTA 
*/
#ifndef TeCITR_e_FOTA_Install_Type
typedef uint8 TeCITR_e_FOTA_Install_Type;
#define CeCITR_e_NoFOTA		((TeCITR_e_FOTA_Install_Type)0U)
#define CeCITR_e_FOTANow		((TeCITR_e_FOTA_Install_Type)1U)
#define CeCITR_e_FOTASchedule		((TeCITR_e_FOTA_Install_Type)2U)
#define CeCITR_e_FOTACancelled		((TeCITR_e_FOTA_Install_Type)3U)
#endif

/*
* Enum TeCITR_e_ChrgPortDoor_Sts 
* Default Value:CeCITR_e_ChrgPortDoor_Closed 
*/
#ifndef TeCITR_e_ChrgPortDoor_Sts
typedef uint8 TeCITR_e_ChrgPortDoor_Sts;
#define CeCITR_e_ChrgPortDoor_Closed		((TeCITR_e_ChrgPortDoor_Sts)0U)
#define CeCITR_e_ChrgPortDoor_Opened		((TeCITR_e_ChrgPortDoor_Sts)1U)
#define CeCITR_e_ChrgPortDoor_SNA		((TeCITR_e_ChrgPortDoor_Sts)3U)
#endif

/*
* Enum TeCITR_e_CPIM_Icon_Ind 
* Default Value:CeCITR_e_CPIM_Icon_OFF 
*/
#ifndef TeCITR_e_CPIM_Icon_Ind
typedef uint8 TeCITR_e_CPIM_Icon_Ind;
#define CeCITR_e_CPIM_Icon_OFF		((TeCITR_e_CPIM_Icon_Ind)0U)
#define CeCITR_e_CPIM_Icon_ON		((TeCITR_e_CPIM_Icon_Ind)1U)
#define CeCITR_e_CPIM_Icon_SNA		((TeCITR_e_CPIM_Icon_Ind)3U)
#endif

/*
* Enum TeCITR_e_ChrgPortLock_Sts 
* Default Value:CeCITR_e_DefaultLock_Sts 
*/
#ifndef TeCITR_e_ChrgPortLock_Sts
typedef uint8 TeCITR_e_ChrgPortLock_Sts;
#define CeCITR_e_DefaultLock_Sts		((TeCITR_e_ChrgPortLock_Sts)0U)
#define CeCITR_e_InletUnlocked		((TeCITR_e_ChrgPortLock_Sts)1U)
#define CeCITR_e_InletLocked		((TeCITR_e_ChrgPortLock_Sts)2U)
#define CeCITR_e_InletLockSNA		((TeCITR_e_ChrgPortLock_Sts)3U)
#endif

/*
* Enum TeCITR_e_ChrgPortLockType 
* Default Value:CeCITR_e_ChrgPortLock_NoType 
*/
#ifndef TeCITR_e_ChrgPortLockType
typedef uint8 TeCITR_e_ChrgPortLockType;
#define CeCITR_e_ChrgPortLock_NoType		((TeCITR_e_ChrgPortLockType)0U)
#define CeCITR_e_ChrgPortLock_TypeA		((TeCITR_e_ChrgPortLockType)1U)
#define CeCITR_e_ChrgPortLock_TypeB		((TeCITR_e_ChrgPortLockType)2U)
#define CeCITR_e_ChrgPortLock_TypeC		((TeCITR_e_ChrgPortLockType)3U)
#define CeCITR_e_ChrgPortLock_TypeD		((TeCITR_e_ChrgPortLockType)4U)
#endif

/*
* Enum TeCITR_e_SchType 
* Default Value:CeCITR_e_SchType_NoSelection 
*/
#ifndef TeCITR_e_SchType
typedef uint8 TeCITR_e_SchType;
#define CeCITR_e_SchType_NoSelection		((TeCITR_e_SchType)0U)
#define CeCITR_e_SchType_DepTime		((TeCITR_e_SchType)1U)
#define CeCITR_e_SchType_ChrgInterval		((TeCITR_e_SchType)2U)
#define CeCITR_e_SchType_SNA		((TeCITR_e_SchType)3U)
#endif

/*
* Enum TeCITR_e_BCIM_LED_Sts 
* Default Value:CeCITR_e_BCIM_LEDNormal 
*/
#ifndef TeCITR_e_BCIM_LED_Sts
typedef uint8 TeCITR_e_BCIM_LED_Sts;
#define CeCITR_e_BCIM_LEDNormal		((TeCITR_e_BCIM_LED_Sts)0U)
#define CeCITR_e_BCIM_LEDOpen		((TeCITR_e_BCIM_LED_Sts)1U)
#define CeCITR_e_BCIM_LEDShort		((TeCITR_e_BCIM_LED_Sts)2U)
#endif

/*
* Enum TeCITR_e_BCIM_BlinkRate 
* Default Value:CeCITR_e_BCIM_NoBlink 
*/
#ifndef TeCITR_e_BCIM_BlinkRate
typedef uint8 TeCITR_e_BCIM_BlinkRate;
#define CeCITR_e_BCIM_NoBlink		((TeCITR_e_BCIM_BlinkRate)0U)
#define CeCITR_e_BCIM_BlinkRate1		((TeCITR_e_BCIM_BlinkRate)1U)
#define CeCITR_e_BCIM_BlinkRate2		((TeCITR_e_BCIM_BlinkRate)2U)
#define CeCITR_e_BCIM_BlinkRate3		((TeCITR_e_BCIM_BlinkRate)3U)
#define CeCITR_e_BCIM_BlinkRate4		((TeCITR_e_BCIM_BlinkRate)4U)
#define CeCITR_e_BCIM_BlinkRate5		((TeCITR_e_BCIM_BlinkRate)5U)
#define CeCITR_e_BCIM_BlinkRate6		((TeCITR_e_BCIM_BlinkRate)6U)
#define CeCITR_e_BCIM_BlinkSNA		((TeCITR_e_BCIM_BlinkRate)7U)
#endif

/*
* Enum TeCITR_e_BCIM_Color 
* Default Value:CeCITR_e_BCIM_NoColor 
*/
#ifndef TeCITR_e_BCIM_Color
typedef uint8 TeCITR_e_BCIM_Color;
#define CeCITR_e_BCIM_NoColor		((TeCITR_e_BCIM_Color)0U)
#define CeCITR_e_BCIM_Red		((TeCITR_e_BCIM_Color)1U)
#define CeCITR_e_BCIM_Green		((TeCITR_e_BCIM_Color)2U)
#define CeCITR_e_BCIM_Blue		((TeCITR_e_BCIM_Color)3U)
#define CeCITR_e_BCIM_ColorSNA		((TeCITR_e_BCIM_Color)7U)
#endif

/*
* Enum TeCITR_e_BCIM_Indication 
* Default Value:CeCITR_e_BCIM_Ind_Off 
*/
#ifndef TeCITR_e_BCIM_Indication
typedef uint8 TeCITR_e_BCIM_Indication;
#define CeCITR_e_BCIM_Ind_Off		((TeCITR_e_BCIM_Indication)0U)
#define CeCITR_e_BCIM_Ind_On		((TeCITR_e_BCIM_Indication)1U)
#define CeCITR_e_BCIM_Ind_Blink		((TeCITR_e_BCIM_Indication)2U)
#define CeCITR_e_BCIM_Ind_SNA		((TeCITR_e_BCIM_Indication)3U)
#endif

/*
* Enum TeCITR_e_ChrgPortLck_FailSts 
* Default Value:CeCITR_e_CPIMLock_Nofailure 
*/
#ifndef TeCITR_e_ChrgPortLck_FailSts
typedef uint8 TeCITR_e_ChrgPortLck_FailSts;
#define CeCITR_e_CPIMLock_Nofailure		((TeCITR_e_ChrgPortLck_FailSts)0U)
#define CeCITR_e_CPIMLock_CktLowFailure		((TeCITR_e_ChrgPortLck_FailSts)1U)
#define CeCITR_e_CPIMLock_CktHiFailure		((TeCITR_e_ChrgPortLck_FailSts)2U)
#define CeCITR_e_CPIMLock_SNA		((TeCITR_e_ChrgPortLck_FailSts)3U)
#endif

/*
* Enum TeCITR_e_RRM_VP_Level 
* Default Value:CeCITR_e_RRM_VP_Absent 
*/
#ifndef TeCITR_e_RRM_VP_Level
typedef uint8 TeCITR_e_RRM_VP_Level;
#define CeCITR_e_RRM_VP_Absent		((TeCITR_e_RRM_VP_Level)0U)
#define CeCITR_e_RRM_VP_Level1		((TeCITR_e_RRM_VP_Level)1U)
#define CeCITR_e_RRM_VP_Level2		((TeCITR_e_RRM_VP_Level)2U)
#define CeCITR_e_RRM_VP_Level3		((TeCITR_e_RRM_VP_Level)3U)
#define CeCITR_e_RRM_VP_Level4		((TeCITR_e_RRM_VP_Level)4U)
#define CeCITR_e_RRM_VP_LevelHigh		((TeCITR_e_RRM_VP_Level)15U)
#define CeCITR_e_RRM_NotUsed		((TeCITR_e_RRM_VP_Level)17U)
#endif

/*
* Enum TeCITR_e_DateTmFormat 
* Default Value:CeCITR_e_DateTm_NotDef 
*/
#ifndef TeCITR_e_DateTmFormat
typedef uint8 TeCITR_e_DateTmFormat;
#define CeCITR_e_DateTm_NotDef		((TeCITR_e_DateTmFormat)0U)
#define CeCITR_e_DateTm_12		((TeCITR_e_DateTmFormat)1U)
#define CeCITR_e_DateTm_24		((TeCITR_e_DateTmFormat)2U)
#define CeCITR_e_DateTm_0		((TeCITR_e_DateTmFormat)3U)
#define CeCITR_e_DateTm_1		((TeCITR_e_DateTmFormat)4U)
#define CeCITR_e_DateTm_2		((TeCITR_e_DateTmFormat)5U)
#define CeCITR_e_DateTm_3		((TeCITR_e_DateTmFormat)6U)
#define CeCITR_e_DateTm_SNA		((TeCITR_e_DateTmFormat)7U)
#endif

/*
* Enum TeCITR_e_ChrgScheduleType 
* Default Value:CeCITR_e_No_Selection 
*/
#ifndef TeCITR_e_ChrgScheduleType
typedef uint8 TeCITR_e_ChrgScheduleType;
#define CeCITR_e_No_Selection		((TeCITR_e_ChrgScheduleType)0U)
#define CeCITR_e_Standard_Charge		((TeCITR_e_ChrgScheduleType)1U)
#define CeCITR_e_External_Charge		((TeCITR_e_ChrgScheduleType)2U)
#define CeCITR_e_Reserved		((TeCITR_e_ChrgScheduleType)3U)
#endif

/*
* Enum TeCITR_e_RmtChargePortCmd 
* Default Value:CeCITR_e_Default 
*/
#ifndef TeCITR_e_RmtChargePortCmd
typedef uint8 TeCITR_e_RmtChargePortCmd;
#define CeCITR_e_Default		((TeCITR_e_RmtChargePortCmd)0U)
#define CeCITR_e_Lock_Request		((TeCITR_e_RmtChargePortCmd)1U)
#define CeCITR_e_Unlock_Request		((TeCITR_e_RmtChargePortCmd)2U)
#define CeCITR_e_Sna		((TeCITR_e_RmtChargePortCmd)3U)
#endif

/*
* Enum TeCITR_e_CoopChargeCmd 
* Default Value:CeCITR_e_DEFAULT 
*/
#ifndef TeCITR_e_CoopChargeCmd
typedef uint8 TeCITR_e_CoopChargeCmd;
#define CeCITR_e_DEFAULT		((TeCITR_e_CoopChargeCmd)0U)
#define CeCITR_e_Charge_Now		((TeCITR_e_CoopChargeCmd)1U)
#define CeCITR_e_Stop_Charge		((TeCITR_e_CoopChargeCmd)2U)
#define CeCITR_e_sna		((TeCITR_e_CoopChargeCmd)3U)
#endif

/*
* Enum TeCITR_e_PPFaultRsn 
* Default Value:CeCITR_e_No_Fault 
*/
#ifndef TeCITR_e_PPFaultRsn
typedef uint8 TeCITR_e_PPFaultRsn;
#define CeCITR_e_No_Fault		((TeCITR_e_PPFaultRsn)0U)
#define CeCITR_e_Overtemp		((TeCITR_e_PPFaultRsn)1U)
#define CeCITR_e_Undervoltage		((TeCITR_e_PPFaultRsn)2U)
#define CeCITR_e_Internal_Failure		((TeCITR_e_PPFaultRsn)3U)
#define CeCITR_e_Button_SC_GND		((TeCITR_e_PPFaultRsn)4U)
#define CeCITR_e_Button_SC_BAT		((TeCITR_e_PPFaultRsn)5U)
#define CeCITR_e_Button_Stuck_Closed		((TeCITR_e_PPFaultRsn)6U)
#define CeCITR_e_Button_Stuck_Open		((TeCITR_e_PPFaultRsn)7U)
#define CeCITR_e_Lid_Swt_SC_GND		((TeCITR_e_PPFaultRsn)8U)
#define CeCITR_e_Lid_Swt_SC_BAT		((TeCITR_e_PPFaultRsn)9U)
#define CeCITR_e_Lid_Stuck_Closed		((TeCITR_e_PPFaultRsn)10U)
#define CeCITR_e_Lid_Stuck_Open		((TeCITR_e_PPFaultRsn)11U)
#define CeCITR_e_FaultRsnSNA		((TeCITR_e_PPFaultRsn)15U)
#endif

/*
* Enum TeCITR_e_PPFault 
* Default Value:CeCITR_e_PP_No_Fault 
*/
#ifndef TeCITR_e_PPFault
typedef uint8 TeCITR_e_PPFault;
#define CeCITR_e_PP_No_Fault		((TeCITR_e_PPFault)0U)
#define CeCITR_e_Allow_Discharging		((TeCITR_e_PPFault)1U)
#define CeCITR_e_Disable_Discharging		((TeCITR_e_PPFault)2U)
#endif

/*
* Enum TeCITR_e_PP_LED_Fault 
* Default Value:CeCITR_e_LED_No_Fault 
*/
#ifndef TeCITR_e_PP_LED_Fault
typedef uint8 TeCITR_e_PP_LED_Fault;
#define CeCITR_e_LED_No_Fault		((TeCITR_e_PP_LED_Fault)0U)
#define CeCITR_e_LED_A_Fault		((TeCITR_e_PP_LED_Fault)1U)
#define CeCITR_e_LED_B_Fault		((TeCITR_e_PP_LED_Fault)2U)
#define CeCITR_e_LED_A_and_B_Fault		((TeCITR_e_PP_LED_Fault)3U)
#endif

/*
* Enum TeCITR_e_SchAllow 
* Default Value:CeCITR_e_AnyTime 
*/
#ifndef TeCITR_e_SchAllow
typedef uint8 TeCITR_e_SchAllow;
#define CeCITR_e_AnyTime		((TeCITR_e_SchAllow)0U)
#define CeCITR_e_PluggedInOnly		((TeCITR_e_SchAllow)1U)
#define CeCITR_e_PluggedIn_InChargeSchd		((TeCITR_e_SchAllow)2U)
#define CeCITR_e_SNA		((TeCITR_e_SchAllow)3U)
#endif

/*
* Enum TeCITR_e_PP_LED_Color_Fdbk 
* Default Value:CeCITR_e_PP_LED_Color_Init 
*/
#ifndef TeCITR_e_PP_LED_Color_Fdbk
typedef uint8 TeCITR_e_PP_LED_Color_Fdbk;
#define CeCITR_e_PP_LED_Color_Init		((TeCITR_e_PP_LED_Color_Fdbk)0U)
#define CeCITR_e_PP_LED_Color_Green		((TeCITR_e_PP_LED_Color_Fdbk)1U)
#define CeCITR_e_PP_LED_Color_Red		((TeCITR_e_PP_LED_Color_Fdbk)2U)
#endif

/*
* Enum TeCSMR_e_CC_State 
* Default Value:CeCSMR_e_CCSt_NotDtrmn 
*/
#ifndef TeCSMR_e_CC_State
typedef uint8 TeCSMR_e_CC_State;
#define CeCSMR_e_CCSt_NotDtrmn		((TeCSMR_e_CC_State)0U)
#define CeCSMR_e_CCSt_On		((TeCSMR_e_CC_State)1U)
#define CeCSMR_e_CCSt_Set		((TeCSMR_e_CC_State)2U)
#define CeCSMR_e_CCSt_On_Cancel		((TeCSMR_e_CC_State)3U)
#define CeCSMR_e_CCSt_Off		((TeCSMR_e_CC_State)4U)
#endif

/*
* Enum TeCSMR_e_CC_State_SF 
* Default Value:CeCSMR_e_None 
*/
#ifndef TeCSMR_e_CC_State_SF
typedef uint8 TeCSMR_e_CC_State_SF;
#define CeCSMR_e_None		((TeCSMR_e_CC_State_SF)0U)
#define CeCSMR_e_CCSt_NotDtrmn_SF		((TeCSMR_e_CC_State_SF)1U)
#define CeCSMR_e_CCSt_On_SF		((TeCSMR_e_CC_State_SF)2U)
#define CeCSMR_e_CCSt_Set_SF		((TeCSMR_e_CC_State_SF)3U)
#define CeCSMR_e_CCSt_On_Cancel_SF		((TeCSMR_e_CC_State_SF)4U)
#define CeCSMR_e_CCSt_Off_SF		((TeCSMR_e_CC_State_SF)5U)
#endif

/*
* Enum TeCSMR_e_Lv2VehACCStat 
* Default Value:CeCSMR_e_ACC_Absent 
*/
#ifndef TeCSMR_e_Lv2VehACCStat
typedef uint8 TeCSMR_e_Lv2VehACCStat;
#define CeCSMR_e_ACC_Absent		((TeCSMR_e_Lv2VehACCStat)0U)
#define CeCSMR_e_ACC		((TeCSMR_e_Lv2VehACCStat)1U)
#define CeCSMR_e_ACC_Plus		((TeCSMR_e_Lv2VehACCStat)2U)
#define CeCSMR_e_ACC_StopGo		((TeCSMR_e_Lv2VehACCStat)3U)
#endif

/*
* Enum TeCSMR_e_ACCSystemSts 
* Default Value:CeCSMR_e_Off 
*/
#ifndef TeCSMR_e_ACCSystemSts
typedef uint8 TeCSMR_e_ACCSystemSts;
#define CeCSMR_e_Off		((TeCSMR_e_ACCSystemSts)0U)
#define CeCSMR_e_Enabled		((TeCSMR_e_ACCSystemSts)1U)
#define CeCSMR_e_Engaged		((TeCSMR_e_ACCSystemSts)2U)
#define CeCSMR_e_Engaged_BrakeOnly		((TeCSMR_e_ACCSystemSts)3U)
#define CeCSMR_e_Override		((TeCSMR_e_ACCSystemSts)4U)
#define CeCSMR_e_Cancel		((TeCSMR_e_ACCSystemSts)5U)
#define CeCSMR_e_NCC_Enabled		((TeCSMR_e_ACCSystemSts)6U)
#define CeCSMR_e_NCC_Engaged		((TeCSMR_e_ACCSystemSts)7U)
#define CeCSMR_e_NCC_Cancel		((TeCSMR_e_ACCSystemSts)8U)
#define CeCSMR_e_HAS_BSoC		((TeCSMR_e_ACCSystemSts)9U)
#define CeCSMR_e_ACCSystemSts_SNA		((TeCSMR_e_ACCSystemSts)10U)
#endif

/*
* Enum TeCSMR_e_VehACCStat 
* Default Value:CeCSMR_e_Lv2Absent 
*/
#ifndef TeCSMR_e_VehACCStat
typedef uint8 TeCSMR_e_VehACCStat;
#define CeCSMR_e_Lv2Absent		((TeCSMR_e_VehACCStat)0U)
#define CeCSMR_e_Lv2ACC		((TeCSMR_e_VehACCStat)1U)
#define CeCSMR_e_Lv2ACCPlus		((TeCSMR_e_VehACCStat)2U)
#define CeCSMR_e_Lv2ACCStopGo		((TeCSMR_e_VehACCStat)3U)
#endif

/*
* Enum TeCSVR_e_Wheel_Direction 
* Default Value:CeCSVR_e_WheelDirectionUnknown 
*/
#ifndef TeCSVR_e_Wheel_Direction
typedef uint8 TeCSVR_e_Wheel_Direction;
#define CeCSVR_e_WheelDirectionUnknown		((TeCSVR_e_Wheel_Direction)0U)
#define CeCSVR_e_WheelDirectionForward		((TeCSVR_e_Wheel_Direction)1U)
#define CeCSVR_e_WheelDirectionReverse		((TeCSVR_e_Wheel_Direction)2U)
#define CeCSVR_e_WheelDirectionInvalid		((TeCSVR_e_Wheel_Direction)3U)
#endif

/*
* Enum TeCSVR_e_CAN_SrcSelector 
* Default Value:CeCSVR_e_VehSpdCAN 
*/
#ifndef TeCSVR_e_CAN_SrcSelector
typedef uint8 TeCSVR_e_CAN_SrcSelector;
#define CeCSVR_e_VehSpdCAN		((TeCSVR_e_CAN_SrcSelector)0U)
#define CeCSVR_e_DrvnVehSpd		((TeCSVR_e_CAN_SrcSelector)1U)
#endif

/*
* Enum TeCSVR_e_AxleDirSource 
* Default Value:CeCSVR_e_AxleDirFromWhls 
*/
#ifndef TeCSVR_e_AxleDirSource
typedef uint8 TeCSVR_e_AxleDirSource;
#define CeCSVR_e_AxleDirFromWhls		((TeCSVR_e_AxleDirSource)0U)
#define CeCSVR_e_AxleDirFromMtrB		((TeCSVR_e_AxleDirSource)1U)
#define CeCSVR_e_AxleDirFromMtrC		((TeCSVR_e_AxleDirSource)2U)
#define CeCSVR_e_AxleDirFromGearBasedDirection		((TeCSVR_e_AxleDirSource)3U)
#define CeCSVR_e_AxleDirFromTransOutputPol		((TeCSVR_e_AxleDirSource)4U)
#define CeCSVR_e_AxleDirFromMtrA		((TeCSVR_e_AxleDirSource)5U)
#define CeCSVR_e_NoValidAxleDirSrcAvail		((TeCSVR_e_AxleDirSource)255U)
#endif

/*
* Enum TeCSVR_e_SourceForRearAxlSpd 
* Default Value:CeCSVR_e_NoValidRASSrcAvail 
*/
#ifndef TeCSVR_e_SourceForRearAxlSpd
typedef uint8 TeCSVR_e_SourceForRearAxlSpd;
#define CeCSVR_e_RearAxlSpdFromFrontAxlSpd		((TeCSVR_e_SourceForRearAxlSpd)0U)
#define CeCSVR_e_RearAxlSpdFromSecWhls		((TeCSVR_e_SourceForRearAxlSpd)1U)
#define CeCSVR_e_RearAxlSpdFromMtrB		((TeCSVR_e_SourceForRearAxlSpd)2U)
#define CeCSVR_e_RearAxlSpdFromMtrC		((TeCSVR_e_SourceForRearAxlSpd)3U)
#define CeCSVR_e_RearAxlSpdFromPrimWhls		((TeCSVR_e_SourceForRearAxlSpd)4U)
#define CeCSVR_e_NoValidRASSrcAvail		((TeCSVR_e_SourceForRearAxlSpd)255U)
#endif

/*
* Enum TeCSVR_e_TransOutSpdSrc 
* Default Value:CeCSVR_e_TransOutFromTOSSnsr 
*/
#ifndef TeCSVR_e_TransOutSpdSrc
typedef uint8 TeCSVR_e_TransOutSpdSrc;
#define CeCSVR_e_TransOutFromTOSSnsr		((TeCSVR_e_TransOutSpdSrc)0U)
#define CeCSVR_e_TransOutFromPrimWhls		((TeCSVR_e_TransOutSpdSrc)1U)
#define CeCSVR_e_TransOutFromMtrB		((TeCSVR_e_TransOutSpdSrc)2U)
#define CeCSVR_e_TransOutFromMtrA		((TeCSVR_e_TransOutSpdSrc)3U)
#define CeCSVR_e_NoValidTransOutSrcAvail		((TeCSVR_e_TransOutSpdSrc)255U)
#endif

/*
* Enum TeCSVR_e_VehSpdSrc 
* Default Value:CeCSVR_e_VehSpdFrmCAN 
*/
#ifndef TeCSVR_e_VehSpdSrc
typedef uint8 TeCSVR_e_VehSpdSrc;
#define CeCSVR_e_VehSpdFrmCAN		((TeCSVR_e_VehSpdSrc)0U)
#define CeCSVR_e_VehSpdFrmPrimAxle		((TeCSVR_e_VehSpdSrc)1U)
#define CeCSVR_e_VehSpdFrmTOSSnsr		((TeCSVR_e_VehSpdSrc)2U)
#define CeCSVR_e_VehSpdFrmMtrB		((TeCSVR_e_VehSpdSrc)3U)
#define CeCSVR_e_VehSpdFrmMtrC		((TeCSVR_e_VehSpdSrc)4U)
#define CeCSVR_e_VehSpdFrmMtrA		((TeCSVR_e_VehSpdSrc)5U)
#define CeCSVR_e_VehSpdFrmSecAxle		((TeCSVR_e_VehSpdSrc)6U)
#define CeCSVR_e_NoValidVehSpdSrcAvail		((TeCSVR_e_VehSpdSrc)255U)
#endif

/*
* Enum TeCSVR_e_RefSpdSrc 
* Default Value:CeCSVR_e_RefSpdFrmSecAxle 
*/
#ifndef TeCSVR_e_RefSpdSrc
typedef uint8 TeCSVR_e_RefSpdSrc;
#define CeCSVR_e_RefSpdFrmSecAxle		((TeCSVR_e_RefSpdSrc)0U)
#define CeCSVR_e_RefSpdFrmCAN		((TeCSVR_e_RefSpdSrc)1U)
#define CeCSVR_e_RefSpdFrmSecNo		((TeCSVR_e_RefSpdSrc)2U)
#define CeCSVR_e_NoValidRefSpdSrcAvail		((TeCSVR_e_RefSpdSrc)255U)
#endif

/*
* Enum TeCSVR_e_SourceForFrontAxlSpd 
* Default Value:CeCSVR_e_NoValidFASSrcAvail 
*/
#ifndef TeCSVR_e_SourceForFrontAxlSpd
typedef uint8 TeCSVR_e_SourceForFrontAxlSpd;
#define CeCSVR_e_FrontAxlSpdFromTOSS		((TeCSVR_e_SourceForFrontAxlSpd)0U)
#define CeCSVR_e_FrontAxlSpdFromPrimWhls		((TeCSVR_e_SourceForFrontAxlSpd)1U)
#define CeCSVR_e_FrontAxlSpdFromMtrB		((TeCSVR_e_SourceForFrontAxlSpd)2U)
#define CeCSVR_e_FrontAxlSpdFromMtrA		((TeCSVR_e_SourceForFrontAxlSpd)3U)
#define CeCSVR_e_FrontAxlSpdFromSecWhls		((TeCSVR_e_SourceForFrontAxlSpd)4U)
#define CeCSVR_e_NoValidFASSrcAvail		((TeCSVR_e_SourceForFrontAxlSpd)255U)
#endif

/*
* Enum TeCSVR_e_SourceForTOSSensor 
* Default Value:CeCSVR_e_TOSSensorFromOutputSpeedPolarity 
*/
#ifndef TeCSVR_e_SourceForTOSSensor
typedef uint8 TeCSVR_e_SourceForTOSSensor;
#define CeCSVR_e_TOSSensorFromOutputSpeedPolarity		((TeCSVR_e_SourceForTOSSensor)0U)
#define CeCSVR_e_TOSSensorFromMtrB		((TeCSVR_e_SourceForTOSSensor)1U)
#define CeCSVR_e_TOSSensorFromMtrC		((TeCSVR_e_SourceForTOSSensor)2U)
#define CeCSVR_e_TOSSensorFromWhls		((TeCSVR_e_SourceForTOSSensor)3U)
#define CeCSVR_e_TOSSensorFromGearBasedDirection		((TeCSVR_e_SourceForTOSSensor)4U)
#define CeCSVR_e_NoValidTOSSensorSrcAvail		((TeCSVR_e_SourceForTOSSensor)255U)
#endif

/*
* Enum TeCSVR_e_OutSpdDirection 
* Default Value:CeCSVR_e_OutSpdDirectionUnknown 
*/
#ifndef TeCSVR_e_OutSpdDirection
typedef uint8 TeCSVR_e_OutSpdDirection;
#define CeCSVR_e_OutSpdDirectionUnknown		((TeCSVR_e_OutSpdDirection)0U)
#define CeCSVR_e_OutSpdDirectionForward		((TeCSVR_e_OutSpdDirection)1U)
#define CeCSVR_e_OutSpdDirectionReverse		((TeCSVR_e_OutSpdDirection)2U)
#define CeCSVR_e_OutSpdDirectionInvalid		((TeCSVR_e_OutSpdDirection)3U)
#endif

/*
* Enum TeCSVR_e_TOS_VS_WhlResult 
* Default Value:CeCSVR_e_TOS_VS_WhlUnknown 
*/
#ifndef TeCSVR_e_TOS_VS_WhlResult
typedef uint8 TeCSVR_e_TOS_VS_WhlResult;
#define CeCSVR_e_TOS_VS_WhlUnknown		((TeCSVR_e_TOS_VS_WhlResult)0U)
#define CeCSVR_e_TOS_VS_WhlInRange		((TeCSVR_e_TOS_VS_WhlResult)1U)
#define CeCSVR_e_TOS_VS_WhlOutOfRange		((TeCSVR_e_TOS_VS_WhlResult)2U)
#endif

/*
* Enum TeCSVR_e_SourceForTurbineSpeed 
* Default Value:CeCSVR_e_NturbFromCAN 
*/
#ifndef TeCSVR_e_SourceForTurbineSpeed
typedef uint8 TeCSVR_e_SourceForTurbineSpeed;
#define CeCSVR_e_NturbFromTransNo		((TeCSVR_e_SourceForTurbineSpeed)0U)
#define CeCSVR_e_NturbFromCAN		((TeCSVR_e_SourceForTurbineSpeed)1U)
#define CeCSVR_e_NturbForcedtoZero		((TeCSVR_e_SourceForTurbineSpeed)2U)
#define CeCSVR_e_NturbFiltdbasedonTransOilTemp		((TeCSVR_e_SourceForTurbineSpeed)3U)
#define CeCSVR_e_NturbFromZFCAN		((TeCSVR_e_SourceForTurbineSpeed)4U)
#define CeCSVR_e_NturbArbitrated		((TeCSVR_e_SourceForTurbineSpeed)5U)
#endif

/*
* Enum TeCSVR_e_THA_STAT 
* Default Value:CeCSVR_e_THA_Initial 
*/
#ifndef TeCSVR_e_THA_STAT
typedef uint8 TeCSVR_e_THA_STAT;
#define CeCSVR_e_THA_Initial		((TeCSVR_e_THA_STAT)0U)
#define CeCSVR_e_THA_Idle		((TeCSVR_e_THA_STAT)1U)
#define CeCSVR_e_THA_Enabled		((TeCSVR_e_THA_STAT)2U)
#define CeCSVR_e_THA_Engaged		((TeCSVR_e_THA_STAT)3U)
#define CeCSVR_e_THA_Completed		((TeCSVR_e_THA_STAT)4U)
#define CeCSVR_e_THA_Faulted		((TeCSVR_e_THA_STAT)5U)
#define CeCSVR_e_THA_SNA		((TeCSVR_e_THA_STAT)7U)
#endif

/*
* Enum TeCSVR_e_TRSC_STAT 
* Default Value:CeCSVR_e_TRSC_Standby 
*/
#ifndef TeCSVR_e_TRSC_STAT
typedef uint8 TeCSVR_e_TRSC_STAT;
#define CeCSVR_e_TRSC_Standby		((TeCSVR_e_TRSC_STAT)0U)
#define CeCSVR_e_TRSC_Calibrating		((TeCSVR_e_TRSC_STAT)1U)
#define CeCSVR_e_TRSC_PreActive		((TeCSVR_e_TRSC_STAT)2U)
#define CeCSVR_e_TRSC_Active		((TeCSVR_e_TRSC_STAT)3U)
#define CeCSVR_e_TRSC_OFF		((TeCSVR_e_TRSC_STAT)4U)
#define CeCSVR_e_TRSC_SNA		((TeCSVR_e_TRSC_STAT)7U)
#endif

/*
* Enum TeCSVR_e_THA_SpdLim 
* Default Value:CeCSVR_e_THAsl_NoRequest 
*/
#ifndef TeCSVR_e_THA_SpdLim
typedef uint8 TeCSVR_e_THA_SpdLim;
#define CeCSVR_e_THAsl_NoRequest		((TeCSVR_e_THA_SpdLim)0U)
#define CeCSVR_e_THAsl_KPH1		((TeCSVR_e_THA_SpdLim)1U)
#define CeCSVR_e_THAsl_KPH2		((TeCSVR_e_THA_SpdLim)2U)
#define CeCSVR_e_THAsl_KPH3		((TeCSVR_e_THA_SpdLim)3U)
#define CeCSVR_e_THAsl_KPH4		((TeCSVR_e_THA_SpdLim)4U)
#define CeCSVR_e_THAsl_KPH5		((TeCSVR_e_THA_SpdLim)5U)
#define CeCSVR_e_THAsl_KPH6		((TeCSVR_e_THA_SpdLim)6U)
#define CeCSVR_e_THAsl_KPH7		((TeCSVR_e_THA_SpdLim)7U)
#define CeCSVR_e_THAsl_KPH8		((TeCSVR_e_THA_SpdLim)8U)
#define CeCSVR_e_THAsl_KPH9		((TeCSVR_e_THA_SpdLim)9U)
#define CeCSVR_e_THAsl_KPH10		((TeCSVR_e_THA_SpdLim)10U)
#define CeCSVR_e_THAsl_SNA		((TeCSVR_e_THA_SpdLim)31U)
#endif

/*
* Enum TeCSVR_e_TRSC_SpdLimReq 
* Default Value:CeCSVR_e_TRSCslr_NotLimiting 
*/
#ifndef TeCSVR_e_TRSC_SpdLimReq
typedef uint8 TeCSVR_e_TRSC_SpdLimReq;
#define CeCSVR_e_TRSCslr_NotLimiting		((TeCSVR_e_TRSC_SpdLimReq)0U)
#define CeCSVR_e_TRSCslr_SPD4		((TeCSVR_e_TRSC_SpdLimReq)1U)
#define CeCSVR_e_TRSCslr_SPD5		((TeCSVR_e_TRSC_SpdLimReq)2U)
#define CeCSVR_e_TRSCslr_SPD6		((TeCSVR_e_TRSC_SpdLimReq)3U)
#define CeCSVR_e_TRSCslr_SPD7		((TeCSVR_e_TRSC_SpdLimReq)4U)
#define CeCSVR_e_TRSCslr_SPD8		((TeCSVR_e_TRSC_SpdLimReq)5U)
#define CeCSVR_e_TRSCslr_SPD9		((TeCSVR_e_TRSC_SpdLimReq)6U)
#define CeCSVR_e_TRSCslr_SPD10		((TeCSVR_e_TRSC_SpdLimReq)7U)
#define CeCSVR_e_TRSCslr_SNA		((TeCSVR_e_TRSC_SpdLimReq)15U)
#endif

/*
* Enum TeCSVR_e_THA_Response 
* Default Value:CeCSVR_e_THAr_Off 
*/
#ifndef TeCSVR_e_THA_Response
typedef uint8 TeCSVR_e_THA_Response;
#define CeCSVR_e_THAr_Off		((TeCSVR_e_THA_Response)0U)
#define CeCSVR_e_THAr_Active		((TeCSVR_e_THA_Response)1U)
#define CeCSVR_e_THAr_SNA		((TeCSVR_e_THA_Response)3U)
#endif

/*
* Enum TeCSVR_e_TRSC_Response 
* Default Value:CeCSVR_e_TRSCr_Off 
*/
#ifndef TeCSVR_e_TRSC_Response
typedef uint8 TeCSVR_e_TRSC_Response;
#define CeCSVR_e_TRSCr_Off		((TeCSVR_e_TRSC_Response)0U)
#define CeCSVR_e_TRSCr_Active		((TeCSVR_e_TRSC_Response)1U)
#define CeCSVR_e_TRSCr_SNA		((TeCSVR_e_TRSC_Response)3U)
#endif

/*
* Enum TeDCAB_e_RoutineOpType 
* Default Value:CeDCAB_e_Routine_NOP 
*/
#ifndef TeDCAB_e_RoutineOpType
typedef uint8 TeDCAB_e_RoutineOpType;
#define CeDCAB_e_Routine_NOP		((TeDCAB_e_RoutineOpType)0U)
#define CeDCAB_e_Routine_Start		((TeDCAB_e_RoutineOpType)1U)
#define CeDCAB_e_Routine_Stop		((TeDCAB_e_RoutineOpType)2U)
#define CeDCAB_e_Routine_ResultRequest		((TeDCAB_e_RoutineOpType)3U)
#endif

/*
* Enum TeDCAB_e_IOControlOpType 
* Default Value:CeDCAB_e_IO_NOP 
*/
#ifndef TeDCAB_e_IOControlOpType
typedef uint8 TeDCAB_e_IOControlOpType;
#define CeDCAB_e_IO_NOP		((TeDCAB_e_IOControlOpType)0U)
#define CeDCAB_e_IO_ReadData		((TeDCAB_e_IOControlOpType)1U)
#define CeDCAB_e_IO_ReturnControl		((TeDCAB_e_IOControlOpType)2U)
#define CeDCAB_e_IO_ShortTermAdj		((TeDCAB_e_IOControlOpType)3U)
#define CeDCAB_e_IO_ResetToDefault		((TeDCAB_e_IOControlOpType)4U)
#define CeDCAB_e_IO_FreezeCurrentSt		((TeDCAB_e_IOControlOpType)5U)
#endif

/*
* Enum TeDFIB_e_FaultDebounceStatus 
* Default Value:CeDFIB_e_Init 
*/
#ifndef TeDFIB_e_FaultDebounceStatus
typedef uint8 TeDFIB_e_FaultDebounceStatus;
#define CeDFIB_e_Init		((TeDFIB_e_FaultDebounceStatus)0U)
#define CeDFIB_e_Pass		((TeDFIB_e_FaultDebounceStatus)1U)
#define CeDFIB_e_Fail		((TeDFIB_e_FaultDebounceStatus)2U)
#define CeDFIB_e_Pass_FaultRemoved		((TeDFIB_e_FaultDebounceStatus)3U)
#define CeDFIB_e_Pass_FaultFiltering		((TeDFIB_e_FaultDebounceStatus)4U)
#define CeDFIB_e_Fail_FaultRemoved		((TeDFIB_e_FaultDebounceStatus)5U)
#endif

/*
* Enum TeDFIB_e_RTCCallSts 
* Default Value:CeDFIB_e_RTCCallInit 
*/
#ifndef TeDFIB_e_RTCCallSts
typedef uint8 TeDFIB_e_RTCCallSts;
#define CeDFIB_e_RTCCallInit		((TeDFIB_e_RTCCallSts)0U)
#define CeDFIB_e_RTCCallRunning		((TeDFIB_e_RTCCallSts)1U)
#define CeDFIB_e_RTCCallCompleteOK		((TeDFIB_e_RTCCallSts)2U)
#define CeDFIB_e_RTCCallCompleteFailed		((TeDFIB_e_RTCCallSts)3U)
#endif

/*
* Enum TeDFIB_e_RTCErrors 
* Default Value:CeDFIB_e_E_OK 
*/
#ifndef TeDFIB_e_RTCErrors
typedef uint8 TeDFIB_e_RTCErrors;
#define CeDFIB_e_E_OK		((TeDFIB_e_RTCErrors)0U)
#define CeDFIB_e_HW_E_UNAVAILABLE		((TeDFIB_e_RTCErrors)9U)
#define CeDFIB_e_HW_E_FAILED		((TeDFIB_e_RTCErrors)63U)
#endif

/*
* Enum TeDFIB_e_RTCWakeupTypes 
* Default Value:CeDFIB_e_RTC_NO_WAKEUP 
*/
#ifndef TeDFIB_e_RTCWakeupTypes
typedef uint8 TeDFIB_e_RTCWakeupTypes;
#define CeDFIB_e_RTC_NO_WAKEUP		((TeDFIB_e_RTCWakeupTypes)0U)
#define CeDFIB_e_RTC_ALARM_WAKEUP		((TeDFIB_e_RTCWakeupTypes)1U)
#define CeDFIB_e_RTC_TIMER_WAKEUP		((TeDFIB_e_RTCWakeupTypes)2U)
#define CeDFIB_e_RTC_ALARM_TIMER_WAKEUP		((TeDFIB_e_RTCWakeupTypes)3U)
#endif

/*
* Enum TeDFIR_MIL_Request 
* Default Value:CeDFIR_MIL_Off 
*/
#ifndef TeDFIR_MIL_Request
typedef uint8 TeDFIR_MIL_Request;
#define CeDFIR_MIL_Off		((TeDFIR_MIL_Request)0U)
#define CeDFIR_MIL_On		((TeDFIR_MIL_Request)1U)
#define CeDFIR_MIL_Flash		((TeDFIR_MIL_Request)2U)
#endif

/*
* Enum TeDFIR_MIL_RequestCopy 
* Default Value:CeDFIR_MIL_Off 
*/
#ifndef TeDFIR_MIL_RequestCopy
typedef uint8 TeDFIR_MIL_RequestCopy;
#define CeDFIR_MIL_Off		((TeDFIR_MIL_RequestCopy)0U)
#define CeDFIR_MIL_On		((TeDFIR_MIL_RequestCopy)1U)
#define CeDFIR_MIL_Flash		((TeDFIR_MIL_RequestCopy)2U)
#endif

/*
* Enum TeDMDR_e_DrvMdSt 
* Default Value:CeDMDR_e_NoDrvMdSt 
*/
#ifndef TeDMDR_e_DrvMdSt
typedef uint8 TeDMDR_e_DrvMdSt;
#define CeDMDR_e_NoDrvMdSt		((TeDMDR_e_DrvMdSt)0U)
#define CeDMDR_e_HybridSt		((TeDMDR_e_DrvMdSt)1U)
#define CeDMDR_e_SportSt		((TeDMDR_e_DrvMdSt)2U)
#define CeDMDR_e_EVSt		((TeDMDR_e_DrvMdSt)3U)
#define CeDMDR_e_ESaveSt		((TeDMDR_e_DrvMdSt)4U)
#define CeDMDR_e_ThermalReq		((TeDMDR_e_DrvMdSt)5U)
#define CeDMDR_e_EVTempNotAvail		((TeDMDR_e_DrvMdSt)6U)
#define CeDMDR_e_ESaveTempNotAvail		((TeDMDR_e_DrvMdSt)7U)
#define CeDMDR_e_SportTempNotAvail		((TeDMDR_e_DrvMdSt)8U)
#define CeDMDR_e_EVNotAvailAccelReq		((TeDMDR_e_DrvMdSt)9U)
#define CeDMDR_e_EVNotAvailService		((TeDMDR_e_DrvMdSt)10U)
#define CeDMDR_e_EVNotAvailSOC		((TeDMDR_e_DrvMdSt)11U)
#define CeDMDR_e_NoDisplay		((TeDMDR_e_DrvMdSt)12U)
#define CeDMDR_e_EVNotAvail4LockAndTerrain		((TeDMDR_e_DrvMdSt)13U)
#define CeDMDR_e_EVNotAvail4LockAndManual		((TeDMDR_e_DrvMdSt)14U)
#define CeDMDR_e_EVNotAvail4LowAndTerrain		((TeDMDR_e_DrvMdSt)15U)
#define CeDMDR_e_EVNotAvail4LowAndManual		((TeDMDR_e_DrvMdSt)16U)
#define CeDMDR_e_ESaveNotAvailSport		((TeDMDR_e_DrvMdSt)17U)
#define CeDMDR_e_ESaveNotAvailSnow		((TeDMDR_e_DrvMdSt)18U)
#define CeDMDR_e_ESaveNotAvailSandMud		((TeDMDR_e_DrvMdSt)19U)
#define CeDMDR_e_ESaveNotAvailRock		((TeDMDR_e_DrvMdSt)20U)
#define CeDMDR_e_ESaveActvNotAvailManual		((TeDMDR_e_DrvMdSt)21U)
#define CeDMDR_e_ESaveNotAvailDrvMdReq		((TeDMDR_e_DrvMdSt)22U)
#define CeDMDR_e_EsaveNotAvailServiceReq		((TeDMDR_e_DrvMdSt)23U)
#define CeDMDR_e_EngineOnWOTInEV		((TeDMDR_e_DrvMdSt)24U)
#endif

/*
* Enum TeDMDR_e_DrvMd 
* Default Value:CeDMDR_e_NoDrvMd 
*/
#ifndef TeDMDR_e_DrvMd
typedef uint8 TeDMDR_e_DrvMd;
#define CeDMDR_e_NoDrvMd		((TeDMDR_e_DrvMd)0U)
#define CeDMDR_e_Hybrid		((TeDMDR_e_DrvMd)1U)
#define CeDMDR_e_EV		((TeDMDR_e_DrvMd)2U)
#define CeDMDR_e_ESave		((TeDMDR_e_DrvMd)3U)
#define CeDMDR_e_Sport		((TeDMDR_e_DrvMd)4U)
#define CeDMDR_e_ESaveActive		((TeDMDR_e_DrvMd)5U)
#define CeDMDR_e_Normal_Mode		((TeDMDR_e_DrvMd)6U)
#define CeDMDR_e_Range_Mode		((TeDMDR_e_DrvMd)7U)
#define CeDMDR_e_Camel_Mode		((TeDMDR_e_DrvMd)8U)
#define CeDMDR_e_Turtle_Mode		((TeDMDR_e_DrvMd)9U)
#define CeDMDR_e_OffRd		((TeDMDR_e_DrvMd)10U)
#define CeDMDR_e_SportBEV		((TeDMDR_e_DrvMd)11U)
#define CeDMDR_e_Power		((TeDMDR_e_DrvMd)12U)
#endif

/*
* Enum TeDMDR_e_EChargetype 
* Default Value:CeDMDR_e_Passive_Charging 
*/
#ifndef TeDMDR_e_EChargetype
typedef uint8 TeDMDR_e_EChargetype;
#define CeDMDR_e_Passive_Charging		((TeDMDR_e_EChargetype)0U)
#define CeDMDR_e_Active_Charging		((TeDMDR_e_EChargetype)1U)
#define CeDMDR_e_SNA		((TeDMDR_e_EChargetype)3U)
#endif

/*
* Enum TeDMDR_e_SailOffStat 
* Default Value:CeDMDR_e_NotActive 
*/
#ifndef TeDMDR_e_SailOffStat
typedef uint8 TeDMDR_e_SailOffStat;
#define CeDMDR_e_NotActive		((TeDMDR_e_SailOffStat)0U)
#define CeDMDR_e_Active		((TeDMDR_e_SailOffStat)1U)
#define CeDMDR_e_ActiveTip		((TeDMDR_e_SailOffStat)2U)
#endif

/*
* Enum TeDMDR_e_TurtleMdSts 
* Default Value:CeDMDR_e_No_Turtle_Mode 
*/
#ifndef TeDMDR_e_TurtleMdSts
typedef uint8 TeDMDR_e_TurtleMdSts;
#define CeDMDR_e_No_Turtle_Mode		((TeDMDR_e_TurtleMdSts)0U)
#define CeDMDR_e_Turtle_Mode1		((TeDMDR_e_TurtleMdSts)1U)
#define CeDMDR_e_Turtle_Mode2		((TeDMDR_e_TurtleMdSts)2U)
#define CeDMDR_e_Turtle_Mode3		((TeDMDR_e_TurtleMdSts)3U)
#define CeDMDR_e_Turtle_Mode4		((TeDMDR_e_TurtleMdSts)4U)
#endif

/*
* Enum TeDMDR_e_DrvMdBtnStat 
* Default Value:CeDMDR_e_BtnNotPrsd 
*/
#ifndef TeDMDR_e_DrvMdBtnStat
typedef uint8 TeDMDR_e_DrvMdBtnStat;
#define CeDMDR_e_BtnNotPrsd		((TeDMDR_e_DrvMdBtnStat)0U)
#define CeDMDR_e_BtnPrsd		((TeDMDR_e_DrvMdBtnStat)1U)
#define CeDMDR_e_BtnPlsbltyFlt		((TeDMDR_e_DrvMdBtnStat)2U)
#define CeDMDR_e_Reserved1		((TeDMDR_e_DrvMdBtnStat)3U)
#define CeDMDR_e_Reserved2		((TeDMDR_e_DrvMdBtnStat)4U)
#define CeDMDR_e_ShortGrnd		((TeDMDR_e_DrvMdBtnStat)5U)
#define CeDMDR_e_ShortPwr		((TeDMDR_e_DrvMdBtnStat)6U)
#endif

/*
* Enum TeDMDR_e_DrvMdLEDStat 
* Default Value:CeDMDR_e_LEDOff 
*/
#ifndef TeDMDR_e_DrvMdLEDStat
typedef uint8 TeDMDR_e_DrvMdLEDStat;
#define CeDMDR_e_LEDOff		((TeDMDR_e_DrvMdLEDStat)0U)
#define CeDMDR_e_LEDOn		((TeDMDR_e_DrvMdLEDStat)1U)
#define CeDMDR_e_LEDBlink		((TeDMDR_e_DrvMdLEDStat)2U)
#define CeDMDR_e_reserved		((TeDMDR_e_DrvMdLEDStat)3U)
#endif

/*
* Enum TeDMIR_e_eCoastSel 
* Default Value:CeDMIR_e_Level1 
*/
#ifndef TeDMIR_e_eCoastSel
typedef uint8 TeDMIR_e_eCoastSel;
#define CeDMIR_e_Level0		((TeDMIR_e_eCoastSel)0U)
#define CeDMIR_e_Level1		((TeDMIR_e_eCoastSel)1U)
#define CeDMIR_e_Level2		((TeDMIR_e_eCoastSel)2U)
#define CeDMIR_e_Level3		((TeDMIR_e_eCoastSel)3U)
#define CeDMIR_e_NotAvail		((TeDMIR_e_eCoastSel)5U)
#endif

/*
* Enum TeDMIR_e_eCoastInfo 
* Default Value:CeDMIR_e_Level1Sts 
*/
#ifndef TeDMIR_e_eCoastInfo
typedef uint8 TeDMIR_e_eCoastInfo;
#define CeDMIR_e_Level0Sts		((TeDMIR_e_eCoastInfo)0U)
#define CeDMIR_e_Level1Sts		((TeDMIR_e_eCoastInfo)1U)
#define CeDMIR_e_Level2Sts		((TeDMIR_e_eCoastInfo)2U)
#define CeDMIR_e_Level3Sts		((TeDMIR_e_eCoastInfo)3U)
#define CeDMIR_e_Level4Sts		((TeDMIR_e_eCoastInfo)4U)
#define CeDMIR_e_Level5Sts		((TeDMIR_e_eCoastInfo)5U)
#define CeDMIR_e_NA		((TeDMIR_e_eCoastInfo)6U)
#define CeDMIR_e_SNA		((TeDMIR_e_eCoastInfo)7U)
#endif

/*
* Enum TeDMIR_e_PopUpRqst 
* Default Value:CeDMIR_e_InfoLevel1 
*/
#ifndef TeDMIR_e_PopUpRqst
typedef uint8 TeDMIR_e_PopUpRqst;
#define CeDMIR_e_InfoNA		((TeDMIR_e_PopUpRqst)0U)
#define CeDMIR_e_InfoLevel1		((TeDMIR_e_PopUpRqst)1U)
#define CeDMIR_e_InfoLevel2		((TeDMIR_e_PopUpRqst)2U)
#define CeDMIR_e_InfoLevel3		((TeDMIR_e_PopUpRqst)3U)
#define CeDMIR_e_InfoLevel4		((TeDMIR_e_PopUpRqst)4U)
#define CeDMIR_e_InfoLevel5		((TeDMIR_e_PopUpRqst)5U)
#define CeDMIR_e_InfoLevel0		((TeDMIR_e_PopUpRqst)6U)
#define CeDMIR_e_InfoSNA		((TeDMIR_e_PopUpRqst)7U)
#endif

/*
* Enum TeDMIR_e_eCoastSt 
* Default Value:CeDMIR_e_NotAvailable 
*/
#ifndef TeDMIR_e_eCoastSt
typedef uint8 TeDMIR_e_eCoastSt;
#define CeDMIR_e_NotAvailable		((TeDMIR_e_eCoastSt)0U)
#define CeDMIR_e_Available		((TeDMIR_e_eCoastSt)1U)
#endif

/*
* Enum TeDMIR_e_PadLvrSts 
* Default Value:CeDMIR_e_Init 
*/
#ifndef TeDMIR_e_PadLvrSts
typedef uint8 TeDMIR_e_PadLvrSts;
#define CeDMIR_e_Init		((TeDMIR_e_PadLvrSts)0U)
#define CeDMIR_e_Idle		((TeDMIR_e_PadLvrSts)1U)
#define CeDMIR_e_UpShift		((TeDMIR_e_PadLvrSts)2U)
#define CeDMIR_e_DownShift		((TeDMIR_e_PadLvrSts)3U)
#define CeDMIR_e_BothPrs		((TeDMIR_e_PadLvrSts)4U)
#define CeDMIR_e_Error		((TeDMIR_e_PadLvrSts)5U)
#endif

/*
* Enum TeDMIR_e_PaddlesSts 
* Default Value:CeDMIR_e_NotActive 
*/
#ifndef TeDMIR_e_PaddlesSts
typedef uint8 TeDMIR_e_PaddlesSts;
#define CeDMIR_e_NotActive		((TeDMIR_e_PaddlesSts)0U)
#define CeDMIR_e_PlusPressed		((TeDMIR_e_PaddlesSts)1U)
#define CeDMIR_e_MinusPressed		((TeDMIR_e_PaddlesSts)2U)
#define CeDMIR_e_BothPressed		((TeDMIR_e_PaddlesSts)3U)
#define CeDMIR_e_Fault		((TeDMIR_e_PaddlesSts)4U)
#endif

/*
* Enum TeDMIR_e_eDriveModeSwitchSts 
* Default Value:CeDMIR_e_NotPressed 
*/
#ifndef TeDMIR_e_eDriveModeSwitchSts
typedef uint8 TeDMIR_e_eDriveModeSwitchSts;
#define CeDMIR_e_NotPressed		((TeDMIR_e_eDriveModeSwitchSts)0U)
#define CeDMIR_e_Pressed		((TeDMIR_e_eDriveModeSwitchSts)1U)
#define CeDMIR_e_ShortToGround		((TeDMIR_e_eDriveModeSwitchSts)2U)
#define CeDMIR_e_OpenShortToPwr		((TeDMIR_e_eDriveModeSwitchSts)3U)
#define CeDMIR_e_NotUsed		((TeDMIR_e_eDriveModeSwitchSts)4U)
#define CeDMIR_e_SwitchSNA		((TeDMIR_e_eDriveModeSwitchSts)7U)
#endif

/*
* Enum TeDMIR_e_DiagStatus 
* Default Value:CeDMIR_e_DiagIdle 
*/
#ifndef TeDMIR_e_DiagStatus
typedef uint8 TeDMIR_e_DiagStatus;
#define CeDMIR_e_DiagIdle		((TeDMIR_e_DiagStatus)0U)
#define CeDMIR_e_Passing		((TeDMIR_e_DiagStatus)1U)
#define CeDMIR_e_Failing		((TeDMIR_e_DiagStatus)2U)
#define CeDMIR_e_Pass		((TeDMIR_e_DiagStatus)3U)
#define CeDMIR_e_Fail		((TeDMIR_e_DiagStatus)4U)
#endif

/*
* Enum TeDMIR_e_StuckDiagStatus 
* Default Value:CeDMIR_e_SelectionIdle 
*/
#ifndef TeDMIR_e_StuckDiagStatus
typedef uint8 TeDMIR_e_StuckDiagStatus;
#define CeDMIR_e_SelectionIdle		((TeDMIR_e_StuckDiagStatus)0U)
#define CeDMIR_e_DiagNotActive		((TeDMIR_e_StuckDiagStatus)1U)
#define CeDMIR_e_DiagActive		((TeDMIR_e_StuckDiagStatus)2U)
#define CeDMIR_e_NotStuck		((TeDMIR_e_StuckDiagStatus)3U)
#define CeDMIR_e_Stuck		((TeDMIR_e_StuckDiagStatus)4U)
#endif

/*
* Enum TeDMIR_e_DriveStyleSts 
* Default Value:CeDMIR_e_Normal 
*/
#ifndef TeDMIR_e_DriveStyleSts
typedef uint8 TeDMIR_e_DriveStyleSts;
#define CeDMIR_e_Normal		((TeDMIR_e_DriveStyleSts)0U)
#define CeDMIR_e_City		((TeDMIR_e_DriveStyleSts)1U)
#define CeDMIR_e_SportFun		((TeDMIR_e_DriveStyleSts)2U)
#define CeDMIR_e_WinterRace		((TeDMIR_e_DriveStyleSts)3U)
#define CeDMIR_e_Eco		((TeDMIR_e_DriveStyleSts)4U)
#define CeDMIR_e_TracPlus		((TeDMIR_e_DriveStyleSts)5U)
#define CeDMIR_e_Trekking		((TeDMIR_e_DriveStyleSts)6U)
#define CeDMIR_e_Auto		((TeDMIR_e_DriveStyleSts)7U)
#define CeDMIR_e_Snow		((TeDMIR_e_DriveStyleSts)8U)
#define CeDMIR_e_Sand		((TeDMIR_e_DriveStyleSts)9U)
#define CeDMIR_e_Mud		((TeDMIR_e_DriveStyleSts)10U)
#define CeDMIR_e_Rock		((TeDMIR_e_DriveStyleSts)11U)
#define CeDMIR_e_Race		((TeDMIR_e_DriveStyleSts)12U)
#define CeDMIR_e_SandMud		((TeDMIR_e_DriveStyleSts)13U)
#define CeDMIR_e_OffRoad		((TeDMIR_e_DriveStyleSts)14U)
#define CeDMIR_e_DriveStyleStsSNA		((TeDMIR_e_DriveStyleSts)31U)
#endif

/*
* Enum TeDMIR_e_CreepSts 
* Default Value:CeDMIR_e_CreepOff 
*/
#ifndef TeDMIR_e_CreepSts
typedef uint8 TeDMIR_e_CreepSts;
#define CeDMIR_e_CreepOff		((TeDMIR_e_CreepSts)0U)
#define CeDMIR_e_CreepOn		((TeDMIR_e_CreepSts)1U)
#endif

/*
* Enum TeDMIR_e_RegenSts 
* Default Value:CeDMIR_e_NormalRegen 
*/
#ifndef TeDMIR_e_RegenSts
typedef uint8 TeDMIR_e_RegenSts;
#define CeDMIR_e_NormalRegen		((TeDMIR_e_RegenSts)0U)
#define CeDMIR_e_MaxRegen		((TeDMIR_e_RegenSts)1U)
#endif

/*
* Enum TeDMIR_e_DrvMdSelect 
* Default Value:CeDMIR_e_Select_Not_Pressed 
*/
#ifndef TeDMIR_e_DrvMdSelect
typedef uint8 TeDMIR_e_DrvMdSelect;
#define CeDMIR_e_Select_Not_Pressed		((TeDMIR_e_DrvMdSelect)0U)
#define CeDMIR_e_Select_Pressed		((TeDMIR_e_DrvMdSelect)1U)
#define CeDMIR_e_Select_Not_defined		((TeDMIR_e_DrvMdSelect)2U)
#define CeDMIR_e_Select_SNA		((TeDMIR_e_DrvMdSelect)3U)
#endif

/*
* Enum TeDMIR_e_PowershotButton 
* Default Value:CeDMIR_e_Not_Activated 
*/
#ifndef TeDMIR_e_PowershotButton
typedef uint8 TeDMIR_e_PowershotButton;
#define CeDMIR_e_Not_Activated		((TeDMIR_e_PowershotButton)0U)
#define CeDMIR_e_Activated		((TeDMIR_e_PowershotButton)1U)
#define CeDMIR_e_Short_to_Grnd_Fault		((TeDMIR_e_PowershotButton)5U)
#define CeDMIR_e_Open_Short_to_Pwr_Flt		((TeDMIR_e_PowershotButton)6U)
#define CeDMIR_e_SNtAvailable		((TeDMIR_e_PowershotButton)7U)
#endif

/*
* Enum TeDMIR_e_ECoastingReq 
* Default Value:CeDMIR_e_LevelOne 
*/
#ifndef TeDMIR_e_ECoastingReq
typedef uint8 TeDMIR_e_ECoastingReq;
#define CeDMIR_e_LevelOne		((TeDMIR_e_ECoastingReq)1U)
#define CeDMIR_e_LevelTwo		((TeDMIR_e_ECoastingReq)2U)
#define CeDMIR_e_LevelThree		((TeDMIR_e_ECoastingReq)3U)
#define CeDMIR_e_LevelFour		((TeDMIR_e_ECoastingReq)4U)
#define CeDMIR_e_LevelFive		((TeDMIR_e_ECoastingReq)5U)
#define CeDMIR_e_SignNotAvailable		((TeDMIR_e_ECoastingReq)7U)
#endif

/*
* Enum TeDMIR_e_PaddleModeRequest 
* Default Value:CeDMIR_e_None 
*/
#ifndef TeDMIR_e_PaddleModeRequest
typedef uint8 TeDMIR_e_PaddleModeRequest;
#define CeDMIR_e_None		((TeDMIR_e_PaddleModeRequest)0U)
#define CeDMIR_e_Dis		((TeDMIR_e_PaddleModeRequest)1U)
#define CeDMIR_e_En		((TeDMIR_e_PaddleModeRequest)2U)
#define CeDMIR_e_PdlReqNA		((TeDMIR_e_PaddleModeRequest)3U)
#endif

/*
* Enum TeDMIR_e_eCoastPopUpMsg 
* Default Value:CeDMIR_e_Msg0 
*/
#ifndef TeDMIR_e_eCoastPopUpMsg
typedef uint8 TeDMIR_e_eCoastPopUpMsg;
#define CeDMIR_e_Msg0		((TeDMIR_e_eCoastPopUpMsg)0U)
#define CeDMIR_e_Msg1		((TeDMIR_e_eCoastPopUpMsg)1U)
#define CeDMIR_e_Msg2		((TeDMIR_e_eCoastPopUpMsg)2U)
#define CeDMIR_e_Msg3		((TeDMIR_e_eCoastPopUpMsg)3U)
#endif

/*
* Enum TeDMIR_e_DrvMdSt 
* Default Value:CeDMIR_e_NoDrvMdSt 
*/
#ifndef TeDMIR_e_DrvMdSt
typedef uint8 TeDMIR_e_DrvMdSt;
#define CeDMIR_e_NoDrvMdSt		((TeDMIR_e_DrvMdSt)0U)
#define CeDMIR_e_HybridSt		((TeDMIR_e_DrvMdSt)1U)
#define CeDMIR_e_SportSt		((TeDMIR_e_DrvMdSt)2U)
#define CeDMIR_e_EVSt		((TeDMIR_e_DrvMdSt)3U)
#define CeDMIR_e_ESaveSt		((TeDMIR_e_DrvMdSt)4U)
#define CeDMIR_e_ThermalReq		((TeDMIR_e_DrvMdSt)5U)
#define CeDMIR_e_EVTempNotAvail		((TeDMIR_e_DrvMdSt)6U)
#define CeDMIR_e_ESaveTempNotAvail		((TeDMIR_e_DrvMdSt)7U)
#define CeDMIR_e_SportTempNotAvail		((TeDMIR_e_DrvMdSt)8U)
#define CeDMIR_e_EVNotAvailAccelReq		((TeDMIR_e_DrvMdSt)9U)
#define CeDMIR_e_EVNotAvailService		((TeDMIR_e_DrvMdSt)10U)
#define CeDMIR_e_EVNotAvailSOC		((TeDMIR_e_DrvMdSt)11U)
#define CeDMIR_e_NoDisplay		((TeDMIR_e_DrvMdSt)12U)
#define CeDMIR_e_EVNotAvail4LockAndTerrain		((TeDMIR_e_DrvMdSt)13U)
#define CeDMIR_e_EVNotAvail4LockAndManual		((TeDMIR_e_DrvMdSt)14U)
#define CeDMIR_e_EVNotAvail4LowAndTerrain		((TeDMIR_e_DrvMdSt)15U)
#define CeDMIR_e_EVNotAvail4LowAndManual		((TeDMIR_e_DrvMdSt)16U)
#define CeDMIR_e_ESaveNotAvailSport		((TeDMIR_e_DrvMdSt)17U)
#define CeDMIR_e_ESaveNotAvailSnow		((TeDMIR_e_DrvMdSt)18U)
#define CeDMIR_e_ESaveNotAvailSandMud		((TeDMIR_e_DrvMdSt)19U)
#define CeDMIR_e_ESaveNotAvailRock		((TeDMIR_e_DrvMdSt)20U)
#define CeDMIR_e_ESaveActvNotAvailManual		((TeDMIR_e_DrvMdSt)21U)
#define CeDMIR_e_ESaveNotAvailDrvMdReq		((TeDMIR_e_DrvMdSt)22U)
#define CeDMIR_e_EsaveNotAvailServiceReq		((TeDMIR_e_DrvMdSt)23U)
#define CeDMIR_e_EngineOnWOTInEV		((TeDMIR_e_DrvMdSt)24U)
#define CeDMIR_e_EcoTempNotAvail		((TeDMIR_e_DrvMdSt)25U)
#define CeDMIR_e_EcoSt		((TeDMIR_e_DrvMdSt)26U)
#define CeDMIR_e_EVNotAvailFuelRefresh		((TeDMIR_e_DrvMdSt)27U)
#define CeDMIR_e_EVNotAvailOilOrSpark		((TeDMIR_e_DrvMdSt)28U)
#define CeDMIR_e_OilRefreshComplete		((TeDMIR_e_DrvMdSt)29U)
#define CeDMIR_e_EVNotAvailOptimizedPerformance		((TeDMIR_e_DrvMdSt)30U)
#define CeDMIR_e_EcoOnlyAvailAuto		((TeDMIR_e_DrvMdSt)31U)
#endif

/*
* Enum TeDMIR_e_DrvMdBtnStat 
* Default Value:CeDMIR_e_BtnNotPrsd 
*/
#ifndef TeDMIR_e_DrvMdBtnStat
typedef uint8 TeDMIR_e_DrvMdBtnStat;
#define CeDMIR_e_BtnNotPrsd		((TeDMIR_e_DrvMdBtnStat)0U)
#define CeDMIR_e_BtnPrsd		((TeDMIR_e_DrvMdBtnStat)1U)
#define CeDMIR_e_BtnPlsbltyFlt		((TeDMIR_e_DrvMdBtnStat)2U)
#define CeDMIR_e_Reserved1		((TeDMIR_e_DrvMdBtnStat)3U)
#define CeDMIR_e_Reserved2		((TeDMIR_e_DrvMdBtnStat)4U)
#define CeDMIR_e_ShortGrnd		((TeDMIR_e_DrvMdBtnStat)5U)
#define CeDMIR_e_ShortPwr		((TeDMIR_e_DrvMdBtnStat)6U)
#define CeDMIR_e_NotDefined		((TeDMIR_e_DrvMdBtnStat)7U)
#define CeDMIR_e_DrvMdBtn_SNA		((TeDMIR_e_DrvMdBtnStat)8U)
#endif

/*
* Enum TeDTMR_e_ACCSystemSts 
* Default Value:CeDTMR_e_Off 
*/
#ifndef TeDTMR_e_ACCSystemSts
typedef uint8 TeDTMR_e_ACCSystemSts;
#define CeDTMR_e_Off		((TeDTMR_e_ACCSystemSts)0U)
#define CeDTMR_e_Enabled		((TeDTMR_e_ACCSystemSts)1U)
#define CeDTMR_e_Engaged		((TeDTMR_e_ACCSystemSts)2U)
#define CeDTMR_e_Engaged_BrakeOnly		((TeDTMR_e_ACCSystemSts)3U)
#define CeDTMR_e_Override		((TeDTMR_e_ACCSystemSts)4U)
#define CeDTMR_e_Cancel		((TeDTMR_e_ACCSystemSts)5U)
#endif

/*
* Enum TeDTMR_e_Lv2BrkPdlStat 
* Default Value:CeDTMR_e_BrkStat_NotDtrmnd 
*/
#ifndef TeDTMR_e_Lv2BrkPdlStat
typedef uint8 TeDTMR_e_Lv2BrkPdlStat;
#define CeDTMR_e_BrkNotAppld		((TeDTMR_e_Lv2BrkPdlStat)0U)
#define CeDTMR_e_BrakeAppld		((TeDTMR_e_Lv2BrkPdlStat)1U)
#define CeDTMR_e_BrkStat_NotDtrmnd		((TeDTMR_e_Lv2BrkPdlStat)2U)
#endif

/*
* Enum TeDTMR_e_DriveStyleSts_DTMR 
* Default Value:CeDTMR_e_Auto 
*/
#ifndef TeDTMR_e_DriveStyleSts_DTMR
typedef uint8 TeDTMR_e_DriveStyleSts_DTMR;
#define CeDTMR_e_Auto		((TeDTMR_e_DriveStyleSts_DTMR)0U)
#define CeDTMR_e_Offroad		((TeDTMR_e_DriveStyleSts_DTMR)5U)
#define CeDTMR_e_ECO		((TeDTMR_e_DriveStyleSts_DTMR)6U)
#define CeDTMR_e_Corsa		((TeDTMR_e_DriveStyleSts_DTMR)7U)
#define CeDTMR_e_Sport		((TeDTMR_e_DriveStyleSts_DTMR)8U)
#endif

/*
* Enum TeDTMR_e_Lv2DrvMd_DTMR 
* Default Value:CeDTMR_e_DrvMd_Auto 
*/
#ifndef TeDTMR_e_Lv2DrvMd_DTMR
typedef uint8 TeDTMR_e_Lv2DrvMd_DTMR;
#define CeDTMR_e_DrvMd_Auto		((TeDTMR_e_Lv2DrvMd_DTMR)0U)
#define CeDTMR_e_DrvMd_Offroad		((TeDTMR_e_Lv2DrvMd_DTMR)1U)
#define CeDTMR_e_DrvMd_Eco		((TeDTMR_e_Lv2DrvMd_DTMR)2U)
#define CeDTMR_e_DrvMd_Sport		((TeDTMR_e_Lv2DrvMd_DTMR)3U)
#define CeDTMR_e_DrvMd_TurtleMd1		((TeDTMR_e_Lv2DrvMd_DTMR)4U)
#define CeDTMR_e_DrvMd_TurtleMd2		((TeDTMR_e_Lv2DrvMd_DTMR)5U)
#define CeDTMR_e_DrvMd_TurtleMd3		((TeDTMR_e_Lv2DrvMd_DTMR)6U)
#define CeDTMR_e_DrvMd_TurtleMd4		((TeDTMR_e_Lv2DrvMd_DTMR)7U)
#endif

/*
* Enum TeDTMR_e_eCoastSel 
* Default Value:CeDTMR_e_Level1 
*/
#ifndef TeDTMR_e_eCoastSel
typedef uint8 TeDTMR_e_eCoastSel;
#define CeDTMR_e_Level0		((TeDTMR_e_eCoastSel)0U)
#define CeDTMR_e_Level1		((TeDTMR_e_eCoastSel)1U)
#define CeDTMR_e_Level2		((TeDTMR_e_eCoastSel)2U)
#define CeDTMR_e_Level3		((TeDTMR_e_eCoastSel)3U)
#define CeDTMR_e_NotAvail		((TeDTMR_e_eCoastSel)5U)
#endif

/*
* Enum TeDTMR_e_Lv2ECO_Mode_Latch 
* Default Value:CeDTMR_e_ECO_NotAvail 
*/
#ifndef TeDTMR_e_Lv2ECO_Mode_Latch
typedef uint8 TeDTMR_e_Lv2ECO_Mode_Latch;
#define CeDTMR_e_ECO_NotAvail		((TeDTMR_e_Lv2ECO_Mode_Latch)0U)
#define CeDTMR_e_Reset2OFF		((TeDTMR_e_Lv2ECO_Mode_Latch)1U)
#define CeDTMR_e_Reset2ON		((TeDTMR_e_Lv2ECO_Mode_Latch)2U)
#define CeDTMR_e_PrevSts		((TeDTMR_e_Lv2ECO_Mode_Latch)3U)
#endif

/*
* Enum TeDTMR_e_LimitMaxPowerSel 
* Default Value:CeDTMR_e_Not_Active 
*/
#ifndef TeDTMR_e_LimitMaxPowerSel
typedef uint8 TeDTMR_e_LimitMaxPowerSel;
#define CeDTMR_e_Not_Active		((TeDTMR_e_LimitMaxPowerSel)0U)
#define CeDTMR_e_Active		((TeDTMR_e_LimitMaxPowerSel)1U)
#define CeDTMR_e_Reserved_1		((TeDTMR_e_LimitMaxPowerSel)2U)
#define CeDTMR_e_Reserved_2		((TeDTMR_e_LimitMaxPowerSel)3U)
#endif

/*
* Enum TeDTMR_e_Lv2DrvMd_Total 
* Default Value:CeDTMR_e_DrvMdTotal_Auto 
*/
#ifndef TeDTMR_e_Lv2DrvMd_Total
typedef uint8 TeDTMR_e_Lv2DrvMd_Total;
#define CeDTMR_e_DrvMdTotal_None		((TeDTMR_e_Lv2DrvMd_Total)0U)
#define CeDTMR_e_DrvMdTotal_Auto		((TeDTMR_e_Lv2DrvMd_Total)1U)
#define CeDTMR_e_DrvMdTotal_Sport		((TeDTMR_e_Lv2DrvMd_Total)2U)
#define CeDTMR_e_DrvMdTotal_Track		((TeDTMR_e_Lv2DrvMd_Total)3U)
#define CeDTMR_e_DrvMdTotal_Snow		((TeDTMR_e_Lv2DrvMd_Total)4U)
#define CeDTMR_e_DrvMdTotal_Valet		((TeDTMR_e_Lv2DrvMd_Total)5U)
#define CeDTMR_e_DrvMdTotal_Rock		((TeDTMR_e_Lv2DrvMd_Total)6U)
#define CeDTMR_e_DrvMdTotal_Tow		((TeDTMR_e_Lv2DrvMd_Total)7U)
#define CeDTMR_e_DrvMdTotal_Eco		((TeDTMR_e_Lv2DrvMd_Total)8U)
#define CeDTMR_e_DrvMdTotal_Launch		((TeDTMR_e_Lv2DrvMd_Total)9U)
#define CeDTMR_e_DrvMdTotal_All		((TeDTMR_e_Lv2DrvMd_Total)10U)
#define CeDTMR_e_DrvMdTotal_Custom		((TeDTMR_e_Lv2DrvMd_Total)11U)
#define CeDTMR_e_DrvMdTotal_Mud		((TeDTMR_e_Lv2DrvMd_Total)12U)
#define CeDTMR_e_DrvMdTotal_Sand		((TeDTMR_e_Lv2DrvMd_Total)13U)
#define CeDTMR_e_DrvMdTotal_Plus		((TeDTMR_e_Lv2DrvMd_Total)14U)
#define CeDTMR_e_DrvMdTotal_Ice		((TeDTMR_e_Lv2DrvMd_Total)15U)
#define CeDTMR_e_DrvMdTotal_Dynamic		((TeDTMR_e_Lv2DrvMd_Total)16U)
#define CeDTMR_e_DrvMdTotal_OffRoad		((TeDTMR_e_Lv2DrvMd_Total)17U)
#define CeDTMR_e_DrvMdTotal_Baja		((TeDTMR_e_Lv2DrvMd_Total)18U)
#define CeDTMR_e_DrvMdTotal_MudSand		((TeDTMR_e_Lv2DrvMd_Total)19U)
#define CeDTMR_e_DrvMdTotal_Drag		((TeDTMR_e_Lv2DrvMd_Total)20U)
#define CeDTMR_e_DrvMdTotal_LineLock		((TeDTMR_e_Lv2DrvMd_Total)21U)
#define CeDTMR_e_DrvMdTotal_Drift		((TeDTMR_e_Lv2DrvMd_Total)22U)
#define CeDTMR_e_DrvMdTotal_Donut		((TeDTMR_e_Lv2DrvMd_Total)23U)
#define CeDTMR_e_DrvMdTotal_RWD		((TeDTMR_e_Lv2DrvMd_Total)24U)
#define CeDTMR_e_DrvMdTotal_Turtle1		((TeDTMR_e_Lv2DrvMd_Total)25U)
#define CeDTMR_e_DrvMdTotal_Turtle2		((TeDTMR_e_Lv2DrvMd_Total)26U)
#define CeDTMR_e_DrvMdTotal_Turtle3		((TeDTMR_e_Lv2DrvMd_Total)27U)
#define CeDTMR_e_DrvMdTotal_SNA		((TeDTMR_e_Lv2DrvMd_Total)31U)
#define CeDTMR_e_DrvMdTotal_Turtle4		((TeDTMR_e_Lv2DrvMd_Total)28U)
#endif

/*
* Enum TeDTRR_e_SumFWIDFst 
* Default Value:CeDTRR_e_Potential 
*/
#ifndef TeDTRR_e_SumFWIDFst
typedef uint8 TeDTRR_e_SumFWIDFst;
#define CeDTRR_e_Potential		((TeDTRR_e_SumFWIDFst)0U)
#define CeDTRR_e_Pedal_Cruise		((TeDTRR_e_SumFWIDFst)1U)
#define CeDTRR_e_OverRev		((TeDTRR_e_SumFWIDFst)2U)
#define CeDTRR_e_OverSpd		((TeDTRR_e_SumFWIDFst)3U)
#define CeDTRR_e_ESP		((TeDTRR_e_SumFWIDFst)4U)
#define CeDTRR_e_Level2		((TeDTRR_e_SumFWIDFst)5U)
#define CeDTRR_e_Trans		((TeDTRR_e_SumFWIDFst)6U)
#define CeDTRR_e_StallTrq		((TeDTRR_e_SumFWIDFst)7U)
#define CeDTRR_e_Bobble		((TeDTRR_e_SumFWIDFst)8U)
#define CeDTRR_e_MDS		((TeDTRR_e_SumFWIDFst)9U)
#define CeDTRR_e_ECC		((TeDTRR_e_SumFWIDFst)10U)
#define CeDTRR_e_ThermalProt		((TeDTRR_e_SumFWIDFst)11U)
#define CeDTRR_e_CruiseDeclutch		((TeDTRR_e_SumFWIDFst)12U)
#define CeDTRR_e_EMATTorqueReq		((TeDTRR_e_SumFWIDFst)13U)
#define CeDTRR_e_ResvdforIDFSO		((TeDTRR_e_SumFWIDFst)14U)
#define CeDTRR_e_ResvdforAxleTrqLmt		((TeDTRR_e_SumFWIDFst)15U)
#define CeDTRR_e_TurboFaultMaxTrqLmt		((TeDTRR_e_SumFWIDFst)16U)
#define CeDTRR_e_TurboMaxPowerTrqLmt		((TeDTRR_e_SumFWIDFst)17U)
#define CeDTRR_e_HEVFastTrqReqst		((TeDTRR_e_SumFWIDFst)18U)
#define CeDTRR_e_NVHFWTrqLimit		((TeDTRR_e_SumFWIDFst)19U)
#define CeDTRR_e_PurgTrqLimit		((TeDTRR_e_SumFWIDFst)20U)
#define CeDTRR_e_SNA		((TeDTRR_e_SumFWIDFst)31U)
#endif

/*
* Enum TeDTRR_e_CreepingSts 
* Default Value:CeDTRR_e_Off 
*/
#ifndef TeDTRR_e_CreepingSts
typedef uint8 TeDTRR_e_CreepingSts;
#define CeDTRR_e_Off		((TeDTRR_e_CreepingSts)0U)
#define CeDTRR_e_Standard		((TeDTRR_e_CreepingSts)1U)
#define CeDTRR_e_NotAvailable		((TeDTRR_e_CreepingSts)2U)
#define CeDTRR_e_Alternative		((TeDTRR_e_CreepingSts)3U)
#endif

/*
* Enum TeDTRR_e_OPD_Sts 
* Default Value:CeDTRR_e_Available 
*/
#ifndef TeDTRR_e_OPD_Sts
typedef uint8 TeDTRR_e_OPD_Sts;
#define CeDTRR_e_Available		((TeDTRR_e_OPD_Sts)0U)
#define CeDTRR_e_Active		((TeDTRR_e_OPD_Sts)1U)
#define CeDTRR_e_Faulted		((TeDTRR_e_OPD_Sts)2U)
#define CeDTRR_e_Temp_Unavail		((TeDTRR_e_OPD_Sts)3U)
#define CeDTRR_e_Unknown		((TeDTRR_e_OPD_Sts)4U)
#define CeDTRR_e_Unavailable		((TeDTRR_e_OPD_Sts)5U)
#define CeDTRR_e_On		((TeDTRR_e_OPD_Sts)6U)
#define CeDTRR_e_OPDOff		((TeDTRR_e_OPD_Sts)7U)
#endif

/*
* Enum TeEBMR_e_eBoostStatus 
* Default Value:CeEBMR_e_eBoostOFF 
*/
#ifndef TeEBMR_e_eBoostStatus
typedef uint8 TeEBMR_e_eBoostStatus;
#define CeEBMR_e_eBoostOFF		((TeEBMR_e_eBoostStatus)0U)
#define CeEBMR_e_eBoostEnabled		((TeEBMR_e_eBoostStatus)1U)
#define CeEBMR_e_eBoostEngaged		((TeEBMR_e_eBoostStatus)2U)
#define CeEBMR_e_eBoostNotAvailable		((TeEBMR_e_eBoostStatus)3U)
#define CeEBMR_e_PrepNoPS		((TeEBMR_e_eBoostStatus)4U)
#define CeEBMR_e_PrepPS		((TeEBMR_e_eBoostStatus)5U)
#endif

/*
* Enum TeEBMR_e_PtoPAvail 
* Default Value:CeEBMR_e_NoDisplay 
*/
#ifndef TeEBMR_e_PtoPAvail
typedef uint8 TeEBMR_e_PtoPAvail;
#define CeEBMR_e_NoDisplay		((TeEBMR_e_PtoPAvail)0U)
#define CeEBMR_e_NotAvailable		((TeEBMR_e_PtoPAvail)1U)
#define CeEBMR_e_Available		((TeEBMR_e_PtoPAvail)2U)
#define CeEBMR_e_Active		((TeEBMR_e_PtoPAvail)3U)
#endif

/*
* Enum TeEBMR_e_eBoostWarning 
* Default Value:CeEBMR_e_DeactivatedESCOff 
*/
#ifndef TeEBMR_e_eBoostWarning
typedef uint8 TeEBMR_e_eBoostWarning;
#define CeEBMR_e_None		((TeEBMR_e_eBoostWarning)0U)
#define CeEBMR_e_eBoostInhibitESCOff		((TeEBMR_e_eBoostWarning)1U)
#define CeEBMR_e_eBoostInhibitSPORTMODE		((TeEBMR_e_eBoostWarning)2U)
#define CeEBMR_e_DeactivatedESCOff		((TeEBMR_e_eBoostWarning)3U)
#define CeEBMR_e_DeactivatedSPORTMODE		((TeEBMR_e_eBoostWarning)4U)
#define CeEBMR_e_TM15		((TeEBMR_e_eBoostWarning)5U)
#define CeEBMR_e_TM16		((TeEBMR_e_eBoostWarning)6U)
#define CeEBMR_e_TM17		((TeEBMR_e_eBoostWarning)7U)
#define CeEBMR_e_TM18		((TeEBMR_e_eBoostWarning)8U)
#define CeEBMR_e_TM19		((TeEBMR_e_eBoostWarning)9U)
#define CeEBMR_e_TM20		((TeEBMR_e_eBoostWarning)10U)
#define CeEBMR_e_TM21		((TeEBMR_e_eBoostWarning)11U)
#define CeEBMR_e_TM22		((TeEBMR_e_eBoostWarning)12U)
#define CeEBMR_e_TM23		((TeEBMR_e_eBoostWarning)13U)
#define CeEBMR_e_TM24		((TeEBMR_e_eBoostWarning)14U)
#define CeEBMR_e_TM25		((TeEBMR_e_eBoostWarning)15U)
#define CeEBMR_e_TM26		((TeEBMR_e_eBoostWarning)16U)
#define CeEBMR_e_TM27		((TeEBMR_e_eBoostWarning)17U)
#define CeEBMR_e_TM28		((TeEBMR_e_eBoostWarning)18U)
#define CeEBMR_e_TM29		((TeEBMR_e_eBoostWarning)19U)
#define CeEBMR_e_TM30		((TeEBMR_e_eBoostWarning)20U)
#define CeEBMR_e_TM31		((TeEBMR_e_eBoostWarning)21U)
#define CeEBMR_e_TM32		((TeEBMR_e_eBoostWarning)22U)
#define CeEBMR_e_TM33		((TeEBMR_e_eBoostWarning)23U)
#define CeEBMR_e_TM34		((TeEBMR_e_eBoostWarning)24U)
#define CeEBMR_e_TM35		((TeEBMR_e_eBoostWarning)25U)
#define CeEBMR_e_TM36		((TeEBMR_e_eBoostWarning)26U)
#define CeEBMR_e_TM37		((TeEBMR_e_eBoostWarning)27U)
#define CeEBMR_e_TM38		((TeEBMR_e_eBoostWarning)28U)
#define CeEBMR_e_Warning4		((TeEBMR_e_eBoostWarning)29U)
#define CeEBMR_e_Warning1		((TeEBMR_e_eBoostWarning)30U)
#define CeEBMR_e_Warning6		((TeEBMR_e_eBoostWarning)31U)
#define CeEBMR_e_Warning8		((TeEBMR_e_eBoostWarning)32U)
#endif

/*
* Enum TeEBTR_e_EBTM_Command 
* Default Value:CeEBTR_e_DoNothing 
*/
#ifndef TeEBTR_e_EBTM_Command
typedef uint8 TeEBTR_e_EBTM_Command;
#define CeEBTR_e_DoNothing		((TeEBTR_e_EBTM_Command)0U)
#define CeEBTR_e_Calibrate		((TeEBTR_e_EBTM_Command)1U)
#define CeEBTR_e_SetLowTension		((TeEBTR_e_EBTM_Command)2U)
#define CeEBTR_e_SetHighTension		((TeEBTR_e_EBTM_Command)3U)
#define CeEBTR_e_SetHomePosition		((TeEBTR_e_EBTM_Command)4U)
#define CeEBTR_e_SNA		((TeEBTR_e_EBTM_Command)15U)
#endif

/*
* Enum TeEBTR_e_EBTM_Status 
* Default Value:CeEBTR_e_Undefined 
*/
#ifndef TeEBTR_e_EBTM_Status
typedef uint8 TeEBTR_e_EBTM_Status;
#define CeEBTR_e_Undefined		((TeEBTR_e_EBTM_Status)0U)
#define CeEBTR_e_InTransitionCW		((TeEBTR_e_EBTM_Status)1U)
#define CeEBTR_e_InTransitionCCW		((TeEBTR_e_EBTM_Status)2U)
#define CeEBTR_e_LowTension		((TeEBTR_e_EBTM_Status)4U)
#define CeEBTR_e_HighTension		((TeEBTR_e_EBTM_Status)8U)
#define CeEBTR_e_HomePosition		((TeEBTR_e_EBTM_Status)16U)
#define CeEBTR_e_AppDisabled		((TeEBTR_e_EBTM_Status)32U)
#endif

/*
* Enum TeEBTR_e_Parameter_Status 
* Default Value:CeEBTR_e_Unknown 
*/
#ifndef TeEBTR_e_Parameter_Status
typedef uint8 TeEBTR_e_Parameter_Status;
#define CeEBTR_e_Unknown		((TeEBTR_e_Parameter_Status)0U)
#define CeEBTR_e_ElectronicsFault		((TeEBTR_e_Parameter_Status)1U)
#define CeEBTR_e_MechanicalFault		((TeEBTR_e_Parameter_Status)2U)
#define CeEBTR_e_CurrentSensorFault		((TeEBTR_e_Parameter_Status)3U)
#define CeEBTR_e_TempSensorFault		((TeEBTR_e_Parameter_Status)4U)
#define CeEBTR_e_VoltSensorFault		((TeEBTR_e_Parameter_Status)5U)
#define CeEBTR_e_SpeedSensorFault		((TeEBTR_e_Parameter_Status)6U)
#define CeEBTR_e_MotorDriverFault		((TeEBTR_e_Parameter_Status)7U)
#define CeEBTR_e_OK		((TeEBTR_e_Parameter_Status)128U)
#define CeEBTR_e_MissingBelt		((TeEBTR_e_Parameter_Status)129U)
#define CeEBTR_e_Misinstalled		((TeEBTR_e_Parameter_Status)130U)
#define CeEBTR_e_EOL		((TeEBTR_e_Parameter_Status)131U)
#define CeEBTR_e_ParkTooCloseToTouch		((TeEBTR_e_Parameter_Status)132U)
#define CeEBTR_e_ParkTooCloseToHome		((TeEBTR_e_Parameter_Status)133U)
#define CeEBTR_e_TargetCurrentNotReached		((TeEBTR_e_Parameter_Status)134U)
#define CeEBTR_e_IncorrectMsgFormat		((TeEBTR_e_Parameter_Status)193U)
#define CeEBTR_e_IncorrectParameterValue		((TeEBTR_e_Parameter_Status)194U)
#define CeEBTR_e_BattVoltOoR		((TeEBTR_e_Parameter_Status)195U)
#define CeEBTR_e_TempTooHigh		((TeEBTR_e_Parameter_Status)196U)
#endif

/*
* Enum TeEMMR_e_APMOperMode 
* Default Value:CeEMMR_e_Lv2_IDLE 
*/
#ifndef TeEMMR_e_APMOperMode
typedef uint8 TeEMMR_e_APMOperMode;
#define CeEMMR_e_Lv2_IDLE		((TeEMMR_e_APMOperMode)0U)
#define CeEMMR_e_Lv2_OperBuckCV		((TeEMMR_e_APMOperMode)1U)
#define CeEMMR_e_Lv2_OperBuckCC		((TeEMMR_e_APMOperMode)2U)
#define CeEMMR_e_Lv2_OperBuckCP		((TeEMMR_e_APMOperMode)3U)
#define CeEMMR_e_Lv2_OperBuckSpecial		((TeEMMR_e_APMOperMode)4U)
#define CeEMMR_e_Lv2_OperBoost		((TeEMMR_e_APMOperMode)5U)
#define CeEMMR_e_Lv2_OperPrecharge		((TeEMMR_e_APMOperMode)6U)
#define CeEMMR_e_Lv2_OperDischarge		((TeEMMR_e_APMOperMode)7U)
#define CeEMMR_e_Lv2_OperMode_Off		((TeEMMR_e_APMOperMode)8U)
#define CeEMMR_e_Lv2_OperMode_SNA		((TeEMMR_e_APMOperMode)15U)
#endif

/*
* Enum TeENGR_e_CylinderDeacModes 
* Default Value:CeENGR_e_AllCylindersActive 
*/
#ifndef TeENGR_e_CylinderDeacModes
typedef uint8 TeENGR_e_CylinderDeacModes;
#define CeENGR_e_AllCylindersActive		((TeENGR_e_CylinderDeacModes)0U)
#define CeENGR_e_DeacInProgress		((TeENGR_e_CylinderDeacModes)1U)
#define CeENGR_e_HalfCylindersActive		((TeENGR_e_CylinderDeacModes)2U)
#define CeENGR_e_ReacInProgress		((TeENGR_e_CylinderDeacModes)3U)
#define CeENGR_e_OneCylinderDeactivated		((TeENGR_e_CylinderDeacModes)4U)
#endif

/*
* Enum TeENGR_e_EngDFSO_St 
* Default Value:CeENGR_e_DFSO_Disabled 
*/
#ifndef TeENGR_e_EngDFSO_St
typedef uint8 TeENGR_e_EngDFSO_St;
#define CeENGR_e_DFSO_Disabled		((TeENGR_e_EngDFSO_St)0U)
#define CeENGR_e_DFSO_Enabled		((TeENGR_e_EngDFSO_St)1U)
#endif

/*
* Enum TeENGR_e_EngineSts 
* Default Value:CeENGR_e_Engine_Off 
*/
#ifndef TeENGR_e_EngineSts
typedef uint8 TeENGR_e_EngineSts;
#define CeENGR_e_Engine_Off		((TeENGR_e_EngineSts)0U)
#define CeENGR_e_Engine_Crancking		((TeENGR_e_EngineSts)1U)
#define CeENGR_e_Engine_on		((TeENGR_e_EngineSts)2U)
#define CeENGR_e_EngineSts_SNA		((TeENGR_e_EngineSts)3U)
#endif

/*
* Enum TeENGR_e_Cam_Phsr_Stat 
* Default Value:CeENGR_e_AllPhasersParked 
*/
#ifndef TeENGR_e_Cam_Phsr_Stat
typedef uint8 TeENGR_e_Cam_Phsr_Stat;
#define CeENGR_e_AllPhasersParked		((TeENGR_e_Cam_Phsr_Stat)0U)
#define CeENGR_e_NoPhasersParked		((TeENGR_e_Cam_Phsr_Stat)1U)
#define CeENGR_e_SomePhasersParked		((TeENGR_e_Cam_Phsr_Stat)2U)
#define CeENGR_e_ReservedParked		((TeENGR_e_Cam_Phsr_Stat)3U)
#endif

/*
* Enum TeENGR_e_ESS_Engine_State 
* Default Value:CeENGR_e_ENS_STOPPED 
*/
#ifndef TeENGR_e_ESS_Engine_State
typedef uint8 TeENGR_e_ESS_Engine_State;
#define CeENGR_e_ENS_STOPPED		((TeENGR_e_ESS_Engine_State)1U)
#define CeENGR_e_ENS_RQ_ST		((TeENGR_e_ESS_Engine_State)2U)
#define CeENGR_e_ENS_RUN		((TeENGR_e_ESS_Engine_State)3U)
#define CeENGR_e_ENS_STOP_PEND		((TeENGR_e_ESS_Engine_State)4U)
#define CeENGR_e_ENS_ST_PRTCT		((TeENGR_e_ESS_Engine_State)5U)
#define CeENGR_e_ENS_ST_INH		((TeENGR_e_ESS_Engine_State)6U)
#define CeENGR_e_ENS_DSBL		((TeENGR_e_ESS_Engine_State)7U)
#define CeENGR_e_ENS_IHB_LATCH		((TeENGR_e_ESS_Engine_State)8U)
#define CeENGR_e_ENS_ST		((TeENGR_e_ESS_Engine_State)9U)
#define CeENGR_e_KEY_START		((TeENGR_e_ESS_Engine_State)10U)
#define CeENGR_e_CHANGED_MIND		((TeENGR_e_ESS_Engine_State)11U)
#define CeENGR_e_KEY_TORQUE_START		((TeENGR_e_ESS_Engine_State)12U)
#define CeENGR_e_ENS_DISARM_RUN		((TeENGR_e_ESS_Engine_State)13U)
#define CeENGR_e_SNA		((TeENGR_e_ESS_Engine_State)15U)
#endif

/*
* Enum TeENGR_e_ETRQ_Mode 
* Default Value:CeENGR_e_Preposition 
*/
#ifndef TeENGR_e_ETRQ_Mode
typedef uint8 TeENGR_e_ETRQ_Mode;
#define CeENGR_e_Preposition		((TeENGR_e_ETRQ_Mode)0U)
#define CeENGR_e_DriverControl		((TeENGR_e_ETRQ_Mode)1U)
#define CeENGR_e_Idle		((TeENGR_e_ETRQ_Mode)2U)
#define CeENGR_e_Shutdown		((TeENGR_e_ETRQ_Mode)3U)
#define CeENGR_e_HEV_Stop_Pending		((TeENGR_e_ETRQ_Mode)4U)
#define CeENGR_e_HEV_Start_Pending		((TeENGR_e_ETRQ_Mode)5U)
#define CeENGR_e_ETRQ_Mode_SNA		((TeENGR_e_ETRQ_Mode)7U)
#endif

/*
* Enum TeENGR_e_ECMReqRemStop 
* Default Value:CeENGR_e_Default 
*/
#ifndef TeENGR_e_ECMReqRemStop
typedef uint8 TeENGR_e_ECMReqRemStop;
#define CeENGR_e_Default		((TeENGR_e_ECMReqRemStop)0U)
#define CeENGR_e_Remedial_StpReq		((TeENGR_e_ECMReqRemStop)1U)
#define CeENGR_e_Remedial_StpReqWithLimp		((TeENGR_e_ECMReqRemStop)2U)
#define CeENGR_e_StpReqSNA		((TeENGR_e_ECMReqRemStop)3U)
#endif

/*
* Enum TeENGR_e_ESSEngSt 
* Default Value:CeENGR_e_Stopped 
*/
#ifndef TeENGR_e_ESSEngSt
typedef uint8 TeENGR_e_ESSEngSt;
#define CeENGR_e_Stopped		((TeENGR_e_ESSEngSt)0U)
#define CeENGR_e_Starting		((TeENGR_e_ESSEngSt)1U)
#define CeENGR_e_Running		((TeENGR_e_ESSEngSt)2U)
#define CeENGR_e_Spinning		((TeENGR_e_ESSEngSt)3U)
#define CeENGR_e_Stopping		((TeENGR_e_ESSEngSt)4U)
#define CeENGR_e_Reversing		((TeENGR_e_ESSEngSt)5U)
#define CeENGR_e_Not_Used		((TeENGR_e_ESSEngSt)6U)
#define CeENGR_e_ESS_SNA		((TeENGR_e_ESSEngSt)7U)
#endif

/*
* Enum TeENGR_e_ECMComFail_C1CAN 
* Default Value:CeENGR_e_NoFaultECM_C1 
*/
#ifndef TeENGR_e_ECMComFail_C1CAN
typedef uint8 TeENGR_e_ECMComFail_C1CAN;
#define CeENGR_e_NoFaultECM_C1		((TeENGR_e_ECMComFail_C1CAN)0U)
#define CeENGR_e_LoC_HCP_ECM_C1		((TeENGR_e_ECMComFail_C1CAN)1U)
#define CeENGR_e_LoC_TCM_ECM_C1		((TeENGR_e_ECMComFail_C1CAN)2U)
#define CeENGR_e_LoC_TCM_HCP_ECM_C1		((TeENGR_e_ECMComFail_C1CAN)3U)
#define CeENGR_e_undefine4ECM_C1		((TeENGR_e_ECMComFail_C1CAN)4U)
#define CeENGR_e_undefine5ECM_C1		((TeENGR_e_ECMComFail_C1CAN)5U)
#define CeENGR_e_undefine6ECM_C1		((TeENGR_e_ECMComFail_C1CAN)6U)
#define CeENGR_e_BusFailECM_C1CAN		((TeENGR_e_ECMComFail_C1CAN)7U)
#endif

/*
* Enum TeENGR_e_ECMComFail_ePTCAN 
* Default Value:CeENGR_e_NoFaultECM_ePT 
*/
#ifndef TeENGR_e_ECMComFail_ePTCAN
typedef uint8 TeENGR_e_ECMComFail_ePTCAN;
#define CeENGR_e_NoFaultECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)0U)
#define CeENGR_e_LoC_HCP_ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)1U)
#define CeENGR_e_LoC_TCM_ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)2U)
#define CeENGR_e_LoC_TCM_HCP_ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)3U)
#define CeENGR_e_undefine4ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)4U)
#define CeENGR_e_undefine5ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)5U)
#define CeENGR_e_undefine6ECM_ePT		((TeENGR_e_ECMComFail_ePTCAN)6U)
#define CeENGR_e_BusFailECM_ePTCAN		((TeENGR_e_ECMComFail_ePTCAN)7U)
#endif

/*
* Enum TeENGR_e_StsMiL_ECM 
* Default Value:CeENGR_e_StsMiL_Fail_NotPrsnt 
*/
#ifndef TeENGR_e_StsMiL_ECM
typedef uint8 TeENGR_e_StsMiL_ECM;
#define CeENGR_e_StsMiL_Fail_NotPrsnt		((TeENGR_e_StsMiL_ECM)0U)
#define CeENGR_e_StsMiL_Fail_FlashLightInd		((TeENGR_e_StsMiL_ECM)1U)
#define CeENGR_e_StsMiL_Fail_FixLightInd		((TeENGR_e_StsMiL_ECM)2U)
#define CeENGR_e_StsMiL_Fail_FlashForService		((TeENGR_e_StsMiL_ECM)3U)
#endif

/*
* Enum TeENGR_e_StartNotAllowedID 
* Default Value:CeENGR_e_ESS_Ready 
*/
#ifndef TeENGR_e_StartNotAllowedID
typedef uint8 TeENGR_e_StartNotAllowedID;
#define CeENGR_e_ESS_Ready		((TeENGR_e_StartNotAllowedID)0U)
#define CeENGR_e_ESS_Active		((TeENGR_e_StartNotAllowedID)1U)
#define CeENGR_e_ESS_Inhibit		((TeENGR_e_StartNotAllowedID)2U)
#define CeENGR_e_Disarm		((TeENGR_e_StartNotAllowedID)3U)
#define CeENGR_e_Disable		((TeENGR_e_StartNotAllowedID)4U)
#define CeENGR_e_StartID_SNA		((TeENGR_e_StartNotAllowedID)7U)
#endif

/*
* Enum TeENGR_e_StopNotAllowedID 
* Default Value:CeENGR_e_Engine_OverridableID 
*/
#ifndef TeENGR_e_StopNotAllowedID
typedef uint8 TeENGR_e_StopNotAllowedID;
#define CeENGR_e_Engine_OverridableID		((TeENGR_e_StopNotAllowedID)0U)
#define CeENGR_e_Engine_NotOverridableID		((TeENGR_e_StopNotAllowedID)1U)
#define CeENGR_e_Aftertreatment_NotOverridableID		((TeENGR_e_StopNotAllowedID)2U)
#define CeENGR_e_Burnoff_NotOverridableID		((TeENGR_e_StopNotAllowedID)3U)
#define CeENGR_e_OBD_NotOverridableID		((TeENGR_e_StopNotAllowedID)4U)
#define CeENGR_e_Sparkfoul_NotOverridableID		((TeENGR_e_StopNotAllowedID)5U)
#define CeENGR_e_Hood_NotOverridableID		((TeENGR_e_StopNotAllowedID)6U)
#define CeENGR_e_StaleFuel_NotOverridableID		((TeENGR_e_StopNotAllowedID)7U)
#define CeENGR_e_Temperatures_NotOverridable		((TeENGR_e_StopNotAllowedID)8U)
#define CeENGR_e_Occupant_NotOverridable		((TeENGR_e_StopNotAllowedID)9U)
#define CeENGR_e_StopID_SNA		((TeENGR_e_StopNotAllowedID)15U)
#endif

/*
* Enum TeENGR_e_EngineMaintenanceSts 
* Default Value:CeENGR_e_Inactive 
*/
#ifndef TeENGR_e_EngineMaintenanceSts
typedef uint8 TeENGR_e_EngineMaintenanceSts;
#define CeENGR_e_Inactive		((TeENGR_e_EngineMaintenanceSts)0U)
#define CeENGR_e_Stale_Fuel		((TeENGR_e_EngineMaintenanceSts)1U)
#define CeENGR_e_Oil_Dilution_Spark_Defouling		((TeENGR_e_EngineMaintenanceSts)2U)
#define CeENGR_e_Oil_Change_Required_EV_not_available		((TeENGR_e_EngineMaintenanceSts)3U)
#define CeENGR_e_StsSNA		((TeENGR_e_EngineMaintenanceSts)7U)
#endif

/*
* Enum TeEPCR_e_ValveSt 
* Default Value:CeEPCR_e_ValvesClosed 
*/
#ifndef TeEPCR_e_ValveSt
typedef uint8 TeEPCR_e_ValveSt;
#define CeEPCR_e_ValvesClosed		((TeEPCR_e_ValveSt)0U)
#define CeEPCR_e_IntakeOpen		((TeEPCR_e_ValveSt)1U)
#define CeEPCR_e_ExhaustOpen		((TeEPCR_e_ValveSt)2U)
#endif

/*
* Enum TeEPCR_e_LifterSt 
* Default Value:CeEPCR_e_LifterLeaking 
*/
#ifndef TeEPCR_e_LifterSt
typedef uint8 TeEPCR_e_LifterSt;
#define CeEPCR_e_LifterLeaking		((TeEPCR_e_LifterSt)0U)
#define CeEPCR_e_LifterHold		((TeEPCR_e_LifterSt)1U)
#define CeEPCR_e_LifterReset		((TeEPCR_e_LifterSt)2U)
#endif

/*
* Enum TeEPCR_e_EngineAngleSourceSelector 
* Default Value:CeEPCR_e_EngnAngleFromBufferedCrank 
*/
#ifndef TeEPCR_e_EngineAngleSourceSelector
typedef uint8 TeEPCR_e_EngineAngleSourceSelector;
#define CeEPCR_e_EngnAngleFromBufferedCrank		((TeEPCR_e_EngineAngleSourceSelector)0U)
#define CeEPCR_e_EngnAngleFromTransInSnsr		((TeEPCR_e_EngineAngleSourceSelector)1U)
#define CeEPCR_e_NoSourceAvail		((TeEPCR_e_EngineAngleSourceSelector)2U)
#endif

/*
* Enum TeERER_e_EstRangeTrend 
* Default Value:CeERER_e_SNA 
*/
#ifndef TeERER_e_EstRangeTrend
typedef uint8 TeERER_e_EstRangeTrend;
#define CeERER_e_SNA		((TeERER_e_EstRangeTrend)0U)
#define CeERER_e_Dash		((TeERER_e_EstRangeTrend)1U)
#define CeERER_e_ArrowUp		((TeERER_e_EstRangeTrend)2U)
#define CeERER_e_ArrowDown		((TeERER_e_EstRangeTrend)3U)
#endif

/*
* Enum TeERER_e_DRMType 
* Default Value:CeERER_e_DRMType1 
*/
#ifndef TeERER_e_DRMType
typedef uint8 TeERER_e_DRMType;
#define CeERER_e_DRMType1		((TeERER_e_DRMType)0U)
#define CeERER_e_DRMType2		((TeERER_e_DRMType)1U)
#define CeERER_e_DRMType3		((TeERER_e_DRMType)2U)
#define CeERER_e_DRMType4		((TeERER_e_DRMType)3U)
#endif

/*
* Enum TeESMR_e_BatEstd_VoltFiltSel 
* Default Value:CeESMC_e_BatEstd_PwrUpDelay 
*/
#ifndef TeESMR_e_BatEstd_VoltFiltSel
typedef uint8 TeESMR_e_BatEstd_VoltFiltSel;
#define CeESMC_e_BatEstd_PwrUpDelay		((TeESMR_e_BatEstd_VoltFiltSel)0U)
#define CeESMC_e_BatEstd_CntctrClosed		((TeESMR_e_BatEstd_VoltFiltSel)1U)
#endif

/*
* Enum TeESMR_e_ActiveLT_PwrLim 
* Default Value:CeESMR_e_MinChrgLimLT 
*/
#ifndef TeESMR_e_ActiveLT_PwrLim
typedef uint8 TeESMR_e_ActiveLT_PwrLim;
#define CeESMR_e_MinChrgLimLT		((TeESMR_e_ActiveLT_PwrLim)0U)
#define CeESMR_e_SOC_BT_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)1U)
#define CeESMR_e_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)2U)
#define CeESMR_e_AhrpX_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)3U)
#define CeESMR_e_RA_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)4U)
#define CeESMR_e_DVC_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)5U)
#define CeESMR_e_ColdPwrChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)6U)
#define CeESMR_e_BPCM_ChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)7U)
#define CeESMR_e_SOC_ChrgOvrdLT		((TeESMR_e_ActiveLT_PwrLim)8U)
#define CeESMR_e_ChrgPwrLimMM_LT		((TeESMR_e_ActiveLT_PwrLim)9U)
#define CeESMR_e_MaxChrgLimLT		((TeESMR_e_ActiveLT_PwrLim)10U)
#define CeESMR_e_FinalChrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)11U)
#define CeESMR_e_MaxDschrgLimLT		((TeESMR_e_ActiveLT_PwrLim)20U)
#define CeESMR_e_SOC_BT_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)21U)
#define CeESMR_e_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)22U)
#define CeESMR_e_AhrpX_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)23U)
#define CeESMR_e_RA_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)24U)
#define CeESMR_e_DVC_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)25U)
#define CeESMR_e_ColdPwrDschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)26U)
#define CeESMR_e_BPCM_DschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)27U)
#define CeESMR_e_SOC_DschrgOvrdLT		((TeESMR_e_ActiveLT_PwrLim)28U)
#define CeESMR_e_DschrgPwrLimMM_LT		((TeESMR_e_ActiveLT_PwrLim)29U)
#define CeESMR_e_MinDschrgLimLT		((TeESMR_e_ActiveLT_PwrLim)30U)
#define CeESMR_e_RevGrDschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)31U)
#define CeESMR_e_FinalDschrgPwrLimLT		((TeESMR_e_ActiveLT_PwrLim)32U)
#define CeESMR_e_ThrmlDeratePwrLimLT		((TeESMR_e_ActiveLT_PwrLim)33U)
#endif

/*
* Enum TeESMR_e_ActiveST_PwrLim 
* Default Value:CeESMR_e_MinChrgLimST 
*/
#ifndef TeESMR_e_ActiveST_PwrLim
typedef uint8 TeESMR_e_ActiveST_PwrLim;
#define CeESMR_e_MinChrgLimST		((TeESMR_e_ActiveST_PwrLim)0U)
#define CeESMR_e_SOC_BT_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)1U)
#define CeESMR_e_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)2U)
#define CeESMR_e_AhrpX_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)3U)
#define CeESMR_e_RA_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)4U)
#define CeESMR_e_DVC_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)5U)
#define CeESMR_e_ColdPwrChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)6U)
#define CeESMR_e_BPCM_ChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)7U)
#define CeESMR_e_SOC_ChrgOvrdST		((TeESMR_e_ActiveST_PwrLim)8U)
#define CeESMR_e_ChrgPwrLimMM_ST		((TeESMR_e_ActiveST_PwrLim)9U)
#define CeESMR_e_MaxChrgLimST		((TeESMR_e_ActiveST_PwrLim)10U)
#define CeESMR_e_FinalChrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)11U)
#define CeESMR_e_MaxDschrgLimST		((TeESMR_e_ActiveST_PwrLim)20U)
#define CeESMR_e_SOC_BT_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)21U)
#define CeESMR_e_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)22U)
#define CeESMR_e_AhrpX_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)23U)
#define CeESMR_e_RA_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)24U)
#define CeESMR_e_DVC_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)25U)
#define CeESMR_e_ColdPwrDschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)26U)
#define CeESMR_e_BPCM_DschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)27U)
#define CeESMR_e_SOC_DschrgOvrdST		((TeESMR_e_ActiveST_PwrLim)28U)
#define CeESMR_e_DschrgPwrLimMM_ST		((TeESMR_e_ActiveST_PwrLim)29U)
#define CeESMR_e_MinDschrgLimST		((TeESMR_e_ActiveST_PwrLim)30U)
#define CeESMR_e_RevGrDschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)31U)
#define CeESMR_e_FinalDschrgPwrLimST		((TeESMR_e_ActiveST_PwrLim)32U)
#define CeESMR_e_ThrmlDeratePwrLimST		((TeESMR_e_ActiveST_PwrLim)33U)
#endif

/*
* Enum TeESMR_e_BatEstd_Sel 
* Default Value:CeESMR_e_Calib 
*/
#ifndef TeESMR_e_BatEstd_Sel
typedef uint8 TeESMR_e_BatEstd_Sel;
#define CeESMR_e_Calib		((TeESMR_e_BatEstd_Sel)0U)
#define CeESMR_e_CalTable		((TeESMR_e_BatEstd_Sel)1U)
#define CeESMR_e_Volt		((TeESMR_e_BatEstd_Sel)2U)
#define CeESMR_e_BSE		((TeESMR_e_BatEstd_Sel)3U)
#endif

/*
* Enum TeESPR_e_EngSpdStatus 
* Default Value:CeESPR_e_EngSpdNormal 
*/
#ifndef TeESPR_e_EngSpdStatus
typedef uint8 TeESPR_e_EngSpdStatus;
#define CeESPR_e_EngSpdNormal		((TeESPR_e_EngSpdStatus)0U)
#define CeESPR_e_EngSpdDegraded		((TeESPR_e_EngSpdStatus)1U)
#define CeESPR_e_EngSpdInvalid		((TeESPR_e_EngSpdStatus)3U)
#endif

/*
* Enum TeESPR_e_EngStateTransition 
* Default Value:CeESPR_e_EngineReady 
*/
#ifndef TeESPR_e_EngStateTransition
typedef uint8 TeESPR_e_EngStateTransition;
#define CeESPR_e_EngineReady		((TeESPR_e_EngStateTransition)0U)
#define CeESPR_e_EngineCranking		((TeESPR_e_EngStateTransition)1U)
#define CeESPR_e_EngineRunning		((TeESPR_e_EngStateTransition)3U)
#endif

/*
* Enum TeESPR_e_ECMCrankPhase 
* Default Value:CeESPR_e_NotInitialized 
*/
#ifndef TeESPR_e_ECMCrankPhase
typedef uint8 TeESPR_e_ECMCrankPhase;
#define CeESPR_e_NotInitialized		((TeESPR_e_ECMCrankPhase)0U)
#define CeESPR_e_FirstQuadrant		((TeESPR_e_ECMCrankPhase)1U)
#define CeESPR_e_SecondQuadrant		((TeESPR_e_ECMCrankPhase)2U)
#define CeESPR_e_ThirdQuadrant		((TeESPR_e_ECMCrankPhase)3U)
#define CeESPR_e_FourthQuadrant		((TeESPR_e_ECMCrankPhase)4U)
#define CeESPR_e_SNA		((TeESPR_e_ECMCrankPhase)7U)
#endif

/*
* Enum TeESSR_e_EngStartStopSt 
* Default Value:CeESSR_e_EngOff 
*/
#ifndef TeESSR_e_EngStartStopSt
typedef uint8 TeESSR_e_EngStartStopSt;
#define CeESSR_e_EngOff		((TeESSR_e_EngStartStopSt)0U)
#define CeESSR_e_EngRunning		((TeESSR_e_EngStartStopSt)1U)
#define CeESSR_e_RestartPrepSt		((TeESSR_e_EngStartStopSt)3U)
#define CeESSR_e_InitEngSpinSt		((TeESSR_e_EngStartStopSt)4U)
#define CeESSR_e_SpinUpAutoStrtSt		((TeESSR_e_EngStartStopSt)5U)
#define CeESSR_e_SpinUpKeyStrtSt		((TeESSR_e_EngStartStopSt)6U)
#define CeESSR_e_SpinUp12vStrtSt		((TeESSR_e_EngStartStopSt)7U)
#define CeESSR_e_SpinUpLowPwrStrtSt		((TeESSR_e_EngStartStopSt)8U)
#define CeESSR_e_SpinUpBumpStrtSt		((TeESSR_e_EngStartStopSt)9U)
#define CeESSR_e_SpinUpClStrtSt		((TeESSR_e_EngStartStopSt)10U)
#define CeESSR_e_SpinUpEMStrtSt		((TeESSR_e_EngStartStopSt)11U)
#define CeESSR_e_SpinUpEMLPSSt		((TeESSR_e_EngStartStopSt)12U)
#define CeESSR_e_Reserved1		((TeESSR_e_EngStartStopSt)13U)
#define CeESSR_e_StartEngSt		((TeESSR_e_EngStartStopSt)14U)
#define CeESSR_e_StartEngPFSSt		((TeESSR_e_EngStartStopSt)15U)
#define CeESSR_e_AchEngIdleSt		((TeESSR_e_EngStartStopSt)16U)
#define CeESSR_e_AchEngIdle12vStrtSt		((TeESSR_e_EngStartStopSt)17U)
#define CeESSR_e_AchEngIdleBumpStrtSt		((TeESSR_e_EngStartStopSt)18U)
#define CeESSR_e_StrtEngClStrtSt		((TeESSR_e_EngStartStopSt)19U)
#define CeESSR_e_StrtEngEMStrtSt		((TeESSR_e_EngStartStopSt)20U)
#define CeESSR_e_StrtEngOnlyChngMind		((TeESSR_e_EngStartStopSt)21U)
#define CeESSR_e_Reserved2		((TeESSR_e_EngStartStopSt)22U)
#define CeESSR_e_PrepForStopSt		((TeESSR_e_EngStartStopSt)23U)
#define CeESSR_e_DisableFuelSt		((TeESSR_e_EngStartStopSt)24U)
#define CeESSR_e_RampDownSt		((TeESSR_e_EngStartStopSt)25U)
#define CeESSR_e_FinishStopSt		((TeESSR_e_EngStartStopSt)26U)
#define CeESSR_e_ImmedStopSt		((TeESSR_e_EngStartStopSt)27U)
#define CeESSR_e_CoastDownSt		((TeESSR_e_EngStartStopSt)28U)
#endif

/*
* Enum TeESSR_e_EngStrtActuatorTyp 
* Default Value:CeESSR_e_NoActTyp 
*/
#ifndef TeESSR_e_EngStrtActuatorTyp
typedef uint8 TeESSR_e_EngStrtActuatorTyp;
#define CeESSR_e_NoActTyp		((TeESSR_e_EngStrtActuatorTyp)0U)
#define CeESSR_e_P1f		((TeESSR_e_EngStrtActuatorTyp)1U)
#define CeESSR_e_P1r		((TeESSR_e_EngStrtActuatorTyp)2U)
#define CeESSR_e_Ext12VStarter		((TeESSR_e_EngStrtActuatorTyp)3U)
#define CeESSR_e_P2		((TeESSR_e_EngStrtActuatorTyp)4U)
#define CeESSR_e_ActtypRes		((TeESSR_e_EngStrtActuatorTyp)5U)
#define CeESSR_e_ActtypRes1		((TeESSR_e_EngStrtActuatorTyp)6U)
#define CeESSR_e_ActTypSNA		((TeESSR_e_EngStrtActuatorTyp)7U)
#endif

/*
* Enum TeESSR_e_STMTrigger 
* Default Value:CeESSR_e_Inactive 
*/
#ifndef TeESSR_e_STMTrigger
typedef uint8 TeESSR_e_STMTrigger;
#define CeESSR_e_Inactive		((TeESSR_e_STMTrigger)0U)
#define CeESSR_e_EngFail		((TeESSR_e_STMTrigger)1U)
#define CeESSR_e_KeyOff		((TeESSR_e_STMTrigger)2U)
#define CeESSR_e_KeyOn		((TeESSR_e_STMTrigger)3U)
#define CeESSR_e_EngRun		((TeESSR_e_STMTrigger)4U)
#define CeESSR_e_EngStop		((TeESSR_e_STMTrigger)5U)
#define CeESSR_e_StopReq		((TeESSR_e_STMTrigger)6U)
#define CeESSR_e_StartReq		((TeESSR_e_STMTrigger)7U)
#define CeESSR_e_DamperLocked		((TeESSR_e_STMTrigger)8U)
#define CeESSR_e_OutClchSlip		((TeESSR_e_STMTrigger)9U)
#define CeESSR_e_EngBrkawayAch		((TeESSR_e_STMTrigger)10U)
#define CeESSR_e_EngSpdTgtAch		((TeESSR_e_STMTrigger)11U)
#define CeESSR_e_DamperRel		((TeESSR_e_STMTrigger)12U)
#define CeESSR_e_EngPosTorq		((TeESSR_e_STMTrigger)13U)
#define CeESSR_e_IdlePumpDwnAch		((TeESSR_e_STMTrigger)14U)
#define CeESSR_e_ImmedStopReq		((TeESSR_e_STMTrigger)15U)
#define CeESSR_e_StartAbort		((TeESSR_e_STMTrigger)16U)
#define CeESSR_e_CoastDown		((TeESSR_e_STMTrigger)17U)
#endif

/*
* Enum TeESSR_e_EngStrtStpMd 
* Default Value:CeESSR_e_Stop 
*/
#ifndef TeESSR_e_EngStrtStpMd
typedef uint8 TeESSR_e_EngStrtStpMd;
#define CeESSR_e_Stop		((TeESSR_e_EngStrtStpMd)0U)
#define CeESSR_e_ImmediateStop		((TeESSR_e_EngStrtStpMd)1U)
#define CeESSR_e_StartPending		((TeESSR_e_EngStrtStpMd)2U)
#define CeESSR_e_EnableFuel		((TeESSR_e_EngStrtStpMd)3U)
#define CeESSR_e_EngineTorqueStart		((TeESSR_e_EngStrtStpMd)4U)
#define CeESSR_e_ProducingTorque		((TeESSR_e_EngStrtStpMd)5U)
#define CeESSR_e_DisableFuel		((TeESSR_e_EngStrtStpMd)6U)
#define CeESSR_e_StopPending		((TeESSR_e_EngStrtStpMd)7U)
#define CeESSR_e_StartFailed		((TeESSR_e_EngStrtStpMd)8U)
#define CeESSR_e_CompressionTest		((TeESSR_e_EngStrtStpMd)9U)
#define CeESSR_e_SNA		((TeESSR_e_EngStrtStpMd)15U)
#endif

/*
* Enum TeESSR_e_TransFldPumpSel 
* Default Value:CeESSR_e_Normal 
*/
#ifndef TeESSR_e_TransFldPumpSel
typedef uint8 TeESSR_e_TransFldPumpSel;
#define CeESSR_e_Normal		((TeESSR_e_TransFldPumpSel)0U)
#define CeESSR_e_PrimeOn		((TeESSR_e_TransFldPumpSel)1U)
#define CeESSR_e_On		((TeESSR_e_TransFldPumpSel)2U)
#define CeESSR_e_Off		((TeESSR_e_TransFldPumpSel)3U)
#endif

/*
* Enum TeESSR_e_TransClch5FlReq 
* Default Value:CeESSR_e_NoReq 
*/
#ifndef TeESSR_e_TransClch5FlReq
typedef uint8 TeESSR_e_TransClch5FlReq;
#define CeESSR_e_NoReq		((TeESSR_e_TransClch5FlReq)0U)
#define CeESSR_e_SlowFill		((TeESSR_e_TransClch5FlReq)1U)
#define CeESSR_e_FastFill		((TeESSR_e_TransClch5FlReq)2U)
#define CeESSR_e_ClchCutOff		((TeESSR_e_TransClch5FlReq)3U)
#endif

/*
* Enum TeESSR_e_Clch5_TorqStatus 
* Default Value:CeESSR_e_Unlocked 
*/
#ifndef TeESSR_e_Clch5_TorqStatus
typedef uint8 TeESSR_e_Clch5_TorqStatus;
#define CeESSR_e_Unlocked		((TeESSR_e_Clch5_TorqStatus)0U)
#define CeESSR_e_Locked		((TeESSR_e_Clch5_TorqStatus)1U)
#endif

/*
* Enum TeESSR_e_ValveSt 
* Default Value:CeESSR_e_ValvesClosed 
*/
#ifndef TeESSR_e_ValveSt
typedef uint8 TeESSR_e_ValveSt;
#define CeESSR_e_ValvesClosed		((TeESSR_e_ValveSt)0U)
#define CeESSR_e_IntakeOpen		((TeESSR_e_ValveSt)1U)
#define CeESSR_e_ExhaustOpen		((TeESSR_e_ValveSt)2U)
#endif

/*
* Enum TeESSR_e_EngStrtType 
* Default Value:CeESSR_e_NoStrt 
*/
#ifndef TeESSR_e_EngStrtType
typedef uint8 TeESSR_e_EngStrtType;
#define CeESSR_e_NoStrt		((TeESSR_e_EngStrtType)0U)
#define CeESSR_e_HybTrqStrt		((TeESSR_e_EngStrtType)1U)
#define CeESSR_e_EngTrqStrt		((TeESSR_e_EngStrtType)2U)
#define CeESSR_e_KeyCrnkLowPwrB		((TeESSR_e_EngStrtType)3U)
#define CeESSR_e_KeyCrnkGeneric		((TeESSR_e_EngStrtType)4U)
#define CeESSR_e_AStrtSmooth		((TeESSR_e_EngStrtType)5U)
#define CeESSR_e_AStrtNormal		((TeESSR_e_EngStrtType)6U)
#define CeESSR_e_AStrtAggrsv		((TeESSR_e_EngStrtType)7U)
#define CeESSR_e_AStrtGeneric		((TeESSR_e_EngStrtType)8U)
#define CeESSR_e_CompressTst		((TeESSR_e_EngStrtType)9U)
#define CeESSR_e_GreenEngStrt		((TeESSR_e_EngStrtType)10U)
#define CeESSR_e_ControlledStop		((TeESSR_e_EngStrtType)11U)
#define CeESSR_e_ImmedStop		((TeESSR_e_EngStrtType)12U)
#define CeESSR_e_AStrtReverse		((TeESSR_e_EngStrtType)13U)
#define CeESSR_e_AStrtCltchStrt		((TeESSR_e_EngStrtType)14U)
#define CeESSR_e_AStrtImpStrt		((TeESSR_e_EngStrtType)15U)
#define CeESSR_e_AStrtEMStrt		((TeESSR_e_EngStrtType)16U)
#endif

/*
* Enum TeESSR_e_StrtType 
* Default Value:CeESSR_e_NoStart 
*/
#ifndef TeESSR_e_StrtType
typedef uint8 TeESSR_e_StrtType;
#define CeESSR_e_NoStart		((TeESSR_e_StrtType)0U)
#define CeESSR_e_AStrtAlgo		((TeESSR_e_StrtType)1U)
#define CeESSR_e_LowPwrAlgo		((TeESSR_e_StrtType)2U)
#define CeESSR_e_KeyCrnkAlgo		((TeESSR_e_StrtType)3U)
#define CeESSR_e_CltchStrtAlgo		((TeESSR_e_StrtType)4U)
#define CeESSR_e_ImplStrtAlgo		((TeESSR_e_StrtType)5U)
#define CeESSR_e_EMStrtAlgo		((TeESSR_e_StrtType)6U)
#define CeESSR_e_EMLwPwrStrtAlgo		((TeESSR_e_StrtType)7U)
#endif

/*
* Enum TeESSR_e_EngSpdGnSel 
* Default Value:CeESSR_e_EngSpinUpGnSel 
*/
#ifndef TeESSR_e_EngSpdGnSel
typedef uint8 TeESSR_e_EngSpdGnSel;
#define CeESSR_e_EngSpinUpGnSel		((TeESSR_e_EngSpdGnSel)0U)
#define CeESSR_e_EngStrtGnSel		((TeESSR_e_EngSpdGnSel)1U)
#define CeESSR_e_EngRampDwnGnSel		((TeESSR_e_EngSpdGnSel)2U)
#define CeESSR_e_EngRunGnSel		((TeESSR_e_EngSpdGnSel)3U)
#define CeESSR_e_EngOffGnSel		((TeESSR_e_EngSpdGnSel)4U)
#define CeESSR_e_EngSpdCtrlOffErrorGnSel		((TeESSR_e_EngSpdGnSel)5U)
#endif

/*
* Enum TeESSR_e_StrtStpFailDTC 
* Default Value:CeESSR_e_NoFault 
*/
#ifndef TeESSR_e_StrtStpFailDTC
typedef uint8 TeESSR_e_StrtStpFailDTC;
#define CeESSR_e_NoFault		((TeESSR_e_StrtStpFailDTC)0U)
#define CeESSR_e_P1C64		((TeESSR_e_StrtStpFailDTC)1U)
#define CeESSR_e_P1C65		((TeESSR_e_StrtStpFailDTC)2U)
#define CeESSR_e_P1C66		((TeESSR_e_StrtStpFailDTC)3U)
#define CeESSR_e_P1C67		((TeESSR_e_StrtStpFailDTC)4U)
#define CeESSR_e_P1C68		((TeESSR_e_StrtStpFailDTC)5U)
#define CeESSR_e_P1C69		((TeESSR_e_StrtStpFailDTC)6U)
#define CeESSR_e_P1C6A		((TeESSR_e_StrtStpFailDTC)7U)
#define CeESSR_e_P1C6B		((TeESSR_e_StrtStpFailDTC)8U)
#define CeESSR_e_P1C6C		((TeESSR_e_StrtStpFailDTC)9U)
#endif

/*
* Enum TeESSR_e_IdleCtrlrSelect 
* Default Value:CeESSR_e_ETRQ_Ctrl 
*/
#ifndef TeESSR_e_IdleCtrlrSelect
typedef uint8 TeESSR_e_IdleCtrlrSelect;
#define CeESSR_e_ETRQ_Ctrl		((TeESSR_e_IdleCtrlrSelect)0U)
#define CeESSR_e_ICSR_Ctrl		((TeESSR_e_IdleCtrlrSelect)1U)
#endif

/*
* Enum TeESSR_e_EngineState 
* Default Value:CeESSR_e_Stopped 
*/
#ifndef TeESSR_e_EngineState
typedef uint8 TeESSR_e_EngineState;
#define CeESSR_e_Stopped		((TeESSR_e_EngineState)0U)
#define CeESSR_e_Running		((TeESSR_e_EngineState)1U)
#define CeESSR_e_Starting		((TeESSR_e_EngineState)2U)
#define CeESSR_e_Stopping		((TeESSR_e_EngineState)3U)
#define CeESSR_e_NoPstnMntr		((TeESSR_e_EngineState)4U)
#endif

/*
* Enum TeESSR_e_HybEngSysActv 
* Default Value:CeESSR_e_HybEngDisabled 
*/
#ifndef TeESSR_e_HybEngSysActv
typedef uint8 TeESSR_e_HybEngSysActv;
#define CeESSR_e_HybEngDisabled		((TeESSR_e_HybEngSysActv)0U)
#define CeESSR_e_HybEngEnabledOff		((TeESSR_e_HybEngSysActv)1U)
#define CeESSR_e_HybEngEnabledOn		((TeESSR_e_HybEngSysActv)2U)
#define CeESSR_e_HybEngEnabledOnIS		((TeESSR_e_HybEngSysActv)3U)
#endif

/*
* Enum TeESSR_e_TCM_StartStopType 
* Default Value:CeESSR_e_NoAction 
*/
#ifndef TeESSR_e_TCM_StartStopType
typedef uint8 TeESSR_e_TCM_StartStopType;
#define CeESSR_e_NoAction		((TeESSR_e_TCM_StartStopType)0U)
#define CeESSR_e_NormalStart		((TeESSR_e_TCM_StartStopType)1U)
#define CeESSR_e_BumpStart		((TeESSR_e_TCM_StartStopType)2U)
#define CeESSR_e_ColdBumpStart		((TeESSR_e_TCM_StartStopType)3U)
#define CeESSR_e_NormalStop		((TeESSR_e_TCM_StartStopType)4U)
#define CeESSR_e_CoastStop		((TeESSR_e_TCM_StartStopType)5U)
#define CeESSR_e_CltchStrt		((TeESSR_e_TCM_StartStopType)6U)
#define CeESSR_e_EMStrt		((TeESSR_e_TCM_StartStopType)7U)
#endif

/*
* Enum TeESSR_e_TCM_TransitionStatus 
* Default Value:CeESSR_e_Trans_Stat_Off 
*/
#ifndef TeESSR_e_TCM_TransitionStatus
typedef uint8 TeESSR_e_TCM_TransitionStatus;
#define CeESSR_e_Trans_Stat_Off		((TeESSR_e_TCM_TransitionStatus)0U)
#define CeESSR_e_Cranking		((TeESSR_e_TCM_TransitionStatus)1U)
#define CeESSR_e_Startng		((TeESSR_e_TCM_TransitionStatus)2U)
#define CeESSR_e_TransTrq		((TeESSR_e_TCM_TransitionStatus)3U)
#define CeESSR_e_PrepStop		((TeESSR_e_TCM_TransitionStatus)4U)
#define CeESSR_e_Stopng		((TeESSR_e_TCM_TransitionStatus)5U)
#endif

/*
* Enum TeFCPR_e_UpdateHBridgeDiagData 
* Default Value:CeFCPR_e_HB_NO_FAILURE_PRESENT 
*/
#ifndef TeFCPR_e_UpdateHBridgeDiagData
typedef uint16 TeFCPR_e_UpdateHBridgeDiagData;
#define CeFCPR_e_HB_NO_FAILURE_PRESENT		((TeFCPR_e_UpdateHBridgeDiagData)0U)
#define CeFCPR_e_HB_POS_SHORTED_LOW		((TeFCPR_e_UpdateHBridgeDiagData)1U)
#define CeFCPR_e_HB_POS_SHORTED_HIGH		((TeFCPR_e_UpdateHBridgeDiagData)2U)
#define CeFCPR_e_HB_NEG_SHORTED_LOW		((TeFCPR_e_UpdateHBridgeDiagData)4U)
#define CeFCPR_e_HB_NEG_SHORTED_HIGH		((TeFCPR_e_UpdateHBridgeDiagData)8U)
#define CeFCPR_e_HB_OPEN_CIRCUIT		((TeFCPR_e_UpdateHBridgeDiagData)10U)
#define CeFCPR_e_HB_OVER_LOAD		((TeFCPR_e_UpdateHBridgeDiagData)20U)
#define CeFCPR_e_HB_NOT_DIAG_THIS_TIME		((TeFCPR_e_UpdateHBridgeDiagData)40U)
#define CeFCPR_e_HB_VDD_OVERVOLTAGE		((TeFCPR_e_UpdateHBridgeDiagData)80U)
#define CeFCPR_e_HB_VS_UNDERVOLTAGE		((TeFCPR_e_UpdateHBridgeDiagData)100U)
#define CeFCPR_e_HB_DRIVER_OVERTEMP		((TeFCPR_e_UpdateHBridgeDiagData)200U)
#define CeFCPR_e_HB_TEMP_WARNING		((TeFCPR_e_UpdateHBridgeDiagData)400U)
#define CeFCPR_e_HB_CUR_LIMITATION		((TeFCPR_e_UpdateHBridgeDiagData)800U)
#define CeFCPR_e_HB_EN_DIS		((TeFCPR_e_UpdateHBridgeDiagData)1000U)
#endif

/*
* Enum TeFCPR_e_FCPS_HTCoolReq 
* Default Value:CeFCPR_e_No_Request 
*/
#ifndef TeFCPR_e_FCPS_HTCoolReq
typedef uint8 TeFCPR_e_FCPS_HTCoolReq;
#define CeFCPR_e_No_Request		((TeFCPR_e_FCPS_HTCoolReq)0U)
#define CeFCPR_e_Operation_FCS		((TeFCPR_e_FCPS_HTCoolReq)1U)
#define CeFCPR_e_Pre_Heating		((TeFCPR_e_FCPS_HTCoolReq)2U)
#define CeFCPR_e_SNA		((TeFCPR_e_FCPS_HTCoolReq)15U)
#endif

/*
* Enum TeFCPR_e_ActualMode 
* Default Value:CeFCPR_e_ActualMode_NotAvailable 
*/
#ifndef TeFCPR_e_ActualMode
typedef uint8 TeFCPR_e_ActualMode;
#define CeFCPR_e_ActualMode_NotAvailable		((TeFCPR_e_ActualMode)0U)
#define CeFCPR_e_ActualMode_Off		((TeFCPR_e_ActualMode)1U)
#define CeFCPR_e_ActualMode_Starting		((TeFCPR_e_ActualMode)2U)
#define CeFCPR_e_ActualMode_Run		((TeFCPR_e_ActualMode)3U)
#define CeFCPR_e_ActualMode_Shutdown		((TeFCPR_e_ActualMode)4U)
#define CeFCPR_e_ActualMode_Refueling		((TeFCPR_e_ActualMode)5U)
#define CeFCPR_e_ActualMode_PreheatReqd		((TeFCPR_e_ActualMode)6U)
#endif

/*
* Enum TeFCRR_e_FcTempRange 
* Default Value:CeFCRR_e_Nominal 
*/
#ifndef TeFCRR_e_FcTempRange
typedef uint8 TeFCRR_e_FcTempRange;
#define CeFCRR_e_Freeze		((TeFCRR_e_FcTempRange)0U)
#define CeFCRR_e_WarmUp		((TeFCRR_e_FcTempRange)1U)
#define CeFCRR_e_Nominal		((TeFCRR_e_FcTempRange)2U)
#define CeFCRR_e_ExcessiveTemp		((TeFCRR_e_FcTempRange)3U)
#define CeFCRR_e_Derating		((TeFCRR_e_FcTempRange)4U)
#define CeFCRR_e_ShutDown		((TeFCRR_e_FcTempRange)5U)
#endif

/*
* Enum TeFCRR_e_FcThermalMode 
* Default Value:CeFCRR_e_FC_OFF 
*/
#ifndef TeFCRR_e_FcThermalMode
typedef uint8 TeFCRR_e_FcThermalMode;
#define CeFCRR_e_FC_OFF		((TeFCRR_e_FcThermalMode)0U)
#define CeFCRR_e_FC_Run_Normal		((TeFCRR_e_FcThermalMode)1U)
#define CeFCRR_e_FC_PreHeating		((TeFCRR_e_FcThermalMode)2U)
#endif

/*
* Enum TeFCRR_e_FcFltReq 
* Default Value:CeFCRR_e_FcNoFlt 
*/
#ifndef TeFCRR_e_FcFltReq
typedef uint8 TeFCRR_e_FcFltReq;
#define CeFCRR_e_FcNoFlt		((TeFCRR_e_FcFltReq)0U)
#define CeFCRR_e_FcShutDownReq		((TeFCRR_e_FcFltReq)1U)
#define CeFCRR_e_FcQuickShutDown		((TeFCRR_e_FcFltReq)2U)
#define CeFCRR_e_FcPreHeatFlt		((TeFCRR_e_FcFltReq)3U)
#endif

/*
* Enum TeFSCR_e_AGS_PosRq 
* Default Value:CeFSCR_e_Open100 
*/
#ifndef TeFSCR_e_AGS_PosRq
typedef uint8 TeFSCR_e_AGS_PosRq;
#define CeFSCR_e_Open100		((TeFSCR_e_AGS_PosRq)0U)
#define CeFSCR_e_Open50		((TeFSCR_e_AGS_PosRq)1U)
#define CeFSCR_e_Open35		((TeFSCR_e_AGS_PosRq)2U)
#define CeFSCR_e_Open30		((TeFSCR_e_AGS_PosRq)3U)
#define CeFSCR_e_Open25		((TeFSCR_e_AGS_PosRq)4U)
#define CeFSCR_e_Open20		((TeFSCR_e_AGS_PosRq)5U)
#define CeFSCR_e_Open15		((TeFSCR_e_AGS_PosRq)6U)
#define CeFSCR_e_Open10		((TeFSCR_e_AGS_PosRq)7U)
#define CeFSCR_e_Open5		((TeFSCR_e_AGS_PosRq)8U)
#define CeFSCR_e_Open0		((TeFSCR_e_AGS_PosRq)9U)
#define CeFSCR_e_Unused1		((TeFSCR_e_AGS_PosRq)10U)
#define CeFSCR_e_Unused2		((TeFSCR_e_AGS_PosRq)11U)
#define CeFSCR_e_Unused3		((TeFSCR_e_AGS_PosRq)12U)
#define CeFSCR_e_Unused4		((TeFSCR_e_AGS_PosRq)13U)
#define CeFSCR_e_Unused5		((TeFSCR_e_AGS_PosRq)14U)
#define CeFSCR_e_SNA		((TeFSCR_e_AGS_PosRq)15U)
#endif

/*
* Enum TeFSCR_e_FSCRHandshkStat 
* Default Value:CeFSCR_e_Tmr0_Strt 
*/
#ifndef TeFSCR_e_FSCRHandshkStat
typedef uint8 TeFSCR_e_FSCRHandshkStat;
#define CeFSCR_e_Tmr0_Strt		((TeFSCR_e_FSCRHandshkStat)0U)
#define CeFSCR_e_Tmr0_Passed		((TeFSCR_e_FSCRHandshkStat)1U)
#define CeFSCR_e_Tmr1_Strt		((TeFSCR_e_FSCRHandshkStat)2U)
#define CeFSCR_e_Tmr1_Passed		((TeFSCR_e_FSCRHandshkStat)3U)
#define CeFSCR_e_Tmr2_Strt		((TeFSCR_e_FSCRHandshkStat)4U)
#define CeFSCR_e_Tmr2_Passed		((TeFSCR_e_FSCRHandshkStat)5U)
#define CeFSCR_e_Tmr3_Strt		((TeFSCR_e_FSCRHandshkStat)6U)
#define CeFSCR_e_Tmr3_Passed		((TeFSCR_e_FSCRHandshkStat)7U)
#define CeFSCR_e_Tmr4_Strt		((TeFSCR_e_FSCRHandshkStat)8U)
#define CeFSCR_e_Tmr4_Passed		((TeFSCR_e_FSCRHandshkStat)9U)
#define CeFSCR_e_Tmr5_Strt		((TeFSCR_e_FSCRHandshkStat)10U)
#define CeFSCR_e_Tmr5_Passed		((TeFSCR_e_FSCRHandshkStat)11U)
#define CeFSCR_e_Tmr6_Strt		((TeFSCR_e_FSCRHandshkStat)12U)
#define CeFSCR_e_Tmr6_Passed		((TeFSCR_e_FSCRHandshkStat)13U)
#define CeFSCR_e_TmrEnd_Strt		((TeFSCR_e_FSCRHandshkStat)14U)
#define CeFSCR_e_TmrEnd_Passed		((TeFSCR_e_FSCRHandshkStat)15U)
#define CeFSCR_e_Timer_Failed		((TeFSCR_e_FSCRHandshkStat)16U)
#define CeFSCR_e_TestNotRun		((TeFSCR_e_FSCRHandshkStat)17U)
#endif

/*
* Enum TeFSCR_e_RadFanState_Adjtd 
* Default Value:CeFSCR_e_RadFan_OFF 
*/
#ifndef TeFSCR_e_RadFanState_Adjtd
typedef uint8 TeFSCR_e_RadFanState_Adjtd;
#define CeFSCR_e_RadFan_OFF		((TeFSCR_e_RadFanState_Adjtd)0U)
#define CeFSCR_e_RadFan_ON		((TeFSCR_e_RadFanState_Adjtd)10U)
#define CeFSCR_e_RadFan_Faulty		((TeFSCR_e_RadFanState_Adjtd)100U)
#endif

/*
* Enum TeFSCR_e_RadFab_IO_Cnt_AD 
* Default Value:CeFSCR_e_Return_Control_to_ECU 
*/
#ifndef TeFSCR_e_RadFab_IO_Cnt_AD
typedef uint8 TeFSCR_e_RadFab_IO_Cnt_AD;
#define CeFSCR_e_Return_Control_to_ECU		((TeFSCR_e_RadFab_IO_Cnt_AD)0U)
#define CeFSCR_e_RadFan_Reset_to_Default		((TeFSCR_e_RadFab_IO_Cnt_AD)1U)
#define CeFSCR_e_Short_Term_Adjustment		((TeFSCR_e_RadFab_IO_Cnt_AD)3U)
#endif

/*
* Enum TeFSCR_e_AGS_RoutineControl 
* Default Value:CeFSCR_e_AGS_Cal_In_Progress 
*/
#ifndef TeFSCR_e_AGS_RoutineControl
typedef uint8 TeFSCR_e_AGS_RoutineControl;
#define CeFSCR_e_AGS_Cal_In_Progress		((TeFSCR_e_AGS_RoutineControl)0U)
#define CeFSCR_e_AGS_Cal_Passed		((TeFSCR_e_AGS_RoutineControl)1U)
#define CeFSCR_e_AGS_Cal_Failed		((TeFSCR_e_AGS_RoutineControl)2U)
#endif

/*
* Enum TeFSCR_e_AGS_IO_CntrlSt 
* Default Value:CeFSCR_e_AGS_CtrlToLTLTM 
*/
#ifndef TeFSCR_e_AGS_IO_CntrlSt
typedef uint8 TeFSCR_e_AGS_IO_CntrlSt;
#define CeFSCR_e_AGS_CtrlToLTLTM		((TeFSCR_e_AGS_IO_CntrlSt)0U)
#define CeFSCR_e_AGS_CtrlToServiceTool		((TeFSCR_e_AGS_IO_CntrlSt)1U)
#endif

/*
* Enum TeFWDR_e_TrnsfrCaseRange 
* Default Value:CeFWDR_e_ShiftINProg 
*/
#ifndef TeFWDR_e_TrnsfrCaseRange
typedef uint8 TeFWDR_e_TrnsfrCaseRange;
#define CeFWDR_e_ShiftINProg		((TeFWDR_e_TrnsfrCaseRange)0U)
#define CeFWDR_e_TfrCas4Low		((TeFWDR_e_TrnsfrCaseRange)1U)
#define CeFWDR_e_TfrCas4HI		((TeFWDR_e_TrnsfrCaseRange)2U)
#define CeFWDR_e_TfrCas2WD		((TeFWDR_e_TrnsfrCaseRange)3U)
#define CeFWDR_e_TfrCasNeutral		((TeFWDR_e_TrnsfrCaseRange)4U)
#define CeFWDR_e_TfrCasAuto		((TeFWDR_e_TrnsfrCaseRange)5U)
#define CeFWDR_e_TfrCasPT		((TeFWDR_e_TrnsfrCaseRange)6U)
#define CeFWDR_e_TfrCasSNA		((TeFWDR_e_TrnsfrCaseRange)7U)
#endif

/*
* Enum TeFWDR_e_TcaseRange_Stat 
* Default Value:CeFWDR_e_High 
*/
#ifndef TeFWDR_e_TcaseRange_Stat
typedef uint8 TeFWDR_e_TcaseRange_Stat;
#define CeFWDR_e_High		((TeFWDR_e_TcaseRange_Stat)0U)
#define CeFWDR_e_Neutral		((TeFWDR_e_TcaseRange_Stat)1U)
#define CeFWDR_e_Low		((TeFWDR_e_TcaseRange_Stat)2U)
#define CeFWDR_e_SNA		((TeFWDR_e_TcaseRange_Stat)3U)
#endif

/*
* Enum TeFWDR_e_Tcase_Srv_Rq 
* Default Value:CeFWDR_e_OFF 
*/
#ifndef TeFWDR_e_Tcase_Srv_Rq
typedef uint8 TeFWDR_e_Tcase_Srv_Rq;
#define CeFWDR_e_OFF		((TeFWDR_e_Tcase_Srv_Rq)0U)
#define CeFWDR_e_ON		((TeFWDR_e_Tcase_Srv_Rq)1U)
#define CeFWDR_e_BLINK		((TeFWDR_e_Tcase_Srv_Rq)2U)
#define CeFWDR_e_SrvRqSNA		((TeFWDR_e_Tcase_Srv_Rq)3U)
#endif

/*
* Enum TeFWDR_e_Switch_Rq 
* Default Value:CeFWDR_e_NotPSD 
*/
#ifndef TeFWDR_e_Switch_Rq
typedef uint8 TeFWDR_e_Switch_Rq;
#define CeFWDR_e_NotPSD		((TeFWDR_e_Switch_Rq)0U)
#define CeFWDR_e_PSD		((TeFWDR_e_Switch_Rq)1U)
#define CeFWDR_e_NotDEFINED		((TeFWDR_e_Switch_Rq)2U)
#define CeFWDR_e_SwReqSNA		((TeFWDR_e_Switch_Rq)3U)
#endif

/*
* Enum TeFWDR_e_SpeedSyncReq 
* Default Value:CeFWDR_e_SSR_Inactive 
*/
#ifndef TeFWDR_e_SpeedSyncReq
typedef uint8 TeFWDR_e_SpeedSyncReq;
#define CeFWDR_e_SSR_Inactive		((TeFWDR_e_SpeedSyncReq)0U)
#define CeFWDR_e_SSR_HighSync		((TeFWDR_e_SpeedSyncReq)1U)
#define CeFWDR_e_SSR_LowSync		((TeFWDR_e_SpeedSyncReq)2U)
#define CeFWDR_e_SSR_Neutral		((TeFWDR_e_SpeedSyncReq)3U)
#define CeFWDR_e_SSR_SNA		((TeFWDR_e_SpeedSyncReq)7U)
#endif

/*
* Enum TeFWDR_e_PTU_State 
* Default Value:CeFWDR_e_PTU_SNA 
*/
#ifndef TeFWDR_e_PTU_State
typedef uint8 TeFWDR_e_PTU_State;
#define CeFWDR_e_PTU_4High		((TeFWDR_e_PTU_State)0U)
#define CeFWDR_e_PTU_2High		((TeFWDR_e_PTU_State)1U)
#define CeFWDR_e_PTU_Neutral		((TeFWDR_e_PTU_State)2U)
#define CeFWDR_e_PTU_Low		((TeFWDR_e_PTU_State)3U)
#define CeFWDR_e_PTU_SNA		((TeFWDR_e_PTU_State)7U)
#endif

/*
* Enum TeFWDR_e_RDU_State 
* Default Value:CeFWDR_e_RDU_SNA 
*/
#ifndef TeFWDR_e_RDU_State
typedef uint8 TeFWDR_e_RDU_State;
#define CeFWDR_e_RDU_High		((TeFWDR_e_RDU_State)0U)
#define CeFWDR_e_RDU_Neutral		((TeFWDR_e_RDU_State)1U)
#define CeFWDR_e_RDU_Low		((TeFWDR_e_RDU_State)2U)
#define CeFWDR_e_RDU_SNA		((TeFWDR_e_RDU_State)3U)
#endif

/*
* Enum TeFWDR_e_TCase_TrgtRngState 
* Default Value:CeFWDR_e_TRS_High 
*/
#ifndef TeFWDR_e_TCase_TrgtRngState
typedef uint8 TeFWDR_e_TCase_TrgtRngState;
#define CeFWDR_e_TRS_High		((TeFWDR_e_TCase_TrgtRngState)0U)
#define CeFWDR_e_TRS_Neutral		((TeFWDR_e_TCase_TrgtRngState)1U)
#define CeFWDR_e_TRS_Low		((TeFWDR_e_TCase_TrgtRngState)2U)
#define CeFWDR_e_TRS_SNA		((TeFWDR_e_TCase_TrgtRngState)3U)
#endif

/*
* Enum TeGENR_e_APM_FailureModeStatus 
* Default Value:CeGENR_e_NoFailure 
*/
#ifndef TeGENR_e_APM_FailureModeStatus
typedef uint8 TeGENR_e_APM_FailureModeStatus;
#define CeGENR_e_NoFailure		((TeGENR_e_APM_FailureModeStatus)0U)
#define CeGENR_e_FailureMode		((TeGENR_e_APM_FailureModeStatus)1U)
#define CeGENR_e_SNA		((TeGENR_e_APM_FailureModeStatus)3U)
#endif

/*
* Enum TeGENR_e_LINStatus 
* Default Value:CeGENR_e_NoLINActive 
*/
#ifndef TeGENR_e_LINStatus
typedef uint8 TeGENR_e_LINStatus;
#define CeGENR_e_NoLINActive		((TeGENR_e_LINStatus)0U)
#define CeGENR_e_LINActive		((TeGENR_e_LINStatus)1U)
#define CeGENR_e_LINFailure		((TeGENR_e_LINStatus)2U)
#define CeGENR_e_SNAForLIN		((TeGENR_e_LINStatus)3U)
#endif

/*
* Enum TeGENR_e_APM_FailureType 
* Default Value:CeGENR_e_FailureType_NoFailure 
*/
#ifndef TeGENR_e_APM_FailureType
typedef uint8 TeGENR_e_APM_FailureType;
#define CeGENR_e_FailureType_NoFailure		((TeGENR_e_APM_FailureType)0U)
#define CeGENR_e_FailureType_ChrgngInhibited		((TeGENR_e_APM_FailureType)1U)
#define CeGENR_e_FailureType_ChrgngAllwd		((TeGENR_e_APM_FailureType)2U)
#define CeGENR_e_FailureType_SNA		((TeGENR_e_APM_FailureType)3U)
#endif

/*
* Enum TeGENR_e_IBS_BattTempSts 
* Default Value:CeGENR_e_BattTempSts_Fail_NtPrsnt 
*/
#ifndef TeGENR_e_IBS_BattTempSts
typedef uint8 TeGENR_e_IBS_BattTempSts;
#define CeGENR_e_BattTempSts_Fail_NtPrsnt		((TeGENR_e_IBS_BattTempSts)0U)
#define CeGENR_e_BattTempSts_Fail_Prsnt		((TeGENR_e_IBS_BattTempSts)1U)
#endif

/*
* Enum TeGENR_e_IBS_Current_Status 
* Default Value:CeGENR_e_IBSCurStatus_NO_ERROR 
*/
#ifndef TeGENR_e_IBS_Current_Status
typedef uint8 TeGENR_e_IBS_Current_Status;
#define CeGENR_e_IBSCurStatus_NO_ERROR		((TeGENR_e_IBS_Current_Status)0U)
#define CeGENR_e_IBSCurStatus_OPEN_CKT		((TeGENR_e_IBS_Current_Status)1U)
#define CeGENR_e_IBSCurStatus_HW_DEFECT		((TeGENR_e_IBS_Current_Status)2U)
#define CeGENR_e_IBSCurStatus_SATURATED		((TeGENR_e_IBS_Current_Status)3U)
#endif

/*
* Enum TeGENR_e_IBS_I_Range 
* Default Value:CeGENR_e_Range_I1 
*/
#ifndef TeGENR_e_IBS_I_Range
typedef uint8 TeGENR_e_IBS_I_Range;
#define CeGENR_e_Range_I1		((TeGENR_e_IBS_I_Range)0U)
#define CeGENR_e_Range_I200		((TeGENR_e_IBS_I_Range)1U)
#define CeGENR_e_Range_I1500		((TeGENR_e_IBS_I_Range)2U)
#define CeGENR_e_IBS_I_Range_SNA		((TeGENR_e_IBS_I_Range)3U)
#endif

/*
* Enum TeGENR_e_DeratingModeStatus 
* Default Value:CeGENR_e_No_Derating 
*/
#ifndef TeGENR_e_DeratingModeStatus
typedef uint8 TeGENR_e_DeratingModeStatus;
#define CeGENR_e_No_Derating		((TeGENR_e_DeratingModeStatus)0U)
#define CeGENR_e_Derating_Initialized		((TeGENR_e_DeratingModeStatus)1U)
#define CeGENR_e_Derating_Initialization_Failure		((TeGENR_e_DeratingModeStatus)2U)
#define CeGENR_e_Derating_Mode		((TeGENR_e_DeratingModeStatus)3U)
#define CeGENR_e_Derating_SNA		((TeGENR_e_DeratingModeStatus)7U)
#endif

/*
* Enum TeGENR_e_APM_OperMode 
* Default Value:CeGENR_e_Default 
*/
#ifndef TeGENR_e_APM_OperMode
typedef uint8 TeGENR_e_APM_OperMode;
#define CeGENR_e_Default		((TeGENR_e_APM_OperMode)0U)
#define CeGENR_e_OperBuckCV		((TeGENR_e_APM_OperMode)1U)
#define CeGENR_e_OperBuckCC		((TeGENR_e_APM_OperMode)2U)
#define CeGENR_e_OperBuckCP		((TeGENR_e_APM_OperMode)3U)
#define CeGENR_e_OperBuckSpecial		((TeGENR_e_APM_OperMode)4U)
#define CeGENR_e_OperBoost		((TeGENR_e_APM_OperMode)5U)
#define CeGENR_e_OperPrecharge		((TeGENR_e_APM_OperMode)6U)
#define CeGENR_e_OperDischarge		((TeGENR_e_APM_OperMode)7U)
#define CeGENR_e_OperMode_Off		((TeGENR_e_APM_OperMode)8U)
#define CeGENR_e_OperMode_SNA		((TeGENR_e_APM_OperMode)15U)
#define CeGENR_e_APM_Critical_Fault		((TeGENR_e_APM_OperMode)10U)
#endif

/*
* Enum TeGRAR_e_MSSBEV_Action 
* Default Value:CeGRAR_e_NoLimitation 
*/
#ifndef TeGRAR_e_MSSBEV_Action
typedef uint8 TeGRAR_e_MSSBEV_Action;
#define CeGRAR_e_NoLimitation		((TeGRAR_e_MSSBEV_Action)0U)
#define CeGRAR_e_Sevice_ByPass		((TeGRAR_e_MSSBEV_Action)1U)
#define CeGRAR_e_Disable_ByPass		((TeGRAR_e_MSSBEV_Action)2U)
#define CeGRAR_e_Monitoring_Off		((TeGRAR_e_MSSBEV_Action)3U)
#define CeGRAR_e_Diag_Off		((TeGRAR_e_MSSBEV_Action)4U)
#define CeGRAR_e_Power_Up		((TeGRAR_e_MSSBEV_Action)5U)
#define CeGRAR_e_Monitoring_Off_Error		((TeGRAR_e_MSSBEV_Action)6U)
#define CeGRAR_e_No_Lim_VertDynOff		((TeGRAR_e_MSSBEV_Action)10U)
#define CeGRAR_e_LimSoft_1_1		((TeGRAR_e_MSSBEV_Action)11U)
#define CeGRAR_e_LimSoft_1_2		((TeGRAR_e_MSSBEV_Action)12U)
#define CeGRAR_e_LimSoft_1_3		((TeGRAR_e_MSSBEV_Action)13U)
#define CeGRAR_e_LimMed_2_1		((TeGRAR_e_MSSBEV_Action)21U)
#define CeGRAR_e_LimMed_2_2		((TeGRAR_e_MSSBEV_Action)22U)
#define CeGRAR_e_LimMed_2_3		((TeGRAR_e_MSSBEV_Action)23U)
#define CeGRAR_e_LimHard_3_1		((TeGRAR_e_MSSBEV_Action)31U)
#define CeGRAR_e_LimHard_3_2		((TeGRAR_e_MSSBEV_Action)32U)
#define CeGRAR_e_LimHard_3_3		((TeGRAR_e_MSSBEV_Action)33U)
#define CeGRAR_e_LimUltraHard_4_1		((TeGRAR_e_MSSBEV_Action)41U)
#define CeGRAR_e_LimUltraHard_4_2		((TeGRAR_e_MSSBEV_Action)42U)
#define CeGRAR_e_LimUltraHard_4_3		((TeGRAR_e_MSSBEV_Action)43U)
#define CeGRAR_e_Lim_5_1_VehStop_Fast		((TeGRAR_e_MSSBEV_Action)51U)
#define CeGRAR_e_Lim_5_2_VehStop_Slow		((TeGRAR_e_MSSBEV_Action)52U)
#define CeGRAR_e_Lim_5_3_VehStop_MTRMD		((TeGRAR_e_MSSBEV_Action)53U)
#define CeGRAR_e_KeyOff_No_Limitation		((TeGRAR_e_MSSBEV_Action)60U)
#define CeGRAR_e_KeyOff_HV_Limitation		((TeGRAR_e_MSSBEV_Action)61U)
#define CeGRAR_e_KeyOff_TRQ_Limitation		((TeGRAR_e_MSSBEV_Action)62U)
#endif

/*
* Enum TeGRAR_e_TargetSts 
* Default Value:CeGRAR_e_TargetSts_Normal 
*/
#ifndef TeGRAR_e_TargetSts
typedef uint8 TeGRAR_e_TargetSts;
#define CeGRAR_e_TargetSts_Disable		((TeGRAR_e_TargetSts)0U)
#define CeGRAR_e_TargetSts_Normal		((TeGRAR_e_TargetSts)1U)
#define CeGRAR_e_TargetSts_DiagOff		((TeGRAR_e_TargetSts)6U)
#define CeGRAR_e_TargetSts_On_MonitorOff		((TeGRAR_e_TargetSts)19U)
#define CeGRAR_e_TargetSts_Dminus		((TeGRAR_e_TargetSts)30U)
#endif

/*
* Enum TeSRMR_e_GRAR_TargetSts 
* Default Value:CeSRMR_e_TargetSts_DiagOff 
*/
#ifndef TeSRMR_e_GRAR_TargetSts
typedef uint8 TeSRMR_e_GRAR_TargetSts;
#define CeSRMR_e_TargetSts_DiagOff		((TeSRMR_e_GRAR_TargetSts)6U)
#define CeSRMR_e_TargetSts_Normal		((TeSRMR_e_GRAR_TargetSts)1U)
#define CeSRMR_e_TargetSts_Disable		((TeSRMR_e_GRAR_TargetSts)0U)
#endif

/*
* Enum TeSRMR_e_GRAR_Action 
* Default Value:CeSRMR_e_GRAR_DiagOff 
*/
#ifndef TeSRMR_e_GRAR_Action
typedef uint8 TeSRMR_e_GRAR_Action;
#define CeSRMR_e_GRAR_DiagOff		((TeSRMR_e_GRAR_Action)6U)
#define CeSRMR_e_GRAR_NoLimitation		((TeSRMR_e_GRAR_Action)0U)
#define CeSRMR_e_GRAR_SoftLimitation		((TeSRMR_e_GRAR_Action)1U)
#endif

/*
* Enum TeGRAR_e_ParkPawlReq 
* Default Value:CeGRAR_e_PP_Normal 
*/
#ifndef TeGRAR_e_ParkPawlReq
typedef uint8 TeGRAR_e_ParkPawlReq;
#define CeGRAR_e_PP_Normal		((TeGRAR_e_ParkPawlReq)0U)
#define CeGRAR_e_PP_Disengage		((TeGRAR_e_ParkPawlReq)1U)
#define CeGRAR_e_PP_Engage		((TeGRAR_e_ParkPawlReq)2U)
#endif

/*
* Enum TeGRAR_e_PRND_Req 
* Default Value:CeGRAR_e_PRND_Normal 
*/
#ifndef TeGRAR_e_PRND_Req
typedef uint8 TeGRAR_e_PRND_Req;
#define CeGRAR_e_PRND_Normal		((TeGRAR_e_PRND_Req)0U)
#define CeGRAR_e_LastGoodPRND_Latched		((TeGRAR_e_PRND_Req)1U)
#define CeGRAR_e_PRND_ReqP		((TeGRAR_e_PRND_Req)2U)
#endif

/*
* Enum TeGRAR_e_TotMtrTrqRmdlActn 
* Default Value:CeGRAR_e_Normal 
*/
#ifndef TeGRAR_e_TotMtrTrqRmdlActn
typedef uint8 TeGRAR_e_TotMtrTrqRmdlActn;
#define CeGRAR_e_Normal		((TeGRAR_e_TotMtrTrqRmdlActn)0U)
#define CeGRAR_e_LimMax		((TeGRAR_e_TotMtrTrqRmdlActn)1U)
#define CeGRAR_e_Creep		((TeGRAR_e_TotMtrTrqRmdlActn)2U)
#define CeGRAR_e_Zero		((TeGRAR_e_TotMtrTrqRmdlActn)3U)
#endif

/*
* Enum TeGSMR_e_PPawlSysSt 
* Default Value:CeGSMR_e_PPAWL_NotDetermined 
*/
#ifndef TeGSMR_e_PPawlSysSt
typedef uint8 TeGSMR_e_PPawlSysSt;
#define CeGSMR_e_PPAWL_NotDetermined		((TeGSMR_e_PPawlSysSt)0U)
#define CeGSMR_e_PPAWL_Engaging		((TeGSMR_e_PPawlSysSt)1U)
#define CeGSMR_e_PPAWL_Engaged		((TeGSMR_e_PPawlSysSt)2U)
#define CeGSMR_e_PPAWL_Disengaging		((TeGSMR_e_PPawlSysSt)3U)
#define CeGSMR_e_PPAWL_Disengaged		((TeGSMR_e_PPawlSysSt)4U)
#define CeGSMR_e_PPAWL_Fault		((TeGSMR_e_PPawlSysSt)5U)
#endif

/*
* Enum TeGSMR_e_Lv2PRND_Position 
* Default Value:CeGSMR_e_TransRangePark 
*/
#ifndef TeGSMR_e_Lv2PRND_Position
typedef uint8 TeGSMR_e_Lv2PRND_Position;
#define CeGSMR_e_TransRangePark		((TeGSMR_e_Lv2PRND_Position)0U)
#define CeGSMR_e_TransRangeReverse		((TeGSMR_e_Lv2PRND_Position)1U)
#define CeGSMR_e_TransRangeNeutral		((TeGSMR_e_Lv2PRND_Position)2U)
#define CeGSMR_e_TransRangeDrive		((TeGSMR_e_Lv2PRND_Position)3U)
#define CeGSMR_e_TransRange_L		((TeGSMR_e_Lv2PRND_Position)4U)
#define CeGSMR_e_TransRangeInvalid		((TeGSMR_e_Lv2PRND_Position)5U)
#define CeGSMR_e_NoSlctnAvlbl		((TeGSMR_e_Lv2PRND_Position)6U)
#endif

/*
* Enum TeGSMR_e_TX_Fault 
* Default Value:CeGSMR_e_TX_Fault_OK 
*/
#ifndef TeGSMR_e_TX_Fault
typedef uint8 TeGSMR_e_TX_Fault;
#define CeGSMR_e_TX_Fault_OK		((TeGSMR_e_TX_Fault)0U)
#define CeGSMR_e_TX_Fault_TPF		((TeGSMR_e_TX_Fault)1U)
#define CeGSMR_e_TX_Fault_SNA		((TeGSMR_e_TX_Fault)2U)
#endif

/*
* Enum TeGSMR_e_HBridgeDiagInfo 
* Default Value:CeGSMR_e_NoFault 
*/
#ifndef TeGSMR_e_HBridgeDiagInfo
typedef uint8 TeGSMR_e_HBridgeDiagInfo;
#define CeGSMR_e_NoFault		((TeGSMR_e_HBridgeDiagInfo)0U)
#define CeGSMR_e_NotTested		((TeGSMR_e_HBridgeDiagInfo)1U)
#define CeGSMR_e_OpenCkt		((TeGSMR_e_HBridgeDiagInfo)2U)
#define CeGSMR_e_OverTemp		((TeGSMR_e_HBridgeDiagInfo)8U)
#define CeGSMR_e_UnderVolt		((TeGSMR_e_HBridgeDiagInfo)10U)
#define CeGSMR_e_CurrLim		((TeGSMR_e_HBridgeDiagInfo)23U)
#define CeGSMR_e_TempCurrLim		((TeGSMR_e_HBridgeDiagInfo)24U)
#define CeGSMR_e_STG_Ou1		((TeGSMR_e_HBridgeDiagInfo)25U)
#define CeGSMR_e_STG_Out2		((TeGSMR_e_HBridgeDiagInfo)26U)
#define CeGSMR_e_STB_Out1		((TeGSMR_e_HBridgeDiagInfo)27U)
#define CeGSMR_e_STB_Out2		((TeGSMR_e_HBridgeDiagInfo)28U)
#define CeGSMR_e_ShortOverLoad		((TeGSMR_e_HBridgeDiagInfo)29U)
#endif

/*
* Enum TeGSMR_e_ProxStat 
* Default Value:CeGSMR_e_Prox_Lo 
*/
#ifndef TeGSMR_e_ProxStat
typedef uint8 TeGSMR_e_ProxStat;
#define CeGSMR_e_Prox_Lo		((TeGSMR_e_ProxStat)0U)
#define CeGSMR_e_Prox_Out		((TeGSMR_e_ProxStat)1U)
#define CeGSMR_e_Prox_In		((TeGSMR_e_ProxStat)2U)
#define CeGSMR_e_Prox_Un		((TeGSMR_e_ProxStat)3U)
#define CeGSMR_e_VOOR		((TeGSMR_e_ProxStat)4U)
#define CeGSMR_e_Prox_Hi		((TeGSMR_e_ProxStat)5U)
#endif

/*
* Enum TeGSMR_e_SixSOStatus 
* Default Value:CeGSMR_e_ThreePS 
*/
#ifndef TeGSMR_e_SixSOStatus
typedef uint8 TeGSMR_e_SixSOStatus;
#define CeGSMR_e_ThreePS		((TeGSMR_e_SixSOStatus)0U)
#define CeGSMR_e_SixSO		((TeGSMR_e_SixSOStatus)1U)
#define CeGSMR_e_Switching		((TeGSMR_e_SixSOStatus)2U)
#define CeGSMR_e_OnePS		((TeGSMR_e_SixSOStatus)3U)
#endif

/*
* Enum TeGSMR_e_MtrInvrtrSt 
* Default Value:CeGSMR_e_NormalPowerStageOff 
*/
#ifndef TeGSMR_e_MtrInvrtrSt
typedef uint8 TeGSMR_e_MtrInvrtrSt;
#define CeGSMR_e_NormalPowerStageOff		((TeGSMR_e_MtrInvrtrSt)0U)
#define CeGSMR_e_NormalPowerStageOn		((TeGSMR_e_MtrInvrtrSt)1U)
#define CeGSMR_e_NormalPowerStageOnOvrd		((TeGSMR_e_MtrInvrtrSt)2U)
#define CeGSMR_e_ActiveDischarge		((TeGSMR_e_MtrInvrtrSt)3U)
#define CeGSMR_e_InverterFaulted		((TeGSMR_e_MtrInvrtrSt)4U)
#define CeGSMR_e_NormalPwrStageOffHvRqd		((TeGSMR_e_MtrInvrtrSt)5U)
#define CeGSMR_e_NormalVoltCntrlPriming		((TeGSMR_e_MtrInvrtrSt)6U)
#define CeGSMR_e_NormalVoltCntrlOn		((TeGSMR_e_MtrInvrtrSt)7U)
#define CeGSMR_e_InitCompleted		((TeGSMR_e_MtrInvrtrSt)8U)
#define CeGSMR_e_Init		((TeGSMR_e_MtrInvrtrSt)9U)
#endif

/*
* Enum TeGSMR_e_DrvRqShftROT 
* Default Value:CeGSMR_e_PRNDInit 
*/
#ifndef TeGSMR_e_DrvRqShftROT
typedef uint8 TeGSMR_e_DrvRqShftROT;
#define CeGSMR_e_PRNDInit		((TeGSMR_e_DrvRqShftROT)0U)
#define CeGSMR_e_PRND_Park		((TeGSMR_e_DrvRqShftROT)1U)
#define CeGSMR_e_PRND_Reverse		((TeGSMR_e_DrvRqShftROT)2U)
#define CeGSMR_e_PRND_Neutral		((TeGSMR_e_DrvRqShftROT)3U)
#define CeGSMR_e_PRND_Drive		((TeGSMR_e_DrvRqShftROT)4U)
#define CeGSMR_e_PRND_Fifth		((TeGSMR_e_DrvRqShftROT)5U)
#define CeGSMR_e_PRND_SNA		((TeGSMR_e_DrvRqShftROT)15U)
#endif

/*
* Enum TeGSMR_e_ParkingGearShiftReq_BSM 
* Default Value:CeGSMR_e_GearShiftReq_Idle 
*/
#ifndef TeGSMR_e_ParkingGearShiftReq_BSM
typedef uint8 TeGSMR_e_ParkingGearShiftReq_BSM;
#define CeGSMR_e_GearShiftReq_Idle		((TeGSMR_e_ParkingGearShiftReq_BSM)0U)
#define CeGSMR_e_GearShiftReq_P		((TeGSMR_e_ParkingGearShiftReq_BSM)1U)
#define CeGSMR_e_GearShiftReq_R		((TeGSMR_e_ParkingGearShiftReq_BSM)2U)
#define CeGSMR_e_GearShiftReq_N		((TeGSMR_e_ParkingGearShiftReq_BSM)3U)
#define CeGSMR_e_GearShiftReq_D		((TeGSMR_e_ParkingGearShiftReq_BSM)4U)
#define CeGSMR_e_GearShiftReq_SNA		((TeGSMR_e_ParkingGearShiftReq_BSM)7U)
#endif

/*
* Enum TeHADR_e_EstmrRow 
* Default Value:CeHADR_e_M1_UnlckdEstmrRow 
*/
#ifndef TeHADR_e_EstmrRow
typedef uint8 TeHADR_e_EstmrRow;
#define CeHADR_e_M1_UnlckdEstmrRow		((TeHADR_e_EstmrRow)0U)
#define CeHADR_e_M2_UnlckdEstmrRow		((TeHADR_e_EstmrRow)1U)
#define CeHADR_e_G1_EstmrRow		((TeHADR_e_EstmrRow)2U)
#define CeHADR_e_G2_EstmrRow		((TeHADR_e_EstmrRow)3U)
#define CeHADR_e_G3_EstmrRow		((TeHADR_e_EstmrRow)4U)
#define CeHADR_e_G4_EstmrRow		((TeHADR_e_EstmrRow)5U)
#define CeHADR_e_NeutralLckdEstmrRow		((TeHADR_e_EstmrRow)6U)
#define CeHADR_e_NeutralUnlckdEstmrRow		((TeHADR_e_EstmrRow)7U)
#define CeHADR_e_M1_LckdEstmrRow		((TeHADR_e_EstmrRow)8U)
#define CeHADR_e_M2_LckdEstmrRow		((TeHADR_e_EstmrRow)9U)
#define CeHADR_e_NeutralEngOffEstmrRow		((TeHADR_e_EstmrRow)10U)
#define CeHADR_e_M1_EngOffEstmrRow		((TeHADR_e_EstmrRow)11U)
#define CeHADR_e_M2_EngOffEstmrRow		((TeHADR_e_EstmrRow)12U)
#define CeHADR_e_M1_UnlckdLashEstmrRow		((TeHADR_e_EstmrRow)13U)
#define CeHADR_e_M2_UnlckdLashEstmrRow		((TeHADR_e_EstmrRow)14U)
#define CeHADR_e_G1_LashEstmrRow		((TeHADR_e_EstmrRow)15U)
#define CeHADR_e_G2_LashEstmrRow		((TeHADR_e_EstmrRow)16U)
#define CeHADR_e_G3_LashEstmrRow		((TeHADR_e_EstmrRow)17U)
#define CeHADR_e_G4_LashEstmrRow		((TeHADR_e_EstmrRow)18U)
#define CeHADR_e_M1_LckdLashEstmrRow		((TeHADR_e_EstmrRow)19U)
#define CeHADR_e_M2_LckdLashEstmrRow		((TeHADR_e_EstmrRow)20U)
#define CeHADR_e_M1_EngOffLashEstmrRow		((TeHADR_e_EstmrRow)21U)
#define CeHADR_e_M2_EngOffLashEstmrRow		((TeHADR_e_EstmrRow)22U)
#endif

/*
* Enum TeHADR_e_WhlSpdSrc 
* Default Value:CeHADR_e_ZeroDfltWhlSpdSrc 
*/
#ifndef TeHADR_e_WhlSpdSrc
typedef uint8 TeHADR_e_WhlSpdSrc;
#define CeHADR_e_ZeroDfltWhlSpdSrc		((TeHADR_e_WhlSpdSrc)0U)
#define CeHADR_e_ABS_WhlSpdSrc		((TeHADR_e_WhlSpdSrc)1U)
#define CeHADR_e_TOS_WhlSpdSrc		((TeHADR_e_WhlSpdSrc)2U)
#define CeHADR_e_MtrWhlSpdSrc		((TeHADR_e_WhlSpdSrc)3U)
#define CeHADR_e_InvalidWhlSpdSrc		((TeHADR_e_WhlSpdSrc)4U)
#endif

/*
* Enum TeHADR_e_ActvDmpgSt 
* Default Value:CeHADR_e_Mode1_UnlockedDamper 
*/
#ifndef TeHADR_e_ActvDmpgSt
typedef uint8 TeHADR_e_ActvDmpgSt;
#define CeHADR_e_Mode1_UnlockedDamper		((TeHADR_e_ActvDmpgSt)0U)
#define CeHADR_e_Mode2_UnlockedDamper		((TeHADR_e_ActvDmpgSt)1U)
#define CeHADR_e_Gr1		((TeHADR_e_ActvDmpgSt)2U)
#define CeHADR_e_Gr2		((TeHADR_e_ActvDmpgSt)3U)
#define CeHADR_e_Gr3		((TeHADR_e_ActvDmpgSt)4U)
#define CeHADR_e_Gr4		((TeHADR_e_ActvDmpgSt)5U)
#define CeHADR_e_NeutralLockedDamper		((TeHADR_e_ActvDmpgSt)6U)
#define CeHADR_e_NeutralUnlockedDamper		((TeHADR_e_ActvDmpgSt)7U)
#define CeHADR_e_Mode1_LockedDamper		((TeHADR_e_ActvDmpgSt)8U)
#define CeHADR_e_Mode2_LockedDamper		((TeHADR_e_ActvDmpgSt)9U)
#define CeHADR_e_NeutralEngOff		((TeHADR_e_ActvDmpgSt)10U)
#define CeHADR_e_Mode1_EngOff		((TeHADR_e_ActvDmpgSt)11U)
#define CeHADR_e_Mode2_EngOff		((TeHADR_e_ActvDmpgSt)12U)
#define CeHADR_e_NumberOfActvDmpgSt		((TeHADR_e_ActvDmpgSt)13U)
#endif

/*
* Enum TeHADR_e_LashSt 
* Default Value:CeHADR_e_LashStZero 
*/
#ifndef TeHADR_e_LashSt
typedef uint8 TeHADR_e_LashSt;
#define CeHADR_e_LashStZero		((TeHADR_e_LashSt)0U)
#define CeHADR_e_LashStNeg		((TeHADR_e_LashSt)1U)
#define CeHADR_e_LashStPos		((TeHADR_e_LashSt)2U)
#endif

/*
* Enum TeHADR_e_Delay 
* Default Value:CeHADR_e_DelayZero 
*/
#ifndef TeHADR_e_Delay
typedef uint8 TeHADR_e_Delay;
#define CeHADR_e_DelayZero		((TeHADR_e_Delay)0U)
#define CeHADR_e_DelayOne		((TeHADR_e_Delay)1U)
#define CeHADR_e_DelayTwo		((TeHADR_e_Delay)2U)
#define CeHADR_e_DelayThree		((TeHADR_e_Delay)3U)
#define CeHADR_e_DelayFour		((TeHADR_e_Delay)4U)
#endif

/*
* Enum TeHADR_e_AC_MatrixColumns 
* Default Value:CeHADR_e_EngSpdCol 
*/
#ifndef TeHADR_e_AC_MatrixColumns
typedef uint8 TeHADR_e_AC_MatrixColumns;
#define CeHADR_e_EngSpdCol		((TeHADR_e_AC_MatrixColumns)0U)
#define CeHADR_e_WhlSpdCol		((TeHADR_e_AC_MatrixColumns)1U)
#define CeHADR_e_VehSpdCol		((TeHADR_e_AC_MatrixColumns)2U)
#define CeHADR_e_MtrA_SpdCol		((TeHADR_e_AC_MatrixColumns)3U)
#define CeHADR_e_MtrB_SpdCol		((TeHADR_e_AC_MatrixColumns)4U)
#define CeHADR_e_OutSpdCol		((TeHADR_e_AC_MatrixColumns)5U)
#define CeHADR_e_DmprTorqCol		((TeHADR_e_AC_MatrixColumns)6U)
#define CeHADR_e_AxleTorqCol		((TeHADR_e_AC_MatrixColumns)7U)
#endif

/*
* Enum TeHADR_e_B_MatrixColumns 
* Default Value:CeHADR_e_EngTorqCol 
*/
#ifndef TeHADR_e_B_MatrixColumns
typedef uint8 TeHADR_e_B_MatrixColumns;
#define CeHADR_e_EngTorqCol		((TeHADR_e_B_MatrixColumns)0U)
#define CeHADR_e_MtrA_TorqCol		((TeHADR_e_B_MatrixColumns)1U)
#define CeHADR_e_MtrB_TorqCol		((TeHADR_e_B_MatrixColumns)2U)
#define CeHADR_e_BrkTorqCol		((TeHADR_e_B_MatrixColumns)3U)
#define CeHADR_e_RoadLoadTorqCol		((TeHADR_e_B_MatrixColumns)4U)
#define CeHADR_e_C1_TorqCol		((TeHADR_e_B_MatrixColumns)5U)
#define CeHADR_e_C2_TorqCol		((TeHADR_e_B_MatrixColumns)6U)
#define CeHADR_e_C3_TorqCol		((TeHADR_e_B_MatrixColumns)7U)
#define CeHADR_e_C4_TorqCol		((TeHADR_e_B_MatrixColumns)8U)
#endif

/*
* Enum TeHADR_e_L_MatrixColumns 
* Default Value:CeHADR_e_EngSpdErrCol 
*/
#ifndef TeHADR_e_L_MatrixColumns
typedef uint8 TeHADR_e_L_MatrixColumns;
#define CeHADR_e_EngSpdErrCol		((TeHADR_e_L_MatrixColumns)0U)
#define CeHADR_e_WhlSpdErrCol		((TeHADR_e_L_MatrixColumns)1U)
#define CeHADR_e_MtrA_SpdErrCol		((TeHADR_e_L_MatrixColumns)2U)
#define CeHADR_e_MtrB_SpdErrCol		((TeHADR_e_L_MatrixColumns)3U)
#endif

/*
* Enum TeHADR_e_ActvDmpgGainColumns 
* Default Value:CeHADR_e_ADG_EngSpdErrCol 
*/
#ifndef TeHADR_e_ActvDmpgGainColumns
typedef uint8 TeHADR_e_ActvDmpgGainColumns;
#define CeHADR_e_ADG_EngSpdErrCol		((TeHADR_e_ActvDmpgGainColumns)0U)
#define CeHADR_e_ADG_MtrA_SpdErrCol		((TeHADR_e_ActvDmpgGainColumns)1U)
#define CeHADR_e_ADG_MtrB_SpdErrCol		((TeHADR_e_ActvDmpgGainColumns)2U)
#define CeHADR_e_ADG_DmprTorqErrCol		((TeHADR_e_ActvDmpgGainColumns)3U)
#endif

/*
* Enum TeHCCR_e_AHS_Type 
* Default Value:CeHCCR_e_AHS_T 
*/
#ifndef TeHCCR_e_AHS_Type
typedef uint8 TeHCCR_e_AHS_Type;
#define CeHCCR_e_AHS_T		((TeHCCR_e_AHS_Type)0U)
#define CeHCCR_e_AHS_F		((TeHCCR_e_AHS_Type)1U)
#define CeHCCR_e_AHS_C		((TeHCCR_e_AHS_Type)2U)
#endif

/*
* Enum TeHCCR_e_TCM_Application 
* Default Value:CeHCCR_e_TCM_T 
*/
#ifndef TeHCCR_e_TCM_Application
typedef uint8 TeHCCR_e_TCM_Application;
#define CeHCCR_e_TCM_T		((TeHCCR_e_TCM_Application)0U)
#define CeHCCR_e_TCM_F		((TeHCCR_e_TCM_Application)1U)
#define CeHCCR_e_TCM_PT		((TeHCCR_e_TCM_Application)2U)
#define CeHCCR_e_TCM_PF		((TeHCCR_e_TCM_Application)3U)
#define CeHCCR_e_TCM_UF		((TeHCCR_e_TCM_Application)4U)
#endif

/*
* Enum TeHCCR_e_TorqReqSelect 
* Default Value:CeHCCR_e_PedalReq 
*/
#ifndef TeHCCR_e_TorqReqSelect
typedef uint8 TeHCCR_e_TorqReqSelect;
#define CeHCCR_e_PedalReq		((TeHCCR_e_TorqReqSelect)0U)
#define CeHCCR_e_DsrdPresReq		((TeHCCR_e_TorqReqSelect)1U)
#endif

/*
* Enum TeHCCR_e_AuxPmpStat 
* Default Value:CeHCCR_e_AuxPmpOnBstOff 
*/
#ifndef TeHCCR_e_AuxPmpStat
typedef uint8 TeHCCR_e_AuxPmpStat;
#define CeHCCR_e_AuxPmpOnBstOff		((TeHCCR_e_AuxPmpStat)0U)
#define CeHCCR_e_AuxPmpOnBstOn		((TeHCCR_e_AuxPmpStat)1U)
#define CeHCCR_e_AuxPmpPrimBstOff		((TeHCCR_e_AuxPmpStat)2U)
#define CeHCCR_e_AuxPmpPrimBstOn		((TeHCCR_e_AuxPmpStat)3U)
#define CeHCCR_e_AuxPmpOffBstOff		((TeHCCR_e_AuxPmpStat)4U)
#define CeHCCR_e_AuxPmpOffBstOn		((TeHCCR_e_AuxPmpStat)5U)
#endif

/*
* Enum TeHCCR_e_ClutchStatCntrl 
* Default Value:CeHCCR_e_ClchStatCntrl_M2M1_TrqPhs 
*/
#ifndef TeHCCR_e_ClutchStatCntrl
typedef uint8 TeHCCR_e_ClutchStatCntrl;
#define CeHCCR_e_ClchStatCntrl_M2M1_TrqPhs		((TeHCCR_e_ClutchStatCntrl)0U)
#define CeHCCR_e_ClchStatCntrl_M2M1_SpdPhs		((TeHCCR_e_ClutchStatCntrl)1U)
#define CeHCCR_e_ClchStatCntrl_M1M2_TrqPhs		((TeHCCR_e_ClutchStatCntrl)2U)
#define CeHCCR_e_ClchStatCntrl_M1M2_SpdPhs		((TeHCCR_e_ClutchStatCntrl)3U)
#define CeHCCR_e_ClchStatCntrl_Else		((TeHCCR_e_ClutchStatCntrl)4U)
#endif

/*
* Enum TeHCCR_e_ClutchStatus 
* Default Value:CeHCCR_e_ClInvalid 
*/
#ifndef TeHCCR_e_ClutchStatus
typedef uint8 TeHCCR_e_ClutchStatus;
#define CeHCCR_e_ClInvalid		((TeHCCR_e_ClutchStatus)0U)
#define CeHCCR_e_ClReleased		((TeHCCR_e_ClutchStatus)1U)
#define CeHCCR_e_ClActuated		((TeHCCR_e_ClutchStatus)2U)
#define CeHCCR_e_ClNearSynched		((TeHCCR_e_ClutchStatus)3U)
#define CeHCCR_e_ClSynched		((TeHCCR_e_ClutchStatus)4U)
#define CeHCCR_e_ClLocked		((TeHCCR_e_ClutchStatus)5U)
#endif

/*
* Enum TeHCCR_e_XY_SequencingSt 
* Default Value:CeHCCR_e_EVTLO 
*/
#ifndef TeHCCR_e_XY_SequencingSt
typedef uint8 TeHCCR_e_XY_SequencingSt;
#define CeHCCR_e_EVTLO		((TeHCCR_e_XY_SequencingSt)0U)
#define CeHCCR_e_EVTHI		((TeHCCR_e_XY_SequencingSt)1U)
#define CeHCCR_e_RNGLO		((TeHCCR_e_XY_SequencingSt)2U)
#define CeHCCR_e_RNGHI		((TeHCCR_e_XY_SequencingSt)3U)
#define CeHCCR_e_NEngOff		((TeHCCR_e_XY_SequencingSt)4U)
#define CeHCCR_e_EVTLO_To_RNGLO		((TeHCCR_e_XY_SequencingSt)5U)
#define CeHCCR_e_RNGLO_To_EVTLO		((TeHCCR_e_XY_SequencingSt)6U)
#define CeHCCR_e_RNGLO_To_RNGHI		((TeHCCR_e_XY_SequencingSt)7U)
#define CeHCCR_e_RNGHI_To_RNGLO		((TeHCCR_e_XY_SequencingSt)8U)
#define CeHCCR_e_RNGHI_To_EVTHI		((TeHCCR_e_XY_SequencingSt)9U)
#define CeHCCR_e_EVTHI_To_RNGHI		((TeHCCR_e_XY_SequencingSt)10U)
#define CeHCCR_e_EVTHI_To_EVTLO		((TeHCCR_e_XY_SequencingSt)11U)
#define CeHCCR_e_EVTLO_To_EVTHI		((TeHCCR_e_XY_SequencingSt)12U)
#define CeHCCR_e_XStuckLow		((TeHCCR_e_XY_SequencingSt)13U)
#define CeHCCR_e_XStuckHigh		((TeHCCR_e_XY_SequencingSt)14U)
#define CeHCCR_e_YStuckLow		((TeHCCR_e_XY_SequencingSt)15U)
#define CeHCCR_e_YStuckHigh		((TeHCCR_e_XY_SequencingSt)16U)
#define CeHCCR_e_EVTLO_To_EVTHI_Abort		((TeHCCR_e_XY_SequencingSt)17U)
#define CeHCCR_e_RNGLO_To_RNGHI_Abort		((TeHCCR_e_XY_SequencingSt)18U)
#endif

/*
* Enum TeHCCR_e_HCCD_Diag 
* Default Value:CeHCCD_e_Clear 
*/
#ifndef TeHCCR_e_HCCD_Diag
typedef uint8 TeHCCR_e_HCCD_Diag;
#define CeHCCD_e_Clear		((TeHCCR_e_HCCD_Diag)0U)
#define CeHCCD_e_StuckHigh		((TeHCCR_e_HCCD_Diag)1U)
#define CeHCCD_e_StuckLow		((TeHCCR_e_HCCD_Diag)2U)
#endif

/*
* Enum TeHCCR_e_VectorIndex 
* Default Value:CeHCCR_e_NiProfileVctrIdx 
*/
#ifndef TeHCCR_e_VectorIndex
typedef uint8 TeHCCR_e_VectorIndex;
#define CeHCCR_e_NiProfileVctrIdx		((TeHCCR_e_VectorIndex)1U)
#endif

/*
* Enum TeHCCR_e_AdaptiveRate 
* Default Value:CeHCCR_e_FastCorr 
*/
#ifndef TeHCCR_e_AdaptiveRate
typedef uint8 TeHCCR_e_AdaptiveRate;
#define CeHCCR_e_FastCorr		((TeHCCR_e_AdaptiveRate)0U)
#define CeHCCR_e_MedCorr		((TeHCCR_e_AdaptiveRate)1U)
#define CeHCCR_e_SlowCorr		((TeHCCR_e_AdaptiveRate)2U)
#endif

/*
* Enum TeHCCR_e_MinFillAdaptStat 
* Default Value:CeHCCR_e_Untrained 
*/
#ifndef TeHCCR_e_MinFillAdaptStat
typedef uint8 TeHCCR_e_MinFillAdaptStat;
#define CeHCCR_e_Untrained		((TeHCCR_e_MinFillAdaptStat)1U)
#define CeHCCR_e_Trained		((TeHCCR_e_MinFillAdaptStat)2U)
#define CeHCCR_e_Training		((TeHCCR_e_MinFillAdaptStat)3U)
#endif

/*
* Enum TeHCCR_e_MtrXFrontRearMapping 
* Default Value:CeHCCR_e_MtrA 
*/
#ifndef TeHCCR_e_MtrXFrontRearMapping
typedef uint8 TeHCCR_e_MtrXFrontRearMapping;
#define CeHCCR_e_MtrA		((TeHCCR_e_MtrXFrontRearMapping)0U)
#define CeHCCR_e_MtrB		((TeHCCR_e_MtrXFrontRearMapping)1U)
#define CeHCCR_e_MtrC		((TeHCCR_e_MtrXFrontRearMapping)2U)
#endif

/*
* Enum TeHCCR_e_DefaultAction 
* Default Value:CeHCCR_e_XYVlvLo 
*/
#ifndef TeHCCR_e_DefaultAction
typedef uint8 TeHCCR_e_DefaultAction;
#define CeHCCR_e_XYVlvLo		((TeHCCR_e_DefaultAction)0U)
#define CeHCCR_e_XYVlvHi		((TeHCCR_e_DefaultAction)1U)
#define CeHCCR_e_XYVlvNone		((TeHCCR_e_DefaultAction)2U)
#endif

/*
* Enum TeHCCR_e_EHDlyBuffIdx 
* Default Value:CeHCCR_e_ClNone 
*/
#ifndef TeHCCR_e_EHDlyBuffIdx
typedef uint8 TeHCCR_e_EHDlyBuffIdx;
#define CeHCCR_e_ClNone		((TeHCCR_e_EHDlyBuffIdx)0U)
#define CeHCCR_e_Cl1		((TeHCCR_e_EHDlyBuffIdx)1U)
#define CeHCCR_e_Cl2		((TeHCCR_e_EHDlyBuffIdx)2U)
#define CeHCCR_e_Cl3		((TeHCCR_e_EHDlyBuffIdx)3U)
#define CeHCCR_e_Cl4		((TeHCCR_e_EHDlyBuffIdx)4U)
#define CeHCCR_e_LinePres		((TeHCCR_e_EHDlyBuffIdx)5U)
#endif

/*
* Enum TeHCCR_e_ActuatorSt 
* Default Value:CeHCCR_e_SCA_Filling_Md 
*/
#ifndef TeHCCR_e_ActuatorSt
typedef uint8 TeHCCR_e_ActuatorSt;
#define CeHCCR_e_SCA_Filling_Md		((TeHCCR_e_ActuatorSt)0U)
#define CeHCCR_e_SCA_Secure_Md		((TeHCCR_e_ActuatorSt)1U)
#define CeHCCR_e_SCA_Operation_Md		((TeHCCR_e_ActuatorSt)2U)
#define CeHCCR_e_SCA_RemovingAir1_Md		((TeHCCR_e_ActuatorSt)3U)
#define CeHCCR_e_SCA_RemovingAir2_Md		((TeHCCR_e_ActuatorSt)4U)
#define CeHCCR_e_SCA_Info_Md		((TeHCCR_e_ActuatorSt)5U)
#define CeHCCR_e_SCA_Engineering_Md		((TeHCCR_e_ActuatorSt)6U)
#define CeHCCR_e_SCA_Initializing_Md		((TeHCCR_e_ActuatorSt)7U)
#define CeHCCR_e_SCA_Inactv_Md		((TeHCCR_e_ActuatorSt)8U)
#define CeHCCR_e_SCA_Hold_Md		((TeHCCR_e_ActuatorSt)9U)
#endif

/*
* Enum TeHCCR_e_MuSelect 
* Default Value:CeHCCR_e_C1_MuStat_ForPresCmd 
*/
#ifndef TeHCCR_e_MuSelect
typedef uint8 TeHCCR_e_MuSelect;
#define CeHCCR_e_C1_MuStat_ForPresCmd		((TeHCCR_e_MuSelect)0U)
#define CeHCCR_e_C1_MuDyn_ForPresCmd		((TeHCCR_e_MuSelect)1U)
#define CeHCCR_e_C2_MuStat_ForPresCmd		((TeHCCR_e_MuSelect)2U)
#define CeHCCR_e_C2_MuDyn_ForPresCmd		((TeHCCR_e_MuSelect)3U)
#define CeHCCR_e_C1_MuStat_ForTorqEst		((TeHCCR_e_MuSelect)4U)
#define CeHCCR_e_C1_MuDyn_ForTorqEst		((TeHCCR_e_MuSelect)5U)
#define CeHCCR_e_C2_MuStat_ForTorqEst		((TeHCCR_e_MuSelect)6U)
#define CeHCCR_e_C2_MuDyn_ForTorqEst		((TeHCCR_e_MuSelect)7U)
#endif

/*
* Enum TeHCCR_e_PresMapSlct 
* Default Value:CeHCCR_e_ReleaseMap 
*/
#ifndef TeHCCR_e_PresMapSlct
typedef uint8 TeHCCR_e_PresMapSlct;
#define CeHCCR_e_ReleaseMap		((TeHCCR_e_PresMapSlct)0U)
#define CeHCCR_e_ApplyMap		((TeHCCR_e_PresMapSlct)1U)
#endif

/*
* Enum TeHCCR_e_ClchFillDtctStat 
* Default Value:CeHCCR_e_FillDtctNotActv 
*/
#ifndef TeHCCR_e_ClchFillDtctStat
typedef uint8 TeHCCR_e_ClchFillDtctStat;
#define CeHCCR_e_FillDtctNotActv		((TeHCCR_e_ClchFillDtctStat)0U)
#define CeHCCR_e_C1_FillDtctInProg		((TeHCCR_e_ClchFillDtctStat)1U)
#define CeHCCR_e_C1_FillDtctCmpt		((TeHCCR_e_ClchFillDtctStat)2U)
#define CeHCCR_e_C2_FillDtctInProg		((TeHCCR_e_ClchFillDtctStat)3U)
#define CeHCCR_e_C2_FillDtctCmpt		((TeHCCR_e_ClchFillDtctStat)4U)
#endif

/*
* Enum TeHCCR_e_C2C_ShftAllwd 
* Default Value:CeHCCR_e_All_C2C_Allwd 
*/
#ifndef TeHCCR_e_C2C_ShftAllwd
typedef uint8 TeHCCR_e_C2C_ShftAllwd;
#define CeHCCR_e_All_C2C_Allwd		((TeHCCR_e_C2C_ShftAllwd)0U)
#define CeHCCR_e_M2M1_C2C_NotRecomm		((TeHCCR_e_C2C_ShftAllwd)1U)
#define CeHCCR_e_M1M2_C2C_NotRecomm		((TeHCCR_e_C2C_ShftAllwd)2U)
#define CeHCCR_e_All_C2C_NotRecomm		((TeHCCR_e_C2C_ShftAllwd)3U)
#define CeHCCR_e_M1M2_C2C_NotAllwd		((TeHCCR_e_C2C_ShftAllwd)4U)
#define CeHCCR_e_M2M1_C2C_NotAllwd		((TeHCCR_e_C2C_ShftAllwd)5U)
#define CeHCCR_e_All_C2C_NotAllwd		((TeHCCR_e_C2C_ShftAllwd)6U)
#endif

/*
* Enum TeHCCR_e_SCA_HW_Version 
* Default Value:CeHCCR_e_SCA_A0 
*/
#ifndef TeHCCR_e_SCA_HW_Version
typedef uint8 TeHCCR_e_SCA_HW_Version;
#define CeHCCR_e_SCA_A0		((TeHCCR_e_SCA_HW_Version)0U)
#define CeHCCR_e_SCA_A1		((TeHCCR_e_SCA_HW_Version)1U)
#define CeHCCR_e_SCA_A2		((TeHCCR_e_SCA_HW_Version)2U)
#define CeHCCR_e_SCA_B0		((TeHCCR_e_SCA_HW_Version)3U)
#define CeHCCR_e_SCA_B1		((TeHCCR_e_SCA_HW_Version)4U)
#define CeHCCR_e_SCA_B2		((TeHCCR_e_SCA_HW_Version)5U)
#define CeHCCR_e_SCA_B3		((TeHCCR_e_SCA_HW_Version)6U)
#define CeHCCR_e_SCA_B4		((TeHCCR_e_SCA_HW_Version)7U)
#define CeHCCR_e_SCA_C0		((TeHCCR_e_SCA_HW_Version)8U)
#define CeHCCR_e_SCA_C1		((TeHCCR_e_SCA_HW_Version)9U)
#define CeHCCR_e_SCA_Invalid_Ver		((TeHCCR_e_SCA_HW_Version)255U)
#endif

/*
* Enum TeHCCR_e_SCA_Fluid_Medium 
* Default Value:CeHCCR_e_SCA_MineralOil 
*/
#ifndef TeHCCR_e_SCA_Fluid_Medium
typedef uint8 TeHCCR_e_SCA_Fluid_Medium;
#define CeHCCR_e_SCA_MineralOil		((TeHCCR_e_SCA_Fluid_Medium)4U)
#define CeHCCR_e_SCA_Brake_Fluid		((TeHCCR_e_SCA_Fluid_Medium)7U)
#endif

/*
* Enum TeHCCR_e_SCA_SW_Version 
* Default Value:CeHCCR_e_SCA_v105 
*/
#ifndef TeHCCR_e_SCA_SW_Version
typedef uint8 TeHCCR_e_SCA_SW_Version;
#define CeHCCR_e_SCA_v105		((TeHCCR_e_SCA_SW_Version)105U)
#define CeHCCR_e_SCA_v106		((TeHCCR_e_SCA_SW_Version)106U)
#define CeHCCR_e_SCA_v107		((TeHCCR_e_SCA_SW_Version)107U)
#define CeHCCR_e_SCA_v108		((TeHCCR_e_SCA_SW_Version)108U)
#define CeHCCR_e_SCA_v109		((TeHCCR_e_SCA_SW_Version)109U)
#define CeHCCR_e_SCA_v110		((TeHCCR_e_SCA_SW_Version)110U)
#define CeHCCR_e_SCA_v111		((TeHCCR_e_SCA_SW_Version)111U)
#define CeHCCR_e_SCA_v112		((TeHCCR_e_SCA_SW_Version)112U)
#define CeHCCR_e_SCA_v113		((TeHCCR_e_SCA_SW_Version)113U)
#define CeHCCR_e_SCA_v114		((TeHCCR_e_SCA_SW_Version)114U)
#define CeHCCR_e_SCA_v115		((TeHCCR_e_SCA_SW_Version)115U)
#define CeHCCR_e_SCA_v116		((TeHCCR_e_SCA_SW_Version)116U)
#define CeHCCR_e_SCA_v117		((TeHCCR_e_SCA_SW_Version)117U)
#define CeHCCR_e_SCA_v118		((TeHCCR_e_SCA_SW_Version)118U)
#define CeHCCR_e_SCA_v119		((TeHCCR_e_SCA_SW_Version)119U)
#define CeHCCR_e_SCA_v120		((TeHCCR_e_SCA_SW_Version)120U)
#define CeHCCR_e_SCA_v121		((TeHCCR_e_SCA_SW_Version)121U)
#define CeHCCR_e_SCA_v122		((TeHCCR_e_SCA_SW_Version)122U)
#define CeHCCR_e_SCA_v123		((TeHCCR_e_SCA_SW_Version)123U)
#define CeHCCR_e_SCA_v124		((TeHCCR_e_SCA_SW_Version)124U)
#endif

/*
* Enum TeHCCR_e_errorCPX 
* Default Value:CeHCCR_e_SCA_CPX_NoError 
*/
#ifndef TeHCCR_e_errorCPX
typedef uint8 TeHCCR_e_errorCPX;
#define CeHCCR_e_SCA_CPX_NoError		((TeHCCR_e_errorCPX)0U)
#define CeHCCR_e_SCA_CPX_Error1		((TeHCCR_e_errorCPX)1U)
#define CeHCCR_e_SCA_CPX_Error2		((TeHCCR_e_errorCPX)2U)
#define CeHCCR_e_SCA_CPX_SNA		((TeHCCR_e_errorCPX)3U)
#endif

/*
* Enum TeHCDR_e_BatteryThermalFault 
* Default Value:CeHCDR_e_BattThermalNoFault 
*/
#ifndef TeHCDR_e_BatteryThermalFault
typedef uint8 TeHCDR_e_BatteryThermalFault;
#define CeHCDR_e_BattThermalNoFault		((TeHCDR_e_BatteryThermalFault)0U)
#define CeHCDR_e_BattThermalCompFault		((TeHCDR_e_BatteryThermalFault)1U)
#endif

/*
* Enum TeHCDR_e_CommBusOff 
* Default Value:CeHCDR_e_LIN1_BusOff 
*/
#ifndef TeHCDR_e_CommBusOff
typedef uint8 TeHCDR_e_CommBusOff;
#define CeHCDR_e_LIN1_BusOff		((TeHCDR_e_CommBusOff)0U)
#define CeHCDR_e_LIN2_BusOff		((TeHCDR_e_CommBusOff)1U)
#define CeHCDR_e_LIN3_BusOff		((TeHCDR_e_CommBusOff)2U)
#define CeHCDR_e_CANC2_BusOff		((TeHCDR_e_CommBusOff)3U)
#define CeHCDR_e_CANePT_BusOff		((TeHCDR_e_CommBusOff)4U)
#endif

/*
* Enum TeHMIR_e_BattLmpSts 
* Default Value:CeHMIR_e_12VLmpOFF 
*/
#ifndef TeHMIR_e_BattLmpSts
typedef uint8 TeHMIR_e_BattLmpSts;
#define CeHMIR_e_12VLmpOFF		((TeHMIR_e_BattLmpSts)0U)
#define CeHMIR_e_12VLmpON		((TeHMIR_e_BattLmpSts)1U)
#define CeHMIR_e_12VLmpFLSH		((TeHMIR_e_BattLmpSts)2U)
#define CeHMIR_e_12VLmpSNA		((TeHMIR_e_BattLmpSts)3U)
#endif

/*
* Enum TeHMIR_e_12VSysWarnMsg 
* Default Value:CeHMIR_e_SysWrnNoMsg 
*/
#ifndef TeHMIR_e_12VSysWarnMsg
typedef uint8 TeHMIR_e_12VSysWarnMsg;
#define CeHMIR_e_SysWrnNoMsg		((TeHMIR_e_12VSysWarnMsg)0U)
#define CeHMIR_e_SysInitWarning		((TeHMIR_e_12VSysWarnMsg)1U)
#define CeHMIR_e_SysFinalWarning		((TeHMIR_e_12VSysWarnMsg)2U)
#define CeHMIR_e_SysWarnSNA		((TeHMIR_e_12VSysWarnMsg)7U)
#endif

/*
* Enum TeHMIR_e_VldtdTransRngSt_ShifterPOS 
* Default Value:CeHMIR_e_ShifterPosNoSelection 
*/
#ifndef TeHMIR_e_VldtdTransRngSt_ShifterPOS
typedef uint8 TeHMIR_e_VldtdTransRngSt_ShifterPOS;
#define CeHMIR_e_ShifterPosNoSelection		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)0U)
#define CeHMIR_e_ShifterPosBlank		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)32U)
#define CeHMIR_e_ShifterPosPark		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)80U)
#define CeHMIR_e_ShifterPosReverse		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)82U)
#define CeHMIR_e_ShifterPosNeutral		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)78U)
#define CeHMIR_e_ShifterPosDrive		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)68U)
#define CeHMIR_e_ShifterPosL		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)76U)
#define CeHMIR_e_ShifterPosD2		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)130U)
#define CeHMIR_e_ShifterPosD3		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)131U)
#define CeHMIR_e_ShifterPosD4		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)132U)
#define CeHMIR_e_ShifterPosD5		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)133U)
#define CeHMIR_e_ShifterPosONE		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)49U)
#define CeHMIR_e_ShifterPosTWO		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)50U)
#define CeHMIR_e_ShifterPosTHREE		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)51U)
#define CeHMIR_e_ShifterPosFOUR		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)52U)
#define CeHMIR_e_ShifterPosFIVE		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)53U)
#define CeHMIR_e_ShifterPosSIX		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)54U)
#define CeHMIR_e_ShifterPosSEVEN		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)55U)
#define CeHMIR_e_ShifterPosEIGHT		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)56U)
#define CeHMIR_e_ShifterPosNINE		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)57U)
#define CeHMIR_e_ShifterPosA		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)65U)
#define CeHMIR_e_ShifterPosD		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)68U)
#define CeHMIR_e_ShifterPosF		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)70U)
#define CeHMIR_e_ShifterPosM		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)77U)
#define CeHMIR_e_ShifterPosN		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)78U)
#define CeHMIR_e_ShifterPosS		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)83U)
#define CeHMIR_e_ShifterPosDS		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)128U)
#define CeHMIR_e_ShifterPosSNOW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)135U)
#define CeHMIR_e_ShifterPosNOT_N		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)254U)
#define CeHMIR_e_ShifterPosSNA		((TeHMIR_e_VldtdTransRngSt_ShifterPOS)255U)
#endif

/*
* Enum TeHMIR_e_HEVBattIOStat 
* Default Value:CeHMIR_e_HEVBattIO_NoSignal 
*/
#ifndef TeHMIR_e_HEVBattIOStat
typedef uint8 TeHMIR_e_HEVBattIOStat;
#define CeHMIR_e_HEVBattIO_NoSignal		((TeHMIR_e_HEVBattIOStat)0U)
#define CeHMIR_e_HEVBattIO_InputChange		((TeHMIR_e_HEVBattIOStat)1U)
#define CeHMIR_e_HEVBattIO_OutputAssit		((TeHMIR_e_HEVBattIOStat)2U)
#define CeHMIR_e_HEVBattIO_SNA		((TeHMIR_e_HEVBattIOStat)3U)
#endif

/*
* Enum TeHMIR_e_HEVAxleIOStat 
* Default Value:CeHMIR_e_HEVAxleIO_NoSignal 
*/
#ifndef TeHMIR_e_HEVAxleIOStat
typedef uint8 TeHMIR_e_HEVAxleIOStat;
#define CeHMIR_e_HEVAxleIO_NoSignal		((TeHMIR_e_HEVAxleIOStat)0U)
#define CeHMIR_e_HEVAxleIO_In_Regen		((TeHMIR_e_HEVAxleIOStat)1U)
#define CeHMIR_e_HEVAxleIO_Output_Prop		((TeHMIR_e_HEVAxleIOStat)2U)
#define CeHMIR_e_HEVAxleIO_SNA		((TeHMIR_e_HEVAxleIOStat)3U)
#endif

/*
* Enum TeHMIR_e_HEVMtrIOStat 
* Default Value:CeHMIR_e_HEVMtrIO_NoSignal 
*/
#ifndef TeHMIR_e_HEVMtrIOStat
typedef uint8 TeHMIR_e_HEVMtrIOStat;
#define CeHMIR_e_HEVMtrIO_NoSignal		((TeHMIR_e_HEVMtrIOStat)0U)
#define CeHMIR_e_HEVMtrIO_Input		((TeHMIR_e_HEVMtrIOStat)1U)
#define CeHMIR_e_HEVMtrIO_Output		((TeHMIR_e_HEVMtrIOStat)2U)
#define CeHMIR_e_HEVMtrIO_SNA		((TeHMIR_e_HEVMtrIOStat)3U)
#endif

/*
* Enum TeHMIR_e_HEV_LMP 
* Default Value:CeHMIR_e_HEV_LMP_OFF 
*/
#ifndef TeHMIR_e_HEV_LMP
typedef uint8 TeHMIR_e_HEV_LMP;
#define CeHMIR_e_HEV_LMP_OFF		((TeHMIR_e_HEV_LMP)0U)
#define CeHMIR_e_HEV_LMP_ON		((TeHMIR_e_HEV_LMP)1U)
#define CeHMIR_e_HEV_LMP_BLINK		((TeHMIR_e_HEV_LMP)2U)
#define CeHMIR_e_HEV_LMP_SNA		((TeHMIR_e_HEV_LMP)3U)
#endif

/*
* Enum TeHMIR_e_HEV_MISC1 
* Default Value:CeHMIR_e_HEV_MISC1_OFF 
*/
#ifndef TeHMIR_e_HEV_MISC1
typedef uint8 TeHMIR_e_HEV_MISC1;
#define CeHMIR_e_HEV_MISC1_OFF		((TeHMIR_e_HEV_MISC1)0U)
#define CeHMIR_e_HEV_MISC1_ON		((TeHMIR_e_HEV_MISC1)1U)
#define CeHMIR_e_HEV_MISC1_BLINK		((TeHMIR_e_HEV_MISC1)2U)
#define CeHMIR_e_HEV_MISC1_SNA		((TeHMIR_e_HEV_MISC1)3U)
#endif

/*
* Enum TeHMIR_e_HEV_MISC2 
* Default Value:CeHMIR_e_HEV_MISC2_OFF 
*/
#ifndef TeHMIR_e_HEV_MISC2
typedef uint8 TeHMIR_e_HEV_MISC2;
#define CeHMIR_e_HEV_MISC2_OFF		((TeHMIR_e_HEV_MISC2)0U)
#define CeHMIR_e_HEV_MISC2_ON		((TeHMIR_e_HEV_MISC2)1U)
#define CeHMIR_e_HEV_MISC2_BLINK		((TeHMIR_e_HEV_MISC2)2U)
#define CeHMIR_e_HEV_MISC2_SNA		((TeHMIR_e_HEV_MISC2)3U)
#endif

/*
* Enum TeHMIR_e_HEV_MISC3 
* Default Value:CeHMIR_e_HEV_MISC3_OFF 
*/
#ifndef TeHMIR_e_HEV_MISC3
typedef uint8 TeHMIR_e_HEV_MISC3;
#define CeHMIR_e_HEV_MISC3_OFF		((TeHMIR_e_HEV_MISC3)0U)
#define CeHMIR_e_HEV_MISC3_ON		((TeHMIR_e_HEV_MISC3)1U)
#define CeHMIR_e_HEV_MISC3_BLINK		((TeHMIR_e_HEV_MISC3)2U)
#define CeHMIR_e_HEV_MISC3_SNA		((TeHMIR_e_HEV_MISC3)3U)
#endif

/*
* Enum TeHMIR_e_HEV_MISC4 
* Default Value:CeHMIR_e_HEV_MISC4_OFF 
*/
#ifndef TeHMIR_e_HEV_MISC4
typedef uint8 TeHMIR_e_HEV_MISC4;
#define CeHMIR_e_HEV_MISC4_OFF		((TeHMIR_e_HEV_MISC4)0U)
#define CeHMIR_e_HEV_MISC4_ON		((TeHMIR_e_HEV_MISC4)1U)
#define CeHMIR_e_HEV_MISC4_BLINK		((TeHMIR_e_HEV_MISC4)2U)
#define CeHMIR_e_HEV_MISC4_SNA		((TeHMIR_e_HEV_MISC4)3U)
#endif

/*
* Enum TeHMIR_e_LimitMaxPowerSel 
* Default Value:CeHMIR_e_Not_Active 
*/
#ifndef TeHMIR_e_LimitMaxPowerSel
typedef uint8 TeHMIR_e_LimitMaxPowerSel;
#define CeHMIR_e_Not_Active		((TeHMIR_e_LimitMaxPowerSel)0U)
#define CeHMIR_e_Active		((TeHMIR_e_LimitMaxPowerSel)1U)
#define CeHMIR_e_Reserved_1		((TeHMIR_e_LimitMaxPowerSel)2U)
#define CeHMIR_e_Reserved_2		((TeHMIR_e_LimitMaxPowerSel)3U)
#endif

/*
* Enum TeHMIR_e_Towing_MD_RQ 
* Default Value:CeHMIR_e_Towing_MD_RQ_OFF 
*/
#ifndef TeHMIR_e_Towing_MD_RQ
typedef uint8 TeHMIR_e_Towing_MD_RQ;
#define CeHMIR_e_Towing_MD_RQ_OFF		((TeHMIR_e_Towing_MD_RQ)0U)
#define CeHMIR_e_Towing_MD_RQ_ON		((TeHMIR_e_Towing_MD_RQ)1U)
#define CeHMIR_e_Towing_MD_RQ_Undefined		((TeHMIR_e_Towing_MD_RQ)2U)
#define CeHMIR_e_Towing_MD_RQ_SNA		((TeHMIR_e_Towing_MD_RQ)3U)
#endif

/*
* Enum TeHMIR_e_TransWarnMsgs 
* Default Value:CeHMIR_e_Warn_None 
*/
#ifndef TeHMIR_e_TransWarnMsgs
typedef uint8 TeHMIR_e_TransWarnMsgs;
#define CeHMIR_e_Warn_None		((TeHMIR_e_TransWarnMsgs)0U)
#define CeHMIR_e_Warn_1		((TeHMIR_e_TransWarnMsgs)1U)
#define CeHMIR_e_Warn_2		((TeHMIR_e_TransWarnMsgs)2U)
#define CeHMIR_e_Warn_3		((TeHMIR_e_TransWarnMsgs)3U)
#define CeHMIR_e_Warn_4		((TeHMIR_e_TransWarnMsgs)4U)
#define CeHMIR_e_Warn_5		((TeHMIR_e_TransWarnMsgs)5U)
#define CeHMIR_e_Warn_6		((TeHMIR_e_TransWarnMsgs)6U)
#define CeHMIR_e_Warn_7		((TeHMIR_e_TransWarnMsgs)7U)
#define CeHMIR_e_Warn_8		((TeHMIR_e_TransWarnMsgs)8U)
#define CeHMIR_e_Warn_9		((TeHMIR_e_TransWarnMsgs)9U)
#define CeHMIR_e_Warn_10		((TeHMIR_e_TransWarnMsgs)10U)
#define CeHMIR_e_Warn_11		((TeHMIR_e_TransWarnMsgs)11U)
#define CeHMIR_e_Warn_12		((TeHMIR_e_TransWarnMsgs)12U)
#define CeHMIR_e_Warn_13		((TeHMIR_e_TransWarnMsgs)13U)
#define CeHMIR_e_Warn_14		((TeHMIR_e_TransWarnMsgs)14U)
#define CeHMIR_e_Warn_SNA		((TeHMIR_e_TransWarnMsgs)15U)
#endif

/*
* Enum TeHMIR_e_VDCM_PopUp5 
* Default Value:CeHMIR_e_Not_Availabl 
*/
#ifndef TeHMIR_e_VDCM_PopUp5
typedef uint8 TeHMIR_e_VDCM_PopUp5;
#define CeHMIR_e_Not_Availabl		((TeHMIR_e_VDCM_PopUp5)0U)
#define CeHMIR_e_Lvl_1		((TeHMIR_e_VDCM_PopUp5)1U)
#define CeHMIR_e_Lvl_2		((TeHMIR_e_VDCM_PopUp5)2U)
#define CeHMIR_e_Lvl_3		((TeHMIR_e_VDCM_PopUp5)3U)
#define CeHMIR_e_Lvl_4		((TeHMIR_e_VDCM_PopUp5)4U)
#define CeHMIR_e_Lvl_5		((TeHMIR_e_VDCM_PopUp5)5U)
#define CeHMIR_e_Lvl_0		((TeHMIR_e_VDCM_PopUp5)6U)
#define CeHMIR_e_SNA_PopUp5		((TeHMIR_e_VDCM_PopUp5)7U)
#endif

/*
* Enum TeHMIR_e_VDCM_PopUp6 
* Default Value:CeHMIR_e_Not_Available 
*/
#ifndef TeHMIR_e_VDCM_PopUp6
typedef uint8 TeHMIR_e_VDCM_PopUp6;
#define CeHMIR_e_Not_Available		((TeHMIR_e_VDCM_PopUp6)0U)
#define CeHMIR_e_level1		((TeHMIR_e_VDCM_PopUp6)1U)
#define CeHMIR_e_level2		((TeHMIR_e_VDCM_PopUp6)2U)
#define CeHMIR_e_level3		((TeHMIR_e_VDCM_PopUp6)3U)
#define CeHMIR_e_level4		((TeHMIR_e_VDCM_PopUp6)4U)
#define CeHMIR_e_level5		((TeHMIR_e_VDCM_PopUp6)5U)
#define CeHMIR_e_level6		((TeHMIR_e_VDCM_PopUp6)6U)
#define CeHMIR_e_SNA		((TeHMIR_e_VDCM_PopUp6)7U)
#endif

/*
* Enum TeHMIR_e_TransWarn2Msgs 
* Default Value:CeHMIR_e_Warn2_None 
*/
#ifndef TeHMIR_e_TransWarn2Msgs
typedef uint8 TeHMIR_e_TransWarn2Msgs;
#define CeHMIR_e_Warn2_None		((TeHMIR_e_TransWarn2Msgs)0U)
#define CeHMIR_e_Warn2_1		((TeHMIR_e_TransWarn2Msgs)1U)
#define CeHMIR_e_Warn2_2		((TeHMIR_e_TransWarn2Msgs)2U)
#define CeHMIR_e_Warn2_3		((TeHMIR_e_TransWarn2Msgs)3U)
#define CeHMIR_e_Warn2_4		((TeHMIR_e_TransWarn2Msgs)4U)
#define CeHMIR_e_Warn2_5		((TeHMIR_e_TransWarn2Msgs)5U)
#define CeHMIR_e_Warn2_6		((TeHMIR_e_TransWarn2Msgs)6U)
#define CeHMIR_e_Warn2_7		((TeHMIR_e_TransWarn2Msgs)7U)
#define CeHMIR_e_Warn2_8		((TeHMIR_e_TransWarn2Msgs)8U)
#define CeHMIR_e_Warn2_9		((TeHMIR_e_TransWarn2Msgs)9U)
#define CeHMIR_e_Warn2_10		((TeHMIR_e_TransWarn2Msgs)10U)
#define CeHMIR_e_Warn2_11		((TeHMIR_e_TransWarn2Msgs)11U)
#define CeHMIR_e_Warn2_12		((TeHMIR_e_TransWarn2Msgs)12U)
#define CeHMIR_e_Warn2_13		((TeHMIR_e_TransWarn2Msgs)13U)
#define CeHMIR_e_Warn2_14		((TeHMIR_e_TransWarn2Msgs)14U)
#define CeHMIR_e_Warn2_15		((TeHMIR_e_TransWarn2Msgs)15U)
#define CeHMIR_e_Warn2_16		((TeHMIR_e_TransWarn2Msgs)16U)
#define CeHMIR_e_Warn2_17		((TeHMIR_e_TransWarn2Msgs)17U)
#define CeHMIR_e_Warn2_18		((TeHMIR_e_TransWarn2Msgs)18U)
#define CeHMIR_e_Warn2_19		((TeHMIR_e_TransWarn2Msgs)19U)
#define CeHMIR_e_Warn2_20		((TeHMIR_e_TransWarn2Msgs)20U)
#define CeHMIR_e_Warn2_21		((TeHMIR_e_TransWarn2Msgs)21U)
#define CeHMIR_e_Warn2_22		((TeHMIR_e_TransWarn2Msgs)22U)
#define CeHMIR_e_Warn2_23		((TeHMIR_e_TransWarn2Msgs)23U)
#define CeHMIR_e_Warn2_24		((TeHMIR_e_TransWarn2Msgs)24U)
#define CeHMIR_e_Warn2_25		((TeHMIR_e_TransWarn2Msgs)25U)
#define CeHMIR_e_Warn2_26		((TeHMIR_e_TransWarn2Msgs)26U)
#define CeHMIR_e_Warn2_27		((TeHMIR_e_TransWarn2Msgs)27U)
#define CeHMIR_e_Warn2_28		((TeHMIR_e_TransWarn2Msgs)28U)
#define CeHMIR_e_Warn2_29		((TeHMIR_e_TransWarn2Msgs)29U)
#define CeHMIR_e_Warn2_30		((TeHMIR_e_TransWarn2Msgs)30U)
#define CeHMIR_e_Warn2_31		((TeHMIR_e_TransWarn2Msgs)31U)
#define CeHMIR_e_Warn2_32		((TeHMIR_e_TransWarn2Msgs)32U)
#define CeHMIR_e_Warn2_33		((TeHMIR_e_TransWarn2Msgs)33U)
#define CeHMIR_e_Warn2_34		((TeHMIR_e_TransWarn2Msgs)34U)
#define CeHMIR_e_Warn2_35		((TeHMIR_e_TransWarn2Msgs)35U)
#define CeHMIR_e_Warn2_36		((TeHMIR_e_TransWarn2Msgs)36U)
#define CeHMIR_e_Warn2_37		((TeHMIR_e_TransWarn2Msgs)37U)
#define CeHMIR_e_Warn2_38		((TeHMIR_e_TransWarn2Msgs)38U)
#define CeHMIR_e_Warn2_39		((TeHMIR_e_TransWarn2Msgs)39U)
#define CeHMIR_e_Warn2_40		((TeHMIR_e_TransWarn2Msgs)40U)
#define CeHMIR_e_Warn2_41		((TeHMIR_e_TransWarn2Msgs)41U)
#define CeHMIR_e_Warn2_42		((TeHMIR_e_TransWarn2Msgs)42U)
#define CeHMIR_e_Warn2_43		((TeHMIR_e_TransWarn2Msgs)43U)
#define CeHMIR_e_Warn2_44		((TeHMIR_e_TransWarn2Msgs)44U)
#define CeHMIR_e_Warn2_45		((TeHMIR_e_TransWarn2Msgs)45U)
#define CeHMIR_e_Warn2_46		((TeHMIR_e_TransWarn2Msgs)46U)
#define CeHMIR_e_Warn2_47		((TeHMIR_e_TransWarn2Msgs)47U)
#define CeHMIR_e_Warn2_48		((TeHMIR_e_TransWarn2Msgs)48U)
#define CeHMIR_e_Warn2_49		((TeHMIR_e_TransWarn2Msgs)49U)
#define CeHMIR_e_Warn2_50		((TeHMIR_e_TransWarn2Msgs)50U)
#define CeHMIR_e_Warn2_51		((TeHMIR_e_TransWarn2Msgs)51U)
#define CeHMIR_e_Warn2_52		((TeHMIR_e_TransWarn2Msgs)52U)
#define CeHMIR_e_Warn2_53		((TeHMIR_e_TransWarn2Msgs)53U)
#define CeHMIR_e_Warn2_54		((TeHMIR_e_TransWarn2Msgs)54U)
#define CeHMIR_e_Warn2_55		((TeHMIR_e_TransWarn2Msgs)55U)
#define CeHMIR_e_Warn2_56		((TeHMIR_e_TransWarn2Msgs)56U)
#define CeHMIR_e_Warn2_57		((TeHMIR_e_TransWarn2Msgs)57U)
#define CeHMIR_e_Warn2_58		((TeHMIR_e_TransWarn2Msgs)58U)
#define CeHMIR_e_Warn2_59		((TeHMIR_e_TransWarn2Msgs)59U)
#define CeHMIR_e_Warn2_60		((TeHMIR_e_TransWarn2Msgs)60U)
#define CeHMIR_e_Warn2_61		((TeHMIR_e_TransWarn2Msgs)61U)
#define CeHMIR_e_Warn2_62		((TeHMIR_e_TransWarn2Msgs)62U)
#define CeHMIR_e_Warn2_63		((TeHMIR_e_TransWarn2Msgs)63U)
#define CeHMIR_e_Warn2_64		((TeHMIR_e_TransWarn2Msgs)64U)
#define CeHMIR_e_Warn2_65		((TeHMIR_e_TransWarn2Msgs)65U)
#define CeHMIR_e_Warn2_66		((TeHMIR_e_TransWarn2Msgs)66U)
#define CeHMIR_e_Warn2_67		((TeHMIR_e_TransWarn2Msgs)67U)
#define CeHMIR_e_Warn2_68		((TeHMIR_e_TransWarn2Msgs)68U)
#define CeHMIR_e_Warn2_SNA		((TeHMIR_e_TransWarn2Msgs)255U)
#endif

/*
* Enum TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW 
* Default Value:CeHMIR_e_ShifterPosNotCoded_CUSW 
*/
#ifndef TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW
typedef uint8 TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW;
#define CeHMIR_e_ShifterPosNotCoded_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)0U)
#define CeHMIR_e_ShifterPosONE_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)1U)
#define CeHMIR_e_ShifterPosTWO_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)2U)
#define CeHMIR_e_ShifterPosTHREE_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)3U)
#define CeHMIR_e_ShifterPosFOUR_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)4U)
#define CeHMIR_e_ShifterPosFIVE_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)5U)
#define CeHMIR_e_ShifterPosSIX_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)6U)
#define CeHMIR_e_ShifterPosSEVEN_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)7U)
#define CeHMIR_e_ShifterPosEIGHT_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)8U)
#define CeHMIR_e_ShifterPosNINE_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)9U)
#define CeHMIR_e_ShifterPosNotUsed_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)10U)
#define CeHMIR_e_ShifterPosNotUsed1_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)11U)
#define CeHMIR_e_ShifterPosNotUsed2_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)12U)
#define CeHMIR_e_ShifterPosNotUsed3_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)13U)
#define CeHMIR_e_ShifterPosReverse_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)14U)
#define CeHMIR_e_ShifterPosNeutral_CUSW		((TeHMIR_e_VldtdTransRngSt_ShifterPOS_CUSW)15U)
#endif

/*
* Enum TeHMIR_e_PwrtrnHV_IsolStat 
* Default Value:CeHMIR_e_IsolUndetermined 
*/
#ifndef TeHMIR_e_PwrtrnHV_IsolStat
typedef uint8 TeHMIR_e_PwrtrnHV_IsolStat;
#define CeHMIR_e_IsolUndetermined		((TeHMIR_e_PwrtrnHV_IsolStat)0U)
#define CeHMIR_e_IsolPassed		((TeHMIR_e_PwrtrnHV_IsolStat)1U)
#define CeHMIR_e_IsolFailed		((TeHMIR_e_PwrtrnHV_IsolStat)2U)
#endif

/*
* Enum TeHMIR_e_GSI_Stat 
* Default Value:CeHMIR_e_None 
*/
#ifndef TeHMIR_e_GSI_Stat
typedef uint8 TeHMIR_e_GSI_Stat;
#define CeHMIR_e_None		((TeHMIR_e_GSI_Stat)0U)
#define CeHMIR_e_UpShift		((TeHMIR_e_GSI_Stat)1U)
#define CeHMIR_e_DownShift		((TeHMIR_e_GSI_Stat)2U)
#endif

/*
* Enum TeHMIR_e_TerrainHMIRq 
* Default Value:CeHMIR_e_No_Request 
*/
#ifndef TeHMIR_e_TerrainHMIRq
typedef uint8 TeHMIR_e_TerrainHMIRq;
#define CeHMIR_e_No_Request		((TeHMIR_e_TerrainHMIRq)0U)
#define CeHMIR_e_Screen_1		((TeHMIR_e_TerrainHMIRq)1U)
#define CeHMIR_e_Screen_2		((TeHMIR_e_TerrainHMIRq)2U)
#define CeHMIR_e_Screen_3		((TeHMIR_e_TerrainHMIRq)3U)
#define CeHMIR_e_Screen_4		((TeHMIR_e_TerrainHMIRq)4U)
#define CeHMIR_e_Screen_5		((TeHMIR_e_TerrainHMIRq)5U)
#define CeHMIR_e_Screen_6		((TeHMIR_e_TerrainHMIRq)6U)
#define CeHMIR_e_Screen_7		((TeHMIR_e_TerrainHMIRq)7U)
#define CeHMIR_e_Screen_8		((TeHMIR_e_TerrainHMIRq)8U)
#define CeHMIR_e_Screen_9		((TeHMIR_e_TerrainHMIRq)9U)
#define CeHMIR_e_Screen_10		((TeHMIR_e_TerrainHMIRq)10U)
#define CeHMIR_e_Screen_11		((TeHMIR_e_TerrainHMIRq)11U)
#define CeHMIR_e_Screen_12		((TeHMIR_e_TerrainHMIRq)12U)
#define CeHMIR_e_Screen_13		((TeHMIR_e_TerrainHMIRq)13U)
#define CeHMIR_e_Screen_14		((TeHMIR_e_TerrainHMIRq)14U)
#define CeHMIR_e_Screen_15		((TeHMIR_e_TerrainHMIRq)15U)
#define CeHMIR_e_Screen_16		((TeHMIR_e_TerrainHMIRq)16U)
#define CeHMIR_e_Screen_21		((TeHMIR_e_TerrainHMIRq)21U)
#define CeHMIR_e_Screen_22		((TeHMIR_e_TerrainHMIRq)22U)
#define CeHMIR_e_Screen_23		((TeHMIR_e_TerrainHMIRq)23U)
#define CeHMIR_e_Screen_24		((TeHMIR_e_TerrainHMIRq)24U)
#define CeHMIR_e_Screen_25		((TeHMIR_e_TerrainHMIRq)25U)
#define CeHMIR_e_Screen_26		((TeHMIR_e_TerrainHMIRq)26U)
#define CeHMIR_e_Screen_27		((TeHMIR_e_TerrainHMIRq)27U)
#define CeHMIR_e_HMIRq_SNA		((TeHMIR_e_TerrainHMIRq)31U)
#define CeHMIR_e_Screen_28		((TeHMIR_e_TerrainHMIRq)28U)
#define CeHMIR_e_Screen_29		((TeHMIR_e_TerrainHMIRq)29U)
#define CeHMIR_e_Screen_30		((TeHMIR_e_TerrainHMIRq)30U)
#define CeHMIR_e_Screen_17		((TeHMIR_e_TerrainHMIRq)17U)
#define CeHMIR_e_Screen_18		((TeHMIR_e_TerrainHMIRq)18U)
#define CeHMIR_e_Screen_19		((TeHMIR_e_TerrainHMIRq)19U)
#define CeHMIR_e_Screen_20		((TeHMIR_e_TerrainHMIRq)20U)
#endif

/*
* Enum TeHMIR_e_TerrainModeDesiredStat 
* Default Value:CeHMIR_e_Auto 
*/
#ifndef TeHMIR_e_TerrainModeDesiredStat
typedef uint8 TeHMIR_e_TerrainModeDesiredStat;
#define CeHMIR_e_Auto		((TeHMIR_e_TerrainModeDesiredStat)0U)
#define CeHMIR_e_AutoFault		((TeHMIR_e_TerrainModeDesiredStat)1U)
#define CeHMIR_e_Rock		((TeHMIR_e_TerrainModeDesiredStat)2U)
#define CeHMIR_e_Track		((TeHMIR_e_TerrainModeDesiredStat)3U)
#define CeHMIR_e_Snow		((TeHMIR_e_TerrainModeDesiredStat)4U)
#define CeHMIR_e_OffRoad		((TeHMIR_e_TerrainModeDesiredStat)5U)
#define CeHMIR_e_Eco		((TeHMIR_e_TerrainModeDesiredStat)6U)
#define CeHMIR_e_Corsa		((TeHMIR_e_TerrainModeDesiredStat)7U)
#define CeHMIR_e_Sport		((TeHMIR_e_TerrainModeDesiredStat)8U)
#define CeHMIR_e_MudSand		((TeHMIR_e_TerrainModeDesiredStat)9U)
#define CeHMIR_e_Mud		((TeHMIR_e_TerrainModeDesiredStat)10U)
#define CeHMIR_e_Sand		((TeHMIR_e_TerrainModeDesiredStat)11U)
#define CeHMIR_e_Valet		((TeHMIR_e_TerrainModeDesiredStat)12U)
#define CeHMIR_e_Custom		((TeHMIR_e_TerrainModeDesiredStat)13U)
#define CeHMIR_e_Tow		((TeHMIR_e_TerrainModeDesiredStat)14U)
#define CeHMIR_e_Drag		((TeHMIR_e_TerrainModeDesiredStat)15U)
#define CeHMIR_e_Baja		((TeHMIR_e_TerrainModeDesiredStat)16U)
#define CeHMIR_e_TDesired_SNA		((TeHMIR_e_TerrainModeDesiredStat)31U)
#endif

/*
* Enum TeHMIR_e_TerrainModeStat 
* Default Value:CeHMIR_e_AutoStat 
*/
#ifndef TeHMIR_e_TerrainModeStat
typedef uint8 TeHMIR_e_TerrainModeStat;
#define CeHMIR_e_AutoStat		((TeHMIR_e_TerrainModeStat)0U)
#define CeHMIR_e_AutoFaultStat		((TeHMIR_e_TerrainModeStat)1U)
#define CeHMIR_e_RockStat		((TeHMIR_e_TerrainModeStat)2U)
#define CeHMIR_e_TrackStat		((TeHMIR_e_TerrainModeStat)3U)
#define CeHMIR_e_SnowStat		((TeHMIR_e_TerrainModeStat)4U)
#define CeHMIR_e_OffRoadStat		((TeHMIR_e_TerrainModeStat)5U)
#define CeHMIR_e_EcoStat		((TeHMIR_e_TerrainModeStat)6U)
#define CeHMIR_e_CorsaStat		((TeHMIR_e_TerrainModeStat)7U)
#define CeHMIR_e_SNAStat		((TeHMIR_e_TerrainModeStat)31U)
#define CeHMIR_e_CustomStat		((TeHMIR_e_TerrainModeStat)13U)
#define CeHMIR_e_DonutStat		((TeHMIR_e_TerrainModeStat)19U)
#define CeHMIR_e_DriftStat		((TeHMIR_e_TerrainModeStat)18U)
#define CeHMIR_e_TowStat		((TeHMIR_e_TerrainModeStat)14U)
#define CeHMIR_e_DragStat		((TeHMIR_e_TerrainModeStat)15U)
#define CeHMIR_e_ValetStat		((TeHMIR_e_TerrainModeStat)12U)
#define CeHMIR_e_SportStat		((TeHMIR_e_TerrainModeStat)8U)
#define CeHMIR_e_MudSandStat		((TeHMIR_e_TerrainModeStat)9U)
#define CeHMIR_e_MudStat		((TeHMIR_e_TerrainModeStat)10U)
#define CeHMIR_e_SandStat		((TeHMIR_e_TerrainModeStat)11U)
#define CeHMIR_e_BajaStat		((TeHMIR_e_TerrainModeStat)16U)
#endif

/*
* Enum TeHMIR_e_TerrainSelectorModes 
* Default Value:CeHMIR_e_TerrSelMd_2modes 
*/
#ifndef TeHMIR_e_TerrainSelectorModes
typedef uint8 TeHMIR_e_TerrainSelectorModes;
#define CeHMIR_e_TerrSelMd_Invalid		((TeHMIR_e_TerrainSelectorModes)0U)
#define CeHMIR_e_TerrSelMd_2modes		((TeHMIR_e_TerrainSelectorModes)1U)
#define CeHMIR_e_TerrSelMd_3modes		((TeHMIR_e_TerrainSelectorModes)2U)
#define CeHMIR_e_TerrSelMd_4modes		((TeHMIR_e_TerrainSelectorModes)3U)
#define CeHMIR_e_TerrSelMd_5modes		((TeHMIR_e_TerrainSelectorModes)4U)
#define CeHMIR_e_TerrSelMd_3modes_Sport		((TeHMIR_e_TerrainSelectorModes)5U)
#define CeHMIR_e_TerrSelMd_4modes_Sport		((TeHMIR_e_TerrainSelectorModes)6U)
#endif

/*
* Enum TeHMIR_e_AxleLockPrsnt 
* Default Value:CeHMIR_e_AxleLockAbsent 
*/
#ifndef TeHMIR_e_AxleLockPrsnt
typedef uint8 TeHMIR_e_AxleLockPrsnt;
#define CeHMIR_e_AxleLockAbsent		((TeHMIR_e_AxleLockPrsnt)0U)
#define CeHMIR_e_RearAxleLocker		((TeHMIR_e_AxleLockPrsnt)1U)
#define CeHMIR_e_FrontAndRearAxleLocker		((TeHMIR_e_AxleLockPrsnt)2U)
#endif

/*
* Enum TeHMIR_e_VehLineInfo 
* Default Value:CeHMIR_e_VehLine_WS 
*/
#ifndef TeHMIR_e_VehLineInfo
typedef uint8 TeHMIR_e_VehLineInfo;
#define CeHMIR_e_VehLine_WS		((TeHMIR_e_VehLineInfo)104U)
#define CeHMIR_e_VehLine_DT		((TeHMIR_e_VehLineInfo)124U)
#define CeHMIR_e_VehLine_KM49		((TeHMIR_e_VehLineInfo)125U)
#define CeHMIR_e_VehLine_KM74		((TeHMIR_e_VehLineInfo)126U)
#define CeHMIR_e_VehLine_LB		((TeHMIR_e_VehLineInfo)127U)
#define CeHMIR_e_VehLine_EJ		((TeHMIR_e_VehLineInfo)128U)
#endif

/*
* Enum TeHMIR_e_HybTypeConfig 
* Default Value:CeHMIR_e_HybTypeNotApp 
*/
#ifndef TeHMIR_e_HybTypeConfig
typedef uint8 TeHMIR_e_HybTypeConfig;
#define CeHMIR_e_HybTypeNotApp		((TeHMIR_e_HybTypeConfig)0U)
#define CeHMIR_e_BatteryElectricVeh		((TeHMIR_e_HybTypeConfig)1U)
#define CeHMIR_e_HybridElectricVeh		((TeHMIR_e_HybTypeConfig)2U)
#define CeHMIR_e_PluginHybElecVeh		((TeHMIR_e_HybTypeConfig)3U)
#define CeHMIR_e_BeltStartGenerator48V		((TeHMIR_e_HybTypeConfig)4U)
#define CeHMIR_e_BeltStartGenerator12V		((TeHMIR_e_HybTypeConfig)5U)
#define CeHMIR_e_RangeElecParadBreak		((TeHMIR_e_HybTypeConfig)6U)
#endif

/*
* Enum TeHPMR_e_BattCntctrCmd 
* Default Value:CeHPMR_e_Open 
*/
#ifndef TeHPMR_e_BattCntctrCmd
typedef uint8 TeHPMR_e_BattCntctrCmd;
#define CeHPMR_e_Open		((TeHPMR_e_BattCntctrCmd)0U)
#define CeHPMR_e_Closed		((TeHPMR_e_BattCntctrCmd)1U)
#define CeHPMR_e_ImpctOpen		((TeHPMR_e_BattCntctrCmd)2U)
#define CeHPMR_e_FastOpen		((TeHPMR_e_BattCntctrCmd)3U)
#define CeHPMR_e_Undetermined		((TeHPMR_e_BattCntctrCmd)7U)
#endif

/*
* Enum TeHPMR_e_FC_MdCmd 
* Default Value:CeHPMR_e_FC_Disabled 
*/
#ifndef TeHPMR_e_FC_MdCmd
typedef uint8 TeHPMR_e_FC_MdCmd;
#define CeHPMR_e_FC_Disabled		((TeHPMR_e_FC_MdCmd)0U)
#define CeHPMR_e_FC_Enabled		((TeHPMR_e_FC_MdCmd)1U)
#define CeHPMR_e_FC_NrmlShtdwn		((TeHPMR_e_FC_MdCmd)2U)
#define CeHPMR_e_FC_ImmdShtdwn		((TeHPMR_e_FC_MdCmd)3U)
#define CeHPMR_e_FC_QuickStop		((TeHPMR_e_FC_MdCmd)4U)
#endif

/*
* Enum TeHPMR_e_ShutdownTransOverrideVal 
* Default Value:CeHPMR_e_NoOverride 
*/
#ifndef TeHPMR_e_ShutdownTransOverrideVal
typedef uint8 TeHPMR_e_ShutdownTransOverrideVal;
#define CeHPMR_e_NoOverride		((TeHPMR_e_ShutdownTransOverrideVal)0U)
#define CeHPMR_e_Neutral		((TeHPMR_e_ShutdownTransOverrideVal)1U)
#endif

/*
* Enum TeHPMR_e_InvrtrSwitchCmd 
* Default Value:CeHPMR_e_Disable 
*/
#ifndef TeHPMR_e_InvrtrSwitchCmd
typedef uint8 TeHPMR_e_InvrtrSwitchCmd;
#define CeHPMR_e_Disable		((TeHPMR_e_InvrtrSwitchCmd)0U)
#define CeHPMR_e_Enable		((TeHPMR_e_InvrtrSwitchCmd)1U)
#define CeHPMR_e_ActiveDischarge		((TeHPMR_e_InvrtrSwitchCmd)2U)
#define CeHPMR_e_DisableImmd		((TeHPMR_e_InvrtrSwitchCmd)3U)
#define CeHPMR_e_RapidShtdwnCmnd		((TeHPMR_e_InvrtrSwitchCmd)4U)
#define CeHPMR_e_Enable_VoltCntrl		((TeHPMR_e_InvrtrSwitchCmd)5U)
#define CeHPMR_e_ROLRoutine		((TeHPMR_e_InvrtrSwitchCmd)8U)
#endif

/*
* Enum TeHPMR_e_APM_OperMode 
* Default Value:CeHPMR_e_Idle 
*/
#ifndef TeHPMR_e_APM_OperMode
typedef uint8 TeHPMR_e_APM_OperMode;
#define CeHPMR_e_Idle		((TeHPMR_e_APM_OperMode)0U)
#define CeHPMR_e_Buck		((TeHPMR_e_APM_OperMode)1U)
#define CeHPMR_e_Boost		((TeHPMR_e_APM_OperMode)2U)
#define CeHPMR_e_Buck_Spcl		((TeHPMR_e_APM_OperMode)3U)
#endif

/*
* Enum TeHPMR_e_IGBT_DischrgSlct 
* Default Value:CeHPMR_e_OnCktFail 
*/
#ifndef TeHPMR_e_IGBT_DischrgSlct
typedef uint8 TeHPMR_e_IGBT_DischrgSlct;
#define CeHPMR_e_OnCktFail		((TeHPMR_e_IGBT_DischrgSlct)0U)
#define CeHPMR_e_Always		((TeHPMR_e_IGBT_DischrgSlct)1U)
#define CeHPMR_e_None		((TeHPMR_e_IGBT_DischrgSlct)2U)
#endif

/*
* Enum TeHPMR_e_HVRearSwitch 
* Default Value:CeHPMR_e_HVRearSwitchClosed 
*/
#ifndef TeHPMR_e_HVRearSwitch
typedef uint8 TeHPMR_e_HVRearSwitch;
#define CeHPMR_e_HVRearSwitchClosed		((TeHPMR_e_HVRearSwitch)0U)
#define CeHPMR_e_HVRearSwitchOpen		((TeHPMR_e_HVRearSwitch)1U)
#define CeHPMR_e_NotDefinedForHVRearSwitch		((TeHPMR_e_HVRearSwitch)2U)
#define CeHPMR_e_SNAForHVRearSwitch		((TeHPMR_e_HVRearSwitch)3U)
#endif

/*
* Enum TeHPMR_e_RsnForUnintndShtDwn 
* Default Value:CeHPMR_e_NoUnintndShtDwn 
*/
#ifndef TeHPMR_e_RsnForUnintndShtDwn
typedef uint8 TeHPMR_e_RsnForUnintndShtDwn;
#define CeHPMR_e_NoUnintndShtDwn		((TeHPMR_e_RsnForUnintndShtDwn)0U)
#define CeHPMR_e_InverterFaulted		((TeHPMR_e_RsnForUnintndShtDwn)1U)
#define CeHPMR_e_FltShtDwnCmnd		((TeHPMR_e_RsnForUnintndShtDwn)2U)
#define CeHPMR_e_HVILOrSpeedCondMet		((TeHPMR_e_RsnForUnintndShtDwn)3U)
#define CeHPMR_e_BattCntctrReqMet		((TeHPMR_e_RsnForUnintndShtDwn)4U)
#define CeHPMR_e_HVBatSrvcDisCnctFA		((TeHPMR_e_RsnForUnintndShtDwn)5U)
#define CeHPMR_e_CritFaultLatched		((TeHPMR_e_RsnForUnintndShtDwn)6U)
#define CeHPMR_e_CntctrsOpenAfterClose		((TeHPMR_e_RsnForUnintndShtDwn)7U)
#define CeHPMR_e_MCPACoreFail		((TeHPMR_e_RsnForUnintndShtDwn)8U)
#define CeHPMR_e_MCPBCoreFail		((TeHPMR_e_RsnForUnintndShtDwn)9U)
#define CeHPMR_e_AHCPCoreFail		((TeHPMR_e_RsnForUnintndShtDwn)10U)
#define CeHPMR_e_ORC_LossCommFA		((TeHPMR_e_RsnForUnintndShtDwn)11U)
#define CeHPMR_e_OpnBattCntctr		((TeHPMR_e_RsnForUnintndShtDwn)12U)
#define CeHPMR_e_DisblINVA		((TeHPMR_e_RsnForUnintndShtDwn)13U)
#define CeHPMR_e_InvrtrFlt_AllwCntctrCls		((TeHPMR_e_RsnForUnintndShtDwn)14U)
#endif

/*
* Enum TeHPMR_e_PropSysMode 
* Default Value:CeHPMR_e_Disabled 
*/
#ifndef TeHPMR_e_PropSysMode
typedef uint8 TeHPMR_e_PropSysMode;
#define CeHPMR_e_Disabled		((TeHPMR_e_PropSysMode)0U)
#define CeHPMR_e_Conventional		((TeHPMR_e_PropSysMode)1U)
#define CeHPMR_e_Alternator		((TeHPMR_e_PropSysMode)2U)
#define CeHPMR_e_Hybrid		((TeHPMR_e_PropSysMode)3U)
#endif

/*
* Enum TeHPMR_e_HCPWupReason 
* Default Value:CeHPMR_e_NoMode 
*/
#ifndef TeHPMR_e_HCPWupReason
typedef uint8 TeHPMR_e_HCPWupReason;
#define CeHPMR_e_NoMode		((TeHPMR_e_HCPWupReason)0U)
#define CeHPMR_e_NMWakeup		((TeHPMR_e_HCPWupReason)1U)
#define CeHPMR_e_DriverDoorOpen		((TeHPMR_e_HCPWupReason)2U)
#define CeHPMR_e_Accesorry		((TeHPMR_e_HCPWupReason)3U)
#define CeHPMR_e_Run		((TeHPMR_e_HCPWupReason)4U)
#define CeHPMR_e_Drive		((TeHPMR_e_HCPWupReason)5U)
#define CeHPMR_e_PlugInNoCharge		((TeHPMR_e_HCPWupReason)6U)
#define CeHPMR_e_PlugInCharge		((TeHPMR_e_HCPWupReason)7U)
#define CeHPMR_e_RemoteStart		((TeHPMR_e_HCPWupReason)8U)
#define CeHPMR_e_CabinPreCondition		((TeHPMR_e_HCPWupReason)9U)
#define CeHPMR_e_BattPeriodicWakeup		((TeHPMR_e_HCPWupReason)10U)
#define CeHPMR_e_Indeterminate		((TeHPMR_e_HCPWupReason)11U)
#define CeHPMR_e_SNA		((TeHPMR_e_HCPWupReason)12U)
#endif

/*
* Enum TeHPMR_e_PowerMode 
* Default Value:CeHPMR_e_Off 
*/
#ifndef TeHPMR_e_PowerMode
typedef uint8 TeHPMR_e_PowerMode;
#define CeHPMR_e_Off		((TeHPMR_e_PowerMode)0U)
#define CeHPMR_e_Acc		((TeHPMR_e_PowerMode)1U)
#define CeHPMR_e_Runn		((TeHPMR_e_PowerMode)2U)
#define CeHPMR_e_CrnkReq		((TeHPMR_e_PowerMode)3U)
#endif

/*
* Enum TeHPMR_e_HybSysState 
* Default Value:CeHPMR_e_POWERUP 
*/
#ifndef TeHPMR_e_HybSysState
typedef uint8 TeHPMR_e_HybSysState;
#define CeHPMR_e_POWERUP		((TeHPMR_e_HybSysState)0U)
#define CeHPMR_e_EVAL_HV_ENABLE		((TeHPMR_e_HybSysState)1U)
#define CeHPMR_e_ENBL_HV_SYS		((TeHPMR_e_HybSysState)2U)
#define CeHPMR_e_HV_ENABLED		((TeHPMR_e_HybSysState)3U)
#define CeHPMR_e_ENBL_INV		((TeHPMR_e_HybSysState)4U)
#define CeHPMR_e_INV_ENABLED		((TeHPMR_e_HybSysState)5U)
#define CeHPMR_e_OPERATIONAL		((TeHPMR_e_HybSysState)6U)
#define CeHPMR_e_DTRMN_HYBSYSST		((TeHPMR_e_HybSysState)7U)
#define CeHPMR_e_EVAL_ALT_HV_ENABLE		((TeHPMR_e_HybSysState)8U)
#define CeHPMR_e_ENBL_ALT_HV_SYS		((TeHPMR_e_HybSysState)9U)
#define CeHPMR_e_ALT_HV_ENABLED		((TeHPMR_e_HybSysState)10U)
#define CeHPMR_e_ENBL_INV_VC		((TeHPMR_e_HybSysState)11U)
#define CeHPMR_e_INV_VC_ENABLED		((TeHPMR_e_HybSysState)12U)
#define CeHPMR_e_OPERATIONAL_ALTERNATOR		((TeHPMR_e_HybSysState)13U)
#define CeHPMR_e_OPERATIONAL_CONVENTIONAL		((TeHPMR_e_HybSysState)14U)
#define CeHPMR_e_OPERATIONAL_SERIESCFG		((TeHPMR_e_HybSysState)15U)
#define CeHPMR_e_EVAL_PRPLSN_DISBL		((TeHPMR_e_HybSysState)16U)
#define CeHPMR_e_PRPLSN_DISABLED		((TeHPMR_e_HybSysState)17U)
#define CeHPMR_e_DISBL_INV		((TeHPMR_e_HybSysState)18U)
#define CeHPMR_e_EVAL_CNTCTR_OPEN		((TeHPMR_e_HybSysState)19U)
#define CeHPMR_e_CMND_CNTCTR_OPEN		((TeHPMR_e_HybSysState)20U)
#define CeHPMR_e_CMND_BUS_DISCHARGE		((TeHPMR_e_HybSysState)21U)
#define CeHPMR_e_INIT_CNTRLR_PWRDWN		((TeHPMR_e_HybSysState)22U)
#define CeHPMR_e_DISBL_INV_VC		((TeHPMR_e_HybSysState)23U)
#define CeHPMR_e_DISBL_ALT_HV		((TeHPMR_e_HybSysState)24U)
#define CeHPMR_e_INIT_PWRDWN		((TeHPMR_e_HybSysState)25U)
#define CeHPMR_e_INIT_CAN_PWRDWN		((TeHPMR_e_HybSysState)26U)
#endif

/*
* Enum TeHSCR_e_M1_Type 
* Default Value:CeHSCR_e_M1_ToTiTC1_Type 
*/
#ifndef TeHSCR_e_M1_Type
typedef uint8 TeHSCR_e_M1_Type;
#define CeHSCR_e_M1_ToTiTC1_Type		((TeHSCR_e_M1_Type)1U)
#define CeHSCR_e_M1_ToNidotTC1_Type		((TeHSCR_e_M1_Type)2U)
#define CeHSCR_e_M1_TiNidotTC1_Type		((TeHSCR_e_M1_Type)3U)
#endif

/*
* Enum TeHSCR_e_M1_Index 
* Default Value:CeHSCR_e_M1_ToTiTC1_Index 
*/
#ifndef TeHSCR_e_M1_Index
typedef uint8 TeHSCR_e_M1_Index;
#define CeHSCR_e_M1_ToTiTC1_Index		((TeHSCR_e_M1_Index)124U)
#define CeHSCR_e_M1_ToNidotTC1_Index		((TeHSCR_e_M1_Index)134U)
#define CeHSCR_e_M1_TiNidotTC1_Index		((TeHSCR_e_M1_Index)234U)
#endif

/*
* Enum TeHSCR_e_M2_Type 
* Default Value:CeHSCR_e_M2_ToTiTC2_Type 
*/
#ifndef TeHSCR_e_M2_Type
typedef uint8 TeHSCR_e_M2_Type;
#define CeHSCR_e_M2_ToTiTC2_Type		((TeHSCR_e_M2_Type)1U)
#define CeHSCR_e_M2_ToNidotTC2_Type		((TeHSCR_e_M2_Type)2U)
#define CeHSCR_e_M2_TiNidotTC2_Type		((TeHSCR_e_M2_Type)3U)
#endif

/*
* Enum TeHSCR_e_M2_Index 
* Default Value:CeHSCR_e_M2_ToTiTC2_Index 
*/
#ifndef TeHSCR_e_M2_Index
typedef uint8 TeHSCR_e_M2_Index;
#define CeHSCR_e_M2_ToTiTC2_Index		((TeHSCR_e_M2_Index)125U)
#define CeHSCR_e_M2_ToNidotTC2_Index		((TeHSCR_e_M2_Index)135U)
#define CeHSCR_e_M2_TiNidotTC2_Index		((TeHSCR_e_M2_Index)235U)
#endif

/*
* Enum TeHSCR_e_G1_Type 
* Default Value:CeHSCR_e_G1_ToTC1TC4_Type 
*/
#ifndef TeHSCR_e_G1_Type
typedef uint8 TeHSCR_e_G1_Type;
#define CeHSCR_e_G1_ToTC1TC4_Type		((TeHSCR_e_G1_Type)1U)
#define CeHSCR_e_G1_TiTC1TC4_Type		((TeHSCR_e_G1_Type)2U)
#endif

/*
* Enum TeHSCR_e_G1_Index 
* Default Value:CeHSCR_e_G1_ToTC1TC4_Index 
*/
#ifndef TeHSCR_e_G1_Index
typedef uint8 TeHSCR_e_G1_Index;
#define CeHSCR_e_G1_ToTC1TC4_Index		((TeHSCR_e_G1_Index)147U)
#define CeHSCR_e_G1_TiTC1TC4_Index		((TeHSCR_e_G1_Index)247U)
#endif

/*
* Enum TeHSCR_e_G2_Type 
* Default Value:CeHSCR_e_G2_ToTC1TC2_Type 
*/
#ifndef TeHSCR_e_G2_Type
typedef uint8 TeHSCR_e_G2_Type;
#define CeHSCR_e_G2_ToTC1TC2_Type		((TeHSCR_e_G2_Type)1U)
#define CeHSCR_e_G2_TiTC1TC2_Type		((TeHSCR_e_G2_Type)2U)
#endif

/*
* Enum TeHSCR_e_G2_Index 
* Default Value:CeHSCR_e_G2_ToTC1TC2_Index 
*/
#ifndef TeHSCR_e_G2_Index
typedef uint8 TeHSCR_e_G2_Index;
#define CeHSCR_e_G2_ToTC1TC2_Index		((TeHSCR_e_G2_Index)145U)
#define CeHSCR_e_G2_TiTC1TC2_Index		((TeHSCR_e_G2_Index)245U)
#endif

/*
* Enum TeHSCR_e_G3_Type 
* Default Value:CeHSCR_e_G3_ToTC2TC4_Type 
*/
#ifndef TeHSCR_e_G3_Type
typedef uint8 TeHSCR_e_G3_Type;
#define CeHSCR_e_G3_ToTC2TC4_Type		((TeHSCR_e_G3_Type)1U)
#define CeHSCR_e_G3_TiTC2TC4_Type		((TeHSCR_e_G3_Type)2U)
#endif

/*
* Enum TeHSCR_e_G3_Index 
* Default Value:CeHSCR_e_G3_ToTC2TC4_Index 
*/
#ifndef TeHSCR_e_G3_Index
typedef uint16 TeHSCR_e_G3_Index;
#define CeHSCR_e_G3_ToTC2TC4_Index		((TeHSCR_e_G3_Index)157U)
#define CeHSCR_e_G3_TiTC2TC4_Index		((TeHSCR_e_G3_Index)257U)
#endif

/*
* Enum TeHSCR_e_G4_Type 
* Default Value:CeHSCR_e_G4_ToTC2TC3_Type 
*/
#ifndef TeHSCR_e_G4_Type
typedef uint8 TeHSCR_e_G4_Type;
#define CeHSCR_e_G4_ToTC2TC3_Type		((TeHSCR_e_G4_Type)1U)
#define CeHSCR_e_G4_TiTC2TC3_Type		((TeHSCR_e_G4_Type)2U)
#endif

/*
* Enum TeHSCR_e_G4_Index 
* Default Value:CeHSCR_e_G4_ToTC2TC3_Index 
*/
#ifndef TeHSCR_e_G4_Index
typedef uint16 TeHSCR_e_G4_Index;
#define CeHSCR_e_G4_ToTC2TC3_Index		((TeHSCR_e_G4_Index)156U)
#define CeHSCR_e_G4_TiTC2TC3_Index		((TeHSCR_e_G4_Index)256U)
#endif

/*
* Enum TeHSCR_e_N_Type 
* Default Value:CeHSCR_e_N_ToTiTC1_Type 
*/
#ifndef TeHSCR_e_N_Type
typedef uint8 TeHSCR_e_N_Type;
#define CeHSCR_e_N_ToTiTC1_Type		((TeHSCR_e_N_Type)1U)
#define CeHSCR_e_N_ToTiTC2_Type		((TeHSCR_e_N_Type)2U)
#define CeHSCR_e_N_ToNidotTC1_Type		((TeHSCR_e_N_Type)3U)
#define CeHSCR_e_N_ToNidotTC2_Type		((TeHSCR_e_N_Type)4U)
#define CeHSCR_e_N_TiNidotTC1_Type		((TeHSCR_e_N_Type)5U)
#define CeHSCR_e_N_TiNidotTC2_Type		((TeHSCR_e_N_Type)6U)
#endif

/*
* Enum TeHSCR_e_N_Index 
* Default Value:CeHSCR_e_N_ToTiTC1_Index 
*/
#ifndef TeHSCR_e_N_Index
typedef uint8 TeHSCR_e_N_Index;
#define CeHSCR_e_N_ToTiTC1_Index		((TeHSCR_e_N_Index)124U)
#define CeHSCR_e_N_ToTiTC2_Index		((TeHSCR_e_N_Index)125U)
#define CeHSCR_e_N_ToNidotTC1_Index		((TeHSCR_e_N_Index)134U)
#define CeHSCR_e_N_ToNidotTC2_Index		((TeHSCR_e_N_Index)135U)
#define CeHSCR_e_N_TiNidotTC1_Index		((TeHSCR_e_N_Index)234U)
#define CeHSCR_e_N_TiNidotTC2_Index		((TeHSCR_e_N_Index)235U)
#endif

/*
* Enum TeHSCR_e_Tm123_Order 
* Default Value:CeHSCR_e_T123 
*/
#ifndef TeHSCR_e_Tm123_Order
typedef uint8 TeHSCR_e_Tm123_Order;
#define CeHSCR_e_T123		((TeHSCR_e_Tm123_Order)1U)
#define CeHSCR_e_T132		((TeHSCR_e_Tm123_Order)2U)
#define CeHSCR_e_T213		((TeHSCR_e_Tm123_Order)3U)
#define CeHSCR_e_T231		((TeHSCR_e_Tm123_Order)4U)
#define CeHSCR_e_T312		((TeHSCR_e_Tm123_Order)5U)
#define CeHSCR_e_T321		((TeHSCR_e_Tm123_Order)6U)
#endif

/*
* Enum TeHSCR_e_Order_RowIndex 
* Default Value:CeHSCR_e_T123_RowIdx 
*/
#ifndef TeHSCR_e_Order_RowIndex
typedef uint8 TeHSCR_e_Order_RowIndex;
#define CeHSCR_e_T123_RowIdx		((TeHSCR_e_Order_RowIndex)0U)
#define CeHSCR_e_T312_RowIdx		((TeHSCR_e_Order_RowIndex)1U)
#define CeHSCR_e_T231_RowIdx		((TeHSCR_e_Order_RowIndex)2U)
#define CeHSCR_e_T321_RowIdx		((TeHSCR_e_Order_RowIndex)3U)
#define CeHSCR_e_T132_RowIdx		((TeHSCR_e_Order_RowIndex)4U)
#define CeHSCR_e_T213_RowIdx		((TeHSCR_e_Order_RowIndex)5U)
#endif

/*
* Enum TeHSCR_e_ModeGear_RowIndex 
* Default Value:CeHSCR_e_N_ToTiTC1_RowIdx 
*/
#ifndef TeHSCR_e_ModeGear_RowIndex
typedef uint8 TeHSCR_e_ModeGear_RowIndex;
#define CeHSCR_e_N_ToTiTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)0U)
#define CeHSCR_e_N_ToTiTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)1U)
#define CeHSCR_e_N_ToNidotTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)2U)
#define CeHSCR_e_N_ToNidotTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)3U)
#define CeHSCR_e_N_TiNidotTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)4U)
#define CeHSCR_e_N_TiNidotTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)5U)
#define CeHSCR_e_N_TiTC1NC1dot_RowIdx		((TeHSCR_e_ModeGear_RowIndex)6U)
#define CeHSCR_e_N_NidotTC1NC1dt_RowIdx		((TeHSCR_e_ModeGear_RowIndex)7U)
#define CeHSCR_e_M1_ToTiTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)8U)
#define CeHSCR_e_M1_ToNidotTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)9U)
#define CeHSCR_e_M1_TiNidotTC1_RowIdx		((TeHSCR_e_ModeGear_RowIndex)10U)
#define CeHSCR_e_M2_ToTiTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)11U)
#define CeHSCR_e_M2_ToNidotTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)12U)
#define CeHSCR_e_M2_TiNidotTC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)13U)
#define CeHSCR_e_G1_ToTC1TC4_RowIdx		((TeHSCR_e_ModeGear_RowIndex)14U)
#define CeHSCR_e_G1_TiTC1TC4_RowIdx		((TeHSCR_e_ModeGear_RowIndex)15U)
#define CeHSCR_e_G2_ToTC1TC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)16U)
#define CeHSCR_e_G2_TiTC1TC2_RowIdx		((TeHSCR_e_ModeGear_RowIndex)17U)
#define CeHSCR_e_G3_ToTC2TC4_RowIdx		((TeHSCR_e_ModeGear_RowIndex)18U)
#define CeHSCR_e_G3_TiTC2TC4_RowIdx		((TeHSCR_e_ModeGear_RowIndex)19U)
#define CeHSCR_e_G4_ToTC2TC3_RowIdx		((TeHSCR_e_ModeGear_RowIndex)20U)
#define CeHSCR_e_G4_TiTC2TC3_RowIdx		((TeHSCR_e_ModeGear_RowIndex)21U)
#endif

/*
* Enum TeHSCR_e_Tm12Type 
* Default Value:CeHSCR_e_To 
*/
#ifndef TeHSCR_e_Tm12Type
typedef uint8 TeHSCR_e_Tm12Type;
#define CeHSCR_e_To		((TeHSCR_e_Tm12Type)1U)
#define CeHSCR_e_Ti		((TeHSCR_e_Tm12Type)2U)
#define CeHSCR_e_Nidot		((TeHSCR_e_Tm12Type)3U)
#define CeHSCR_e_TC1		((TeHSCR_e_Tm12Type)4U)
#define CeHSCR_e_TC2		((TeHSCR_e_Tm12Type)5U)
#define CeHSCR_e_TC3		((TeHSCR_e_Tm12Type)6U)
#define CeHSCR_e_TC4		((TeHSCR_e_Tm12Type)7U)
#define CeHSCR_e_NC1dot		((TeHSCR_e_Tm12Type)8U)
#define CeHSCR_e_NoTmType		((TeHSCR_e_Tm12Type)9U)
#endif

/*
* Enum TeHSCR_e_CombinedTm12Type 
* Default Value:CeHSCR_e_To_To 
*/
#ifndef TeHSCR_e_CombinedTm12Type
typedef uint8 TeHSCR_e_CombinedTm12Type;
#define CeHSCR_e_To_To		((TeHSCR_e_CombinedTm12Type)1U)
#define CeHSCR_e_To_Ti		((TeHSCR_e_CombinedTm12Type)2U)
#define CeHSCR_e_To_Nidot		((TeHSCR_e_CombinedTm12Type)3U)
#define CeHSCR_e_To_TC1		((TeHSCR_e_CombinedTm12Type)4U)
#define CeHSCR_e_To_TC2		((TeHSCR_e_CombinedTm12Type)5U)
#define CeHSCR_e_To_TC3		((TeHSCR_e_CombinedTm12Type)6U)
#define CeHSCR_e_To_TC4		((TeHSCR_e_CombinedTm12Type)7U)
#define CeHSCR_e_Ti_Ti		((TeHSCR_e_CombinedTm12Type)8U)
#define CeHSCR_e_Ti_Nidot		((TeHSCR_e_CombinedTm12Type)9U)
#define CeHSCR_e_Ti_TC1		((TeHSCR_e_CombinedTm12Type)10U)
#define CeHSCR_e_Ti_TC2		((TeHSCR_e_CombinedTm12Type)11U)
#define CeHSCR_e_Ti_TC3		((TeHSCR_e_CombinedTm12Type)12U)
#define CeHSCR_e_Ti_TC4		((TeHSCR_e_CombinedTm12Type)13U)
#define CeHSCR_e_Nidot_Nidot		((TeHSCR_e_CombinedTm12Type)14U)
#define CeHSCR_e_Nidot_TC1		((TeHSCR_e_CombinedTm12Type)15U)
#define CeHSCR_e_Nidot_TC2		((TeHSCR_e_CombinedTm12Type)16U)
#define CeHSCR_e_Nidot_TC3		((TeHSCR_e_CombinedTm12Type)17U)
#define CeHSCR_e_Nidot_TC4		((TeHSCR_e_CombinedTm12Type)18U)
#define CeHSCR_e_TC1_TC1		((TeHSCR_e_CombinedTm12Type)19U)
#define CeHSCR_e_TC1_TC2		((TeHSCR_e_CombinedTm12Type)20U)
#define CeHSCR_e_TC1_TC3		((TeHSCR_e_CombinedTm12Type)21U)
#define CeHSCR_e_TC1_TC4		((TeHSCR_e_CombinedTm12Type)22U)
#define CeHSCR_e_TC2_TC2		((TeHSCR_e_CombinedTm12Type)23U)
#define CeHSCR_e_TC2_TC3		((TeHSCR_e_CombinedTm12Type)24U)
#define CeHSCR_e_TC2_TC4		((TeHSCR_e_CombinedTm12Type)25U)
#define CeHSCR_e_TC3_TC3		((TeHSCR_e_CombinedTm12Type)26U)
#define CeHSCR_e_TC3_TC4		((TeHSCR_e_CombinedTm12Type)27U)
#define CeHSCR_e_TC4_TC4		((TeHSCR_e_CombinedTm12Type)28U)
#endif

/*
* Enum TeHSCR_e_Tm1Coefficients 
* Default Value:CeHSCR_e_Ta2Tm 
*/
#ifndef TeHSCR_e_Tm1Coefficients
typedef uint8 TeHSCR_e_Tm1Coefficients;
#define CeHSCR_e_Ta2Tm		((TeHSCR_e_Tm1Coefficients)1U)
#define CeHSCR_e_Tb2Tm		((TeHSCR_e_Tm1Coefficients)2U)
#define CeHSCR_e_Nidot2Tm		((TeHSCR_e_Tm1Coefficients)3U)
#define CeHSCR_e_Nodot2Tm		((TeHSCR_e_Tm1Coefficients)4U)
#define CeHSCR_e_TC12Tm		((TeHSCR_e_Tm1Coefficients)5U)
#define CeHSCR_e_TC22Tm		((TeHSCR_e_Tm1Coefficients)6U)
#define CeHSCR_e_TC32Tm		((TeHSCR_e_Tm1Coefficients)7U)
#define CeHSCR_e_TC42Tm		((TeHSCR_e_Tm1Coefficients)8U)
#define CeHSCR_e_Ti2Tm		((TeHSCR_e_Tm1Coefficients)9U)
#define CeHSCR_e_To2Tm		((TeHSCR_e_Tm1Coefficients)10U)
#define CeHSCR_e_Ni2Tm		((TeHSCR_e_Tm1Coefficients)11U)
#define CeHSCR_e_No2Tm		((TeHSCR_e_Tm1Coefficients)12U)
#define CeHSCR_e_Nc1dot2Tm		((TeHSCR_e_Tm1Coefficients)13U)
#endif

/*
* Enum TeHSCR_e_ToLimitOption 
* Default Value:CeHSCR_e_Tm1Min_Only 
*/
#ifndef TeHSCR_e_ToLimitOption
typedef uint8 TeHSCR_e_ToLimitOption;
#define CeHSCR_e_Tm1Min_Only		((TeHSCR_e_ToLimitOption)0U)
#define CeHSCR_e_Tm1Max_Only		((TeHSCR_e_ToLimitOption)1U)
#define CeHSCR_e_Both_Tm1Limit		((TeHSCR_e_ToLimitOption)2U)
#define CeHSCR_e_ToMin_Only		((TeHSCR_e_ToLimitOption)0U)
#define CeHSCR_e_ToMax_Only		((TeHSCR_e_ToLimitOption)1U)
#define CeHSCR_e_Both_ToLimit		((TeHSCR_e_ToLimitOption)2U)
#define CeHSCR_e_Min_Extreme		((TeHSCR_e_ToLimitOption)0U)
#define CeHSCR_e_Max_Extreme		((TeHSCR_e_ToLimitOption)1U)
#define CeHSCR_e_NoLimit		((TeHSCR_e_ToLimitOption)0U)
#endif

/*
* Enum TeHSCR_e_PBatRegion 
* Default Value:CeHSCR_e_RgnNone 
*/
#ifndef TeHSCR_e_PBatRegion
typedef uint8 TeHSCR_e_PBatRegion;
#define CeHSCR_e_RgnNone		((TeHSCR_e_PBatRegion)1U)
#define CeHSCR_e_RgnTxMin		((TeHSCR_e_PBatRegion)2U)
#define CeHSCR_e_RgnTyMax		((TeHSCR_e_PBatRegion)3U)
#define CeHSCR_e_RgnTxMinTyMaxTang		((TeHSCR_e_PBatRegion)4U)
#define CeHSCR_e_RgnTxMinTyMaxTangTyMin		((TeHSCR_e_PBatRegion)5U)
#define CeHSCR_e_RgnTxMinTyMaxTangTxMax		((TeHSCR_e_PBatRegion)6U)
#define CeHSCR_e_RgnAll		((TeHSCR_e_PBatRegion)7U)
#endif

/*
* Enum TeHSCR_e_SolutionType 
* Default Value:CeHSCR_e_NoSolnWithinBatLmt 
*/
#ifndef TeHSCR_e_SolutionType
typedef uint8 TeHSCR_e_SolutionType;
#define CeHSCR_e_NoSolnWithinBatLmt		((TeHSCR_e_SolutionType)1U)
#define CeHSCR_e_NoSolnWithinBatLmtPBatMinExcd		((TeHSCR_e_SolutionType)2U)
#define CeHSCR_e_NegTxSolnOfTyMaxAndPBatMaxIntrsctn		((TeHSCR_e_SolutionType)3U)
#define CeHSCR_e_NegTxSolnOfTyMinAndPBatMaxIntrsctn		((TeHSCR_e_SolutionType)4U)
#define CeHSCR_e_NegTySolnOfTxMaxAndPBatMinIntrsctn		((TeHSCR_e_SolutionType)5U)
#define CeHSCR_e_NegTySolnOfTxMinAndPBatMinIntrsctn		((TeHSCR_e_SolutionType)6U)
#define CeHSCR_e_PosTxSolnOfTyMaxAndPBatMinIntrsctn		((TeHSCR_e_SolutionType)7U)
#define CeHSCR_e_PosTxSolnOfTyMinAndPBatMinIntrsctn		((TeHSCR_e_SolutionType)8U)
#define CeHSCR_e_PosTySolnOfTxMaxAndPBatMaxIntrsctn		((TeHSCR_e_SolutionType)9U)
#define CeHSCR_e_PosTySolnOfTxMinAndPBatMaxIntrsctn		((TeHSCR_e_SolutionType)10U)
#define CeHSCR_e_SystemAtTrqLmtWithinBatLmt		((TeHSCR_e_SolutionType)11U)
#define CeHSCR_e_TangTrqIntrsctnWithPBatMax		((TeHSCR_e_SolutionType)12U)
#endif

/*
* Enum TeHSCR_e_PBatSpecificRegion 
* Default Value:CeHSCR_e_None 
*/
#ifndef TeHSCR_e_PBatSpecificRegion
typedef uint8 TeHSCR_e_PBatSpecificRegion;
#define CeHSCR_e_None		((TeHSCR_e_PBatSpecificRegion)1U)
#define CeHSCR_e_Tang		((TeHSCR_e_PBatSpecificRegion)2U)
#define CeHSCR_e_TyMin		((TeHSCR_e_PBatSpecificRegion)3U)
#define CeHSCR_e_TyMax		((TeHSCR_e_PBatSpecificRegion)4U)
#define CeHSCR_e_TxMin		((TeHSCR_e_PBatSpecificRegion)5U)
#define CeHSCR_e_TxMax		((TeHSCR_e_PBatSpecificRegion)6U)
#define CeHSCR_Undefined		((TeHSCR_e_PBatSpecificRegion)255U)
#endif

/*
* Enum TeHSCR_e_ScaleToMin_Max 
* Default Value:CeHSCR_e_XScale_4_To_Min 
*/
#ifndef TeHSCR_e_ScaleToMin_Max
typedef uint8 TeHSCR_e_ScaleToMin_Max;
#define CeHSCR_e_XScale_4_To_Min		((TeHSCR_e_ScaleToMin_Max)0U)
#define CeHSCR_e_YScale_4_To_Min		((TeHSCR_e_ScaleToMin_Max)1U)
#define CeHSCR_e_XScale_4_To_Max		((TeHSCR_e_ScaleToMin_Max)2U)
#define CeHSCR_e_YScale_4_To_Max		((TeHSCR_e_ScaleToMin_Max)3U)
#endif

/*
* Enum TeHSCR_e_Something2To 
* Default Value:CeHSCR_e_T12To 
*/
#ifndef TeHSCR_e_Something2To
typedef uint8 TeHSCR_e_Something2To;
#define CeHSCR_e_T12To		((TeHSCR_e_Something2To)0U)
#define CeHSCR_e_T22To		((TeHSCR_e_Something2To)1U)
#define CeHSCR_e_T32To		((TeHSCR_e_Something2To)2U)
#define CeHSCR_e_T42To		((TeHSCR_e_Something2To)3U)
#define CeHSCR_e_Ti2To		((TeHSCR_e_Something2To)4U)
#define CeHSCR_e_Nidot2To		((TeHSCR_e_Something2To)5U)
#define CeHSCR_e_Nodot2To		((TeHSCR_e_Something2To)6U)
#define CeHSCR_e_Ta2To		((TeHSCR_e_Something2To)7U)
#define CeHSCR_e_Tb2To		((TeHSCR_e_Something2To)8U)
#endif

/*
* Enum TeHSCR_e_Something2Ti_Tcr 
* Default Value:CeHSCR_e_T12Ti_Tcr 
*/
#ifndef TeHSCR_e_Something2Ti_Tcr
typedef uint8 TeHSCR_e_Something2Ti_Tcr;
#define CeHSCR_e_T12Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)0U)
#define CeHSCR_e_T22Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)1U)
#define CeHSCR_e_T32Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)2U)
#define CeHSCR_e_T42Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)3U)
#define CeHSCR_e_Ti2Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)4U)
#define CeHSCR_e_Nidot2Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)5U)
#define CeHSCR_e_Nodot2Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)6U)
#define CeHSCR_e_Ta2Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)7U)
#define CeHSCR_e_Tb2Ti_Tcr		((TeHSCR_e_Something2Ti_Tcr)8U)
#endif

/*
* Enum TeHSCR_e_Something2Ti 
* Default Value:CeHSCR_e_T12Ti 
*/
#ifndef TeHSCR_e_Something2Ti
typedef uint8 TeHSCR_e_Something2Ti;
#define CeHSCR_e_T12Ti		((TeHSCR_e_Something2Ti)0U)
#define CeHSCR_e_T22Ti		((TeHSCR_e_Something2Ti)1U)
#define CeHSCR_e_T32Ti		((TeHSCR_e_Something2Ti)2U)
#define CeHSCR_e_T42Ti		((TeHSCR_e_Something2Ti)3U)
#define CeHSCR_e_Ti2Ti		((TeHSCR_e_Something2Ti)4U)
#define CeHSCR_e_Nidot2Ti		((TeHSCR_e_Something2Ti)5U)
#define CeHSCR_e_Nodot2Ti		((TeHSCR_e_Something2Ti)6U)
#define CeHSCR_e_Ta2Ti		((TeHSCR_e_Something2Ti)7U)
#define CeHSCR_e_Tb2Ti		((TeHSCR_e_Something2Ti)8U)
#endif

/*
* Enum TeHSCR_e_ToLimitType 
* Default Value:CeHSCR_e_Tact_To_Limit 
*/
#ifndef TeHSCR_e_ToLimitType
typedef uint8 TeHSCR_e_ToLimitType;
#define CeHSCR_e_Tact_To_Limit		((TeHSCR_e_ToLimitType)0U)
#define CeHSCR_e_HH_To_Limit		((TeHSCR_e_ToLimitType)1U)
#endif

/*
* Enum TeHSCR_e_No2Something 
* Default Value:CeHSCR_e_No2Ni 
*/
#ifndef TeHSCR_e_No2Something
typedef uint8 TeHSCR_e_No2Something;
#define CeHSCR_e_No2Ni		((TeHSCR_e_No2Something)0U)
#define CeHSCR_e_No2Na		((TeHSCR_e_No2Something)1U)
#define CeHSCR_e_No2Nb		((TeHSCR_e_No2Something)2U)
#endif

/*
* Enum TeHSCR_e_SlopeOfLine 
* Default Value:CeHSCR_e_LineWSlope 
*/
#ifndef TeHSCR_e_SlopeOfLine
typedef uint8 TeHSCR_e_SlopeOfLine;
#define CeHSCR_e_LineWSlope		((TeHSCR_e_SlopeOfLine)0U)
#define CeHSCR_e_HorizLine		((TeHSCR_e_SlopeOfLine)1U)
#define CeHSCR_e_VertLine		((TeHSCR_e_SlopeOfLine)2U)
#endif

/*
* Enum TeHSER_e_RngSt 
* Default Value:CeHSER_e_Init 
*/
#ifndef TeHSER_e_RngSt
typedef uint8 TeHSER_e_RngSt;
#define CeHSER_e_Init		((TeHSER_e_RngSt)0U)
#define CeHSER_e_Init_Neut		((TeHSER_e_RngSt)1U)
#define CeHSER_e_Neutral		((TeHSER_e_RngSt)2U)
#define CeHSER_e_M1		((TeHSER_e_RngSt)3U)
#define CeHSER_e_M2		((TeHSER_e_RngSt)4U)
#define CeHSER_e_M3		((TeHSER_e_RngSt)5U)
#define CeHSER_e_G1		((TeHSER_e_RngSt)6U)
#define CeHSER_e_G2		((TeHSER_e_RngSt)7U)
#define CeHSER_e_G3		((TeHSER_e_RngSt)8U)
#define CeHSER_e_G4		((TeHSER_e_RngSt)9U)
#define CeHSER_e_NeutToM1		((TeHSER_e_RngSt)10U)
#define CeHSER_e_NeutToM2		((TeHSER_e_RngSt)11U)
#define CeHSER_e_NeutToM3		((TeHSER_e_RngSt)12U)
#define CeHSER_e_ShiftToNeutEngOn		((TeHSER_e_RngSt)13U)
#define CeHSER_e_M1ToM2_PwrOnC2CSpdPhs		((TeHSER_e_RngSt)14U)
#define CeHSER_e_M1ToM2_PwrOnC2CTorqPhs		((TeHSER_e_RngSt)15U)
#define CeHSER_e_M2ToM1_PwrOffC2CSpdPhs		((TeHSER_e_RngSt)16U)
#define CeHSER_e_M2ToM1_PwrOffC2CTorqPhs		((TeHSER_e_RngSt)17U)
#define CeHSER_e_M1ToM3_PwrOnC2CSpdPhs		((TeHSER_e_RngSt)18U)
#define CeHSER_e_M1ToM3_PwrOnC2CTorqPhs		((TeHSER_e_RngSt)19U)
#define CeHSER_e_M3ToM1_PwrOffC2CSpdPhs		((TeHSER_e_RngSt)20U)
#define CeHSER_e_M3ToM1_PwrOffC2CTorqPhs		((TeHSER_e_RngSt)21U)
#define CeHSER_e_M1ToG1		((TeHSER_e_RngSt)22U)
#define CeHSER_e_M1ToG2		((TeHSER_e_RngSt)23U)
#define CeHSER_e_M2ToG2		((TeHSER_e_RngSt)24U)
#define CeHSER_e_M2ToG3		((TeHSER_e_RngSt)25U)
#define CeHSER_e_M2ToG4		((TeHSER_e_RngSt)26U)
#define CeHSER_e_M3ToG4		((TeHSER_e_RngSt)27U)
#define CeHSER_e_G1ToG2_PwrOnSpdPhs		((TeHSER_e_RngSt)28U)
#define CeHSER_e_G1ToG2_PwrOnTorqPhs		((TeHSER_e_RngSt)29U)
#define CeHSER_e_G2ToG1_PwrOffSpdPhs		((TeHSER_e_RngSt)30U)
#define CeHSER_e_G2ToG1_PwrOffTorqPhs		((TeHSER_e_RngSt)31U)
#define CeHSER_e_G2ToG3_PwrOnSpdPhs		((TeHSER_e_RngSt)32U)
#define CeHSER_e_G2ToG3_PwrOnTorqPhs		((TeHSER_e_RngSt)33U)
#define CeHSER_e_G3ToG2_PwrOffSpdPhs		((TeHSER_e_RngSt)34U)
#define CeHSER_e_G3ToG2_PwrOffTorqPhs		((TeHSER_e_RngSt)35U)
#define CeHSER_e_G2ToG4_PwrOnC2CSpdPhs		((TeHSER_e_RngSt)36U)
#define CeHSER_e_G2ToG4_PwrOnC2CTorqPhs		((TeHSER_e_RngSt)37U)
#define CeHSER_e_G4ToG2_PwrOffC2CSpdPhs		((TeHSER_e_RngSt)38U)
#define CeHSER_e_G4ToG2_PwrOffC2CTorqPhs		((TeHSER_e_RngSt)39U)
#define CeHSER_e_G3ToG4_PwrOnSpdPhs		((TeHSER_e_RngSt)40U)
#define CeHSER_e_G3ToG4_PwrOnTorqPhs		((TeHSER_e_RngSt)41U)
#define CeHSER_e_G4ToG3_PwrOffSpdPhs		((TeHSER_e_RngSt)42U)
#define CeHSER_e_G4ToG3_PwrOffTorqPhs		((TeHSER_e_RngSt)43U)
#define CeHSER_e_M1ToM2LowTorq		((TeHSER_e_RngSt)44U)
#define CeHSER_e_M2ToM1LowTorq		((TeHSER_e_RngSt)45U)
#define CeHSER_e_M1Abort		((TeHSER_e_RngSt)46U)
#define CeHSER_e_M1Abort_FromM1ToM2_C2CSpdPhs		((TeHSER_e_RngSt)47U)
#define CeHSER_e_M1Abort_FromM1ToM2_C2CTorqPhs		((TeHSER_e_RngSt)48U)
#define CeHSER_e_M1Abort_FromM1ToM3_C2CSpdPhs		((TeHSER_e_RngSt)49U)
#define CeHSER_e_M1Abort_FromM1ToM3_C2CTorqPhs		((TeHSER_e_RngSt)50U)
#define CeHSER_e_M2Abort		((TeHSER_e_RngSt)51U)
#define CeHSER_e_M2Abort_FromM2ToM1_C2CSpdPhs		((TeHSER_e_RngSt)52U)
#define CeHSER_e_M2Abort_FromM2ToM1_C2CTorqPhs		((TeHSER_e_RngSt)53U)
#define CeHSER_e_M3Abort		((TeHSER_e_RngSt)54U)
#define CeHSER_e_M3Abort_FromM3ToM1_C2CSpdPhs		((TeHSER_e_RngSt)55U)
#define CeHSER_e_M3Abort_FromM3ToM1_C2CTorqPhs		((TeHSER_e_RngSt)56U)
#define CeHSER_e_G1Abort_FromG1ToG2_TorqPhs		((TeHSER_e_RngSt)57U)
#define CeHSER_e_G2Abort_FromG2ToG1_TorqPhs		((TeHSER_e_RngSt)58U)
#define CeHSER_e_G2Abort_FromG2ToG3_TorqPhs		((TeHSER_e_RngSt)59U)
#define CeHSER_e_G2Abort_FromG2ToG4_C2CSpdPhs		((TeHSER_e_RngSt)60U)
#define CeHSER_e_G2Abort_FromG2ToG4_C2CTorqPhs		((TeHSER_e_RngSt)61U)
#define CeHSER_e_G3Abort_FromG3ToG2_TorqPhs		((TeHSER_e_RngSt)62U)
#define CeHSER_e_G3Abort_FromG3ToG4_TorqPhs		((TeHSER_e_RngSt)63U)
#define CeHSER_e_G4Abort_FromG4ToG2_C2CSpdPhs		((TeHSER_e_RngSt)64U)
#define CeHSER_e_G4Abort_FromG4ToG2_C2CTorqPhs		((TeHSER_e_RngSt)65U)
#define CeHSER_e_G4Abort_FromG4ToG3_TorqPhs		((TeHSER_e_RngSt)66U)
#define CeHSER_e_Invalid		((TeHSER_e_RngSt)67U)
#endif

/*
* Enum TeHSER_e_RngStGrp 
* Default Value:CeHSER_e_Init_Group 
*/
#ifndef TeHSER_e_RngStGrp
typedef uint8 TeHSER_e_RngStGrp;
#define CeHSER_e_Init_Group		((TeHSER_e_RngStGrp)0U)
#define CeHSER_e_StableState_Group		((TeHSER_e_RngStGrp)1U)
#define CeHSER_e_NeutralShift_Group		((TeHSER_e_RngStGrp)2U)
#define CeHSER_e_ModeToGear_Group		((TeHSER_e_RngStGrp)3U)
#define CeHSER_e_ModeToMode_Group		((TeHSER_e_RngStGrp)4U)
#define CeHSER_e_PonUp_Group		((TeHSER_e_RngStGrp)5U)
#define CeHSER_e_PonUpC2C_Group		((TeHSER_e_RngStGrp)6U)
#define CeHSER_e_PoffDn_Group		((TeHSER_e_RngStGrp)7U)
#define CeHSER_e_PoffDnC2C_Group		((TeHSER_e_RngStGrp)8U)
#endif

/*
* Enum TeHSER_e_SpdPrflrMd 
* Default Value:CeHSER_e_Prof_EngOff 
*/
#ifndef TeHSER_e_SpdPrflrMd
typedef uint8 TeHSER_e_SpdPrflrMd;
#define CeHSER_e_Prof_EngOff		((TeHSER_e_SpdPrflrMd)0U)
#define CeHSER_e_Prof_InMode		((TeHSER_e_SpdPrflrMd)1U)
#define CeHSER_e_Prof_InGear		((TeHSER_e_SpdPrflrMd)2U)
#define CeHSER_e_Prof_FromModeSpdPhs		((TeHSER_e_SpdPrflrMd)3U)
#define CeHSER_e_Prof_FromGearSpdPhs		((TeHSER_e_SpdPrflrMd)4U)
#define CeHSER_e_Prof_EngStartStop		((TeHSER_e_SpdPrflrMd)5U)
#define CeHSER_e_Prof_FromGearTorqPhs		((TeHSER_e_SpdPrflrMd)6U)
#endif

/*
* Enum TeHSER_e_NiProf 
* Default Value:CeHSER_e_NiProf_NotAvail 
*/
#ifndef TeHSER_e_NiProf
typedef uint8 TeHSER_e_NiProf;
#define CeHSER_e_NiProf_NotAvail		((TeHSER_e_NiProf)0U)
#define CeHSER_e_NiProf_ESSR		((TeHSER_e_NiProf)1U)
#define CeHSER_e_NiProf_OHSR		((TeHSER_e_NiProf)2U)
#define CeHSER_e_NiProf_HSER		((TeHSER_e_NiProf)3U)
#define CeHSER_e_NiProf_Gear		((TeHSER_e_NiProf)4U)
#endif

/*
* Enum TeHSER_e_NxDotSource 
* Default Value:CeHSER_e_ZeroNxDot 
*/
#ifndef TeHSER_e_NxDotSource
typedef uint8 TeHSER_e_NxDotSource;
#define CeHSER_e_ZeroNxDot		((TeHSER_e_NxDotSource)0U)
#define CeHSER_e_NxDotFrmNxProf		((TeHSER_e_NxDotSource)1U)
#define CeHSER_e_NxDotFrmNoDot		((TeHSER_e_NxDotSource)2U)
#endif

/*
* Enum TeHSER_e_NxEqnSel 
* Default Value:CeHSER_e_NeutralToMode 
*/
#ifndef TeHSER_e_NxEqnSel
typedef uint8 TeHSER_e_NxEqnSel;
#define CeHSER_e_NeutralToMode		((TeHSER_e_NxEqnSel)0U)
#define CeHSER_e_ModeToGear		((TeHSER_e_NxEqnSel)1U)
#endif

/*
* Enum TeHSER_e_ProfOptNi 
* Default Value:CeHSER_e_Prof_OptNi_N 
*/
#ifndef TeHSER_e_ProfOptNi
typedef uint8 TeHSER_e_ProfOptNi;
#define CeHSER_e_Prof_OptNi_N		((TeHSER_e_ProfOptNi)0U)
#define CeHSER_e_Prof_OptNi_M1		((TeHSER_e_ProfOptNi)1U)
#define CeHSER_e_Prof_OptNi_M2		((TeHSER_e_ProfOptNi)2U)
#define CeHSER_e_Prof_OptNi_M3		((TeHSER_e_ProfOptNi)3U)
#endif

/*
* Enum TeHSER_e_ClutchID 
* Default Value:CeHSER_e_ClNone 
*/
#ifndef TeHSER_e_ClutchID
typedef uint8 TeHSER_e_ClutchID;
#define CeHSER_e_ClNone		((TeHSER_e_ClutchID)0U)
#define CeHSER_e_Cl1		((TeHSER_e_ClutchID)1U)
#define CeHSER_e_Cl2		((TeHSER_e_ClutchID)2U)
#define CeHSER_e_Cl3		((TeHSER_e_ClutchID)3U)
#define CeHSER_e_Cl4		((TeHSER_e_ClutchID)4U)
#define CeHSER_e_Cl4_Gr1		((TeHSER_e_ClutchID)5U)
#define CeHSER_e_Cl4_Gr3		((TeHSER_e_ClutchID)6U)
#endif

/*
* Enum TeHSER_e_RngEqnSel 
* Default Value:CeHSER_e_UseNeutralEqn 
*/
#ifndef TeHSER_e_RngEqnSel
typedef uint8 TeHSER_e_RngEqnSel;
#define CeHSER_e_UseNeutralEqn		((TeHSER_e_RngEqnSel)0U)
#define CeHSER_e_UseM1Eqn		((TeHSER_e_RngEqnSel)1U)
#define CeHSER_e_UseM2Eqn		((TeHSER_e_RngEqnSel)2U)
#define CeHSER_e_UseM3Eqn		((TeHSER_e_RngEqnSel)3U)
#define CeHSER_e_UseG1Eqn		((TeHSER_e_RngEqnSel)4U)
#define CeHSER_e_UseG2Eqn		((TeHSER_e_RngEqnSel)5U)
#define CeHSER_e_UseG3Eqn		((TeHSER_e_RngEqnSel)6U)
#define CeHSER_e_UseG4Eqn		((TeHSER_e_RngEqnSel)7U)
#define CeHSER_e_UseNeutralEqn_2		((TeHSER_e_RngEqnSel)8U)
#define CeHSER_e_UseM2Eqn_2		((TeHSER_e_RngEqnSel)9U)
#endif

/*
* Enum TeHSER_e_SteadyStates 
* Default Value:CeHSER_e_Neut_State 
*/
#ifndef TeHSER_e_SteadyStates
typedef uint8 TeHSER_e_SteadyStates;
#define CeHSER_e_Neut_State		((TeHSER_e_SteadyStates)0U)
#define CeHSER_e_M1_State		((TeHSER_e_SteadyStates)1U)
#define CeHSER_e_M2_State		((TeHSER_e_SteadyStates)2U)
#define CeHSER_e_M3_State		((TeHSER_e_SteadyStates)3U)
#define CeHSER_e_G1_State		((TeHSER_e_SteadyStates)4U)
#define CeHSER_e_G2_State		((TeHSER_e_SteadyStates)5U)
#define CeHSER_e_G3_State		((TeHSER_e_SteadyStates)6U)
#define CeHSER_e_G4_State		((TeHSER_e_SteadyStates)7U)
#define CeHSER_e_NeutHI_State		((TeHSER_e_SteadyStates)8U)
#define CeHSER_e_M2HI_State		((TeHSER_e_SteadyStates)9U)
#define CeHSER_e_G3HI_State		((TeHSER_e_SteadyStates)10U)
#define CeHSER_e_NeutALL_State		((TeHSER_e_SteadyStates)11U)
#define CeHSER_e_M1_EngOff_State		((TeHSER_e_SteadyStates)12U)
#define CeHSER_e_NeutC2C_State		((TeHSER_e_SteadyStates)13U)
#define CeHSER_e_Neut_State_2		((TeHSER_e_SteadyStates)14U)
#define CeHSER_e_M2_State_2		((TeHSER_e_SteadyStates)15U)
#endif

/*
* Enum TeHSER_e_PropulsionMode 
* Default Value:CeHSER_e_PropModeSNA 
*/
#ifndef TeHSER_e_PropulsionMode
typedef uint8 TeHSER_e_PropulsionMode;
#define CeHSER_e_HybridParallel		((TeHSER_e_PropulsionMode)0U)
#define CeHSER_e_EVOnly		((TeHSER_e_PropulsionMode)1U)
#define CeHSER_e_HybridSeries		((TeHSER_e_PropulsionMode)2U)
#define CeHSER_e_PropModeSNA		((TeHSER_e_PropulsionMode)7U)
#endif

/*
* Enum TeHSER_e_BufferVectorNdx 
* Default Value:CeHSER_e_OptNi_M1_VctrIdx 
*/
#ifndef TeHSER_e_BufferVectorNdx
typedef uint8 TeHSER_e_BufferVectorNdx;
#define CeHSER_e_OptNi_M1_VctrIdx		((TeHSER_e_BufferVectorNdx)0U)
#define CeHSER_e_OptNi_M2_VctrIdx		((TeHSER_e_BufferVectorNdx)1U)
#define CeHSER_e_OptNi_M3_VctrIdx		((TeHSER_e_BufferVectorNdx)2U)
#define CeHSER_e_NiProf_VctrIdx		((TeHSER_e_BufferVectorNdx)3U)
#define CeHSER_e_NC1Prof_VctrIdx		((TeHSER_e_BufferVectorNdx)4U)
#endif

/*
* Enum TeHSER_e_OptiNiIdx 
* Default Value:CeHSER_e_N_OptiNiIdx 
*/
#ifndef TeHSER_e_OptiNiIdx
typedef uint8 TeHSER_e_OptiNiIdx;
#define CeHSER_e_N_OptiNiIdx		((TeHSER_e_OptiNiIdx)0U)
#define CeHSER_e_M1_OptiNiIdx		((TeHSER_e_OptiNiIdx)1U)
#define CeHSER_e_M2_OptiNiIdx		((TeHSER_e_OptiNiIdx)2U)
#endif

/*
* Enum TeHSER_e_Cl_Avail 
* Default Value:CeHSER_e_ClNotAvail 
*/
#ifndef TeHSER_e_Cl_Avail
typedef uint8 TeHSER_e_Cl_Avail;
#define CeHSER_e_ClNotAvail		((TeHSER_e_Cl_Avail)0U)
#define CeHSER_e_ClAvail		((TeHSER_e_Cl_Avail)1U)
#endif

/*
* Enum TeHSER_e_ClchFillCmnd 
* Default Value:CeHSER_e_ClchExhstCmpltly 
*/
#ifndef TeHSER_e_ClchFillCmnd
typedef uint8 TeHSER_e_ClchFillCmnd;
#define CeHSER_e_ClchExhstCmpltly		((TeHSER_e_ClchFillCmnd)0U)
#define CeHSER_e_ClchFillToTchPt		((TeHSER_e_ClchFillCmnd)1U)
#define CeHSER_e_ClchExhstToTchPt		((TeHSER_e_ClchFillCmnd)2U)
#endif

/*
* Enum TeHSER_e_SpdEquationSel 
* Default Value:CeHSER_e_UnknownSpdEqn 
*/
#ifndef TeHSER_e_SpdEquationSel
typedef uint8 TeHSER_e_SpdEquationSel;
#define CeHSER_e_UnknownSpdEqn		((TeHSER_e_SpdEquationSel)0U)
#define CeHSER_e_UseM1SpdEqn		((TeHSER_e_SpdEquationSel)1U)
#define CeHSER_e_UseM2SpdEqn		((TeHSER_e_SpdEquationSel)2U)
#endif

/*
* Enum TeHSER_e_SpdPhsPrflSt 
* Default Value:CeHSER_e_SpdPhsPrep 
*/
#ifndef TeHSER_e_SpdPhsPrflSt
typedef uint8 TeHSER_e_SpdPhsPrflSt;
#define CeHSER_e_SpdPhsPrep		((TeHSER_e_SpdPhsPrflSt)0U)
#define CeHSER_e_SpdPhsSt1		((TeHSER_e_SpdPhsPrflSt)1U)
#define CeHSER_e_SpdPhsSt2		((TeHSER_e_SpdPhsPrflSt)2U)
#define CeHSER_e_SpdPhsSt3		((TeHSER_e_SpdPhsPrflSt)3U)
#define CeHSER_e_SpdPhsEnd		((TeHSER_e_SpdPhsPrflSt)4U)
#endif

/*
* Enum TeHSER_e_NeutTracking 
* Default Value:CeHSER_e_NC1_Tracking 
*/
#ifndef TeHSER_e_NeutTracking
typedef uint8 TeHSER_e_NeutTracking;
#define CeHSER_e_NC1_Tracking		((TeHSER_e_NeutTracking)1U)
#define CeHSER_e_NC2_Tracking		((TeHSER_e_NeutTracking)2U)
#endif

/*
* Enum TeHSER_e_AccelBasedSTN_Enbl 
* Default Value:CeHSER_e_AccelBasedSTN_Dsbl 
*/
#ifndef TeHSER_e_AccelBasedSTN_Enbl
typedef uint8 TeHSER_e_AccelBasedSTN_Enbl;
#define CeHSER_e_AccelBasedSTN_Dsbl		((TeHSER_e_AccelBasedSTN_Enbl)0U)
#define CeHSER_e_AccelBasedSTN_G1		((TeHSER_e_AccelBasedSTN_Enbl)1U)
#define CeHSER_e_AccelBasedSTN_G2		((TeHSER_e_AccelBasedSTN_Enbl)2U)
#define CeHSER_e_AccelBasedSTN_G3		((TeHSER_e_AccelBasedSTN_Enbl)3U)
#define CeHSER_e_AccelBasedSTN_G4		((TeHSER_e_AccelBasedSTN_Enbl)4U)
#endif

/*
* Enum TeHSER_e_NiDotLim_Enbl 
* Default Value:CeHSER_e_DsblNidotLmtCalc 
*/
#ifndef TeHSER_e_NiDotLim_Enbl
typedef uint8 TeHSER_e_NiDotLim_Enbl;
#define CeHSER_e_DsblNidotLmtCalc		((TeHSER_e_NiDotLim_Enbl)0U)
#define CeHSER_e_CalcM1NidotLmt		((TeHSER_e_NiDotLim_Enbl)1U)
#define CeHSER_e_CalcM2NidotLmt		((TeHSER_e_NiDotLim_Enbl)2U)
#define CeHSER_e_CalcNeutNidotLmt		((TeHSER_e_NiDotLim_Enbl)3U)
#endif

/*
* Enum TeHSER_e_DsrdSpdProfTmSel 
* Default Value:CeHSER_e_DsrdSpdProfTm0 
*/
#ifndef TeHSER_e_DsrdSpdProfTmSel
typedef uint8 TeHSER_e_DsrdSpdProfTmSel;
#define CeHSER_e_DsrdSpdProfTm0		((TeHSER_e_DsrdSpdProfTmSel)0U)
#define CeHSER_e_DsrdSpdProfTm1		((TeHSER_e_DsrdSpdProfTmSel)1U)
#define CeHSER_e_DsrdSpdProfTm2		((TeHSER_e_DsrdSpdProfTmSel)2U)
#define CeHSER_e_DsrdSpdProfTm3		((TeHSER_e_DsrdSpdProfTmSel)3U)
#define CeHSER_e_DsrdSpdProfTm4		((TeHSER_e_DsrdSpdProfTmSel)4U)
#endif

/*
* Enum TeHSER_e_TugCmdStates 
* Default Value:CeHSER_e_CmdTugDisabled 
*/
#ifndef TeHSER_e_TugCmdStates
typedef uint8 TeHSER_e_TugCmdStates;
#define CeHSER_e_CmdTugDisabled		((TeHSER_e_TugCmdStates)0U)
#define CeHSER_e_CmdC2TugEnabled		((TeHSER_e_TugCmdStates)1U)
#define CeHSER_e_CmdC4TugEnabled		((TeHSER_e_TugCmdStates)2U)
#endif

/*
* Enum TeHSER_e_AutoTransCommandedGr 
* Default Value:CeHSER_e_CmndGear1 
*/
#ifndef TeHSER_e_AutoTransCommandedGr
typedef uint8 TeHSER_e_AutoTransCommandedGr;
#define CeHSER_e_CmndGear1		((TeHSER_e_AutoTransCommandedGr)0U)
#define CeHSER_e_CmndGear2		((TeHSER_e_AutoTransCommandedGr)1U)
#define CeHSER_e_CmndGear3		((TeHSER_e_AutoTransCommandedGr)2U)
#define CeHSER_e_CmndGear4		((TeHSER_e_AutoTransCommandedGr)3U)
#define CeHSER_e_CmndGear5		((TeHSER_e_AutoTransCommandedGr)4U)
#define CeHSER_e_CmndGear6		((TeHSER_e_AutoTransCommandedGr)5U)
#define CeHSER_e_CmndEVT_Mode1		((TeHSER_e_AutoTransCommandedGr)6U)
#define CeHSER_e_CmndEVT_Mode2		((TeHSER_e_AutoTransCommandedGr)7U)
#define CeHSER_e_CmndGearNeut		((TeHSER_e_AutoTransCommandedGr)8U)
#define CeHSER_e_CmndGearRev		((TeHSER_e_AutoTransCommandedGr)9U)
#define CeHSER_e_CmndGearPark		((TeHSER_e_AutoTransCommandedGr)10U)
#endif

/*
* Enum TeHSER_e_TransGr 
* Default Value:CeHSER_e_TransGr1 
*/
#ifndef TeHSER_e_TransGr
typedef uint8 TeHSER_e_TransGr;
#define CeHSER_e_TransGr1		((TeHSER_e_TransGr)0U)
#define CeHSER_e_TransGr2		((TeHSER_e_TransGr)1U)
#define CeHSER_e_TransGr3		((TeHSER_e_TransGr)2U)
#define CeHSER_e_TransGr4		((TeHSER_e_TransGr)3U)
#define CeHSER_e_TransGr5		((TeHSER_e_TransGr)4U)
#define CeHSER_e_TransGr6		((TeHSER_e_TransGr)5U)
#define CeHSER_e_TransGrEVT1		((TeHSER_e_TransGr)6U)
#define CeHSER_e_TransGrEVT2		((TeHSER_e_TransGr)7U)
#define CeHSER_e_TransGrNeut		((TeHSER_e_TransGr)8U)
#define CeHSER_e_TransGrRvrs		((TeHSER_e_TransGr)9U)
#define CeHSER_e_TransGrPark		((TeHSER_e_TransGr)10U)
#define CeHSER_e_TransGrSize		((TeHSER_e_TransGr)11U)
#define CeHSER_e_TransGrIllegal		((TeHSER_e_TransGr)17U)
#define CeHSER_e_TransNoFailSoft		((TeHSER_e_TransGr)255U)
#endif

/*
* Enum TeHSER_e_ShftInPrgs 
* Default Value:CeHSER_e_StdyState 
*/
#ifndef TeHSER_e_ShftInPrgs
typedef uint8 TeHSER_e_ShftInPrgs;
#define CeHSER_e_StdyState		((TeHSER_e_ShftInPrgs)0U)
#define CeHSER_e_ShftInPrgs		((TeHSER_e_ShftInPrgs)1U)
#define CeHSER_e_GarageSIP		((TeHSER_e_ShftInPrgs)2U)
#define CeHSER_e_NeutDsrd		((TeHSER_e_ShftInPrgs)3U)
#define CeHSER_e_ShftAborted		((TeHSER_e_ShftInPrgs)4U)
#endif

/*
* Enum TeHSER_e_ClutchStatCntrl 
* Default Value:CeHSER_e_ONComing_C2CTrqPhs 
*/
#ifndef TeHSER_e_ClutchStatCntrl
typedef uint8 TeHSER_e_ClutchStatCntrl;
#define CeHSER_e_ONComing_C2CTrqPhs		((TeHSER_e_ClutchStatCntrl)0U)
#define CeHSER_e_ONComing_C2CSpdPhs		((TeHSER_e_ClutchStatCntrl)1U)
#define CeHSER_e_OFFGoing_C2CTrqPhs		((TeHSER_e_ClutchStatCntrl)2U)
#define CeHSER_e_OFFGoing_C2CSpdPhs		((TeHSER_e_ClutchStatCntrl)3U)
#define CeHSER_e_ClchStatCntrl_Else		((TeHSER_e_ClutchStatCntrl)4U)
#define CeHSER_e_BmpStrt		((TeHSER_e_ClutchStatCntrl)5U)
#define CeHSER_e_M1XN		((TeHSER_e_ClutchStatCntrl)6U)
#endif

/*
* Enum TeHSER_e_FutrShftType 
* Default Value:CeHSER_e_NoRequest 
*/
#ifndef TeHSER_e_FutrShftType
typedef uint8 TeHSER_e_FutrShftType;
#define CeHSER_e_NoRequest		((TeHSER_e_FutrShftType)0U)
#define CeHSER_e_ShiftToNeutralReq		((TeHSER_e_FutrShftType)1U)
#define CeHSER_e_GarageShiftReq		((TeHSER_e_FutrShftType)2U)
#endif

/*
* Enum TeHSER_e_ProfOptNx 
* Default Value:CeHSER_e_OptNx_Neutral 
*/
#ifndef TeHSER_e_ProfOptNx
typedef uint8 TeHSER_e_ProfOptNx;
#define CeHSER_e_OptNx_Neutral		((TeHSER_e_ProfOptNx)0U)
#define CeHSER_e_OptNx_C1TgtAtZeroSpd		((TeHSER_e_ProfOptNx)1U)
#define CeHSER_e_OptNx_C2TgtAtZeroSpd		((TeHSER_e_ProfOptNx)2U)
#define CeHSER_e_OptNx_NbTgtAtZeroSpd		((TeHSER_e_ProfOptNx)3U)
#endif

/*
* Enum TeHSER_e_NxTracking 
* Default Value:CeHSER_e_NxTracking_Nc1 
*/
#ifndef TeHSER_e_NxTracking
typedef uint8 TeHSER_e_NxTracking;
#define CeHSER_e_NxTracking_Nc1		((TeHSER_e_NxTracking)0U)
#define CeHSER_e_NxTracking_Nc2		((TeHSER_e_NxTracking)1U)
#define CeHSER_e_NxTracking_Nmtr		((TeHSER_e_NxTracking)2U)
#endif

/*
* Enum TeHSER_e_OptNxProfSlct 
* Default Value:CeHSER_e_OptNxProf_Inactive 
*/
#ifndef TeHSER_e_OptNxProfSlct
typedef uint8 TeHSER_e_OptNxProfSlct;
#define CeHSER_e_OptNxProf_Inactive		((TeHSER_e_OptNxProfSlct)0U)
#define CeHSER_e_OptNxProf_SpeedAccelLinked		((TeHSER_e_OptNxProfSlct)1U)
#define CeHSER_e_OptNxProf_AccelOnly		((TeHSER_e_OptNxProfSlct)2U)
#endif

/*
* Enum TeHSER_e_InhibitStartStop 
* Default Value:CeHSER_e_InhibitStartStop 
*/
#ifndef TeHSER_e_InhibitStartStop
typedef uint8 TeHSER_e_InhibitStartStop;
#define CeHSER_e_NoInhibit		((TeHSER_e_InhibitStartStop)0U)
#define CeHSER_e_InhibitStart		((TeHSER_e_InhibitStartStop)1U)
#define CeHSER_e_InhibitStop		((TeHSER_e_InhibitStartStop)2U)
#define CeHSER_e_InhibitStartStop		((TeHSER_e_InhibitStartStop)3U)
#endif

/*
* Enum TeHSWR_e_HoodStatus 
* Default Value:CeHSWR_e_HoodClosed 
*/
#ifndef TeHSWR_e_HoodStatus
typedef uint8 TeHSWR_e_HoodStatus;
#define CeHSWR_e_HoodClosed		((TeHSWR_e_HoodStatus)0U)
#define CeHSWR_e_HoodAjar		((TeHSWR_e_HoodStatus)1U)
#define CeHSWR_e_HoodOpen		((TeHSWR_e_HoodStatus)2U)
#endif

/*
* Enum TeHSWR_e_SecHoodStatus 
* Default Value:CeHSWR_e_SecHoodAjar 
*/
#ifndef TeHSWR_e_SecHoodStatus
typedef uint8 TeHSWR_e_SecHoodStatus;
#define CeHSWR_e_SecHoodClosed		((TeHSWR_e_SecHoodStatus)0U)
#define CeHSWR_e_SecHoodAjar		((TeHSWR_e_SecHoodStatus)1U)
#define CeHSWR_e_SecHoodOutRange		((TeHSWR_e_SecHoodStatus)2U)
#endif

/*
* Enum TeHSWR_e_ECMHoodStatus 
* Default Value:CeHSWR_e_Closed_ECMHdAjar 
*/
#ifndef TeHSWR_e_ECMHoodStatus
typedef uint8 TeHSWR_e_ECMHoodStatus;
#define CeHSWR_e_Closed_ECMHdAjar		((TeHSWR_e_ECMHoodStatus)0U)
#define CeHSWR_e_Ajar_ECMHdAjar		((TeHSWR_e_ECMHoodStatus)1U)
#define CeHSWR_e_Faulted_ECMHdAjar		((TeHSWR_e_ECMHoodStatus)2U)
#define CeHSWR_e_SNA_ECMHdAjar		((TeHSWR_e_ECMHoodStatus)3U)
#endif

/*
* Enum TeHSWR_e_HoodStatus_K8 
* Default Value:CeHSWR_e_BntSts_Lvl_0 
*/
#ifndef TeHSWR_e_HoodStatus_K8
typedef uint8 TeHSWR_e_HoodStatus_K8;
#define CeHSWR_e_BntSts_Lvl_0		((TeHSWR_e_HoodStatus_K8)0U)
#define CeHSWR_e_BntSts_Lvl_1		((TeHSWR_e_HoodStatus_K8)1U)
#define CeHSWR_e_BntSts_Lvl_2		((TeHSWR_e_HoodStatus_K8)2U)
#define CeHSWR_e_BntSts_Lvl_3		((TeHSWR_e_HoodStatus_K8)3U)
#define CeHSWR_e_BntSts_Lvl_4		((TeHSWR_e_HoodStatus_K8)4U)
#define CeHSWR_e_BntSts_Lvl_5		((TeHSWR_e_HoodStatus_K8)5U)
#define CeHSWR_e_BntSts_Lvl_6		((TeHSWR_e_HoodStatus_K8)6U)
#define CeHSWR_e_BntSts_Lvl_7		((TeHSWR_e_HoodStatus_K8)7U)
#define CeHSWR_e_BntSts_Lvl_8		((TeHSWR_e_HoodStatus_K8)8U)
#define CeHSWR_e_BntSts_Lvl_9		((TeHSWR_e_HoodStatus_K8)9U)
#define CeHSWR_e_BntSts_Lvl_10		((TeHSWR_e_HoodStatus_K8)10U)
#define CeHSWR_e_BntSts_Lvl_11		((TeHSWR_e_HoodStatus_K8)11U)
#define CeHSWR_e_BntSts_Lvl_12		((TeHSWR_e_HoodStatus_K8)12U)
#define CeHSWR_e_BntSts_Lvl_13		((TeHSWR_e_HoodStatus_K8)13U)
#define CeHSWR_e_BntSts_Lvl_14		((TeHSWR_e_HoodStatus_K8)14U)
#define CeHSWR_e_BntSts_Lvl_15		((TeHSWR_e_HoodStatus_K8)15U)
#endif

/*
* Enum TeHSWR_e_HoodStatus_RU 
* Default Value:CeHSWR_e_BntSts_Default 
*/
#ifndef TeHSWR_e_HoodStatus_RU
typedef uint8 TeHSWR_e_HoodStatus_RU;
#define CeHSWR_e_BntSts_Default		((TeHSWR_e_HoodStatus_RU)0U)
#define CeHSWR_e_BntSts_FL_SSA		((TeHSWR_e_HoodStatus_RU)1U)
#define CeHSWR_e_BntSts_FL_SSB		((TeHSWR_e_HoodStatus_RU)2U)
#define CeHSWR_e_BntSts_FL_SSC		((TeHSWR_e_HoodStatus_RU)3U)
#define CeHSWR_e_BntSts_FL_SSD		((TeHSWR_e_HoodStatus_RU)4U)
#define CeHSWR_e_BntSts_FL_SSE		((TeHSWR_e_HoodStatus_RU)5U)
#define CeHSWR_e_BntSts_OPEN_SSA		((TeHSWR_e_HoodStatus_RU)6U)
#define CeHSWR_e_BntSts_OPEN_SSB		((TeHSWR_e_HoodStatus_RU)7U)
#define CeHSWR_e_BntSts_CLOSED_SSA		((TeHSWR_e_HoodStatus_RU)8U)
#define CeHSWR_e_BntSts_CLOSED_SSB		((TeHSWR_e_HoodStatus_RU)9U)
#define CeHSWR_e_BntSts_FH_SSA		((TeHSWR_e_HoodStatus_RU)10U)
#define CeHSWR_e_BntSts_FH_SSB		((TeHSWR_e_HoodStatus_RU)11U)
#define CeHSWR_e_BntSts_FH_SSC		((TeHSWR_e_HoodStatus_RU)12U)
#define CeHSWR_e_BntSts_FH_SSD		((TeHSWR_e_HoodStatus_RU)13U)
#define CeHSWR_e_BntSts_FH_SSE		((TeHSWR_e_HoodStatus_RU)14U)
#define CeHSWR_e_BntSts_SNA		((TeHSWR_e_HoodStatus_RU)15U)
#endif

/*
* Enum TeHSWR_e_Dbg_Status 
* Default Value:CeHSWR_e_Dbg_Init 
*/
#ifndef TeHSWR_e_Dbg_Status
typedef uint8 TeHSWR_e_Dbg_Status;
#define CeHSWR_e_Dbg_Init		((TeHSWR_e_Dbg_Status)1U)
#define CeHSWR_e_Dbg_Poke		((TeHSWR_e_Dbg_Status)2U)
#define CeHSWR_e_Dbg_Failsoft		((TeHSWR_e_Dbg_Status)3U)
#define CeHSWR_e_Dbg_Timeout		((TeHSWR_e_Dbg_Status)4U)
#endif

/*
* Enum TeHSWR_e_HoodStatusVolt 
* Default Value:CeHSWR_e_VoltShortToGround 
*/
#ifndef TeHSWR_e_HoodStatusVolt
typedef uint8 TeHSWR_e_HoodStatusVolt;
#define CeHSWR_e_VoltShortToGround		((TeHSWR_e_HoodStatusVolt)0U)
#define CeHSWR_e_VoltHoodAjar		((TeHSWR_e_HoodStatusVolt)1U)
#define CeHSWR_e_VoltHoodClosed		((TeHSWR_e_HoodStatusVolt)2U)
#define CeHSWR_e_VoltOpenCircuit		((TeHSWR_e_HoodStatusVolt)3U)
#define CeHSWR_e_VoltHoodDefault		((TeHSWR_e_HoodStatusVolt)4U)
#endif

/*
* Enum TeHSWR_e_HCPHoodAjarSts 
* Default Value:CeHSWR_e_HCPHoodSNA 
*/
#ifndef TeHSWR_e_HCPHoodAjarSts
typedef uint8 TeHSWR_e_HCPHoodAjarSts;
#define CeHSWR_e_HCPHoodClosed		((TeHSWR_e_HCPHoodAjarSts)0U)
#define CeHSWR_e_HCPHoodAjar		((TeHSWR_e_HCPHoodAjarSts)1U)
#define CeHSWR_e_HCPHoodFaulted		((TeHSWR_e_HCPHoodAjarSts)2U)
#define CeHSWR_e_HCPHoodSNA		((TeHSWR_e_HCPHoodAjarSts)3U)
#endif

/*
* Enum TeHTDR_e_SwitchMd 
* Default Value:CeHTDR_e_DsblNoSwitch 
*/
#ifndef TeHTDR_e_SwitchMd
typedef uint8 TeHTDR_e_SwitchMd;
#define CeHTDR_e_DsblNoSwitch		((TeHTDR_e_SwitchMd)0U)
#define CeHTDR_e_TorqCntrl		((TeHTDR_e_SwitchMd)1U)
#define CeHTDR_e_SpeedCntrl		((TeHTDR_e_SwitchMd)2U)
#define CeHTDR_e_ActvDischarge		((TeHTDR_e_SwitchMd)3U)
#define CeHTDR_e_DsblImmd		((TeHTDR_e_SwitchMd)4U)
#define CeHTDR_e_VoltageControl		((TeHTDR_e_SwitchMd)5U)
#define CeHTDR_e_RapidShtdwnComnd		((TeHTDR_e_SwitchMd)6U)
#define CeHTDR_e_ROLRoutine		((TeHTDR_e_SwitchMd)8U)
#define CeHTDR_e_ActiveShortCircuit		((TeHTDR_e_SwitchMd)9U)
#endif

/*
* Enum TeHTDR_e_UseOptTa 
* Default Value:CeHTDR_e_UseOptTa_Old 
*/
#ifndef TeHTDR_e_UseOptTa
typedef uint8 TeHTDR_e_UseOptTa;
#define CeHTDR_e_UseOptTa_Old		((TeHTDR_e_UseOptTa)0U)
#define CeHTDR_e_UseOptTa_New		((TeHTDR_e_UseOptTa)1U)
#define CeHTDR_e_UseOptTa_Both		((TeHTDR_e_UseOptTa)2U)
#endif

/*
* Enum TeHTDR_e_DVC_SingleMtrCntrlMode 
* Default Value:CeHTDR_e_SingleMtrTorqCntrl_Inactive 
*/
#ifndef TeHTDR_e_DVC_SingleMtrCntrlMode
typedef uint8 TeHTDR_e_DVC_SingleMtrCntrlMode;
#define CeHTDR_e_SingleMtrTorqCntrl_Inactive		((TeHTDR_e_DVC_SingleMtrCntrlMode)0U)
#define CeHTDR_e_SingleMtrTorqCntrl_MtrA		((TeHTDR_e_DVC_SingleMtrCntrlMode)1U)
#define CeHTDR_e_SingleMtrSpdCntrl_MtrA		((TeHTDR_e_DVC_SingleMtrCntrlMode)2U)
#define CeHTDR_e_SingleMtrTorqCntrl_MtrB		((TeHTDR_e_DVC_SingleMtrCntrlMode)3U)
#define CeHTDR_e_SingleMtrSpdCntrl_MtrB		((TeHTDR_e_DVC_SingleMtrCntrlMode)4U)
#define CeHTDR_e_SingleMtrTorqCntrl_MtrC		((TeHTDR_e_DVC_SingleMtrCntrlMode)5U)
#define CeHTDR_e_SingleMtrSpdCntrl_MtrC		((TeHTDR_e_DVC_SingleMtrCntrlMode)6U)
#endif

/*
* Enum TeHTDR_e_DVC_CntrlModeMtrA 
* Default Value:CeHTDR_e_MtrA_NormCntrl 
*/
#ifndef TeHTDR_e_DVC_CntrlModeMtrA
typedef uint8 TeHTDR_e_DVC_CntrlModeMtrA;
#define CeHTDR_e_MtrA_NormCntrl		((TeHTDR_e_DVC_CntrlModeMtrA)0U)
#define CeHTDR_e_MtrA_TorqCntrl		((TeHTDR_e_DVC_CntrlModeMtrA)1U)
#define CeHTDR_e_MtrA_SpdCntrl		((TeHTDR_e_DVC_CntrlModeMtrA)2U)
#endif

/*
* Enum TeHTDR_e_DVC_CntrlModeMtrB 
* Default Value:CeHTDR_e_MtrB_NormCntrl 
*/
#ifndef TeHTDR_e_DVC_CntrlModeMtrB
typedef uint8 TeHTDR_e_DVC_CntrlModeMtrB;
#define CeHTDR_e_MtrB_NormCntrl		((TeHTDR_e_DVC_CntrlModeMtrB)0U)
#define CeHTDR_e_MtrB_TorqCntrl		((TeHTDR_e_DVC_CntrlModeMtrB)1U)
#define CeHTDR_e_MtrB_SpdCntrl		((TeHTDR_e_DVC_CntrlModeMtrB)2U)
#endif

/*
* Enum TeHTDR_e_DVC_CntrlModeMtrC 
* Default Value:CeHTDR_e_MtrC_NormCntrl 
*/
#ifndef TeHTDR_e_DVC_CntrlModeMtrC
typedef uint8 TeHTDR_e_DVC_CntrlModeMtrC;
#define CeHTDR_e_MtrC_NormCntrl		((TeHTDR_e_DVC_CntrlModeMtrC)0U)
#define CeHTDR_e_MtrC_TorqCntrl		((TeHTDR_e_DVC_CntrlModeMtrC)1U)
#define CeHTDR_e_MtrC_SpdCntrl		((TeHTDR_e_DVC_CntrlModeMtrC)2U)
#endif

/*
* Enum TeHTDR_e_AHH_ApplyReleaseReq 
* Default Value:CeHTDR_e_AHH_Inactive 
*/
#ifndef TeHTDR_e_AHH_ApplyReleaseReq
typedef uint8 TeHTDR_e_AHH_ApplyReleaseReq;
#define CeHTDR_e_AHH_Inactive		((TeHTDR_e_AHH_ApplyReleaseReq)0U)
#define CeHTDR_e_AHH_Apply		((TeHTDR_e_AHH_ApplyReleaseReq)1U)
#define CeHTDR_e_AHH_Blended_Release		((TeHTDR_e_AHH_ApplyReleaseReq)2U)
#define CeHTDR_e_AHH_ReqNotDefined		((TeHTDR_e_AHH_ApplyReleaseReq)3U)
#define CeHTDR_e_AHH_Fast_Release		((TeHTDR_e_AHH_ApplyReleaseReq)4U)
#define CeHTDR_e_AHH_EPB_Apply		((TeHTDR_e_AHH_ApplyReleaseReq)5U)
#define CeHTDR_e_AHH_Hydrl_Apply		((TeHTDR_e_AHH_ApplyReleaseReq)6U)
#define CeHTDR_e_AHH_SNA		((TeHTDR_e_AHH_ApplyReleaseReq)7U)
#endif

/*
* Enum TeHTDR_e_AHH_StateReq 
* Default Value:CeHTDR_e_AHH_State_OFF 
*/
#ifndef TeHTDR_e_AHH_StateReq
typedef uint8 TeHTDR_e_AHH_StateReq;
#define CeHTDR_e_AHH_State_OFF		((TeHTDR_e_AHH_StateReq)0U)
#define CeHTDR_e_Brakes_Reqstd		((TeHTDR_e_AHH_StateReq)1U)
#define CeHTDR_e_HCP_RmpDwnTrq_to_Hold		((TeHTDR_e_AHH_StateReq)2U)
#define CeHTDR_e_TCM_RmpDwnTrq_to_Hold		((TeHTDR_e_AHH_StateReq)3U)
#define CeHTDR_e_AHH_Drive_OFF		((TeHTDR_e_AHH_StateReq)4U)
#define CeHTDR_e_AHH_Rollback		((TeHTDR_e_AHH_StateReq)5U)
#define CeHTDR_e_ReqNotDefined		((TeHTDR_e_AHH_StateReq)6U)
#define CeHTDR_e_AHH_State_SNA		((TeHTDR_e_AHH_StateReq)7U)
#endif

/*
* Enum TeHTDR_e_ToNVHHys 
* Default Value:CeHTDR_e_AtToMinNVH 
*/
#ifndef TeHTDR_e_ToNVHHys
typedef uint8 TeHTDR_e_ToNVHHys;
#define CeHTDR_e_AtToMinNVH		((TeHTDR_e_ToNVHHys)0U)
#define CeHTDR_e_AtToMaxNVH		((TeHTDR_e_ToNVHHys)1U)
#define CeHTDR_e_BelowToMinNVH		((TeHTDR_e_ToNVHHys)2U)
#define CeHTDR_e_AboveToMaxNVH		((TeHTDR_e_ToNVHHys)3U)
#endif

/*
* Enum TeHTDR_e_AccPwrMngSts 
* Default Value:CeHTDR_e_PowerNotAvail 
*/
#ifndef TeHTDR_e_AccPwrMngSts
typedef uint8 TeHTDR_e_AccPwrMngSts;
#define CeHTDR_e_PowerNotAvail		((TeHTDR_e_AccPwrMngSts)0U)
#define CeHTDR_e_PowerAvail		((TeHTDR_e_AccPwrMngSts)1U)
#define CeHTDR_e_NotUsed		((TeHTDR_e_AccPwrMngSts)2U)
#define CeHTDR_e_PowerMngFaulted		((TeHTDR_e_AccPwrMngSts)3U)
#endif

/*
* Enum TeHTIR_e_HVC_HtrSts 
* Default Value:CeHTIR_e_HtrSts_Off 
*/
#ifndef TeHTIR_e_HVC_HtrSts
typedef uint8 TeHTIR_e_HVC_HtrSts;
#define CeHTIR_e_HtrSts_Off		((TeHTIR_e_HVC_HtrSts)0U)
#define CeHTIR_e_HtrSts_LockedUntilNextStart		((TeHTIR_e_HVC_HtrSts)1U)
#define CeHTIR_e_HtrSts_LockedUntilService		((TeHTIR_e_HVC_HtrSts)2U)
#define CeHTIR_e_HtrSts_LockedPermanent		((TeHTIR_e_HVC_HtrSts)3U)
#define CeHTIR_e_HtrSts_Operation		((TeHTIR_e_HVC_HtrSts)4U)
#define CeHTIR_e_HtrSts_Production_Mode		((TeHTIR_e_HVC_HtrSts)5U)
#endif

/*
* Enum TeHTIR_e_HVC_Htr_Warning 
* Default Value:CeHTIR_e_Warning_False 
*/
#ifndef TeHTIR_e_HVC_Htr_Warning
typedef uint8 TeHTIR_e_HVC_Htr_Warning;
#define CeHTIR_e_Warning_False		((TeHTIR_e_HVC_Htr_Warning)0U)
#define CeHTIR_e_Warning_True		((TeHTIR_e_HVC_Htr_Warning)1U)
#define CeHTIR_e_Warning_SNA		((TeHTIR_e_HVC_Htr_Warning)3U)
#endif

/*
* Enum TeHTIR_e_IO_CntrlSt 
* Default Value:CeHTIR_e_Return_Control_to_ECU 
*/
#ifndef TeHTIR_e_IO_CntrlSt
typedef uint8 TeHTIR_e_IO_CntrlSt;
#define CeHTIR_e_Return_Control_to_ECU		((TeHTIR_e_IO_CntrlSt)0U)
#define CeHTIR_e_Reset_to_Default		((TeHTIR_e_IO_CntrlSt)1U)
#define CeHTIR_e_Short_Term_Adjustment		((TeHTIR_e_IO_CntrlSt)3U)
#endif

/*
* Enum TeHTRR_e_HVC_HtrSts 
* Default Value:CeHTRR_e_HtrSts_Off 
*/
#ifndef TeHTRR_e_HVC_HtrSts
typedef uint8 TeHTRR_e_HVC_HtrSts;
#define CeHTRR_e_HtrSts_Off		((TeHTRR_e_HVC_HtrSts)0U)
#define CeHTRR_e_HtrSts_LockedUntilNextStart		((TeHTRR_e_HVC_HtrSts)1U)
#define CeHTRR_e_HtrSts_LockedUntilService		((TeHTRR_e_HVC_HtrSts)2U)
#define CeHTRR_e_HtrSts_LockedPermanent		((TeHTRR_e_HVC_HtrSts)3U)
#define CeHTRR_e_HtrSts_Operation		((TeHTRR_e_HVC_HtrSts)4U)
#define CeHTRR_e_HtrSts_Production_Mode		((TeHTRR_e_HVC_HtrSts)5U)
#endif

/*
* Enum TeHTRR_e_HVC_Htr_Warning 
* Default Value:CeHTRR_e_Warning_False 
*/
#ifndef TeHTRR_e_HVC_Htr_Warning
typedef uint8 TeHTRR_e_HVC_Htr_Warning;
#define CeHTRR_e_Warning_False		((TeHTRR_e_HVC_Htr_Warning)0U)
#define CeHTRR_e_Warning_True		((TeHTRR_e_HVC_Htr_Warning)1U)
#define CeHTRR_e_Warning_SNA		((TeHTRR_e_HVC_Htr_Warning)3U)
#endif

/*
* Enum TeHTRR_e_Htr_State 
* Default Value:CeHTRR_e_Htr_Off 
*/
#ifndef TeHTRR_e_Htr_State
typedef uint8 TeHTRR_e_Htr_State;
#define CeHTRR_e_Htr_Off		((TeHTRR_e_Htr_State)0U)
#define CeHTRR_e_Htr_On		((TeHTRR_e_Htr_State)1U)
#define CeHTRR_e_Htr_Faulty		((TeHTRR_e_Htr_State)100U)
#endif

/*
* Enum TeHTRR_e_HVC_HtrUnlockSts 
* Default Value:CeHTRR_e_UnlockPass 
*/
#ifndef TeHTRR_e_HVC_HtrUnlockSts
typedef uint8 TeHTRR_e_HVC_HtrUnlockSts;
#define CeHTRR_e_UnlockPass		((TeHTRR_e_HVC_HtrUnlockSts)0U)
#define CeHTRR_e_UnlockFailed		((TeHTRR_e_HVC_HtrUnlockSts)1U)
#define CeHTRR_e_UnlockFailedPermanent		((TeHTRR_e_HVC_HtrUnlockSts)2U)
#define CeHTRR_e_HeaterLOC		((TeHTRR_e_HVC_HtrUnlockSts)4U)
#define CeHTRR_e_UnlockInProgress		((TeHTRR_e_HVC_HtrUnlockSts)3U)
#endif

/*
* Enum TeHVTR_e_HV_IntrlkStat 
* Default Value:CeHVTR_e_IntrlkNotSourced 
*/
#ifndef TeHVTR_e_HV_IntrlkStat
typedef uint8 TeHVTR_e_HV_IntrlkStat;
#define CeHVTR_e_IntrlkNotSourced		((TeHVTR_e_HV_IntrlkStat)0U)
#define CeHVTR_e_IntrlkPassed		((TeHVTR_e_HV_IntrlkStat)1U)
#define CeHVTR_e_IntrlkFailed		((TeHVTR_e_HV_IntrlkStat)2U)
#define CeHVTR_e_IntrlkInvalid		((TeHVTR_e_HV_IntrlkStat)3U)
#define CeHVTR_e_SrvcDisconnect		((TeHVTR_e_HV_IntrlkStat)4U)
#endif

/*
* Enum TeHVTR_e_HV_IsolStat 
* Default Value:CeHVTR_e_IsolUndetermined 
*/
#ifndef TeHVTR_e_HV_IsolStat
typedef uint8 TeHVTR_e_HV_IsolStat;
#define CeHVTR_e_IsolUndetermined		((TeHVTR_e_HV_IsolStat)0U)
#define CeHVTR_e_IsolPassed		((TeHVTR_e_HV_IsolStat)1U)
#define CeHVTR_e_IsolFailed		((TeHVTR_e_HV_IsolStat)2U)
#endif

/*
* Enum TeHVTR_e_SlctHVILSts 
* Default Value:CeHVTR_e_SensePoint 
*/
#ifndef TeHVTR_e_SlctHVILSts
typedef uint8 TeHVTR_e_SlctHVILSts;
#define CeHVTR_e_SensePoint		((TeHVTR_e_SlctHVILSts)0U)
#define CeHVTR_e_CANBasedType1		((TeHVTR_e_SlctHVILSts)1U)
#define CeHVTR_e_CANBasedType2		((TeHVTR_e_SlctHVILSts)2U)
#endif

/*
* Enum TeHVTR_e_SrvcRoutineResult 
* Default Value:CeHVTR_e_SrvcPrcDisbld 
*/
#ifndef TeHVTR_e_SrvcRoutineResult
typedef uint8 TeHVTR_e_SrvcRoutineResult;
#define CeHVTR_e_SrvcPrcDisbld		((TeHVTR_e_SrvcRoutineResult)0U)
#define CeHVTR_e_SrvcPrcEnbld		((TeHVTR_e_SrvcRoutineResult)1U)
#define CeHVTR_e_Failed_HV_error		((TeHVTR_e_SrvcRoutineResult)2U)
#define CeHVTR_e_Failed_MSD_error		((TeHVTR_e_SrvcRoutineResult)3U)
#define CeHVTR_e_Failed_PreConNtCrct		((TeHVTR_e_SrvcRoutineResult)4U)
#define CeHVTR_e_InPrgrs_HVPwrDwn		((TeHVTR_e_SrvcRoutineResult)5U)
#define CeHVTR_e_NtPrfmd		((TeHVTR_e_SrvcRoutineResult)6U)
#define CeHVTR_e_RemovedMSD		((TeHVTR_e_SrvcRoutineResult)7U)
#define CeHVTR_e_RestoredMSD		((TeHVTR_e_SrvcRoutineResult)8U)
#define CeHVTR_e_Failed_StsUnknown		((TeHVTR_e_SrvcRoutineResult)9U)
#endif

/*
* Enum TeHVTR_e_HVOverVoltFailure 
* Default Value:CeHVTR_e_HVOverVoltPass 
*/
#ifndef TeHVTR_e_HVOverVoltFailure
typedef uint8 TeHVTR_e_HVOverVoltFailure;
#define CeHVTR_e_HVOverVoltPass		((TeHVTR_e_HVOverVoltFailure)0U)
#define CeHVTR_e_HVOverVoltFailureNoRegenLimp		((TeHVTR_e_HVOverVoltFailure)1U)
#define CeHVTR_e_HVOverVoltFailureLimVehicleSpd		((TeHVTR_e_HVOverVoltFailure)2U)
#define CeHVTR_e_HVOverVoltFailureSysShtdwn		((TeHVTR_e_HVOverVoltFailure)3U)
#endif

/*
* Enum TeHVTR_e_HVBusVSrc 
* Default Value:CeHVTR_e_MtrABavgV 
*/
#ifndef TeHVTR_e_HVBusVSrc
typedef uint8 TeHVTR_e_HVBusVSrc;
#define CeHVTR_e_MtrABavgV		((TeHVTR_e_HVBusVSrc)0U)
#define CeHVTR_e_MtrAV		((TeHVTR_e_HVBusVSrc)1U)
#define CeHVTR_e_MtrBV		((TeHVTR_e_HVBusVSrc)2U)
#define CeHVTR_e_HVBatV		((TeHVTR_e_HVBusVSrc)3U)
#define CeHVTR_e_APMHV		((TeHVTR_e_HVBusVSrc)4U)
#define CeHVTR_e_NoSrcAvlb		((TeHVTR_e_HVBusVSrc)5U)
#define CeHVTR_e_MtrABCavgV		((TeHVTR_e_HVBusVSrc)6U)
#define CeHVTR_e_MtrCV		((TeHVTR_e_HVBusVSrc)7U)
#define CeHVTR_e_HVAC		((TeHVTR_e_HVBusVSrc)8U)
#endif

/*
* Enum TeHVTR_e_HV_BatCntctrStat 
* Default Value:CeHVTR_e_Open 
*/
#ifndef TeHVTR_e_HV_BatCntctrStat
typedef uint8 TeHVTR_e_HV_BatCntctrStat;
#define CeHVTR_e_Open		((TeHVTR_e_HV_BatCntctrStat)0U)
#define CeHVTR_e_PrechrgActv		((TeHVTR_e_HV_BatCntctrStat)1U)
#define CeHVTR_e_Closed		((TeHVTR_e_HV_BatCntctrStat)2U)
#define CeHVTR_e_PrechrgFailed		((TeHVTR_e_HV_BatCntctrStat)3U)
#define CeHVTR_e_PrechrgInhibited		((TeHVTR_e_HV_BatCntctrStat)4U)
#define CeHVTR_e_BatCntctrSts_SNA		((TeHVTR_e_HV_BatCntctrStat)7U)
#endif

/*
* Enum TeIDCR_e_ChrgFailSts 
* Default Value:CeIDCR_e_No_FLT 
*/
#ifndef TeIDCR_e_ChrgFailSts
typedef uint8 TeIDCR_e_ChrgFailSts;
#define CeIDCR_e_No_FLT		((TeIDCR_e_ChrgFailSts)0U)
#define CeIDCR_e_Flt_ChrgAlwd		((TeIDCR_e_ChrgFailSts)1U)
#define CeIDCR_e_Flt_ChrgNotAlwd		((TeIDCR_e_ChrgFailSts)2U)
#define CeIDCR_e_Flt_ChrgTerm		((TeIDCR_e_ChrgFailSts)3U)
#define CeIDCR_e_Flt_SNA		((TeIDCR_e_ChrgFailSts)7U)
#endif

/*
* Enum TeIDCR_e_EVSE_PilotStat_OBCM 
* Default Value:CeIDCR_e_NO_EVSE_OBCM 
*/
#ifndef TeIDCR_e_EVSE_PilotStat_OBCM
typedef uint8 TeIDCR_e_EVSE_PilotStat_OBCM;
#define CeIDCR_e_NO_EVSE_OBCM		((TeIDCR_e_EVSE_PilotStat_OBCM)0U)
#define CeIDCR_e_CP_DET_EVSE_OBCM		((TeIDCR_e_EVSE_PilotStat_OBCM)1U)
#define CeIDCR_e_VOOR_EVSE_OBCM		((TeIDCR_e_EVSE_PilotStat_OBCM)2U)
#define CeIDCR_e_EVSE_NO_AC		((TeIDCR_e_EVSE_PilotStat_OBCM)3U)
#define CeIDCR_e_EVSE_HW_Flt		((TeIDCR_e_EVSE_PilotStat_OBCM)4U)
#define CeIDCR_e_EVSE_Flt		((TeIDCR_e_EVSE_PilotStat_OBCM)5U)
#endif

/*
* Enum TeIDCR_e_ProxStat_OBCM 
* Default Value:CeIDCR_e_ProxLo_OBCM 
*/
#ifndef TeIDCR_e_ProxStat_OBCM
typedef uint8 TeIDCR_e_ProxStat_OBCM;
#define CeIDCR_e_ProxLo_OBCM		((TeIDCR_e_ProxStat_OBCM)0U)
#define CeIDCR_e_ProxOut_OBCM		((TeIDCR_e_ProxStat_OBCM)1U)
#define CeIDCR_e_ProxIn_OBCM		((TeIDCR_e_ProxStat_OBCM)2U)
#define CeIDCR_e_ProxUN_OBCM		((TeIDCR_e_ProxStat_OBCM)3U)
#define CeIDCR_e_ProxVOOR_OBCM		((TeIDCR_e_ProxStat_OBCM)6U)
#define CeIDCR_e_ProxHi_OBCM		((TeIDCR_e_ProxStat_OBCM)7U)
#endif

/*
* Enum TeIDCR_e_ChrgrModeStat_OBCM 
* Default Value:CeIDCR_e_Idle_OBCM 
*/
#ifndef TeIDCR_e_ChrgrModeStat_OBCM
typedef uint8 TeIDCR_e_ChrgrModeStat_OBCM;
#define CeIDCR_e_Idle_OBCM		((TeIDCR_e_ChrgrModeStat_OBCM)0U)
#define CeIDCR_e_Heater_OBCM		((TeIDCR_e_ChrgrModeStat_OBCM)1U)
#define CeIDCR_e_Charge_OBCM		((TeIDCR_e_ChrgrModeStat_OBCM)2U)
#define CeIDCR_e_AC_PNL		((TeIDCR_e_ChrgrModeStat_OBCM)3U)
#define CeIDCR_e_AC_GRD_Sync		((TeIDCR_e_ChrgrModeStat_OBCM)4U)
#define CeIDCR_e_AC_GRD_Synth		((TeIDCR_e_ChrgrModeStat_OBCM)5U)
#define CeIDCR_e_Stop_OBCM		((TeIDCR_e_ChrgrModeStat_OBCM)6U)
#define CeIDCR_e_ChrgrModeStat_SNA		((TeIDCR_e_ChrgrModeStat_OBCM)7U)
#endif

/*
* Enum TeIDCR_e_OBCM_Charger_Ready 
* Default Value:CeIDCR_e_CR_WU_FLT 
*/
#ifndef TeIDCR_e_OBCM_Charger_Ready
typedef uint8 TeIDCR_e_OBCM_Charger_Ready;
#define CeIDCR_e_CR_WU_FLT		((TeIDCR_e_OBCM_Charger_Ready)0U)
#define CeIDCR_e_CR_OFF		((TeIDCR_e_OBCM_Charger_Ready)1U)
#define CeIDCR_e_CR_ON		((TeIDCR_e_OBCM_Charger_Ready)2U)
#define CeIDCR_e_CR_SNA		((TeIDCR_e_OBCM_Charger_Ready)3U)
#endif

/*
* Enum TeIDCR_e_RC 
* Default Value:CeIDCR_e_RC_OK 
*/
#ifndef TeIDCR_e_RC
typedef uint8 TeIDCR_e_RC;
#define CeIDCR_e_RC_OK		((TeIDCR_e_RC)0U)
#define CeIDCR_e_RC_OK_CertExpSoon		((TeIDCR_e_RC)1U)
#define CeIDCR_e_RC_Ok_NewSessionEst		((TeIDCR_e_RC)2U)
#define CeIDCR_e_RC_Ok_OldSessionJoin		((TeIDCR_e_RC)3U)
#define CeIDCR_e_RC_FLD		((TeIDCR_e_RC)4U)
#define CeIDCR_e_RC_FLD_SeqErr		((TeIDCR_e_RC)5U)
#define CeIDCR_e_RC_FLD_SignErr		((TeIDCR_e_RC)6U)
#define CeIDCR_e_RC_FLD_UnkwnSession		((TeIDCR_e_RC)7U)
#define CeIDCR_e_RC_FLD_SrvcIDInv		((TeIDCR_e_RC)8U)
#define CeIDCR_e_RC_FLD_PaySelInv		((TeIDCR_e_RC)9U)
#define CeIDCR_e_RC_FLD_SrvcSelInv		((TeIDCR_e_RC)10U)
#define CeIDCR_e_RC_FLD_CertExp		((TeIDCR_e_RC)11U)
#define CeIDCR_e_RC_FLD_NoCertAvail		((TeIDCR_e_RC)12U)
#define CeIDCR_e_RC_FLD_CertChainErr		((TeIDCR_e_RC)13U)
#define CeIDCR_e_RC_FLD_CntrctCncld		((TeIDCR_e_RC)14U)
#define CeIDCR_e_RC_FLD_ChllngrInv		((TeIDCR_e_RC)15U)
#define CeIDCR_e_RC_FLD_WrngEnrgyTxType		((TeIDCR_e_RC)16U)
#define CeIDCR_e_RC_FLD_WrngChrgParam		((TeIDCR_e_RC)17U)
#define CeIDCR_e_RC_FLD_ChrgngProfInv		((TeIDCR_e_RC)18U)
#define CeIDCR_e_RC_FLD_TariffSelInv		((TeIDCR_e_RC)19U)
#define CeIDCR_e_RC_FLD_EVSEPrsntVoltTooLow		((TeIDCR_e_RC)20U)
#define CeIDCR_e_RC_FLD_PwrDlvryNtAppld		((TeIDCR_e_RC)21U)
#define CeIDCR_e_RC_FLD_MeterSignNtVal		((TeIDCR_e_RC)22U)
#define CeIDCR_e_RC_OK_SuccessfulNego		((TeIDCR_e_RC)23U)
#define CeIDCR_e_RC_OK_SucceedNegoMinrDvtn		((TeIDCR_e_RC)24U)
#define CeIDCR_e_RC_Failed_NoNego		((TeIDCR_e_RC)25U)
#define CeIDCR_e_RC_SNA		((TeIDCR_e_RC)31U)
#endif

/*
* Enum TeIDCR_e_EVSEIsolSts 
* Default Value:CeIDCR_e_EVSEIsolSts_Invalid 
*/
#ifndef TeIDCR_e_EVSEIsolSts
typedef uint8 TeIDCR_e_EVSEIsolSts;
#define CeIDCR_e_EVSEIsolSts_Invalid		((TeIDCR_e_EVSEIsolSts)0U)
#define CeIDCR_e_EVSEIsolSts_Valid_Safe		((TeIDCR_e_EVSEIsolSts)1U)
#define CeIDCR_e_EVSEIsolSts_Warning		((TeIDCR_e_EVSEIsolSts)2U)
#define CeIDCR_e_EVSEIsolSts_Fault		((TeIDCR_e_EVSEIsolSts)3U)
#define CeIDCR_e_EVSEIsolSts_No_IMD		((TeIDCR_e_EVSEIsolSts)4U)
#define CeIDCR_e_EVSEIsolSts_SNA		((TeIDCR_e_EVSEIsolSts)7U)
#endif

/*
* Enum TeIDCR_e_EVSEStsCode 
* Default Value:CeIDCR_e_EVSEStsCode_No_Data 
*/
#ifndef TeIDCR_e_EVSEStsCode
typedef uint8 TeIDCR_e_EVSEStsCode;
#define CeIDCR_e_EVSEStsCode_ChrgrStndbyNtRdy		((TeIDCR_e_EVSEStsCode)0U)
#define CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng		((TeIDCR_e_EVSEStsCode)1U)
#define CeIDCR_e_EVSEStsCode_ChrgrPrepaidLmtExcd		((TeIDCR_e_EVSEStsCode)2U)
#define CeIDCR_e_EVSEStsCode_ChrgrShtdwn		((TeIDCR_e_EVSEStsCode)3U)
#define CeIDCR_e_EVSEStsCode_UtilIntrrptEvnt		((TeIDCR_e_EVSEStsCode)4U)
#define CeIDCR_e_EVSEStsCode_IsolMntrIntrnl		((TeIDCR_e_EVSEStsCode)5U)
#define CeIDCR_e_EVSEStsCode_IsolMntrAct		((TeIDCR_e_EVSEStsCode)6U)
#define CeIDCR_e_EVSEStsCode_ChrgrEmrgncyShtdwn		((TeIDCR_e_EVSEStsCode)7U)
#define CeIDCR_e_EVSEStsCode_Reserved1		((TeIDCR_e_EVSEStsCode)8U)
#define CeIDCR_e_EVSEStsCode_Reserved2		((TeIDCR_e_EVSEStsCode)9U)
#define CeIDCR_e_EVSEStsCode_Reserved3		((TeIDCR_e_EVSEStsCode)10U)
#define CeIDCR_e_EVSEStsCode_Reserved4		((TeIDCR_e_EVSEStsCode)11U)
#define CeIDCR_e_EVSEStsCode_Reserved5		((TeIDCR_e_EVSEStsCode)12U)
#define CeIDCR_e_EVSEStsCodeChrgrSysIncomp		((TeIDCR_e_EVSEStsCode)13U)
#define CeIDCR_e_EVSEStsCode_ChrgrMlfnc		((TeIDCR_e_EVSEStsCode)14U)
#define CeIDCR_e_EVSEStsCode_No_Data		((TeIDCR_e_EVSEStsCode)15U)
#endif

/*
* Enum TeIDCR_e_OffrdEnrgyTxType 
* Default Value:CeIDCR_e_EnrgyTxType_NoEnrgyTxType 
*/
#ifndef TeIDCR_e_OffrdEnrgyTxType
typedef uint8 TeIDCR_e_OffrdEnrgyTxType;
#define CeIDCR_e_EnrgyTxType_NoEnrgyTxType		((TeIDCR_e_OffrdEnrgyTxType)0U)
#define CeIDCR_e_EnrgyTxType_AC_SinglePhCore		((TeIDCR_e_OffrdEnrgyTxType)1U)
#define CeIDCR_e_EnrgyTxType_AC_ThreePhCore		((TeIDCR_e_OffrdEnrgyTxType)2U)
#define CeIDCR_e_EnrgyTxType_DCCore		((TeIDCR_e_OffrdEnrgyTxType)3U)
#define CeIDCR_e_EnrgyTxType_DCExtended		((TeIDCR_e_OffrdEnrgyTxType)4U)
#define CeIDCR_e_EnrgyTxType_DCComboCore		((TeIDCR_e_OffrdEnrgyTxType)5U)
#define CeIDCR_e_EnrgyTxType_DCUnique		((TeIDCR_e_OffrdEnrgyTxType)6U)
#define CeIDCR_e_EnrgyTxType_SNA		((TeIDCR_e_OffrdEnrgyTxType)15U)
#endif

/*
* Enum TeIDCR_e_OffrdPayOptn 
* Default Value:CeIDCR_e_OffrdPayOptn_NoPaySel 
*/
#ifndef TeIDCR_e_OffrdPayOptn
typedef uint8 TeIDCR_e_OffrdPayOptn;
#define CeIDCR_e_OffrdPayOptn_NoPaySel		((TeIDCR_e_OffrdPayOptn)0U)
#define CeIDCR_e_OffrdPayOptn_ExtPay		((TeIDCR_e_OffrdPayOptn)1U)
#define CeIDCR_e_OffrdPayOptn_Contract		((TeIDCR_e_OffrdPayOptn)2U)
#define CeIDCR_e_OffrdPayOptn_SNA		((TeIDCR_e_OffrdPayOptn)3U)
#endif

/*
* Enum TeIDCR_e_SDP_Sts 
* Default Value:CeIDCR_e_SDPSts_NoConnEst 
*/
#ifndef TeIDCR_e_SDP_Sts
typedef uint8 TeIDCR_e_SDP_Sts;
#define CeIDCR_e_SDPSts_NoConnEst		((TeIDCR_e_SDP_Sts)0U)
#define CeIDCR_e_SDPSts_ConnEst		((TeIDCR_e_SDP_Sts)1U)
#define CeIDCR_e_SDPSts_NotInitialized		((TeIDCR_e_SDP_Sts)2U)
#define CeIDCR_e_SDPSts_SNA		((TeIDCR_e_SDP_Sts)3U)
#endif

/*
* Enum TeIDCR_e_SLACSts 
* Default Value:CeIDCR_e_SLACSts_EVSE_NtFnd 
*/
#ifndef TeIDCR_e_SLACSts
typedef uint8 TeIDCR_e_SLACSts;
#define CeIDCR_e_SLACSts_EVSE_NtFnd		((TeIDCR_e_SLACSts)0U)
#define CeIDCR_e_SLACSts_EVSE_PtntllyFnd		((TeIDCR_e_SLACSts)1U)
#define CeIDCR_e_SLACSts_EVSE_Fnd		((TeIDCR_e_SLACSts)2U)
#define CeIDCR_e_SLACSts_NotInitialized		((TeIDCR_e_SLACSts)3U)
#define CeIDCR_e_SLACSts_SNA		((TeIDCR_e_SLACSts)7U)
#endif

/*
* Enum TeIDCR_e_SupProtoNm 
* Default Value:CeIDCR_e_SupProtoNm_NoProto 
*/
#ifndef TeIDCR_e_SupProtoNm
typedef uint8 TeIDCR_e_SupProtoNm;
#define CeIDCR_e_SupProtoNm_NoProto		((TeIDCR_e_SupProtoNm)0U)
#define CeIDCR_e_SupProtoNm_ISO_2		((TeIDCR_e_SupProtoNm)1U)
#define CeIDCR_e_SupProtoNm_ISO_1		((TeIDCR_e_SupProtoNm)2U)
#define CeIDCR_e_SupProtoNm_DIN		((TeIDCR_e_SupProtoNm)3U)
#define CeIDCR_e_SupProtoNm_SNA		((TeIDCR_e_SupProtoNm)7U)
#endif

/*
* Enum TeIDCR_e_SupSchemaID 
* Default Value:CeIDCR_e_SupSchemaID_NoID 
*/
#ifndef TeIDCR_e_SupSchemaID
typedef uint8 TeIDCR_e_SupSchemaID;
#define CeIDCR_e_SupSchemaID_NoID		((TeIDCR_e_SupSchemaID)0U)
#define CeIDCR_e_SupSchemaID_Schema_ID1		((TeIDCR_e_SupSchemaID)1U)
#define CeIDCR_e_SupSchemaID_Schema_ID2		((TeIDCR_e_SupSchemaID)2U)
#define CeIDCR_e_SupSchemaID_Schema_ID3		((TeIDCR_e_SupSchemaID)3U)
#define CeIDCR_e_SupSchemaID_SNA		((TeIDCR_e_SupSchemaID)7U)
#endif

/*
* Enum TeIDCR_e_SupVerNum 
* Default Value:CeIDCR_e_SupVerNum_NoVer 
*/
#ifndef TeIDCR_e_SupVerNum
typedef uint8 TeIDCR_e_SupVerNum;
#define CeIDCR_e_SupVerNum_NoVer		((TeIDCR_e_SupVerNum)0U)
#define CeIDCR_e_SupVerNum_Ver1		((TeIDCR_e_SupVerNum)1U)
#define CeIDCR_e_SupVerNum_Ver2		((TeIDCR_e_SupVerNum)2U)
#define CeIDCR_e_SupVerNum_SNA		((TeIDCR_e_SupVerNum)7U)
#endif

/*
* Enum TeIDCR_e_EVCCFailRsn 
* Default Value:CeIDCR_e_EVCCFail_None 
*/
#ifndef TeIDCR_e_EVCCFailRsn
typedef uint8 TeIDCR_e_EVCCFailRsn;
#define CeIDCR_e_EVCCFail_None		((TeIDCR_e_EVCCFailRsn)0U)
#define CeIDCR_e_EVCCFail_SLAC		((TeIDCR_e_EVCCFailRsn)1U)
#define CeIDCR_e_EVCCFail_SECC_DiscProto		((TeIDCR_e_EVCCFailRsn)2U)
#define CeIDCR_e_EVCCFail_TrnsprtLay		((TeIDCR_e_EVCCFailRsn)3U)
#define CeIDCR_e_EVCCFail_SuppAppProto		((TeIDCR_e_EVCCFailRsn)4U)
#define CeIDCR_e_EVCCFail_SessSetup		((TeIDCR_e_EVCCFailRsn)5U)
#define CeIDCR_e_EVCCFail_SrvcDisc		((TeIDCR_e_EVCCFailRsn)6U)
#define CeIDCR_e_EVCCFail_ReadCntrCertChain		((TeIDCR_e_EVCCFailRsn)7U)
#define CeIDCR_e_EVCCFail_SrvcDet		((TeIDCR_e_EVCCFailRsn)8U)
#define CeIDCR_e_EVCCFail_PaySrvcSel		((TeIDCR_e_EVCCFailRsn)9U)
#define CeIDCR_e_EVCCFail_ReadRootsCert		((TeIDCR_e_EVCCFailRsn)10U)
#define CeIDCR_e_EVCCFail_ReadProvCert		((TeIDCR_e_EVCCFailRsn)11U)
#define CeIDCR_e_EVCCFail_CertInstal		((TeIDCR_e_EVCCFailRsn)12U)
#define CeIDCR_e_EVCCFail_CertUpdate		((TeIDCR_e_EVCCFailRsn)13U)
#define CeIDCR_e_EVCCFail_PayDet		((TeIDCR_e_EVCCFailRsn)14U)
#define CeIDCR_e_EVCCFail_Authorization		((TeIDCR_e_EVCCFailRsn)15U)
#define CeIDCR_e_EVCCFail_ChrgParamDisc		((TeIDCR_e_EVCCFailRsn)16U)
#define CeIDCR_e_EVCCFail_PwrDlvry		((TeIDCR_e_EVCCFailRsn)17U)
#define CeIDCR_e_EVCCFail_MeteringRcpt		((TeIDCR_e_EVCCFailRsn)18U)
#define CeIDCR_e_EVCCFail_ChrgngStat		((TeIDCR_e_EVCCFailRsn)19U)
#define CeIDCR_e_EVCCFail_CableChk		((TeIDCR_e_EVCCFailRsn)20U)
#define CeIDCR_e_EVCCFail_PreChrg		((TeIDCR_e_EVCCFailRsn)21U)
#define CeIDCR_e_EVCCFail_CurrDemand		((TeIDCR_e_EVCCFailRsn)22U)
#define CeIDCR_e_EVCCFail_WeldDetctn		((TeIDCR_e_EVCCFailRsn)23U)
#define CeIDCR_e_EVCCFail_SessoionStp		((TeIDCR_e_EVCCFailRsn)24U)
#define CeIDCR_e_EVCCFail_StpCommSession		((TeIDCR_e_EVCCFailRsn)25U)
#define CeIDCR_e_EVCCFail_IPAddWaitTime		((TeIDCR_e_EVCCFailRsn)26U)
#define CeIDCR_e_EVCCFail_SeqPerfTime		((TeIDCR_e_EVCCFailRsn)27U)
#define CeIDCR_e_EVCCFail_CommSetupTime		((TeIDCR_e_EVCCFailRsn)28U)
#define CeIDCR_e_EVCCFail_RdytoChrgTime		((TeIDCR_e_EVCCFailRsn)29U)
#define CeIDCR_e_EVCCFail_AuthOngoingTime		((TeIDCR_e_EVCCFailRsn)30U)
#define CeIDCR_e_EVCCFail_ChrgParamDiscOngingTime		((TeIDCR_e_EVCCFailRsn)31U)
#define CeIDCR_e_EVCCFail_CableChkOngoingTime		((TeIDCR_e_EVCCFailRsn)32U)
#define CeIDCR_e_EVCCFail_PreChrgOngoingTime		((TeIDCR_e_EVCCFailRsn)33U)
#define CeIDCR_e_EVCCFail_InitCntrctSel_Fail		((TeIDCR_e_EVCCFailRsn)34U)
#define CeIDCR_e_EVCCFail_SDP_NoShrdSecOption		((TeIDCR_e_EVCCFailRsn)35U)
#define CeIDCR_e_EVCCFail_SD_InvEnrgy_TxMd		((TeIDCR_e_EVCCFailRsn)36U)
#define CeIDCR_e_EVCCFail_SD_NoShrdPayOption		((TeIDCR_e_EVCCFailRsn)37U)
#define CeIDCR_e_EVCCFail_SD_NoCntrct_NoCertSrvcAvail		((TeIDCR_e_EVCCFailRsn)38U)
#define CeIDCR_e_EVCCFail_SD_NoCntrct_InstalSrvcAvail		((TeIDCR_e_EVCCFailRsn)39U)
#define CeIDCR_e_TLS_Failed		((TeIDCR_e_EVCCFailRsn)40U)
#define CeIDCR_e_V2G_Cert_Invalid		((TeIDCR_e_EVCCFailRsn)41U)
#define CeIDCR_e_EVCCFail_SNA		((TeIDCR_e_EVCCFailRsn)63U)
#endif

/*
* Enum TeIDCR_e_Charger_FaultStates 
* Default Value:CeIDCR_e_GBT_No_FLT 
*/
#ifndef TeIDCR_e_Charger_FaultStates
typedef uint8 TeIDCR_e_Charger_FaultStates;
#define CeIDCR_e_GBT_No_FLT		((TeIDCR_e_Charger_FaultStates)0U)
#define CeIDCR_e_EmergencyShtdwn		((TeIDCR_e_Charger_FaultStates)1U)
#define CeIDCR_e_UnableToSupplyReqPwr		((TeIDCR_e_Charger_FaultStates)2U)
#define CeIDCR_e_OverTemp		((TeIDCR_e_Charger_FaultStates)3U)
#define CeIDCR_e_InnerOverTemp		((TeIDCR_e_Charger_FaultStates)4U)
#define CeIDCR_e_AbnormalVoltage		((TeIDCR_e_Charger_FaultStates)5U)
#define CeIDCR_e_CurrentNotMatching		((TeIDCR_e_Charger_FaultStates)6U)
#define CeIDCR_e_ConnectorFlt		((TeIDCR_e_Charger_FaultStates)7U)
#define CeIDCR_e_OtherFlt		((TeIDCR_e_Charger_FaultStates)8U)
#define CeIDCR_e_Init		((TeIDCR_e_Charger_FaultStates)14U)
#define CeIDCR_e_GBT_Flt_SNA		((TeIDCR_e_Charger_FaultStates)15U)
#endif

/*
* Enum TeIDCR_e_Prox_GBT 
* Default Value:CeIDCR_e_CC_LO 
*/
#ifndef TeIDCR_e_Prox_GBT
typedef uint8 TeIDCR_e_Prox_GBT;
#define CeIDCR_e_CC_LO		((TeIDCR_e_Prox_GBT)0U)
#define CeIDCR_e_CC_OUT		((TeIDCR_e_Prox_GBT)1U)
#define CeIDCR_e_CC_IN		((TeIDCR_e_Prox_GBT)2U)
#define CeIDCR_e_CC_HI		((TeIDCR_e_Prox_GBT)3U)
#define CeIDCR_e_CC_FAIL		((TeIDCR_e_Prox_GBT)4U)
#endif

/*
* Enum TeIDCR_e_TxGBTMessageRequest 
* Default Value:CeIDCR_e_GBTReq_EVSE_Not_Connected 
*/
#ifndef TeIDCR_e_TxGBTMessageRequest
typedef uint8 TeIDCR_e_TxGBTMessageRequest;
#define CeIDCR_e_GBTReq_EVSE_Not_Connected		((TeIDCR_e_TxGBTMessageRequest)0U)
#define CeIDCR_e_BHM		((TeIDCR_e_TxGBTMessageRequest)1U)
#define CeIDCR_e_BRM		((TeIDCR_e_TxGBTMessageRequest)2U)
#define CeIDCR_e_BCP		((TeIDCR_e_TxGBTMessageRequest)3U)
#define CeIDCR_e_BRO_BMS_NotReady		((TeIDCR_e_TxGBTMessageRequest)4U)
#define CeIDCR_e_BRO_BMS_Ready		((TeIDCR_e_TxGBTMessageRequest)5U)
#define CeIDCR_e_BCL		((TeIDCR_e_TxGBTMessageRequest)6U)
#define CeIDCR_e_BCS		((TeIDCR_e_TxGBTMessageRequest)7U)
#define CeIDCR_e_BSM		((TeIDCR_e_TxGBTMessageRequest)8U)
#define CeIDCR_e_BST		((TeIDCR_e_TxGBTMessageRequest)9U)
#define CeIDCR_e_BSD		((TeIDCR_e_TxGBTMessageRequest)10U)
#define CeIDCR_e_GBTReq_SNA		((TeIDCR_e_TxGBTMessageRequest)31U)
#endif

/*
* Enum TeIDCR_e_TxGBTMessageResponse 
* Default Value:CeIDCR_e_GBTRes_EVSE_Not_Connected 
*/
#ifndef TeIDCR_e_TxGBTMessageResponse
typedef uint8 TeIDCR_e_TxGBTMessageResponse;
#define CeIDCR_e_GBTRes_EVSE_Not_Connected		((TeIDCR_e_TxGBTMessageResponse)0U)
#define CeIDCR_e_CHM		((TeIDCR_e_TxGBTMessageResponse)1U)
#define CeIDCR_e_CRM_BMS_NotRecognized		((TeIDCR_e_TxGBTMessageResponse)2U)
#define CeIDCR_e_CRM_BMS_Recognized		((TeIDCR_e_TxGBTMessageResponse)3U)
#define CeIDCR_e_CML		((TeIDCR_e_TxGBTMessageResponse)4U)
#define CeIDCR_e_CRO_Charger_NotReady		((TeIDCR_e_TxGBTMessageResponse)5U)
#define CeIDCR_e_CRO_Charger_Ready		((TeIDCR_e_TxGBTMessageResponse)6U)
#define CeIDCR_e_CCS		((TeIDCR_e_TxGBTMessageResponse)7U)
#define CeIDCR_e_CST		((TeIDCR_e_TxGBTMessageResponse)8U)
#define CeIDCR_e_CSD		((TeIDCR_e_TxGBTMessageResponse)9U)
#define CeIDCR_e_GBTRes_SNA		((TeIDCR_e_TxGBTMessageResponse)31U)
#endif

/*
* Enum TeIDCR_e_V2L_DischargeFaultRsn 
* Default Value:CeIDCR_e_No_Fault 
*/
#ifndef TeIDCR_e_V2L_DischargeFaultRsn
typedef uint8 TeIDCR_e_V2L_DischargeFaultRsn;
#define CeIDCR_e_No_Fault		((TeIDCR_e_V2L_DischargeFaultRsn)0U)
#define CeIDCR_e_Comm_Fault		((TeIDCR_e_V2L_DischargeFaultRsn)1U)
#define CeIDCR_e_EVSE_InputCir_Fault		((TeIDCR_e_V2L_DischargeFaultRsn)2U)
#define CeIDCR_e_Batt_12VFault		((TeIDCR_e_V2L_DischargeFaultRsn)3U)
#define CeIDCR_e_OBCM_HV_Fault		((TeIDCR_e_V2L_DischargeFaultRsn)5U)
#define CeIDCR_e_Extern_Dev_Fault		((TeIDCR_e_V2L_DischargeFaultRsn)6U)
#define CeIDCR_e_WakeupCircuitFault		((TeIDCR_e_V2L_DischargeFaultRsn)7U)
#define CeIDCR_e_Impact		((TeIDCR_e_V2L_DischargeFaultRsn)8U)
#define CeIDCR_e_SNA		((TeIDCR_e_V2L_DischargeFaultRsn)15U)
#endif

/*
* Enum TeIDCR_e_EVSENotification 
* Default Value:CeIDCR_e_None 
*/
#ifndef TeIDCR_e_EVSENotification
typedef uint8 TeIDCR_e_EVSENotification;
#define CeIDCR_e_None		((TeIDCR_e_EVSENotification)0U)
#define CeIDCR_e_StopCharging		((TeIDCR_e_EVSENotification)1U)
#define CeIDCR_e_ReNegotiation		((TeIDCR_e_EVSENotification)2U)
#endif

/*
* Enum TeIDCR_e_Plug_and_Charge 
* Default Value:CeIDCR_e_Absent 
*/
#ifndef TeIDCR_e_Plug_and_Charge
typedef uint8 TeIDCR_e_Plug_and_Charge;
#define CeIDCR_e_Absent		((TeIDCR_e_Plug_and_Charge)0U)
#define CeIDCR_e_Step1		((TeIDCR_e_Plug_and_Charge)1U)
#define CeIDCR_e_Step2		((TeIDCR_e_Plug_and_Charge)2U)
#endif

/*
* Enum TeIDCR_e_V2L_DischargeDeratingRsn 
* Default Value:CeIDCR_e_No_Derating 
*/
#ifndef TeIDCR_e_V2L_DischargeDeratingRsn
typedef uint8 TeIDCR_e_V2L_DischargeDeratingRsn;
#define CeIDCR_e_No_Derating		((TeIDCR_e_V2L_DischargeDeratingRsn)0U)
#define CeIDCR_e_High_Temp_Derating		((TeIDCR_e_V2L_DischargeDeratingRsn)1U)
#define CeIDCR_e_Low_Temp_Derating		((TeIDCR_e_V2L_DischargeDeratingRsn)2U)
#define CeIDCR_e_Input_Voltage_Limit		((TeIDCR_e_V2L_DischargeDeratingRsn)3U)
#define CeIDCR_e_Input_Current_Limit		((TeIDCR_e_V2L_DischargeDeratingRsn)4U)
#define CeIDCR_e_Output_Voltage_Limit		((TeIDCR_e_V2L_DischargeDeratingRsn)5U)
#define CeIDCR_e_Output_Current_Limit		((TeIDCR_e_V2L_DischargeDeratingRsn)6U)
#define CeIDCR_e_Internal_Fault_Derating		((TeIDCR_e_V2L_DischargeDeratingRsn)7U)
#define CeIDCR_e_High_Charge_Inlet_Temp		((TeIDCR_e_V2L_DischargeDeratingRsn)8U)
#endif

/*
* Enum TeIDCR_e_V2X_FaultRsn 
* Default Value:CeIDCR_e_No_FAULT 
*/
#ifndef TeIDCR_e_V2X_FaultRsn
typedef uint8 TeIDCR_e_V2X_FaultRsn;
#define CeIDCR_e_No_FAULT		((TeIDCR_e_V2X_FaultRsn)0U)
#define CeIDCR_e_COMM_FAULT		((TeIDCR_e_V2X_FaultRsn)1U)
#define CeIDCR_e_Batt_12vFault		((TeIDCR_e_V2X_FaultRsn)2U)
#define CeIDCR_e_PPIM_AC_Fault		((TeIDCR_e_V2X_FaultRsn)3U)
#define CeIDCR_e_PPIM_DC_Fault		((TeIDCR_e_V2X_FaultRsn)4U)
#define CeIDCR_e_Wake_up_Circuit_Fault		((TeIDCR_e_V2X_FaultRsn)5U)
#define CeIDCR_e_IMPACT		((TeIDCR_e_V2X_FaultRsn)6U)
#define CeIDCR_e_Over_temperature_Fault		((TeIDCR_e_V2X_FaultRsn)7U)
#define CeIDCR_e_Fan_fault		((TeIDCR_e_V2X_FaultRsn)8U)
#define CeIDCR_e_Fault_Protection_Mode		((TeIDCR_e_V2X_FaultRsn)9U)
#define CeIDCR_e_GFCI_Fault		((TeIDCR_e_V2X_FaultRsn)10U)
#define CeIDCR_e_Sna		((TeIDCR_e_V2X_FaultRsn)15U)
#endif

/*
* Enum TeIDCR_e_V2X_ModeFeedback 
* Default Value:CeIDCR_e_No_Request 
*/
#ifndef TeIDCR_e_V2X_ModeFeedback
typedef uint8 TeIDCR_e_V2X_ModeFeedback;
#define CeIDCR_e_No_Request		((TeIDCR_e_V2X_ModeFeedback)0U)
#define CeIDCR_e_Idle		((TeIDCR_e_V2X_ModeFeedback)1U)
#define CeIDCR_e_Discharge		((TeIDCR_e_V2X_ModeFeedback)2U)
#define CeIDCR_e_Reserved		((TeIDCR_e_V2X_ModeFeedback)3U)
#endif

/*
* Enum TeIDCR_e_MessageResponse 
* Default Value:CeIDCR_e_No_V2G_comm 
*/
#ifndef TeIDCR_e_MessageResponse
typedef uint8 TeIDCR_e_MessageResponse;
#define CeIDCR_e_No_V2G_comm		((TeIDCR_e_MessageResponse)0U)
#define CeIDCR_e_SuppAppProt		((TeIDCR_e_MessageResponse)1U)
#define CeIDCR_e_SessionSet		((TeIDCR_e_MessageResponse)2U)
#define CeIDCR_e_ServiceDiscoveryRes		((TeIDCR_e_MessageResponse)3U)
#define CeIDCR_e_ServicePaySelectionRes		((TeIDCR_e_MessageResponse)4U)
#define CeIDCR_e_Contract_AuthRes		((TeIDCR_e_MessageResponse)5U)
#define CeIDCR_e_ChargeParamDiscoRes		((TeIDCR_e_MessageResponse)6U)
#define CeIDCR_e_CableCheckRes		((TeIDCR_e_MessageResponse)7U)
#define CeIDCR_e_Pre_chargeRes		((TeIDCR_e_MessageResponse)8U)
#define CeIDCR_e_PowerDelivRes_PreCh		((TeIDCR_e_MessageResponse)9U)
#define CeIDCR_e_CurrentDemandRes		((TeIDCR_e_MessageResponse)10U)
#define CeIDCR_e_PwrDelivryRes_enTras		((TeIDCR_e_MessageResponse)11U)
#define CeIDCR_e_WeldingDetectionRes		((TeIDCR_e_MessageResponse)12U)
#define CeIDCR_e_SessionStopRes		((TeIDCR_e_MessageResponse)13U)
#define CeIDCR_e_DC_BidirectionalCon		((TeIDCR_e_MessageResponse)14U)
#define CeIDCR_e_ServiceDetailRes		((TeIDCR_e_MessageResponse)15U)
#define CeIDCR_e_CertificateUpdateReq		((TeIDCR_e_MessageResponse)16U)
#define CeIDCR_e_CertifiacteInstalReq		((TeIDCR_e_MessageResponse)17U)
#define CeIDCR_e_MsgSNA		((TeIDCR_e_MessageResponse)31U)
#endif

/*
* Enum TeIDCR_e_EVSE_ChrgStopControl 
* Default Value:CeIDCR_e_No_Chrg_Stp_Cntrl 
*/
#ifndef TeIDCR_e_EVSE_ChrgStopControl
typedef uint8 TeIDCR_e_EVSE_ChrgStopControl;
#define CeIDCR_e_No_Chrg_Stp_Cntrl		((TeIDCR_e_EVSE_ChrgStopControl)0U)
#define CeIDCR_e_Chr_Stop_Cntrl		((TeIDCR_e_EVSE_ChrgStopControl)1U)
#define CeIDCR_e_Chrg_Init		((TeIDCR_e_EVSE_ChrgStopControl)2U)
#define CeIDCR_e_ChrgSNA		((TeIDCR_e_EVSE_ChrgStopControl)3U)
#endif

/*
* Enum TeIDCR_e_EVSE_Error 
* Default Value:CeIDCR_e_No_Error 
*/
#ifndef TeIDCR_e_EVSE_Error
typedef uint8 TeIDCR_e_EVSE_Error;
#define CeIDCR_e_No_Error		((TeIDCR_e_EVSE_Error)0U)
#define CeIDCR_e_Error		((TeIDCR_e_EVSE_Error)1U)
#define CeIDCR_e_EVSE_Error_Init		((TeIDCR_e_EVSE_Error)2U)
#define CeIDCR_e_Err_SNA		((TeIDCR_e_EVSE_Error)3U)
#endif

/*
* Enum TeIDCR_e_EVSE_OfferedService 
* Default Value:CeIDCR_e_OfferedServiceNone 
*/
#ifndef TeIDCR_e_EVSE_OfferedService
typedef uint8 TeIDCR_e_EVSE_OfferedService;
#define CeIDCR_e_OfferedServiceNone		((TeIDCR_e_EVSE_OfferedService)0U)
#define CeIDCR_e_AC_DC_Charging		((TeIDCR_e_EVSE_OfferedService)1U)
#define CeIDCR_e_Certificate		((TeIDCR_e_EVSE_OfferedService)2U)
#define CeIDCR_e_InternetAccess		((TeIDCR_e_EVSE_OfferedService)3U)
#define CeIDCR_e_UseCaseInformation		((TeIDCR_e_EVSE_OfferedService)4U)
#define CeIDCR_e_Other		((TeIDCR_e_EVSE_OfferedService)5U)
#endif

/*
* Enum TeIDCR_e_TLS_Connection 
* Default Value:CeIDCR_e_Not_Performed 
*/
#ifndef TeIDCR_e_TLS_Connection
typedef uint8 TeIDCR_e_TLS_Connection;
#define CeIDCR_e_Not_Performed		((TeIDCR_e_TLS_Connection)0U)
#define CeIDCR_e_Conn_Not_Established		((TeIDCR_e_TLS_Connection)1U)
#define CeIDCR_e_Conn_Established_TLS		((TeIDCR_e_TLS_Connection)2U)
#define CeIDCR_e_Conn_Established_No_TLS		((TeIDCR_e_TLS_Connection)3U)
#define CeIDCR_e_Failure		((TeIDCR_e_TLS_Connection)4U)
#endif

/*
* Enum TeIDCR_e_ISOResponseCode 
* Default Value:CeIDCR_e_OK 
*/
#ifndef TeIDCR_e_ISOResponseCode
typedef uint8 TeIDCR_e_ISOResponseCode;
#define CeIDCR_e_OK		((TeIDCR_e_ISOResponseCode)0U)
#define CeIDCR_e_OK_CertExpireSoon		((TeIDCR_e_ISOResponseCode)1U)
#define CeIDCR_e_OK_NewSessEstablished		((TeIDCR_e_ISOResponseCode)2U)
#define CeIDCR_e_OK_OldSessJoined		((TeIDCR_e_ISOResponseCode)3U)
#define CeIDCR_e_FAILED		((TeIDCR_e_ISOResponseCode)4U)
#define CeIDCR_e_FAILED_sequenceERR		((TeIDCR_e_ISOResponseCode)5U)
#define CeIDCR_e_FAILED_SignatureERR		((TeIDCR_e_ISOResponseCode)6U)
#define CeIDCR_e_FAILED_UnknowSess		((TeIDCR_e_ISOResponseCode)7U)
#define CeIDCR_e_FAILED_ServiceIDInvalid		((TeIDCR_e_ISOResponseCode)8U)
#define CeIDCR_e_FAILED_PaySel_Invalid		((TeIDCR_e_ISOResponseCode)9U)
#define CeIDCR_e_FAILED_ServSel_Invalid		((TeIDCR_e_ISOResponseCode)10U)
#define CeIDCR_e_FAILED_CertificateExp		((TeIDCR_e_ISOResponseCode)11U)
#define CeIDCR_e_FAILED_NoCertAvailable		((TeIDCR_e_ISOResponseCode)12U)
#define CeIDCR_e_FAILED_CertChainERR		((TeIDCR_e_ISOResponseCode)13U)
#define CeIDCR_e_FAILED_ContractCanceled		((TeIDCR_e_ISOResponseCode)14U)
#define CeIDCR_e_FAILED_ChallengeInvalid		((TeIDCR_e_ISOResponseCode)15U)
#define CeIDCR_e_FAILED_WrongEnergyTT		((TeIDCR_e_ISOResponseCode)16U)
#define CeIDCR_e_FAILED_WrongChargePar		((TeIDCR_e_ISOResponseCode)17U)
#define CeIDCR_e_FAILED_ChargProfInvalid		((TeIDCR_e_ISOResponseCode)18U)
#define CeIDCR_e_FAILED_TariffSelInvalid		((TeIDCR_e_ISOResponseCode)19U)
#define CeIDCR_e_FAILED_EVSEPresVLow		((TeIDCR_e_ISOResponseCode)20U)
#define CeIDCR_e_FAILED_PwrDelNotApplied		((TeIDCR_e_ISOResponseCode)21U)
#define CeIDCR_e_FAILED_MetSignNotVal		((TeIDCR_e_ISOResponseCode)22U)
#define CeIDCR_e_OK_SuccessNegotiation		((TeIDCR_e_ISOResponseCode)23U)
#define CeIDCR_e_OK_SucceedNegotMinDev		((TeIDCR_e_ISOResponseCode)24U)
#define CeIDCR_e_FAILED_NoNegotiation		((TeIDCR_e_ISOResponseCode)25U)
#define CeIDCR_e_FAILED_CertRevoked		((TeIDCR_e_ISOResponseCode)26U)
#define CeIDCR_e_FAILED_NoChargeSerSel		((TeIDCR_e_ISOResponseCode)27U)
#define CeIDCR_e_FAILED_ContractorError		((TeIDCR_e_ISOResponseCode)28U)
#define CeIDCR_e_FAILED_CertNotAllowEVSE		((TeIDCR_e_ISOResponseCode)29U)
#define CeIDCR_e_ResponseCodeSNA		((TeIDCR_e_ISOResponseCode)31U)
#endif

/*
* Enum TeIDCR_e_ExtChargerSts 
* Default Value:CeIDCR_e_ExtChargerSts_Standby 
*/
#ifndef TeIDCR_e_ExtChargerSts
typedef uint8 TeIDCR_e_ExtChargerSts;
#define CeIDCR_e_ExtChargerSts_Standby		((TeIDCR_e_ExtChargerSts)0U)
#define CeIDCR_e_ExtChargerSts_Charging		((TeIDCR_e_ExtChargerSts)1U)
#define CeIDCR_e_ExtChargerSts_Init		((TeIDCR_e_ExtChargerSts)2U)
#define CeIDCR_e_ExtChargerSts_SNA		((TeIDCR_e_ExtChargerSts)3U)
#endif

/*
* Enum TeIDCR_e_OBCM_CP1Sts 
* Default Value:CeIDCR_e_CP1Sts_NO_EVSE 
*/
#ifndef TeIDCR_e_OBCM_CP1Sts
typedef uint8 TeIDCR_e_OBCM_CP1Sts;
#define CeIDCR_e_CP1Sts_NO_EVSE		((TeIDCR_e_OBCM_CP1Sts)0U)
#define CeIDCR_e_CP1Sts_CP_DET		((TeIDCR_e_OBCM_CP1Sts)1U)
#define CeIDCR_e_CP1Sts_VOOR		((TeIDCR_e_OBCM_CP1Sts)2U)
#define CeIDCR_e_CP1Sts_EVSE_NO_AC		((TeIDCR_e_OBCM_CP1Sts)3U)
#define CeIDCR_e_CP1Sts_HW_FAULT		((TeIDCR_e_OBCM_CP1Sts)4U)
#endif

/*
* Enum TeIDCR_e_OBCM_CP2Sts 
* Default Value:CeIDCR_e_CP2Sts_EVSE_not_ready 
*/
#ifndef TeIDCR_e_OBCM_CP2Sts
typedef uint8 TeIDCR_e_OBCM_CP2Sts;
#define CeIDCR_e_CP2Sts_EVSE_not_ready		((TeIDCR_e_OBCM_CP2Sts)0U)
#define CeIDCR_e_CP2Sts_EVSE_ready		((TeIDCR_e_OBCM_CP2Sts)1U)
#define CeIDCR_e_CP2Sts_VOOR		((TeIDCR_e_OBCM_CP2Sts)2U)
#define CeIDCR_e_CP2Sts_HW_Fault		((TeIDCR_e_OBCM_CP2Sts)3U)
#endif

/*
* Enum TeIDCR_e_OBCM_CP3Sts 
* Default Value:CeIDCR_e_CP3Sts_Charge_perm_dis 
*/
#ifndef TeIDCR_e_OBCM_CP3Sts
typedef uint8 TeIDCR_e_OBCM_CP3Sts;
#define CeIDCR_e_CP3Sts_Charge_perm_dis		((TeIDCR_e_OBCM_CP3Sts)0U)
#define CeIDCR_e_CP3Sts_Charge_perm_ena		((TeIDCR_e_OBCM_CP3Sts)1U)
#define CeIDCR_e_CP3Sts_HW_Fault		((TeIDCR_e_OBCM_CP3Sts)2U)
#endif

/*
* Enum TeIDCR_e_Charger_WeldDetAvail 
* Default Value:CeIDCR_e_Charger_Not_Available 
*/
#ifndef TeIDCR_e_Charger_WeldDetAvail
typedef uint8 TeIDCR_e_Charger_WeldDetAvail;
#define CeIDCR_e_Charger_Not_Available		((TeIDCR_e_Charger_WeldDetAvail)0U)
#define CeIDCR_e_Charger_Available		((TeIDCR_e_Charger_WeldDetAvail)1U)
#define CeIDCR_e_Charger_Init		((TeIDCR_e_Charger_WeldDetAvail)2U)
#define CeIDCR_e_Charger_SNA		((TeIDCR_e_Charger_WeldDetAvail)3U)
#endif

/*
* Enum TeIDCR_e_CHAdeMOPrtcl 
* Default Value:CeIDCR_e_CHAdeMO_0_9_n_earlier 
*/
#ifndef TeIDCR_e_CHAdeMOPrtcl
typedef uint8 TeIDCR_e_CHAdeMOPrtcl;
#define CeIDCR_e_CHAdeMO_0_9_n_earlier		((TeIDCR_e_CHAdeMOPrtcl)0U)
#define CeIDCR_e_CHAdeMO_0_9_n_0_9_1		((TeIDCR_e_CHAdeMOPrtcl)1U)
#define CeIDCR_e_CHAdeMO_10n101n11n12		((TeIDCR_e_CHAdeMOPrtcl)2U)
#define CeIDCR_e_CHAdeMO_2_0		((TeIDCR_e_CHAdeMOPrtcl)3U)
#define CeIDCR_e_CHAdeMO_SNA		((TeIDCR_e_CHAdeMOPrtcl)7U)
#endif

/*
* Enum TeIDCR_e_OBCM_CSSts 
* Default Value:CeIDCR_e_OBCM_CSSts_CS_IN 
*/
#ifndef TeIDCR_e_OBCM_CSSts
typedef uint8 TeIDCR_e_OBCM_CSSts;
#define CeIDCR_e_OBCM_CSSts_CS_IN		((TeIDCR_e_OBCM_CSSts)0U)
#define CeIDCR_e_OBCM_CSSts_CS_OUT		((TeIDCR_e_OBCM_CSSts)1U)
#define CeIDCR_e_OBCM_CSSts_CS_FAIL		((TeIDCR_e_OBCM_CSSts)2U)
#endif

/*
* Enum TeIDCR_e_TxMsgSt 
* Default Value:CeIDCR_e_NoRequest 
*/
#ifndef TeIDCR_e_TxMsgSt
typedef uint8 TeIDCR_e_TxMsgSt;
#define CeIDCR_e_NoRequest		((TeIDCR_e_TxMsgSt)0U)
#define CeIDCR_e_SupprtdAppProtoReq		((TeIDCR_e_TxMsgSt)1U)
#define CeIDCR_e_SessionSetupReq		((TeIDCR_e_TxMsgSt)2U)
#define CeIDCR_e_SrvcDscvryReq		((TeIDCR_e_TxMsgSt)3U)
#define CeIDCR_e_ServiceDetailReq		((TeIDCR_e_TxMsgSt)4U)
#define CeIDCR_e_PayServSelectReq		((TeIDCR_e_TxMsgSt)5U)
#define CeIDCR_e_PaymentDetailsRes		((TeIDCR_e_TxMsgSt)6U)
#define CeIDCR_e_AuthorizationRes		((TeIDCR_e_TxMsgSt)7U)
#define CeIDCR_e_ChrgParamDscvryReq		((TeIDCR_e_TxMsgSt)8U)
#define CeIDCR_e_PwrDlvryReq		((TeIDCR_e_TxMsgSt)9U)
#define CeIDCR_e_CertificateUpdateRq		((TeIDCR_e_TxMsgSt)10U)
#define CeIDCR_e_CertificateInstalReq		((TeIDCR_e_TxMsgSt)11U)
#define CeIDCR_e_SessionStopReq		((TeIDCR_e_TxMsgSt)12U)
#define CeIDCR_e_MeteringReceiptRes		((TeIDCR_e_TxMsgSt)13U)
#define CeIDCR_e_ChrgStatusReq		((TeIDCR_e_TxMsgSt)14U)
#define CeIDCR_e_TxMsgSt_CableChkReq		((TeIDCR_e_TxMsgSt)15U)
#define CeIDCR_e_PreChrgReq		((TeIDCR_e_TxMsgSt)16U)
#define CeIDCR_e_CurrDmndReq		((TeIDCR_e_TxMsgSt)17U)
#define CeIDCR_e_WeldDtctnReq		((TeIDCR_e_TxMsgSt)18U)
#define CeIDCR_e_Cntrct_AuthReq		((TeIDCR_e_TxMsgSt)19U)
#define CeIDCR_e_PwrDlvryReq_Prechrg		((TeIDCR_e_TxMsgSt)20U)
#define CeIDCR_e_PwrDlvryReq_EnrgyTx		((TeIDCR_e_TxMsgSt)21U)
#define CeIDCR_e_DC_BiDirCtrlReq		((TeIDCR_e_TxMsgSt)22U)
#define CeIDCR_e_PwrDeliveryReq_Reneg		((TeIDCR_e_TxMsgSt)23U)
#define CeIDCR_e_ChrgParamDscvry_Reneg		((TeIDCR_e_TxMsgSt)24U)
#define CeIDCR_e_TxMsgSt_SNA		((TeIDCR_e_TxMsgSt)31U)
#endif

/*
* Enum TeIMOR_e_IMORStat 
* Default Value:CeIMOR_e_Init 
*/
#ifndef TeIMOR_e_IMORStat
typedef uint8 TeIMOR_e_IMORStat;
#define CeIMOR_e_Init		((TeIMOR_e_IMORStat)0U)
#define CeIMOR_e_SysCondMet		((TeIMOR_e_IMORStat)1U)
#define CeIMOR_e_ImmobEnbld		((TeIMOR_e_IMORStat)2U)
#define CeIMOR_e_CR_NoValue		((TeIMOR_e_IMORStat)3U)
#define CeIMOR_e_CR_RandNumGen		((TeIMOR_e_IMORStat)4U)
#define CeIMOR_e_CR_EnblMKA		((TeIMOR_e_IMORStat)5U)
#define CeIMOR_e_CR_CopyF1G1		((TeIMOR_e_IMORStat)6U)
#define CeIMOR_e_CR_F1G1Generated		((TeIMOR_e_IMORStat)7U)
#define CeIMOR_e_CR_SndRecReq		((TeIMOR_e_IMORStat)8U)
#define CeIMOR_e_CR_RecRspRcvd		((TeIMOR_e_IMORStat)9U)
#define CeIMOR_e_RspRcvd99		((TeIMOR_e_IMORStat)10U)
#define CeIMOR_e_CR_Rsp99G1G2Comp		((TeIMOR_e_IMORStat)11U)
#define CeIMOR_e_CR_Ack86SentAftr99		((TeIMOR_e_IMORStat)12U)
#define CeIMOR_e_CR_Rsp99G1G2Comp2		((TeIMOR_e_IMORStat)13U)
#define CeIMOR_e_CR_RecAck87SentAftr99		((TeIMOR_e_IMORStat)14U)
#define CeIMOR_e_CR_RspRcvd10		((TeIMOR_e_IMORStat)15U)
#define CeIMOR_e_CR_RspRcvdAA		((TeIMOR_e_IMORStat)16U)
#define CeIMOR_e_CR_CpyRspRcvd		((TeIMOR_e_IMORStat)17U)
#define CeIMOR_e_CR_Ack86Sent		((TeIMOR_e_IMORStat)18U)
#define CeIMOR_e_CR_CmpRsp2Rcvd		((TeIMOR_e_IMORStat)19U)
#define CeIMOR_e_CR_RecAck87Sent		((TeIMOR_e_IMORStat)20U)
#define CeIMOR_e_CR_MKeyStrVrfy		((TeIMOR_e_IMORStat)21U)
#define CeIMOR_e_CR_RecEOT		((TeIMOR_e_IMORStat)22U)
#define CeIMOR_e_CR_PrplsnEnbl		((TeIMOR_e_IMORStat)23U)
#define CeIMOR_e_CR_RecCntInc		((TeIMOR_e_IMORStat)24U)
#define CeIMOR_e_CR_RecNACK		((TeIMOR_e_IMORStat)25U)
#define CeIMOR_e_CR_PrplsnDisbl		((TeIMOR_e_IMORStat)26U)
#define CeIMOR_e_CV_Init		((TeIMOR_e_IMORStat)27U)
#define CeIMOR_e_CV_RandNumGen		((TeIMOR_e_IMORStat)28U)
#define CeIMOR_e_CV_EnblMKA		((TeIMOR_e_IMORStat)29U)
#define CeIMOR_e_CV_CopyF1G1		((TeIMOR_e_IMORStat)30U)
#define CeIMOR_e_CV_F1G1Generated		((TeIMOR_e_IMORStat)31U)
#define CeIMOR_e_CV_VrfyRspRcvd		((TeIMOR_e_IMORStat)32U)
#define CeIMOR_e_CV_ACKSent		((TeIMOR_e_IMORStat)33U)
#define CeIMOR_e_CV_PrplsnEnbl		((TeIMOR_e_IMORStat)34U)
#define CeIMOR_e_CV_NegUC		((TeIMOR_e_IMORStat)35U)
#define CeIMOR_e_CV_NACKSent		((TeIMOR_e_IMORStat)36U)
#define CeIMOR_e_CV_VrfyCntInc		((TeIMOR_e_IMORStat)37U)
#define CeIMOR_e_CV_PrplsnDisbl		((TeIMOR_e_IMORStat)38U)
#define CeIMOR_e_CR_KeyCycInit		((TeIMOR_e_IMORStat)39U)
#define CeIMOR_e_CV_KeyCycInit		((TeIMOR_e_IMORStat)40U)
#define CeIMOR_e_CV_RstStateTmr		((TeIMOR_e_IMORStat)41U)
#define CeIMOR_e_CR_MKeyStr		((TeIMOR_e_IMORStat)42U)
#define CeIMOR_e_CV_RandNumGen_BSW		((TeIMOR_e_IMORStat)43U)
#endif

/*
* Enum TeIMOR_e_EEPROG_STATUS 
* Default Value:CeIMOR_e_EEPROG_PENDING 
*/
#ifndef TeIMOR_e_EEPROG_STATUS
typedef uint8 TeIMOR_e_EEPROG_STATUS;
#define CeIMOR_e_EEPROG_PENDING		((TeIMOR_e_EEPROG_STATUS)0U)
#define CeIMOR_e_EEPROG_SUCCESS		((TeIMOR_e_EEPROG_STATUS)1U)
#define CeIMOR_e_EEPROG_COMP_FAILED		((TeIMOR_e_EEPROG_STATUS)2U)
#define CeIMOR_e_EEPROG_FAILED_INV_SIZE		((TeIMOR_e_EEPROG_STATUS)3U)
#define CeIMOR_e_EEPROG_DEFAULT		((TeIMOR_e_EEPROG_STATUS)4U)
#endif

/*
* Enum TeIMOR_e_ECMStatCANC 
* Default Value:CeIMOR_e_ECMcIS 
*/
#ifndef TeIMOR_e_ECMStatCANC
typedef uint8 TeIMOR_e_ECMStatCANC;
#define CeIMOR_e_ECMcIS		((TeIMOR_e_ECMStatCANC)0U)
#define CeIMOR_e_ECMcKILL		((TeIMOR_e_ECMStatCANC)1U)
#define CeIMOR_e_ECMcRUN		((TeIMOR_e_ECMStatCANC)2U)
#define CeIMOR_e_ECMcSNA		((TeIMOR_e_ECMStatCANC)3U)
#endif

/*
* Enum TeIMOR_e_ECMStatCANePT 
* Default Value:CeIMOR_e_ECMeIS 
*/
#ifndef TeIMOR_e_ECMStatCANePT
typedef uint8 TeIMOR_e_ECMStatCANePT;
#define CeIMOR_e_ECMeIS		((TeIMOR_e_ECMStatCANePT)0U)
#define CeIMOR_e_ECMeKILL		((TeIMOR_e_ECMStatCANePT)1U)
#define CeIMOR_e_ECMeRUN		((TeIMOR_e_ECMStatCANePT)2U)
#define CeIMOR_e_ECMeSNA		((TeIMOR_e_ECMStatCANePT)3U)
#endif

/*
* Enum TeIMOR_e_ECMStat 
* Default Value:CeIMOR_e_ECMInit 
*/
#ifndef TeIMOR_e_ECMStat
typedef uint8 TeIMOR_e_ECMStat;
#define CeIMOR_e_ECMInit		((TeIMOR_e_ECMStat)0U)
#define CeIMOR_e_ECMDetermine		((TeIMOR_e_ECMStat)1U)
#define CeIMOR_e_ECMKO_CheckWU		((TeIMOR_e_ECMStat)2U)
#define CeIMOR_e_ECMKO_CheckComplete		((TeIMOR_e_ECMStat)3U)
#define CeIMOR_e_ECMKO_CANCheck		((TeIMOR_e_ECMStat)4U)
#define CeIMOR_e_ECMKO_Passed		((TeIMOR_e_ECMStat)5U)
#define CeIMOR_e_ECMKO_DTC2_WUFail		((TeIMOR_e_ECMStat)6U)
#define CeIMOR_e_ECMKO_DTC2_NotComplete		((TeIMOR_e_ECMStat)7U)
#define CeIMOR_e_ECMKO_DTC3_NoRationality		((TeIMOR_e_ECMStat)8U)
#define CeIMOR_e_ECMKO_Failed		((TeIMOR_e_ECMStat)9U)
#define CeIMOR_e_ECMKO_Complete		((TeIMOR_e_ECMStat)10U)
#define CeIMOR_e_ECMRpt_CheckECM		((TeIMOR_e_ECMStat)11U)
#define CeIMOR_e_ECMRpt_StartSOP		((TeIMOR_e_ECMStat)12U)
#define CeIMOR_e_ECMRpt_SendinSOP		((TeIMOR_e_ECMStat)13U)
#define CeIMOR_e_ECMRpt_DTC1SOP10		((TeIMOR_e_ECMStat)14U)
#define CeIMOR_e_ECMRpt_SOPRcvd		((TeIMOR_e_ECMStat)15U)
#define CeIMOR_e_ECMRpt_Checking		((TeIMOR_e_ECMStat)16U)
#define CeIMOR_e_ECMRpt_DTC2		((TeIMOR_e_ECMStat)17U)
#define CeIMOR_e_ECMRpt_DTC3		((TeIMOR_e_ECMStat)18U)
#define CeIMOR_e_ECMRpt_Complete		((TeIMOR_e_ECMStat)19U)
#define CeIMOR_e_ECMKO_StartTimer		((TeIMOR_e_ECMStat)20U)
#define CeIMOR_e_CityBEV		((TeIMOR_e_ECMStat)21U)
#endif

/*
* Enum TeIMOR_e_HCPImmoStatCanC 
* Default Value:CeIMOR_e_HCPIS 
*/
#ifndef TeIMOR_e_HCPImmoStatCanC
typedef uint8 TeIMOR_e_HCPImmoStatCanC;
#define CeIMOR_e_HCPIS		((TeIMOR_e_HCPImmoStatCanC)0U)
#define CeIMOR_e_HCPKILL		((TeIMOR_e_HCPImmoStatCanC)1U)
#define CeIMOR_e_HCPRUN		((TeIMOR_e_HCPImmoStatCanC)2U)
#define CeIMOR_e_HCPSNA		((TeIMOR_e_HCPImmoStatCanC)3U)
#endif

/*
* Enum TeIMOR_e_BuildAssemblyModeStat 
* Default Value:CeIMOR_e_ImmoPairingPassed 
*/
#ifndef TeIMOR_e_BuildAssemblyModeStat
typedef uint8 TeIMOR_e_BuildAssemblyModeStat;
#define CeIMOR_e_ImmoPairingPassed		((TeIMOR_e_BuildAssemblyModeStat)0U)
#define CeIMOR_e_BuildAssemblyMode		((TeIMOR_e_BuildAssemblyModeStat)1U)
#define CeIMOR_e_ImmoNotPaired		((TeIMOR_e_BuildAssemblyModeStat)2U)
#define CeIMOR_e_ImmoPairingFailed		((TeIMOR_e_BuildAssemblyModeStat)3U)
#endif

/*
* Enum TeIMPR_e_EepromLogicSts 
* Default Value:CeIMPR_e_Init 
*/
#ifndef TeIMPR_e_EepromLogicSts
typedef uint8 TeIMPR_e_EepromLogicSts;
#define CeIMPR_e_Init		((TeIMPR_e_EepromLogicSts)0U)
#define CeIMPR_e_WriteProcedure		((TeIMPR_e_EepromLogicSts)1U)
#define CeIMPR_e_WriteFailed		((TeIMPR_e_EepromLogicSts)2U)
#define CeIMPR_e_WriteSuccess		((TeIMPR_e_EepromLogicSts)3U)
#endif

/*
* Enum TeINVD_e_RateBasedStatus 
* Default Value:CeINVD_e_NoInc 
*/
#ifndef TeINVD_e_RateBasedStatus
typedef uint8 TeINVD_e_RateBasedStatus;
#define CeINVD_e_NoInc		((TeINVD_e_RateBasedStatus)0U)
#define CeINVD_e_IncNum		((TeINVD_e_RateBasedStatus)1U)
#define CeINVD_e_IncDen		((TeINVD_e_RateBasedStatus)2U)
#define CeINVD_e_IncNumAndDen		((TeINVD_e_RateBasedStatus)3U)
#endif

/*
* Enum TeINVR_e_DerateReason 
* Default Value:CeINVR_e_DerateReason1 
*/
#ifndef TeINVR_e_DerateReason
typedef uint8 TeINVR_e_DerateReason;
#define CeINVR_e_DerateReason1		((TeINVR_e_DerateReason)0U)
#define CeINVR_e_DerateReason2		((TeINVR_e_DerateReason)1U)
#define CeINVR_e_DerateReason3		((TeINVR_e_DerateReason)2U)
#define CeINVR_e_DerateReason4		((TeINVR_e_DerateReason)3U)
#define CeINVR_e_DerateReason5		((TeINVR_e_DerateReason)4U)
#define CeINVR_e_DerateReason6		((TeINVR_e_DerateReason)5U)
#define CeINVR_e_DerateReason7		((TeINVR_e_DerateReason)6U)
#define CeINVR_e_DerateReason8		((TeINVR_e_DerateReason)7U)
#define CeINVR_e_DerateReason9		((TeINVR_e_DerateReason)8U)
#define CeINVR_e_DerateReason10		((TeINVR_e_DerateReason)9U)
#define CeINVR_e_DerateReason11		((TeINVR_e_DerateReason)10U)
#define CeINVR_e_DerateReason12		((TeINVR_e_DerateReason)11U)
#define CeINVR_e_DerateReason13		((TeINVR_e_DerateReason)12U)
#define CeINVR_e_DerateReason14		((TeINVR_e_DerateReason)13U)
#define CeINVR_e_DerateReason15		((TeINVR_e_DerateReason)14U)
#define CeINVR_e_DerateReason16		((TeINVR_e_DerateReason)15U)
#endif

/*
* Enum TeINVR_e_Dschrge_Stat 
* Default Value:CeINVR_e_AD_DISABLED 
*/
#ifndef TeINVR_e_Dschrge_Stat
typedef uint8 TeINVR_e_Dschrge_Stat;
#define CeINVR_e_AD_DISABLED		((TeINVR_e_Dschrge_Stat)0U)
#define CeINVR_e_AD_INPROGRESS		((TeINVR_e_Dschrge_Stat)1U)
#define CeINVR_e_AD_COMPLETE		((TeINVR_e_Dschrge_Stat)2U)
#define CeINVR_e_AD_FAILED		((TeINVR_e_Dschrge_Stat)3U)
#endif

/*
* Enum TeINVR_e_MtrInvrtrSt 
* Default Value:CeINVR_e_NormalPowerStageOff 
*/
#ifndef TeINVR_e_MtrInvrtrSt
typedef uint8 TeINVR_e_MtrInvrtrSt;
#define CeINVR_e_NormalPowerStageOff		((TeINVR_e_MtrInvrtrSt)0U)
#define CeINVR_e_NormalPowerStageOn		((TeINVR_e_MtrInvrtrSt)1U)
#define CeINVR_e_NormalPowerStageOnOvrd		((TeINVR_e_MtrInvrtrSt)2U)
#define CeINVR_e_ActiveDischarge		((TeINVR_e_MtrInvrtrSt)3U)
#define CeINVR_e_InverterFaulted		((TeINVR_e_MtrInvrtrSt)4U)
#define CeINVR_e_NormalPowerStageOffHvRqd		((TeINVR_e_MtrInvrtrSt)5U)
#define CeINVR_e_NormalVoltCntrlPriming		((TeINVR_e_MtrInvrtrSt)6U)
#define CeINVR_e_NormalVoltCntrlOn		((TeINVR_e_MtrInvrtrSt)7U)
#define CeINVR_e_InitCompleted		((TeINVR_e_MtrInvrtrSt)8U)
#define CeINVR_e_Init		((TeINVR_e_MtrInvrtrSt)9U)
#endif

/*
* Enum TeINVR_e_InvrtrIsolStat 
* Default Value:CeINVR_e_IsolUndetermined 
*/
#ifndef TeINVR_e_InvrtrIsolStat
typedef uint8 TeINVR_e_InvrtrIsolStat;
#define CeINVR_e_IsolUndetermined		((TeINVR_e_InvrtrIsolStat)0U)
#define CeINVR_e_IsolPassed		((TeINVR_e_InvrtrIsolStat)1U)
#define CeINVR_e_IsolFailed		((TeINVR_e_InvrtrIsolStat)2U)
#endif

/*
* Enum TeINVR_e_EMModeReq_TCM 
* Default Value:CeINVR_e_NoControl_Inactvive 
*/
#ifndef TeINVR_e_EMModeReq_TCM
typedef uint8 TeINVR_e_EMModeReq_TCM;
#define CeINVR_e_NoControl_Inactvive		((TeINVR_e_EMModeReq_TCM)0U)
#define CeINVR_e_SpeedControl		((TeINVR_e_EMModeReq_TCM)1U)
#define CeINVR_e_ZeroTorqueRequest		((TeINVR_e_EMModeReq_TCM)2U)
#define CeINVR_e_SignalNotAvailableSNA		((TeINVR_e_EMModeReq_TCM)3U)
#endif

/*
* Enum TeINVR_e_SPTState 
* Default Value:CeINVR_e_Pending_SPT 
*/
#ifndef TeINVR_e_SPTState
typedef uint8 TeINVR_e_SPTState;
#define CeINVR_e_Pending_SPT		((TeINVR_e_SPTState)0U)
#define CeINVR_e_Failed_SPT		((TeINVR_e_SPTState)1U)
#define CeINVR_e_Passed_SPT		((TeINVR_e_SPTState)2U)
#endif

/*
* Enum TeINVR_e_P2ModeStatus 
* Default Value:CeINVR_e_P2ModeStatus_Idle 
*/
#ifndef TeINVR_e_P2ModeStatus
typedef uint8 TeINVR_e_P2ModeStatus;
#define CeINVR_e_P2ModeStatus_Idle		((TeINVR_e_P2ModeStatus)0U)
#define CeINVR_e_P2ModeStatus_VoltCtrl		((TeINVR_e_P2ModeStatus)1U)
#define CeINVR_e_P2ModeStatus_VoltCtrlDerate		((TeINVR_e_P2ModeStatus)2U)
#define CeINVR_e_P2ModeStatus_SpeedCtrl		((TeINVR_e_P2ModeStatus)3U)
#define CeINVR_e_P2ModeStatus_SpeedCtrlDerate		((TeINVR_e_P2ModeStatus)4U)
#define CeINVR_e_P2ModeStatus_TorqCtrl		((TeINVR_e_P2ModeStatus)5U)
#define CeINVR_e_P2ModeStatus_TorqCtrlDerate		((TeINVR_e_P2ModeStatus)6U)
#define CeINVR_e_P2ModeStatus_ActvShortCircuit		((TeINVR_e_P2ModeStatus)7U)
#define CeINVR_e_P2ModeStatus_FailASC		((TeINVR_e_P2ModeStatus)8U)
#define CeINVR_e_P2ModeStatus_FailOpen		((TeINVR_e_P2ModeStatus)9U)
#define CeINVR_e_P2ModeStatus_SNA		((TeINVR_e_P2ModeStatus)15U)
#endif

/*
* Enum TeINVR_e_BstCnvtrFailSts 
* Default Value:CeINVR_e_BstCnvFailStsNormal 
*/
#ifndef TeINVR_e_BstCnvtrFailSts
typedef uint8 TeINVR_e_BstCnvtrFailSts;
#define CeINVR_e_BstCnvFailStsNormal		((TeINVR_e_BstCnvtrFailSts)0U)
#define CeINVR_e_BstCnvFailStsFaulted		((TeINVR_e_BstCnvtrFailSts)1U)
#define CeINVR_e_BstCnvFailStsPwrLmtn		((TeINVR_e_BstCnvtrFailSts)2U)
#define CeINVR_e_BstCnvFailStsVoltLmtn		((TeINVR_e_BstCnvtrFailSts)3U)
#define CeINVR_e_BstCnvFailStsNotUsed1		((TeINVR_e_BstCnvtrFailSts)4U)
#define CeINVR_e_BstCnvFailStsNotUsed2		((TeINVR_e_BstCnvtrFailSts)5U)
#define CeINVR_e_BstCnvFailStsNotUsed3		((TeINVR_e_BstCnvtrFailSts)6U)
#define CeINVR_e_BstCnvFailStsSNA		((TeINVR_e_BstCnvtrFailSts)7U)
#endif

/*
* Enum TeINVR_e_SixSOStatus 
* Default Value:CeINVR_e_ThreePS 
*/
#ifndef TeINVR_e_SixSOStatus
typedef uint8 TeINVR_e_SixSOStatus;
#define CeINVR_e_ThreePS		((TeINVR_e_SixSOStatus)0U)
#define CeINVR_e_SixSO		((TeINVR_e_SixSOStatus)1U)
#define CeINVR_e_Switching		((TeINVR_e_SixSOStatus)2U)
#define CeINVR_e_OnePS		((TeINVR_e_SixSOStatus)3U)
#define CeINVR_e_SNA		((TeINVR_e_SixSOStatus)4U)
#endif

/*
* Enum TeITIR_e_HCPVtdFreeze 
* Default Value:CeITIR_e_NoReset 
*/
#ifndef TeITIR_e_HCPVtdFreeze
typedef uint8 TeITIR_e_HCPVtdFreeze;
#define CeITIR_e_NoReset		((TeITIR_e_HCPVtdFreeze)0U)
#define CeITIR_e_LifetimeRecentReset		((TeITIR_e_HCPVtdFreeze)1U)
#define CeITIR_e_RecentReset		((TeITIR_e_HCPVtdFreeze)2U)
#define CeITIR_e_Freeze		((TeITIR_e_HCPVtdFreeze)3U)
#endif

/*
* Enum TeLTIR_e_KeySts 
* Default Value:CeLTIR_e_IGN_LK 
*/
#ifndef TeLTIR_e_KeySts
typedef uint8 TeLTIR_e_KeySts;
#define CeLTIR_e_IGN_INIT		((TeLTIR_e_KeySts)0U)
#define CeLTIR_e_IGN_LK		((TeLTIR_e_KeySts)1U)
#define CeLTIR_e_IGN_CRANK1		((TeLTIR_e_KeySts)2U)
#define CeLTIR_e_IGN_ACC		((TeLTIR_e_KeySts)3U)
#define CeLTIR_e_IGN_RUN		((TeLTIR_e_KeySts)4U)
#define CeLTIR_e_IGN_START		((TeLTIR_e_KeySts)5U)
#define CeLTIR_e_IGN_CRANK2		((TeLTIR_e_KeySts)6U)
#define CeLTIR_e_IGN_SNA		((TeLTIR_e_KeySts)7U)
#endif

/*
* Enum TeMMMR_e_SwitchMd 
* Default Value:CeMMMR_e_Lv2DsblNoSwitch 
*/
#ifndef TeMMMR_e_SwitchMd
typedef uint8 TeMMMR_e_SwitchMd;
#define CeMMMR_e_Lv2DsblNoSwitch		((TeMMMR_e_SwitchMd)0U)
#define CeMMMR_e_Lv2TorqCntrl		((TeMMMR_e_SwitchMd)1U)
#define CeMMMR_e_Lv2SpeedCntrl		((TeMMMR_e_SwitchMd)2U)
#define CeMMMR_e_Lv2ActvDischarge		((TeMMMR_e_SwitchMd)3U)
#define CeMMMR_e_Lv2DsblImmd		((TeMMMR_e_SwitchMd)4U)
#define CeMMMR_e_Lv2VoltageCntrl		((TeMMMR_e_SwitchMd)5U)
#define CeMMMR_e_Lv2RapidShtdwnComnd		((TeMMMR_e_SwitchMd)6U)
#endif

/*
* Enum TeMMMR_e_IO_CntrlSt 
* Default Value:CeMMMR_e_Lv2Return_ECU_Cntrl 
*/
#ifndef TeMMMR_e_IO_CntrlSt
typedef uint8 TeMMMR_e_IO_CntrlSt;
#define CeMMMR_e_Lv2Return_ECU_Cntrl		((TeMMMR_e_IO_CntrlSt)0U)
#define CeMMMR_e_Lv2Return_Default_Cntrl		((TeMMMR_e_IO_CntrlSt)1U)
#define CeMMMR_e_Lv2FreezeCurrentSt		((TeMMMR_e_IO_CntrlSt)2U)
#define CeMMMR_e_Lv2ShortTermAdjust		((TeMMMR_e_IO_CntrlSt)3U)
#endif

/*
* Enum TeMMMR_e_KeySts 
* Default Value:CeMMMR_e_Lv2_IGN_LK 
*/
#ifndef TeMMMR_e_KeySts
typedef uint8 TeMMMR_e_KeySts;
#define CeMMMR_e_Lv2_INIT		((TeMMMR_e_KeySts)0U)
#define CeMMMR_e_Lv2_IGN_LK		((TeMMMR_e_KeySts)1U)
#define CeMMMR_e_Lv2_Crank1		((TeMMMR_e_KeySts)2U)
#define CeMMMR_e_Lv2_ACC		((TeMMMR_e_KeySts)3U)
#define CeMMMR_e_Lv2_RUN		((TeMMMR_e_KeySts)4U)
#define CeMMMR_e_Lv2_Start		((TeMMMR_e_KeySts)5U)
#define CeMMMR_e_Lv2_Crank2		((TeMMMR_e_KeySts)6U)
#define CeMMMR_e_Lv2_SNA		((TeMMMR_e_KeySts)7U)
#endif

/*
* Enum TeMPMR_e_PFC_FtnCnst 
* Default Value:CeMPMR_e_HSER_25ms_RangeStateTransition 
*/
#ifndef TeMPMR_e_PFC_FtnCnst
typedef uint8 TeMPMR_e_PFC_FtnCnst;
#define CeMPMR_e_HSER_25ms_RangeStateTransition		((TeMPMR_e_PFC_FtnCnst)1U)
#define CeMPMR_e_HSED_25ms_StateTransitionCheck		((TeMPMR_e_PFC_FtnCnst)2U)
#define CeMPMR_e_HSER_25ms_RangeStateAction		((TeMPMR_e_PFC_FtnCnst)3U)
#define CeMPMR_e_HSER_25ms_OutputsUpdate		((TeMPMR_e_PFC_FtnCnst)4U)
#define CeMPMR_e_HSED_25ms_RngEqnRationality		((TeMPMR_e_PFC_FtnCnst)5U)
#define CeMPMR_e_HSED_25ms_FaultHandler		((TeMPMR_e_PFC_FtnCnst)6U)
#define CeMPMR_e_TRGI_25ms_DtrmnTransDirctnSt		((TeMPMR_e_PFC_FtnCnst)7U)
#define CeMPMR_e_TRGC_25ms_VldtTransRngSt		((TeMPMR_e_PFC_FtnCnst)8U)
#define CeMPMR_e_TRGD_25ms_PerfmDirctnIMS_FaultInfo		((TeMPMR_e_PFC_FtnCnst)9U)
#endif

/*
* Enum TeMSPR_e_P2Spd_Prfl_Enbl 
* Default Value:CeMSPR_e_P2Spd_Prfl_Not_Enbl 
*/
#ifndef TeMSPR_e_P2Spd_Prfl_Enbl
typedef uint8 TeMSPR_e_P2Spd_Prfl_Enbl;
#define CeMSPR_e_P2Spd_Prfl_Not_Enbl		((TeMSPR_e_P2Spd_Prfl_Enbl)0U)
#define CeMSPR_e_P2Spd_Prfl_Enbl		((TeMSPR_e_P2Spd_Prfl_Enbl)1U)
#define CeMSPR_e_P2Spd_Prfl_Enbl_SNA		((TeMSPR_e_P2Spd_Prfl_Enbl)2U)
#endif

/*
* Enum TeMSPR_e_MotorSpeedSrc 
* Default Value:CeMSPR_e_MtrSpSrc_MCP 
*/
#ifndef TeMSPR_e_MotorSpeedSrc
typedef uint8 TeMSPR_e_MotorSpeedSrc;
#define CeMSPR_e_MtrSpSrc_MCP		((TeMSPR_e_MotorSpeedSrc)0U)
#define CeMSPR_e_MtrSpdSrc_BuffCrank		((TeMSPR_e_MotorSpeedSrc)1U)
#define CeMSPR_e_MtrSpdSrc_CANEngSpd		((TeMSPR_e_MotorSpeedSrc)2U)
#define CeMSPR_e_MtrSpSrc_SecNo		((TeMSPR_e_MotorSpeedSrc)3U)
#define CeMSPR_e_MtrSpdSrc_NoSrc		((TeMSPR_e_MotorSpeedSrc)4U)
#define CeMSPR_e_MtrSpdSrc_PrimWhlSpd		((TeMSPR_e_MotorSpeedSrc)5U)
#define CeMSPR_e_MtrSpdSrc_VehSpd		((TeMSPR_e_MotorSpeedSrc)6U)
#define CeMSPR_e_MtrSpSrc_ST2Spd		((TeMSPR_e_MotorSpeedSrc)7U)
#define CeMSPR_e_MtrSpdSrc_SecWhlSpd		((TeMSPR_e_MotorSpeedSrc)8U)
#define CeMSPR_e_MtrSpdSrc_ReAxleSpd		((TeMSPR_e_MotorSpeedSrc)9U)
#endif

/*
* Enum TeMSPR_e_EngSpeedPrioritySrc 
* Default Value:CeMSPR_e_EngSpeedPrioritySrc_NoSrc 
*/
#ifndef TeMSPR_e_EngSpeedPrioritySrc
typedef uint8 TeMSPR_e_EngSpeedPrioritySrc;
#define CeMSPR_e_EngSpeedPrioritySrc_BuffCrk		((TeMSPR_e_EngSpeedPrioritySrc)0U)
#define CeMSPR_e_EngSpeedPrioritySrc_CANEngSpd		((TeMSPR_e_EngSpeedPrioritySrc)1U)
#define CeMSPR_e_EngSpeedPrioritySrc_NoSrc		((TeMSPR_e_EngSpeedPrioritySrc)2U)
#endif

/*
* Enum TeMSPR_e_VehSpeedPrioritySrc 
* Default Value:CeMSPR_e_VehSpeedPrioritySrc_NoSrc 
*/
#ifndef TeMSPR_e_VehSpeedPrioritySrc
typedef uint8 TeMSPR_e_VehSpeedPrioritySrc;
#define CeMSPR_e_VehSpeedPrioritySrc_PrimWhlSpd		((TeMSPR_e_VehSpeedPrioritySrc)0U)
#define CeMSPR_e_VehSpeedPrioritySrc_VehSpd		((TeMSPR_e_VehSpeedPrioritySrc)1U)
#define CeMSPR_e_VehSpeedPrioritySrc_NoSrc		((TeMSPR_e_VehSpeedPrioritySrc)2U)
#endif

/*
* Enum TeOBCR_e_InterMarkets 
* Default Value:CeOBCR_e_NorthAmerica 
*/
#ifndef TeOBCR_e_InterMarkets
typedef uint8 TeOBCR_e_InterMarkets;
#define CeOBCR_e_NorthAmerica		((TeOBCR_e_InterMarkets)0U)
#define CeOBCR_e_EuropeAfricaMiddleEast		((TeOBCR_e_InterMarkets)1U)
#define CeOBCR_e_Japan		((TeOBCR_e_InterMarkets)2U)
#define CeOBCR_e_Default		((TeOBCR_e_InterMarkets)3U)
#define CeOBCR_e_China		((TeOBCR_e_InterMarkets)4U)
#endif

/*
* Enum TeOBCR_e_ChrgFailSts 
* Default Value:CeOBCR_e_No_FLT 
*/
#ifndef TeOBCR_e_ChrgFailSts
typedef uint8 TeOBCR_e_ChrgFailSts;
#define CeOBCR_e_No_FLT		((TeOBCR_e_ChrgFailSts)0U)
#define CeOBCR_e_Flt_ChrgAlwd		((TeOBCR_e_ChrgFailSts)1U)
#define CeOBCR_e_Flt_ChrgNotAlwd		((TeOBCR_e_ChrgFailSts)2U)
#define CeOBCR_e_Flt_ChrgTerm		((TeOBCR_e_ChrgFailSts)3U)
#define CeOBCR_e_Flt_AC_Fail_DC_Allwd		((TeOBCR_e_ChrgFailSts)4U)
#define CeOBCR_e_Flt_SNA		((TeOBCR_e_ChrgFailSts)7U)
#endif

/*
* Enum TeOBCR_e_WU_Stat_OBCM 
* Default Value:CeOBCR_e_WU_FLT 
*/
#ifndef TeOBCR_e_WU_Stat_OBCM
typedef uint8 TeOBCR_e_WU_Stat_OBCM;
#define CeOBCR_e_WU_FLT		((TeOBCR_e_WU_Stat_OBCM)0U)
#define CeOBCR_e_WU_OFF		((TeOBCR_e_WU_Stat_OBCM)1U)
#define CeOBCR_e_WU_ON		((TeOBCR_e_WU_Stat_OBCM)2U)
#define CeOBCR_e_WU_SNA		((TeOBCR_e_WU_Stat_OBCM)3U)
#endif

/*
* Enum TeOBCR_e_HCP_DlyTmr 
* Default Value:CeOBCR_e_DlyTmr_ZERO 
*/
#ifndef TeOBCR_e_HCP_DlyTmr
typedef uint8 TeOBCR_e_HCP_DlyTmr;
#define CeOBCR_e_DlyTmr_ZERO		((TeOBCR_e_HCP_DlyTmr)0U)
#define CeOBCR_e_DlyTmr_15		((TeOBCR_e_HCP_DlyTmr)1U)
#define CeOBCR_e_DlyTmr_30		((TeOBCR_e_HCP_DlyTmr)2U)
#define CeOBCR_e_DlyTmr_45		((TeOBCR_e_HCP_DlyTmr)3U)
#define CeOBCR_e_DlyTmr_1h		((TeOBCR_e_HCP_DlyTmr)4U)
#define CeOBCR_e_DlyTmr_2h		((TeOBCR_e_HCP_DlyTmr)5U)
#define CeOBCR_e_DlyTmr_4h		((TeOBCR_e_HCP_DlyTmr)6U)
#define CeOBCR_e_DlyTmr_8h		((TeOBCR_e_HCP_DlyTmr)7U)
#define CeOBCR_e_DlyTmr_16h		((TeOBCR_e_HCP_DlyTmr)8U)
#define CeOBCR_e_DlyTmr_24h		((TeOBCR_e_HCP_DlyTmr)9U)
#define CeOBCR_e_DlyTmr_48h		((TeOBCR_e_HCP_DlyTmr)10U)
#define CeOBCR_e_DlyTmr_PTS		((TeOBCR_e_HCP_DlyTmr)14U)
#define CeOBCR_e_DlyTmr_SNA		((TeOBCR_e_HCP_DlyTmr)15U)
#endif

/*
* Enum TeOBCR_e_PwrPnlStat_OBCM 
* Default Value:CeOBCR_e_Off_PP_OBCM 
*/
#ifndef TeOBCR_e_PwrPnlStat_OBCM
typedef uint8 TeOBCR_e_PwrPnlStat_OBCM;
#define CeOBCR_e_Off_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)0U)
#define CeOBCR_e_CO_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)1U)
#define CeOBCR_e_CCNV_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)2U)
#define CeOBCR_e_CCV_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)3U)
#define CeOBCR_e_IF_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)4U)
#define CeOBCR_e_CF_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)5U)
#define CeOBCR_e_OC_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)6U)
#define CeOBCR_e_SNA_PP_OBCM		((TeOBCR_e_PwrPnlStat_OBCM)15U)
#endif

/*
* Enum TeOBCR_e_J1772Stat_OBCM 
* Default Value:CeOBCR_e_J1772_VehNotCon_OBCM 
*/
#ifndef TeOBCR_e_J1772Stat_OBCM
typedef uint8 TeOBCR_e_J1772Stat_OBCM;
#define CeOBCR_e_J1772_VehNotCon_OBCM		((TeOBCR_e_J1772Stat_OBCM)0U)
#define CeOBCR_e_J1772_ConNotRdy_OBCM		((TeOBCR_e_J1772Stat_OBCM)1U)
#define CeOBCR_e_J1772_ConRdyNoVentiReq_OBCM		((TeOBCR_e_J1772Stat_OBCM)2U)
#define CeOBCR_e_J1772_ConRdyVentiReq_OBCM		((TeOBCR_e_J1772Stat_OBCM)3U)
#define CeOBCR_e_J1772_EVSE_Issue1_OBCM		((TeOBCR_e_J1772Stat_OBCM)4U)
#define CeOBCR_e_J1772_EVSE_Issue2_OBCM		((TeOBCR_e_J1772Stat_OBCM)5U)
#define CeOBCR_e_J1772_SNA_OBCM		((TeOBCR_e_J1772Stat_OBCM)7U)
#endif

/*
* Enum TeOBCR_e_NotChargingReasons 
* Default Value:CeOBCR_e_NCR_NoFault 
*/
#ifndef TeOBCR_e_NotChargingReasons
typedef uint8 TeOBCR_e_NotChargingReasons;
#define CeOBCR_e_NCR_NoFault		((TeOBCR_e_NotChargingReasons)0U)
#define CeOBCR_e_NCR_ChrgInitialization		((TeOBCR_e_NotChargingReasons)1U)
#define CeOBCR_e_NCR_CheckChrgFaults		((TeOBCR_e_NotChargingReasons)2U)
#define CeOBCR_e_NCR_ErraticBehDetected		((TeOBCR_e_NotChargingReasons)3U)
#define CeOBCR_e_NCR_DtmnIdleStateTimeOut		((TeOBCR_e_NotChargingReasons)4U)
#define CeOBCR_e_NCR_DtmnS2_ClosedTimeOut		((TeOBCR_e_NotChargingReasons)5U)
#define CeOBCR_e_NCR_ChrgPrcssEstTimeOut		((TeOBCR_e_NotChargingReasons)6U)
#define CeOBCR_e_NCR_ChrgInitTimeOut		((TeOBCR_e_NotChargingReasons)7U)
#define CeOBCR_e_NCR_StartChrgTimeOut		((TeOBCR_e_NotChargingReasons)8U)
#define CeOBCR_e_NCR_ChrgOperation		((TeOBCR_e_NotChargingReasons)9U)
#define CeOBCR_e_NCR_ChrgingFailSafeTimeOut		((TeOBCR_e_NotChargingReasons)10U)
#define CeOBCR_e_NCR_OBCM_InitiatedShutDwn		((TeOBCR_e_NotChargingReasons)11U)
#define CeOBCR_e_NCR_BPCM_ReportedFullChrg		((TeOBCR_e_NotChargingReasons)12U)
#define CeOBCR_e_NCR_OBCR_DtmnFullChrgReached		((TeOBCR_e_NotChargingReasons)13U)
#define CeOBCR_e_NCR_MultiCondtnChrgPauseShutDwn		((TeOBCR_e_NotChargingReasons)14U)
#define CeOBCR_e_NCR_ChargerUTCorSTOP		((TeOBCR_e_NotChargingReasons)15U)
#define CeOBCR_e_NCR_BCMNotReady		((TeOBCR_e_NotChargingReasons)16U)
#define CeOBCR_e_NCR_UnplugEvent		((TeOBCR_e_NotChargingReasons)17U)
#define CeOBCR_e_NCR_PBCM_NotRdy		((TeOBCR_e_NotChargingReasons)18U)
#define CeOBCR_e_NCR_TimeOutDisBattery		((TeOBCR_e_NotChargingReasons)19U)
#define CeOBCR_e_NCR_BPCM_NotReady		((TeOBCR_e_NotChargingReasons)20U)
#define CeOBCR_e_NCR_MultiCondtnChrgPauseTimeOut		((TeOBCR_e_NotChargingReasons)21U)
#define CeOBCR_e_NCR_ChargingState		((TeOBCR_e_NotChargingReasons)22U)
#define CeOBCR_e_NCR_Ssdr_NotReady		((TeOBCR_e_NotChargingReasons)23U)
#define CeOBCR_e_NCR_BatAlreadyCharged		((TeOBCR_e_NotChargingReasons)24U)
#define CeOBCR_e_NCR_NoWallPower		((TeOBCR_e_NotChargingReasons)65U)
#endif

/*
* Enum TeOBCR_e_EVSE_PilotStat_OBCM 
* Default Value:CeOBCR_e_NO_EVSE_OBCM 
*/
#ifndef TeOBCR_e_EVSE_PilotStat_OBCM
typedef uint8 TeOBCR_e_EVSE_PilotStat_OBCM;
#define CeOBCR_e_NO_EVSE_OBCM		((TeOBCR_e_EVSE_PilotStat_OBCM)0U)
#define CeOBCR_e_CP_DET_EVSE_OBCM		((TeOBCR_e_EVSE_PilotStat_OBCM)1U)
#define CeOBCR_e_VOOR_EVSE_OBCM		((TeOBCR_e_EVSE_PilotStat_OBCM)2U)
#define CeOBCR_e_EVSE_NO_AC		((TeOBCR_e_EVSE_PilotStat_OBCM)3U)
#define CeOBCR_e_EVSE_HW_Flt		((TeOBCR_e_EVSE_PilotStat_OBCM)4U)
#define CeOBCR_e_EVSE_Flt		((TeOBCR_e_EVSE_PilotStat_OBCM)5U)
#endif

/*
* Enum TeOBCR_e_ChrgCntctrStat_BPCM 
* Default Value:CeOBCR_e_ChrgCntctr_Open 
*/
#ifndef TeOBCR_e_ChrgCntctrStat_BPCM
typedef uint8 TeOBCR_e_ChrgCntctrStat_BPCM;
#define CeOBCR_e_ChrgCntctr_Open		((TeOBCR_e_ChrgCntctrStat_BPCM)0U)
#define CeOBCR_e_ChrgCntctr_PreCharg		((TeOBCR_e_ChrgCntctrStat_BPCM)1U)
#define CeOBCR_e_ChrgCntctr_Closed		((TeOBCR_e_ChrgCntctrStat_BPCM)2U)
#define CeOBCR_e_ChrgCntctr_PreChargFail		((TeOBCR_e_ChrgCntctrStat_BPCM)3U)
#define CeOBCR_e_ChrgCntctr_PreChargIhbt		((TeOBCR_e_ChrgCntctrStat_BPCM)4U)
#define CeOBCR_e_ChrgCntctr_SNA		((TeOBCR_e_ChrgCntctrStat_BPCM)7U)
#define CeOBCR_e_ChrgCntctr_Pass		((TeOBCR_e_ChrgCntctrStat_BPCM)8U)
#endif

/*
* Enum TeOBCR_e_ChrgrModeStat_OBCM 
* Default Value:CeOBCR_e_Idle_OBCM 
*/
#ifndef TeOBCR_e_ChrgrModeStat_OBCM
typedef uint8 TeOBCR_e_ChrgrModeStat_OBCM;
#define CeOBCR_e_Idle_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)0U)
#define CeOBCR_e_Heater_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)1U)
#define CeOBCR_e_Charge_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)2U)
#define CeOBCR_e_Dischrg_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)3U)
#define CeOBCR_e_AC_GRD		((TeOBCR_e_ChrgrModeStat_OBCM)4U)
#define CeOBCR_e_UTC_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)5U)
#define CeOBCR_e_Stop_OBCM		((TeOBCR_e_ChrgrModeStat_OBCM)6U)
#define CeOBCR_e_ForceShtDwn		((TeOBCR_e_ChrgrModeStat_OBCM)7U)
#endif

/*
* Enum TeOBCR_e_ChrgrModeCmd_OBCM 
* Default Value:CeOBCR_e_Idle_OBCMdRq 
*/
#ifndef TeOBCR_e_ChrgrModeCmd_OBCM
typedef uint8 TeOBCR_e_ChrgrModeCmd_OBCM;
#define CeOBCR_e_Idle_OBCMdRq		((TeOBCR_e_ChrgrModeCmd_OBCM)0U)
#define CeOBCR_e_Heater_OBCMdRq		((TeOBCR_e_ChrgrModeCmd_OBCM)1U)
#define CeOBCR_e_Charge_OBCMdRq		((TeOBCR_e_ChrgrModeCmd_OBCM)2U)
#define CeOBCR_e_AC_PNL_OBCMdRq		((TeOBCR_e_ChrgrModeCmd_OBCM)3U)
#define CeOBCR_e_AC_GRD_Sync		((TeOBCR_e_ChrgrModeCmd_OBCM)4U)
#define CeOBCR_e_AC_GRD_Synth		((TeOBCR_e_ChrgrModeCmd_OBCM)5U)
#define CeOBCR_e_Dischrg_OBCMdRq		((TeOBCR_e_ChrgrModeCmd_OBCM)6U)
#define CeOBCR_e_OBCMdRq_SNA		((TeOBCR_e_ChrgrModeCmd_OBCM)7U)
#endif

/*
* Enum TeOBCR_e_PlugInStat_HCP 
* Default Value:CeOBCR_e_NotPlugedIn_HCP 
*/
#ifndef TeOBCR_e_PlugInStat_HCP
typedef uint8 TeOBCR_e_PlugInStat_HCP;
#define CeOBCR_e_NotPlugedIn_HCP		((TeOBCR_e_PlugInStat_HCP)0U)
#define CeOBCR_e_PlugedIn_HCP		((TeOBCR_e_PlugInStat_HCP)1U)
#define CeOBCR_e_PowerPanel_HCP		((TeOBCR_e_PlugInStat_HCP)2U)
#define CeOBCR_e_Grid_HCP		((TeOBCR_e_PlugInStat_HCP)3U)
#endif

/*
* Enum TeOBCR_e_PlugInStat 
* Default Value:CeOBCR_e_NotPluggedIn 
*/
#ifndef TeOBCR_e_PlugInStat
typedef uint8 TeOBCR_e_PlugInStat;
#define CeOBCR_e_NotPluggedIn		((TeOBCR_e_PlugInStat)0U)
#define CeOBCR_e_PartialPlugInPF		((TeOBCR_e_PlugInStat)1U)
#define CeOBCR_e_PartialPlugInDAlwd		((TeOBCR_e_PlugInStat)2U)
#define CeOBCR_e_Cnctd_NotDtrned		((TeOBCR_e_PlugInStat)3U)
#define CeOBCR_e_PlugON		((TeOBCR_e_PlugInStat)4U)
#define CeOBCR_e_PlugInSNA		((TeOBCR_e_PlugInStat)5U)
#endif

/*
* Enum TeOBCR_e_ChrgSysStat 
* Default Value:CeOBCR_e_PowerUp 
*/
#ifndef TeOBCR_e_ChrgSysStat
typedef uint8 TeOBCR_e_ChrgSysStat;
#define CeOBCR_e_PowerUp		((TeOBCR_e_ChrgSysStat)0U)
#define CeOBCR_e_BPCM_Ready		((TeOBCR_e_ChrgSysStat)1U)
#define CeOBCR_e_OBCM_Idle		((TeOBCR_e_ChrgSysStat)2U)
#define CeOBCR_e_CloseS2		((TeOBCR_e_ChrgSysStat)3U)
#define CeOBCR_e_OBCM_Charge		((TeOBCR_e_ChrgSysStat)4U)
#define CeOBCR_e_OBCM_EnblCharge		((TeOBCR_e_ChrgSysStat)5U)
#define CeOBCR_e_StatReserved1		((TeOBCR_e_ChrgSysStat)6U)
#define CeOBCR_e_StatReserved2		((TeOBCR_e_ChrgSysStat)7U)
#define CeOBCR_e_StatReserved3		((TeOBCR_e_ChrgSysStat)8U)
#define CeOBCR_e_Charging		((TeOBCR_e_ChrgSysStat)9U)
#define CeOBCR_e_ChargingPaused		((TeOBCR_e_ChrgSysStat)10U)
#define CeOBCR_e_ChargeComplete		((TeOBCR_e_ChrgSysStat)11U)
#define CeOBCR_e_ShutDown		((TeOBCR_e_ChrgSysStat)12U)
#define CeOBCR_e_DCChrg_Wait		((TeOBCR_e_ChrgSysStat)14U)
#define CeOBCR_e_EStop		((TeOBCR_e_ChrgSysStat)20U)
#endif

/*
* Enum TeOBCR_e_ChrgrTrsfMethodReq 
* Default Value:CeOBCR_e_Current 
*/
#ifndef TeOBCR_e_ChrgrTrsfMethodReq
typedef uint8 TeOBCR_e_ChrgrTrsfMethodReq;
#define CeOBCR_e_Current		((TeOBCR_e_ChrgrTrsfMethodReq)0U)
#define CeOBCR_e_Voltage		((TeOBCR_e_ChrgrTrsfMethodReq)1U)
#define CeOBCR_e_Power		((TeOBCR_e_ChrgrTrsfMethodReq)2U)
#endif

/*
* Enum TeOBCR_e_ChargingStat_BPCM 
* Default Value:CeOBCR_e_BattNotReady 
*/
#ifndef TeOBCR_e_ChargingStat_BPCM
typedef uint8 TeOBCR_e_ChargingStat_BPCM;
#define CeOBCR_e_BattNotReady		((TeOBCR_e_ChargingStat_BPCM)0U)
#define CeOBCR_e_ReadyForCommand		((TeOBCR_e_ChargingStat_BPCM)1U)
#define CeOBCR_e_Chrg_CurntAllow		((TeOBCR_e_ChargingStat_BPCM)2U)
#define CeOBCR_e_Chrg_CurntDisAllow		((TeOBCR_e_ChargingStat_BPCM)3U)
#define CeOBCR_e_Dischrg_CurntAllow		((TeOBCR_e_ChargingStat_BPCM)4U)
#define CeOBCR_e_Dischrg_CurntDisAllow		((TeOBCR_e_ChargingStat_BPCM)5U)
#define CeOBCR_e_Complete		((TeOBCR_e_ChargingStat_BPCM)6U)
#define CeOBCR_e_SNA		((TeOBCR_e_ChargingStat_BPCM)7U)
#define CeOBCR_e_ChargingStat_Pass		((TeOBCR_e_ChargingStat_BPCM)8U)
#endif

/*
* Enum TeOBCR_e_ProxStat_OBCM 
* Default Value:CeOBCR_e_ProxLo_OBCM 
*/
#ifndef TeOBCR_e_ProxStat_OBCM
typedef uint8 TeOBCR_e_ProxStat_OBCM;
#define CeOBCR_e_ProxLo_OBCM		((TeOBCR_e_ProxStat_OBCM)0U)
#define CeOBCR_e_ProxOut_OBCM		((TeOBCR_e_ProxStat_OBCM)1U)
#define CeOBCR_e_ProxIn_OBCM		((TeOBCR_e_ProxStat_OBCM)2U)
#define CeOBCR_e_ProxUN_OBCM		((TeOBCR_e_ProxStat_OBCM)3U)
#define CeOBCR_e_ProxVOOR_OBCM		((TeOBCR_e_ProxStat_OBCM)6U)
#define CeOBCR_e_ProxHi_OBCM		((TeOBCR_e_ProxStat_OBCM)7U)
#endif

/*
* Enum TeOBCR_e_OBCM_Charger_Ready 
* Default Value:CeOBCR_e_CR_WU_FLT 
*/
#ifndef TeOBCR_e_OBCM_Charger_Ready
typedef uint8 TeOBCR_e_OBCM_Charger_Ready;
#define CeOBCR_e_CR_WU_FLT		((TeOBCR_e_OBCM_Charger_Ready)0U)
#define CeOBCR_e_CR_OFF		((TeOBCR_e_OBCM_Charger_Ready)1U)
#define CeOBCR_e_CR_ON		((TeOBCR_e_OBCM_Charger_Ready)2U)
#define CeOBCR_e_CR_SNA		((TeOBCR_e_OBCM_Charger_Ready)3U)
#endif

/*
* Enum TeOBCR_e_HVBattBalReq 
* Default Value:CeOBCR_e_NoRequest 
*/
#ifndef TeOBCR_e_HVBattBalReq
typedef uint8 TeOBCR_e_HVBattBalReq;
#define CeOBCR_e_NoRequest		((TeOBCR_e_HVBattBalReq)0U)
#define CeOBCR_e_RequestNotBalance		((TeOBCR_e_HVBattBalReq)1U)
#define CeOBCR_e_RequestBalance		((TeOBCR_e_HVBattBalReq)2U)
#define CeOBCR_e_HVBattBalReqSNA		((TeOBCR_e_HVBattBalReq)3U)
#endif

/*
* Enum TeOBCR_e_HVCM_SelPaymentOptn 
* Default Value:CeOBCR_e_NoPaymentSel 
*/
#ifndef TeOBCR_e_HVCM_SelPaymentOptn
typedef uint8 TeOBCR_e_HVCM_SelPaymentOptn;
#define CeOBCR_e_NoPaymentSel		((TeOBCR_e_HVCM_SelPaymentOptn)0U)
#define CeOBCR_e_ExternalPayment		((TeOBCR_e_HVCM_SelPaymentOptn)1U)
#define CeOBCR_e_Contract		((TeOBCR_e_HVCM_SelPaymentOptn)2U)
#define CeOBCR_e_PymOpt_SNA		((TeOBCR_e_HVCM_SelPaymentOptn)3U)
#endif

/*
* Enum TeOBCR_e_ChargingLevel 
* Default Value:CeOBCR_e_ChargingLvlDefault 
*/
#ifndef TeOBCR_e_ChargingLevel
typedef uint8 TeOBCR_e_ChargingLevel;
#define CeOBCR_e_ChargingLvlDefault		((TeOBCR_e_ChargingLevel)0U)
#define CeOBCR_e_ChargingLvlAC1		((TeOBCR_e_ChargingLevel)1U)
#define CeOBCR_e_ChargingLvlAC2		((TeOBCR_e_ChargingLevel)2U)
#define CeOBCR_e_ChargingLvlAC3		((TeOBCR_e_ChargingLevel)3U)
#define CeOBCR_e_ChargingLvlDC1		((TeOBCR_e_ChargingLevel)4U)
#define CeOBCR_e_ChargingLvlDC2		((TeOBCR_e_ChargingLevel)5U)
#define CeOBCR_e_PlugInNotDetermined		((TeOBCR_e_ChargingLevel)6U)
#define CeOBCR_e_PartialPlugInPrkF		((TeOBCR_e_ChargingLevel)7U)
#define CeOBCR_e_PartialPlugDrvAlwd		((TeOBCR_e_ChargingLevel)8U)
#define CeOBCR_e_ChargingLvlSNA		((TeOBCR_e_ChargingLevel)15U)
#endif

/*
* Enum TeOBCR_e_ChargingSystemSts 
* Default Value:CeOBCR_e_NotCharging 
*/
#ifndef TeOBCR_e_ChargingSystemSts
typedef uint8 TeOBCR_e_ChargingSystemSts;
#define CeOBCR_e_NotCharging		((TeOBCR_e_ChargingSystemSts)0U)
#define CeOBCR_e_ChargingSts_Charging		((TeOBCR_e_ChargingSystemSts)1U)
#define CeOBCR_e_ChargingSts_Interrupted		((TeOBCR_e_ChargingSystemSts)2U)
#define CeOBCR_e_ChargingSts_Complete		((TeOBCR_e_ChargingSystemSts)3U)
#endif

/*
* Enum TeOBCR_e_ChrgPort_Req 
* Default Value:CeOBCR_e_PortNoRequest 
*/
#ifndef TeOBCR_e_ChrgPort_Req
typedef uint8 TeOBCR_e_ChrgPort_Req;
#define CeOBCR_e_PortNoRequest		((TeOBCR_e_ChrgPort_Req)0U)
#define CeOBCR_e_UnlockInlet		((TeOBCR_e_ChrgPort_Req)1U)
#define CeOBCR_e_LockInlet		((TeOBCR_e_ChrgPort_Req)2U)
#define CeOBCR_e_PortSNA		((TeOBCR_e_ChrgPort_Req)3U)
#endif

/*
* Enum TeOBCR_e_DoorLockSts 
* Default Value:CeOBCR_e_LKD 
*/
#ifndef TeOBCR_e_DoorLockSts
typedef uint8 TeOBCR_e_DoorLockSts;
#define CeOBCR_e_LKD		((TeOBCR_e_DoorLockSts)0U)
#define CeOBCR_e_Drv_Dr_Unlkd		((TeOBCR_e_DoorLockSts)1U)
#define CeOBCR_e_All_Dr_Unlkd		((TeOBCR_e_DoorLockSts)2U)
#define CeOBCR_e_PassDrUnlck		((TeOBCR_e_DoorLockSts)3U)
#define CeOBCR_e_Drv_Pass_DrUnlck		((TeOBCR_e_DoorLockSts)4U)
#define CeOBCR_e_RearDr_Unlckd		((TeOBCR_e_DoorLockSts)5U)
#define CeOBCR_e_FrontDr_Unlckd		((TeOBCR_e_DoorLockSts)6U)
#define CeOBCR_e_DoorSNA		((TeOBCR_e_DoorLockSts)7U)
#endif

/*
* Enum TeOBCR_e_ChargeType 
* Default Value:CeOBCR_e_AC 
*/
#ifndef TeOBCR_e_ChargeType
typedef uint8 TeOBCR_e_ChargeType;
#define CeOBCR_e_AC		((TeOBCR_e_ChargeType)0U)
#define CeOBCR_e_DC		((TeOBCR_e_ChargeType)1U)
#define CeOBCR_e_WPT		((TeOBCR_e_ChargeType)2U)
#define CeOBCR_e_ChargeType1		((TeOBCR_e_ChargeType)3U)
#define CeOBCR_e_Discharge		((TeOBCR_e_ChargeType)4U)
#endif

/*
* Enum TeOBCR_e_ChrgPortLock_Sts 
* Default Value:CeOBCR_e_DefaultLock_Sts 
*/
#ifndef TeOBCR_e_ChrgPortLock_Sts
typedef uint8 TeOBCR_e_ChrgPortLock_Sts;
#define CeOBCR_e_DefaultLock_Sts		((TeOBCR_e_ChrgPortLock_Sts)0U)
#define CeOBCR_e_InletUnlocked		((TeOBCR_e_ChrgPortLock_Sts)1U)
#define CeOBCR_e_InletLocked		((TeOBCR_e_ChrgPortLock_Sts)2U)
#define CeOBCR_e_InletLockSNA		((TeOBCR_e_ChrgPortLock_Sts)3U)
#endif

/*
* Enum TeOBCR_e_ChrgPortLockType 
* Default Value:CeOBCR_e_ChrgPortLock_NoType 
*/
#ifndef TeOBCR_e_ChrgPortLockType
typedef uint8 TeOBCR_e_ChrgPortLockType;
#define CeOBCR_e_ChrgPortLock_NoType		((TeOBCR_e_ChrgPortLockType)0U)
#define CeOBCR_e_ChrgPortLock_TypeA		((TeOBCR_e_ChrgPortLockType)1U)
#define CeOBCR_e_ChrgPortLock_TypeB		((TeOBCR_e_ChrgPortLockType)2U)
#define CeOBCR_e_ChrgPortLock_TypeC		((TeOBCR_e_ChrgPortLockType)3U)
#define CeOBCR_e_ChrgPortLock_TypeD		((TeOBCR_e_ChrgPortLockType)4U)
#endif

/*
* Enum TeOBCR_e_PwrLimReq 
* Default Value:CeOBCR_e_PwrLimReq_SNA 
*/
#ifndef TeOBCR_e_PwrLimReq
typedef uint8 TeOBCR_e_PwrLimReq;
#define CeOBCR_e_PwrLimReq_NoChange		((TeOBCR_e_PwrLimReq)0U)
#define CeOBCR_e_PwrLimReq_Min		((TeOBCR_e_PwrLimReq)1U)
#define CeOBCR_e_PwrLimReq_Slow		((TeOBCR_e_PwrLimReq)2U)
#define CeOBCR_e_PwrLimReq_Reduced		((TeOBCR_e_PwrLimReq)3U)
#define CeOBCR_e_PwrLimReq_Quick		((TeOBCR_e_PwrLimReq)4U)
#define CeOBCR_e_PwrLimReq_Max		((TeOBCR_e_PwrLimReq)5U)
#define CeOBCR_e_PwrLimReq_SNA		((TeOBCR_e_PwrLimReq)7U)
#endif

/*
* Enum TeOBCR_e_DCCntctrCmd 
* Default Value:CeOBCR_e_DCCntctr_Open 
*/
#ifndef TeOBCR_e_DCCntctrCmd
typedef uint8 TeOBCR_e_DCCntctrCmd;
#define CeOBCR_e_DCCntctr_Open		((TeOBCR_e_DCCntctrCmd)0U)
#define CeOBCR_e_DCCntctr_Close		((TeOBCR_e_DCCntctrCmd)1U)
#define CeOBCR_e_DCCntctr_ImpctOpn		((TeOBCR_e_DCCntctrCmd)2U)
#define CeOBCR_e_DCCntctr_FastOpn		((TeOBCR_e_DCCntctrCmd)3U)
#define CeOBCR_e_DCCntctr_SNA		((TeOBCR_e_DCCntctrCmd)7U)
#endif

/*
* Enum TeOBCR_e_DCChrg_TestSts 
* Default Value:CeOBCR_e_DCChrg_TestSts_NotInit 
*/
#ifndef TeOBCR_e_DCChrg_TestSts
typedef uint8 TeOBCR_e_DCChrg_TestSts;
#define CeOBCR_e_DCChrg_TestSts_NotInit		((TeOBCR_e_DCChrg_TestSts)0U)
#define CeOBCR_e_DCChrg_TestSts_InProgress		((TeOBCR_e_DCChrg_TestSts)1U)
#define CeOBCR_e_DCChrg_TestSts_Passed		((TeOBCR_e_DCChrg_TestSts)2U)
#define CeOBCR_e_DCChrg_TestSts_Failed		((TeOBCR_e_DCChrg_TestSts)3U)
#endif

/*
* Enum TeOBCR_e_HCP_DC_Retry 
* Default Value:CeOBCR_e_No_Retry_Command 
*/
#ifndef TeOBCR_e_HCP_DC_Retry
typedef uint8 TeOBCR_e_HCP_DC_Retry;
#define CeOBCR_e_No_Retry_Command		((TeOBCR_e_HCP_DC_Retry)0U)
#define CeOBCR_e_SupportedAppProtocolReq		((TeOBCR_e_HCP_DC_Retry)1U)
#define CeOBCR_e_SessionSetupReq		((TeOBCR_e_HCP_DC_Retry)2U)
#define CeOBCR_e_ServiceDiscoveryReq		((TeOBCR_e_HCP_DC_Retry)3U)
#define CeOBCR_e_ServicePaymentSelectionReq		((TeOBCR_e_HCP_DC_Retry)4U)
#define CeOBCR_e_Contract_AuthenticationReq		((TeOBCR_e_HCP_DC_Retry)5U)
#define CeOBCR_e_ChargeParameterDiscoveryReq		((TeOBCR_e_HCP_DC_Retry)6U)
#define CeOBCR_e_CableCheckReq		((TeOBCR_e_HCP_DC_Retry)7U)
#define CeOBCR_e_Pre_chargeReq		((TeOBCR_e_HCP_DC_Retry)8U)
#define CeOBCR_e_PowerDeliveryReq_Precharge		((TeOBCR_e_HCP_DC_Retry)9U)
#define CeOBCR_e_CurrentDemandReq		((TeOBCR_e_HCP_DC_Retry)10U)
#define CeOBCR_e_PowerDeliveryReq_EnergyTransfer		((TeOBCR_e_HCP_DC_Retry)11U)
#define CeOBCR_e_WeldingDetectionReq		((TeOBCR_e_HCP_DC_Retry)12U)
#define CeOBCR_e_SessionStopReq		((TeOBCR_e_HCP_DC_Retry)13U)
#define CeOBCR_e_DCRetry_SNA		((TeOBCR_e_HCP_DC_Retry)31U)
#endif

/*
* Enum TeOBCR_e_CellVoltageStatus 
* Default Value:CeOBCR_e_CellVoltStat_Normal 
*/
#ifndef TeOBCR_e_CellVoltageStatus
typedef uint8 TeOBCR_e_CellVoltageStatus;
#define CeOBCR_e_CellVoltStat_Normal		((TeOBCR_e_CellVoltageStatus)0U)
#define CeOBCR_e_CellVoltStat_TooLow		((TeOBCR_e_CellVoltageStatus)1U)
#define CeOBCR_e_CellVoltStat_TooHigh		((TeOBCR_e_CellVoltageStatus)2U)
#define CeOBCR_e_CellVoltStat_SNA		((TeOBCR_e_CellVoltageStatus)3U)
#endif

/*
* Enum TeOBCR_e_ChrgCurrStatus 
* Default Value:CeOBCR_e_ChrgCurrStat_Normal 
*/
#ifndef TeOBCR_e_ChrgCurrStatus
typedef uint8 TeOBCR_e_ChrgCurrStatus;
#define CeOBCR_e_ChrgCurrStat_Normal		((TeOBCR_e_ChrgCurrStatus)0U)
#define CeOBCR_e_ChrgCurrStat_TooLow		((TeOBCR_e_ChrgCurrStatus)1U)
#define CeOBCR_e_ChrgCurrStat_TooHigh		((TeOBCR_e_ChrgCurrStatus)2U)
#define CeOBCR_e_ChrgCurrStat_SNA		((TeOBCR_e_ChrgCurrStatus)3U)
#endif

/*
* Enum TeOBCR_e_BattTempStatus 
* Default Value:CeOBCR_e_BattTempStat_Normal 
*/
#ifndef TeOBCR_e_BattTempStatus
typedef uint8 TeOBCR_e_BattTempStatus;
#define CeOBCR_e_BattTempStat_Normal		((TeOBCR_e_BattTempStatus)0U)
#define CeOBCR_e_BattTempStat_TooLow		((TeOBCR_e_BattTempStatus)1U)
#define CeOBCR_e_BattTempStat_TooHigh		((TeOBCR_e_BattTempStatus)2U)
#define CeOBCR_e_BattTempStat_SNA		((TeOBCR_e_BattTempStatus)3U)
#endif

/*
* Enum TeOBCR_e_BattSOCStatus 
* Default Value:CeOBCR_e_BattSOCStat_Normal 
*/
#ifndef TeOBCR_e_BattSOCStatus
typedef uint8 TeOBCR_e_BattSOCStatus;
#define CeOBCR_e_BattSOCStat_Normal		((TeOBCR_e_BattSOCStatus)0U)
#define CeOBCR_e_BattSOCStat_TooLow		((TeOBCR_e_BattSOCStatus)1U)
#define CeOBCR_e_BattSOCStat_TooHigh		((TeOBCR_e_BattSOCStatus)2U)
#define CeOBCR_e_BattSOCStat_SNA		((TeOBCR_e_BattSOCStatus)3U)
#endif

/*
* Enum TeOBCR_e_DCGBTChrgSysStat 
* Default Value:CeOBCR_e_DCGBTinit 
*/
#ifndef TeOBCR_e_DCGBTChrgSysStat
typedef uint8 TeOBCR_e_DCGBTChrgSysStat;
#define CeOBCR_e_DCGBTinit		((TeOBCR_e_DCGBTChrgSysStat)0U)
#define CeOBCR_e_DCGBTChrgInit		((TeOBCR_e_DCGBTChrgSysStat)1U)
#define CeOBCR_e_DCGBTIsoDisable		((TeOBCR_e_DCGBTChrgSysStat)2U)
#define CeOBCR_e_DCGBTDCCntctrCmd		((TeOBCR_e_DCGBTChrgSysStat)3U)
#define CeOBCR_e_DCGBTEVRdy		((TeOBCR_e_DCGBTChrgSysStat)4U)
#define CeOBCR_e_DCGBTRdyToChrg		((TeOBCR_e_DCGBTChrgSysStat)5U)
#define CeOBCR_e_DCGBTCrntDmd		((TeOBCR_e_DCGBTChrgSysStat)6U)
#define CeOBCR_e_DCGBTShtDwn		((TeOBCR_e_DCGBTChrgSysStat)7U)
#define CeOBCR_e_DCGBTShtDwnCurrCheck		((TeOBCR_e_DCGBTChrgSysStat)8U)
#define CeOBCR_e_ShtDwnDCGBTCntctropn		((TeOBCR_e_DCGBTChrgSysStat)9U)
#define CeOBCR_e_ShtDwnDCGBTCntctrFastOpn		((TeOBCR_e_DCGBTChrgSysStat)10U)
#define CeOBCR_e_DCGBTShtDwnIsoDisable		((TeOBCR_e_DCGBTChrgSysStat)11U)
#define CeOBCR_e_DCGBTShtDwnCmplt		((TeOBCR_e_DCGBTChrgSysStat)12U)
#endif

/*
* Enum TeOBCR_e_SOCReachedBST 
* Default Value:CeOBCR_e_SOC_NotReached 
*/
#ifndef TeOBCR_e_SOCReachedBST
typedef uint8 TeOBCR_e_SOCReachedBST;
#define CeOBCR_e_SOC_NotReached		((TeOBCR_e_SOCReachedBST)0U)
#define CeOBCR_e_SOC_Reached		((TeOBCR_e_SOCReachedBST)1U)
#define CeOBCR_e_SOC_UnautheticStatus		((TeOBCR_e_SOCReachedBST)10U)
#endif

/*
* Enum TeOBCR_e_BattPckVoltRchdBST 
* Default Value:CeOBCR_e_BattPckVolt_NotReached 
*/
#ifndef TeOBCR_e_BattPckVoltRchdBST
typedef uint8 TeOBCR_e_BattPckVoltRchdBST;
#define CeOBCR_e_BattPckVolt_NotReached		((TeOBCR_e_BattPckVoltRchdBST)0U)
#define CeOBCR_e_BattPckVolt_Reached		((TeOBCR_e_BattPckVoltRchdBST)1U)
#define CeOBCR_e_BattPckVolt_UnautheticStatus		((TeOBCR_e_BattPckVoltRchdBST)10U)
#endif

/*
* Enum TeOBCR_e_MaxCellVoltRchdBST 
* Default Value:CeOBCR_e_MaxCellVolt_NotReached 
*/
#ifndef TeOBCR_e_MaxCellVoltRchdBST
typedef uint8 TeOBCR_e_MaxCellVoltRchdBST;
#define CeOBCR_e_MaxCellVolt_NotReached		((TeOBCR_e_MaxCellVoltRchdBST)0U)
#define CeOBCR_e_MaxCellVolt_Reached		((TeOBCR_e_MaxCellVoltRchdBST)1U)
#define CeOBCR_e_MaxCellVolt_UnautheticStatus		((TeOBCR_e_MaxCellVoltRchdBST)10U)
#endif

/*
* Enum TeOBCR_e_ChrgCntrlMthd 
* Default Value:CeOBCR_e_ChrgMthd_Init 
*/
#ifndef TeOBCR_e_ChrgCntrlMthd
typedef uint8 TeOBCR_e_ChrgCntrlMthd;
#define CeOBCR_e_ChrgMthd_Init		((TeOBCR_e_ChrgCntrlMthd)0U)
#define CeOBCR_e_ChrgMthd_ConstantVoltage		((TeOBCR_e_ChrgCntrlMthd)1U)
#define CeOBCR_e_ChrgMthd_ConstantCurrent		((TeOBCR_e_ChrgCntrlMthd)2U)
#define CeOBCR_e_ChrgMthd_SNA		((TeOBCR_e_ChrgCntrlMthd)10U)
#endif

/*
* Enum TeOBCR_e_ChrgrInterruptBST 
* Default Value:CeOBCR_e_NoChrgrInterrupt 
*/
#ifndef TeOBCR_e_ChrgrInterruptBST
typedef uint8 TeOBCR_e_ChrgrInterruptBST;
#define CeOBCR_e_NoChrgrInterrupt		((TeOBCR_e_ChrgrInterruptBST)0U)
#define CeOBCR_e_ChrgrInterrupt		((TeOBCR_e_ChrgrInterruptBST)1U)
#define CeOBCR_e_ChrgrInterruptSNA		((TeOBCR_e_ChrgrInterruptBST)2U)
#endif

/*
* Enum TeOBCR_e_DCChrgStat 
* Default Value:CeOBCR_e_DCinit 
*/
#ifndef TeOBCR_e_DCChrgStat
typedef uint8 TeOBCR_e_DCChrgStat;
#define CeOBCR_e_DCinit		((TeOBCR_e_DCChrgStat)0U)
#define CeOBCR_e_DCinit1		((TeOBCR_e_DCChrgStat)1U)
#define CeOBCR_e_DCContractAuth		((TeOBCR_e_DCChrgStat)2U)
#define CeOBCR_e_DCChrgParDisc		((TeOBCR_e_DCChrgStat)3U)
#define CeOBCR_e_DCCableChk		((TeOBCR_e_DCChrgStat)4U)
#define CeOBCR_e_DCCableLockFdbkWait		((TeOBCR_e_DCChrgStat)5U)
#define CeOBCR_e_DCPreCIsoDisable		((TeOBCR_e_DCChrgStat)6U)
#define CeOBCR_e_DCPreCDCCntctrCmd		((TeOBCR_e_DCChrgStat)7U)
#define CeOBCR_e_DCPreCEVRdy		((TeOBCR_e_DCChrgStat)8U)
#define CeOBCR_e_DCCrntDmd		((TeOBCR_e_DCChrgStat)9U)
#define CeOBCR_e_DCShtDwn		((TeOBCR_e_DCChrgStat)10U)
#define CeOBCR_e_DCShtDwnV2G		((TeOBCR_e_DCChrgStat)11U)
#define CeOBCR_e_DCEmrgShtDwnS2opn		((TeOBCR_e_DCChrgStat)12U)
#define CeOBCR_e_DCEmrgShtDwnDCCntctropn		((TeOBCR_e_DCChrgStat)13U)
#define CeOBCR_e_DCEmrgShtDwnIsoDisable		((TeOBCR_e_DCChrgStat)14U)
#define CeOBCR_e_DCEmrgShtDwnSesStop		((TeOBCR_e_DCChrgStat)15U)
#define CeOBCR_e_DCShtDwnINIT		((TeOBCR_e_DCChrgStat)16U)
#define CeOBCR_e_DCShtDwnChrgNTRdy		((TeOBCR_e_DCChrgStat)17U)
#define CeOBCR_e_DCShtDwnS2opn		((TeOBCR_e_DCChrgStat)18U)
#define CeOBCR_e_DCShtDwnDCCntctropn		((TeOBCR_e_DCChrgStat)19U)
#define CeOBCR_e_DCShtDwnIsoDisable		((TeOBCR_e_DCChrgStat)20U)
#define CeOBCR_e_DCShtDwnSesStop		((TeOBCR_e_DCChrgStat)21U)
#define CeOBCR_e_DCShtDwnCmplt		((TeOBCR_e_DCChrgStat)22U)
#define CeOBCR_e_PnCstart		((TeOBCR_e_DCChrgStat)30U)
#define CeOBCR_e_PnC_TLSconn		((TeOBCR_e_DCChrgStat)31U)
#define CeOBCR_e_PnC_SuppAppProt		((TeOBCR_e_DCChrgStat)32U)
#define CeOBCR_e_PnC_ServDscvry		((TeOBCR_e_DCChrgStat)33U)
#define CeOBCR_e_PnC_WaitForAuth		((TeOBCR_e_DCChrgStat)34U)
#define CeOBCR_e_PnC_PortLockFdbkWait		((TeOBCR_e_DCChrgStat)35U)
#define CeOBCR_e_PnC_ChrgParDsvry		((TeOBCR_e_DCChrgStat)36U)
#define CeOBCR_e_PnC_CableChk		((TeOBCR_e_DCChrgStat)37U)
#define CeOBCR_e_PnC_IsoDisable		((TeOBCR_e_DCChrgStat)38U)
#define CeOBCR_e_PnC_DCCntctrCmd		((TeOBCR_e_DCChrgStat)39U)
#define CeOBCR_e_PnCEVRdy		((TeOBCR_e_DCChrgStat)40U)
#endif

/*
* Enum TeOBCR_e_HVCM_SelAppProtocol 
* Default Value:CeOBCR_e_DIN 
*/
#ifndef TeOBCR_e_HVCM_SelAppProtocol
typedef uint8 TeOBCR_e_HVCM_SelAppProtocol;
#define CeOBCR_e_DIN		((TeOBCR_e_HVCM_SelAppProtocol)0U)
#define CeOBCR_e_ISO_Gen1		((TeOBCR_e_HVCM_SelAppProtocol)1U)
#endif

/*
* Enum TeOBCR_e_DC_ChrgTypeCmd 
* Default Value:CeOBCR_e_DC_ChrgType_Null 
*/
#ifndef TeOBCR_e_DC_ChrgTypeCmd
typedef uint8 TeOBCR_e_DC_ChrgTypeCmd;
#define CeOBCR_e_DC_ChrgType_Null		((TeOBCR_e_DC_ChrgTypeCmd)0U)
#define CeOBCR_e_DC_ChrgType_800V		((TeOBCR_e_DC_ChrgTypeCmd)1U)
#define CeOBCR_e_DC_ChrgType_400V		((TeOBCR_e_DC_ChrgTypeCmd)2U)
#define CeOBCR_e_DC_ChrgType_SNA		((TeOBCR_e_DC_ChrgTypeCmd)3U)
#endif

/*
* Enum TeOBCR_e_ChargeportLock_Sts 
* Default Value:CeOBCR_e_PortLockSts_Default 
*/
#ifndef TeOBCR_e_ChargeportLock_Sts
typedef uint8 TeOBCR_e_ChargeportLock_Sts;
#define CeOBCR_e_PortLockSts_Default		((TeOBCR_e_ChargeportLock_Sts)0U)
#define CeOBCR_e_PortLockSts_Lckd		((TeOBCR_e_ChargeportLock_Sts)1U)
#define CeOBCR_e_PortLockSts_Unlckd		((TeOBCR_e_ChargeportLock_Sts)2U)
#define CeOBCR_e_PortLockSts_Resvd		((TeOBCR_e_ChargeportLock_Sts)3U)
#endif

/*
* Enum TeOBCR_e_OB_ChrgPwrLimID 
* Default Value:CeOBCR_e_BP_Voltage 
*/
#ifndef TeOBCR_e_OB_ChrgPwrLimID
typedef uint8 TeOBCR_e_OB_ChrgPwrLimID;
#define CeOBCR_e_BP_Voltage		((TeOBCR_e_OB_ChrgPwrLimID)0U)
#define CeOBCR_e_BP_Temp		((TeOBCR_e_OB_ChrgPwrLimID)1U)
#define CeOBCR_e_BP_MaxCellVolt		((TeOBCR_e_OB_ChrgPwrLimID)2U)
#define CeOBCR_e_BP_BPCMCurrent		((TeOBCR_e_OB_ChrgPwrLimID)3U)
#define CeOBCR_e_ChargeType_CrntLim		((TeOBCR_e_OB_ChrgPwrLimID)4U)
#define CeOBCR_e_ChargeTypeHW_CrntLim		((TeOBCR_e_OB_ChrgPwrLimID)5U)
#define CeOBCR_e_BP_MinCellVolt		((TeOBCR_e_OB_ChrgPwrLimID)6U)
#define CeOBCR_e_BP_MinCellTemp		((TeOBCR_e_OB_ChrgPwrLimID)7U)
#define CeOBCR_e_BP_MaxCellTemp		((TeOBCR_e_OB_ChrgPwrLimID)8U)
#define CeOBCR_e_BP_NoBattLimApld		((TeOBCR_e_OB_ChrgPwrLimID)9U)
#define CeOBCR_e_BP_SOC		((TeOBCR_e_OB_ChrgPwrLimID)10U)
#define CeOBCR_e_ChrgPortDerate		((TeOBCR_e_OB_ChrgPwrLimID)11U)
#define CeOBCR_e_PwrLvlSetting		((TeOBCR_e_OB_ChrgPwrLimID)12U)
#define CeOBCR_e_WiringCrnt		((TeOBCR_e_OB_ChrgPwrLimID)13U)
#define CeOBCR_e_EVSECrnt		((TeOBCR_e_OB_ChrgPwrLimID)14U)
#define CeOBCR_e_DCChrgTest_EOL		((TeOBCR_e_OB_ChrgPwrLimID)15U)
#define CeOBCR_e_ProgramPwrLimit		((TeOBCR_e_OB_ChrgPwrLimID)16U)
#define CeOBCR_e_EVSEPwrLimit		((TeOBCR_e_OB_ChrgPwrLimID)17U)
#define CeOBCR_e_ThrmlCurrLim		((TeOBCR_e_OB_ChrgPwrLimID)18U)
#endif

/*
* Enum TeOBCR_e_ProtocolPriority 
* Default Value:CeOBCR_e_No_Protocol 
*/
#ifndef TeOBCR_e_ProtocolPriority
typedef uint8 TeOBCR_e_ProtocolPriority;
#define CeOBCR_e_No_Protocol		((TeOBCR_e_ProtocolPriority)0U)
#define CeOBCR_e_ISO_15118_20		((TeOBCR_e_ProtocolPriority)1U)
#define CeOBCR_e_ISO_15118_2		((TeOBCR_e_ProtocolPriority)2U)
#define CeOBCR_e_DIN_70121		((TeOBCR_e_ProtocolPriority)3U)
#endif

/*
* Enum TeOBCR_e_ChargeProgress 
* Default Value:CeOBCR_e_No_Request 
*/
#ifndef TeOBCR_e_ChargeProgress
typedef uint8 TeOBCR_e_ChargeProgress;
#define CeOBCR_e_No_Request		((TeOBCR_e_ChargeProgress)0U)
#define CeOBCR_e_Start		((TeOBCR_e_ChargeProgress)1U)
#define CeOBCR_e_Stop		((TeOBCR_e_ChargeProgress)2U)
#define CeOBCR_e_Renegotiation		((TeOBCR_e_ChargeProgress)3U)
#endif

/*
* Enum TeODCR_e_IO_CntrlSt 
* Default Value:CeODCR_e_Return_ECU_Cntrl 
*/
#ifndef TeODCR_e_IO_CntrlSt
typedef uint8 TeODCR_e_IO_CntrlSt;
#define CeODCR_e_Return_ECU_Cntrl		((TeODCR_e_IO_CntrlSt)0U)
#define CeODCR_e_Return_Default_Cntrl		((TeODCR_e_IO_CntrlSt)1U)
#define CeODCR_e_FreezeCurrentSt		((TeODCR_e_IO_CntrlSt)2U)
#define CeODCR_e_ShortTermAdjust		((TeODCR_e_IO_CntrlSt)3U)
#endif

/*
* Enum TeOFCR_e_CPIM_LED_Sts 
* Default Value:CeOFCR_e_CPIM_LEDNormal 
*/
#ifndef TeOFCR_e_CPIM_LED_Sts
typedef uint8 TeOFCR_e_CPIM_LED_Sts;
#define CeOFCR_e_CPIM_LEDNormal		((TeOFCR_e_CPIM_LED_Sts)0U)
#define CeOFCR_e_CPIM_LEDOpen		((TeOFCR_e_CPIM_LED_Sts)1U)
#define CeOFCR_e_CPIM_LEDShort		((TeOFCR_e_CPIM_LED_Sts)2U)
#endif

/*
* Enum TeOFCR_e_CPIMType 
* Default Value:CeOFCR_e_CPIMType_A 
*/
#ifndef TeOFCR_e_CPIMType
typedef uint8 TeOFCR_e_CPIMType;
#define CeOFCR_e_CPIMType_Default		((TeOFCR_e_CPIMType)0U)
#define CeOFCR_e_CPIMType_A		((TeOFCR_e_CPIMType)1U)
#define CeOFCR_e_CPIMType_B		((TeOFCR_e_CPIMType)2U)
#endif

/*
* Enum TeOFCR_e_DayOfWeek 
* Default Value:CeOFCR_e_Day_NoDay 
*/
#ifndef TeOFCR_e_DayOfWeek
typedef uint8 TeOFCR_e_DayOfWeek;
#define CeOFCR_e_Day_Monday		((TeOFCR_e_DayOfWeek)0U)
#define CeOFCR_e_Day_Tuesday		((TeOFCR_e_DayOfWeek)1U)
#define CeOFCR_e_Day_Wednesday		((TeOFCR_e_DayOfWeek)2U)
#define CeOFCR_e_Day_Thursday		((TeOFCR_e_DayOfWeek)3U)
#define CeOFCR_e_Day_Friday		((TeOFCR_e_DayOfWeek)4U)
#define CeOFCR_e_Day_Saturday		((TeOFCR_e_DayOfWeek)5U)
#define CeOFCR_e_Day_Sunday		((TeOFCR_e_DayOfWeek)6U)
#define CeOFCR_e_Day_NoDay		((TeOFCR_e_DayOfWeek)15U)
#endif

/*
* Enum TeOHSR_e_ChssShftInhbtSignal 
* Default Value:CeOHSR_e_ChssShftInhbt 
*/
#ifndef TeOHSR_e_ChssShftInhbtSignal
typedef uint8 TeOHSR_e_ChssShftInhbtSignal;
#define CeOHSR_e_ChssShftInhbt		((TeOHSR_e_ChssShftInhbtSignal)0U)
#define CeOHSR_e_RefVehSpeed		((TeOHSR_e_ChssShftInhbtSignal)1U)
#define CeOHSR_e_RespType		((TeOHSR_e_ChssShftInhbtSignal)2U)
#endif

/*
* Enum TeOHSR_e_OptProblemType 
* Default Value:CeOHSR_e_ProblemTypeOptTo 
*/
#ifndef TeOHSR_e_OptProblemType
typedef uint8 TeOHSR_e_OptProblemType;
#define CeOHSR_e_ProblemTypeOptTo		((TeOHSR_e_OptProblemType)0U)
#define CeOHSR_e_ProblemTypeOptTb		((TeOHSR_e_OptProblemType)1U)
#define CeOHSR_e_ProblemTypeOptTa		((TeOHSR_e_OptProblemType)2U)
#endif

/*
* Enum TeOHSR_e_VLE_DriveStat 
* Default Value:CeOHSR_e_NeutralState 
*/
#ifndef TeOHSR_e_VLE_DriveStat
typedef uint8 TeOHSR_e_VLE_DriveStat;
#define CeOHSR_e_NeutralState		((TeOHSR_e_VLE_DriveStat)0U)
#define CeOHSR_e_CreepState		((TeOHSR_e_VLE_DriveStat)1U)
#define CeOHSR_e_LaunchState		((TeOHSR_e_VLE_DriveStat)2U)
#define CeOHSR_e_LaunchSpdCntrl		((TeOHSR_e_VLE_DriveStat)3U)
#endif

/*
* Enum TeOHSR_e_OptRng 
* Default Value:CeOHSR_e_Neutral 
*/
#ifndef TeOHSR_e_OptRng
typedef uint8 TeOHSR_e_OptRng;
#define CeOHSR_e_Neutral		((TeOHSR_e_OptRng)0U)
#define CeOHSR_e_Mode1		((TeOHSR_e_OptRng)1U)
#define CeOHSR_e_Mode2		((TeOHSR_e_OptRng)2U)
#define CeOHSR_e_Gr1		((TeOHSR_e_OptRng)3U)
#define CeOHSR_e_Gr2		((TeOHSR_e_OptRng)4U)
#define CeOHSR_e_Gr3		((TeOHSR_e_OptRng)5U)
#define CeOHSR_e_Gr4		((TeOHSR_e_OptRng)6U)
#define CeOHSR_e_HEOff		((TeOHSR_e_OptRng)7U)
#define CeOHSR_e_Mode2_HEOff		((TeOHSR_e_OptRng)8U)
#define CeOHSR_e_Neutral_HEOff		((TeOHSR_e_OptRng)9U)
#endif

/*
* Enum TeOHSR_e_OptRng_SG 
* Default Value:CeOHSR_e_SG_Neutral 
*/
#ifndef TeOHSR_e_OptRng_SG
typedef uint8 TeOHSR_e_OptRng_SG;
#define CeOHSR_e_SG_Neutral		((TeOHSR_e_OptRng_SG)0U)
#define CeOHSR_e_SG_ModeA		((TeOHSR_e_OptRng_SG)1U)
#define CeOHSR_e_SG_ModeB		((TeOHSR_e_OptRng_SG)2U)
#define CeOHSR_e_SG_Gear		((TeOHSR_e_OptRng_SG)3U)
#define CeOHSR_e_SG_EngOff		((TeOHSR_e_OptRng_SG)4U)
#define CeOHSR_e_SG_Neutral_EngOff		((TeOHSR_e_OptRng_SG)5U)
#endif

/*
* Enum TeOHSR_e_OptRngStGr_SG 
* Default Value:CeOHSR_e_Neutral_Rev 
*/
#ifndef TeOHSR_e_OptRngStGr_SG
typedef uint8 TeOHSR_e_OptRngStGr_SG;
#define CeOHSR_e_Neutral_Rev		((TeOHSR_e_OptRngStGr_SG)1U)
#define CeOHSR_e_Neutral_SG1		((TeOHSR_e_OptRngStGr_SG)2U)
#define CeOHSR_e_Neutral_SG2		((TeOHSR_e_OptRngStGr_SG)3U)
#define CeOHSR_e_Neutral_SG3		((TeOHSR_e_OptRngStGr_SG)4U)
#define CeOHSR_e_Neutral_SG4		((TeOHSR_e_OptRngStGr_SG)5U)
#define CeOHSR_e_Neutral_SG5		((TeOHSR_e_OptRngStGr_SG)6U)
#define CeOHSR_e_Neutral_SG6		((TeOHSR_e_OptRngStGr_SG)7U)
#define CeOHSR_e_Neutral_SG7		((TeOHSR_e_OptRngStGr_SG)8U)
#define CeOHSR_e_Neutral_SG8		((TeOHSR_e_OptRngStGr_SG)9U)
#define CeOHSR_e_ModeA_Rev		((TeOHSR_e_OptRngStGr_SG)10U)
#define CeOHSR_e_ModeA_SG1		((TeOHSR_e_OptRngStGr_SG)11U)
#define CeOHSR_e_ModeA_SG2		((TeOHSR_e_OptRngStGr_SG)12U)
#define CeOHSR_e_ModeA_SG3		((TeOHSR_e_OptRngStGr_SG)13U)
#define CeOHSR_e_ModeA_SG4		((TeOHSR_e_OptRngStGr_SG)14U)
#define CeOHSR_e_ModeA_SG5		((TeOHSR_e_OptRngStGr_SG)15U)
#define CeOHSR_e_ModeA_SG6		((TeOHSR_e_OptRngStGr_SG)16U)
#define CeOHSR_e_ModeA_SG7		((TeOHSR_e_OptRngStGr_SG)17U)
#define CeOHSR_e_ModeA_SG8		((TeOHSR_e_OptRngStGr_SG)18U)
#define CeOHSR_e_ModeB_Rev		((TeOHSR_e_OptRngStGr_SG)19U)
#define CeOHSR_e_ModeB_SG1		((TeOHSR_e_OptRngStGr_SG)20U)
#define CeOHSR_e_ModeB_SG2		((TeOHSR_e_OptRngStGr_SG)21U)
#define CeOHSR_e_ModeB_SG3		((TeOHSR_e_OptRngStGr_SG)22U)
#define CeOHSR_e_ModeB_SG4		((TeOHSR_e_OptRngStGr_SG)23U)
#define CeOHSR_e_ModeB_SG5		((TeOHSR_e_OptRngStGr_SG)24U)
#define CeOHSR_e_ModeB_SG6		((TeOHSR_e_OptRngStGr_SG)25U)
#define CeOHSR_e_ModeB_SG7		((TeOHSR_e_OptRngStGr_SG)26U)
#define CeOHSR_e_ModeB_SG8		((TeOHSR_e_OptRngStGr_SG)27U)
#define CeOHSR_e_Gear_Rev		((TeOHSR_e_OptRngStGr_SG)28U)
#define CeOHSR_e_Gear_SG1		((TeOHSR_e_OptRngStGr_SG)29U)
#define CeOHSR_e_Gear_SG2		((TeOHSR_e_OptRngStGr_SG)30U)
#define CeOHSR_e_Gear_SG3		((TeOHSR_e_OptRngStGr_SG)31U)
#define CeOHSR_e_Gear_SG4		((TeOHSR_e_OptRngStGr_SG)32U)
#define CeOHSR_e_Gear_SG5		((TeOHSR_e_OptRngStGr_SG)33U)
#define CeOHSR_e_Gear_SG6		((TeOHSR_e_OptRngStGr_SG)34U)
#define CeOHSR_e_Gear_SG7		((TeOHSR_e_OptRngStGr_SG)35U)
#define CeOHSR_e_Gear_SG8		((TeOHSR_e_OptRngStGr_SG)36U)
#define CeOHSR_e_EVM_Rev		((TeOHSR_e_OptRngStGr_SG)37U)
#define CeOHSR_e_EVM_SG1		((TeOHSR_e_OptRngStGr_SG)38U)
#define CeOHSR_e_EVM_SG2		((TeOHSR_e_OptRngStGr_SG)39U)
#define CeOHSR_e_EVM_SG3		((TeOHSR_e_OptRngStGr_SG)40U)
#define CeOHSR_e_EVM_SG4		((TeOHSR_e_OptRngStGr_SG)41U)
#define CeOHSR_e_EVM_SG5		((TeOHSR_e_OptRngStGr_SG)42U)
#define CeOHSR_e_EVM_SG6		((TeOHSR_e_OptRngStGr_SG)43U)
#define CeOHSR_e_EVM_SG7		((TeOHSR_e_OptRngStGr_SG)44U)
#define CeOHSR_e_EVM_SG8		((TeOHSR_e_OptRngStGr_SG)45U)
#define CeOHSR_e_EVN_Rev		((TeOHSR_e_OptRngStGr_SG)46U)
#define CeOHSR_e_EVN_SG1		((TeOHSR_e_OptRngStGr_SG)47U)
#define CeOHSR_e_EVN_SG2		((TeOHSR_e_OptRngStGr_SG)48U)
#define CeOHSR_e_EVN_SG3		((TeOHSR_e_OptRngStGr_SG)49U)
#define CeOHSR_e_EVN_SG4		((TeOHSR_e_OptRngStGr_SG)50U)
#define CeOHSR_e_EVN_SG5		((TeOHSR_e_OptRngStGr_SG)51U)
#define CeOHSR_e_EVN_SG6		((TeOHSR_e_OptRngStGr_SG)52U)
#define CeOHSR_e_EVN_SG7		((TeOHSR_e_OptRngStGr_SG)53U)
#define CeOHSR_e_EVN_SG8		((TeOHSR_e_OptRngStGr_SG)54U)
#endif

/*
* Enum TeOHSR_e_OptRng_CIS 
* Default Value:CeOHSR_e_CIS_Neutral 
*/
#ifndef TeOHSR_e_OptRng_CIS
typedef uint8 TeOHSR_e_OptRng_CIS;
#define CeOHSR_e_CIS_Neutral		((TeOHSR_e_OptRng_CIS)0U)
#define CeOHSR_e_CIS_Mode1		((TeOHSR_e_OptRng_CIS)1U)
#define CeOHSR_e_CIS_Mode2		((TeOHSR_e_OptRng_CIS)2U)
#define CeOHSR_e_CIS_ModeB		((TeOHSR_e_OptRng_CIS)3U)
#define CeOHSR_e_CIS_Mode1_HEOff		((TeOHSR_e_OptRng_CIS)4U)
#define CeOHSR_e_CIS_Mode2_HEOff		((TeOHSR_e_OptRng_CIS)5U)
#endif

/*
* Enum TeOHSR_e_RngSel 
* Default Value:CeOHSR_e_RngSel_N 
*/
#ifndef TeOHSR_e_RngSel
typedef uint8 TeOHSR_e_RngSel;
#define CeOHSR_e_RngSel_N		((TeOHSR_e_RngSel)0U)
#define CeOHSR_e_RngSel_M1		((TeOHSR_e_RngSel)1U)
#define CeOHSR_e_RngSel_M2		((TeOHSR_e_RngSel)2U)
#define CeOHSR_e_RngSel_M3		((TeOHSR_e_RngSel)3U)
#define CeOHSR_e_RngSel_G1		((TeOHSR_e_RngSel)4U)
#define CeOHSR_e_RngSel_G2		((TeOHSR_e_RngSel)5U)
#define CeOHSR_e_RngSel_G3		((TeOHSR_e_RngSel)6U)
#define CeOHSR_e_RngSel_G4		((TeOHSR_e_RngSel)7U)
#endif

/*
* Enum TeOHSR_e_OptGear_SG 
* Default Value:CeOHSR_e_SG_Reverse 
*/
#ifndef TeOHSR_e_OptGear_SG
typedef uint8 TeOHSR_e_OptGear_SG;
#define CeOHSR_e_SG_Reverse		((TeOHSR_e_OptGear_SG)0U)
#define CeOHSR_e_SG_1		((TeOHSR_e_OptGear_SG)1U)
#define CeOHSR_e_SG_2		((TeOHSR_e_OptGear_SG)2U)
#define CeOHSR_e_SG_3		((TeOHSR_e_OptGear_SG)3U)
#define CeOHSR_e_SG_4		((TeOHSR_e_OptGear_SG)4U)
#define CeOHSR_e_SG_5		((TeOHSR_e_OptGear_SG)5U)
#define CeOHSR_e_SG_6		((TeOHSR_e_OptGear_SG)6U)
#define CeOHSR_e_SG_7		((TeOHSR_e_OptGear_SG)7U)
#define CeOHSR_e_SG_8		((TeOHSR_e_OptGear_SG)8U)
#endif

/*
* Enum TeOHSR_e_ActActionBl 
* Default Value:CeOHSR_e_Latch 
*/
#ifndef TeOHSR_e_ActActionBl
typedef uint8 TeOHSR_e_ActActionBl;
#define CeOHSR_e_Latch		((TeOHSR_e_ActActionBl)0U)
#define CeOHSR_e_IS_SPD_Diff		((TeOHSR_e_ActActionBl)1U)
#define CeOHSR_e_Low_OptNi		((TeOHSR_e_ActActionBl)2U)
#define CeOHSR_e_Low_ActNi		((TeOHSR_e_ActActionBl)3U)
#define CeOHSR_e_Lwrd_Creep_Enbl		((TeOHSR_e_ActActionBl)4U)
#define CeOHSR_e_Strat1d_IS		((TeOHSR_e_ActActionBl)5U)
#define CeOHSR_e_Latch_NiTi		((TeOHSR_e_ActActionBl)6U)
#endif

/*
* Enum TeOITR_e_EngOpMode 
* Default Value:CeOITR_e_NonDOD_FF 
*/
#ifndef TeOITR_e_EngOpMode
typedef uint8 TeOITR_e_EngOpMode;
#define CeOITR_e_NonDOD_FF		((TeOITR_e_EngOpMode)0U)
#define CeOITR_e_NonDOD_ZF		((TeOITR_e_EngOpMode)1U)
#define CeOITR_e_DOD_FF		((TeOITR_e_EngOpMode)2U)
#define CeOITR_e_DOD_ZF		((TeOITR_e_EngOpMode)3U)
#endif

/*
* Enum TeOPTR_e_BoundaryLimitCheck 
* Default Value:CeOPTR_e_LessThanMin 
*/
#ifndef TeOPTR_e_BoundaryLimitCheck
typedef uint8 TeOPTR_e_BoundaryLimitCheck;
#define CeOPTR_e_LessThanMin		((TeOPTR_e_BoundaryLimitCheck)0U)
#define CeOPTR_e_WithinBoundary		((TeOPTR_e_BoundaryLimitCheck)1U)
#define CeOPTR_e_GreaterThanMax		((TeOPTR_e_BoundaryLimitCheck)2U)
#endif

/*
* Enum TeOPTR_e_OptType 
* Default Value:CeOPTR_e_FindToMin 
*/
#ifndef TeOPTR_e_OptType
typedef uint8 TeOPTR_e_OptType;
#define CeOPTR_e_FindToMin		((TeOPTR_e_OptType)0U)
#define CeOPTR_e_FindToMax		((TeOPTR_e_OptType)1U)
#endif

/*
* Enum TeOPTR_e_LashWiggleActv 
* Default Value:CeOPTR_e_Follow_Neither 
*/
#ifndef TeOPTR_e_LashWiggleActv
typedef uint8 TeOPTR_e_LashWiggleActv;
#define CeOPTR_e_Follow_MtrA		((TeOPTR_e_LashWiggleActv)0U)
#define CeOPTR_e_Follow_MtrB		((TeOPTR_e_LashWiggleActv)1U)
#define CeOPTR_e_Follow_To		((TeOPTR_e_LashWiggleActv)2U)
#define CeOPTR_e_Follow_Neither		((TeOPTR_e_LashWiggleActv)3U)
#endif

/*
* Enum TeOSMR_e_BrkRngInhibit 
* Default Value:CeOSMR_e_AllowCurrentRngAndM2 
*/
#ifndef TeOSMR_e_BrkRngInhibit
typedef uint8 TeOSMR_e_BrkRngInhibit;
#define CeOSMR_e_AllowCurrentRngAndM2		((TeOSMR_e_BrkRngInhibit)0U)
#define CeOSMR_e_AllowM2InhibitCurrentRng		((TeOSMR_e_BrkRngInhibit)1U)
#define CeOSMR_e_AllowCurrentRngInhibitM2		((TeOSMR_e_BrkRngInhibit)2U)
#endif

/*
* Enum TeOSMR_e_ILELocked_InputSpeed_Loc 
* Default Value:CeOSMR_e_ILELockUpSpd_Disabled 
*/
#ifndef TeOSMR_e_ILELocked_InputSpeed_Loc
typedef uint8 TeOSMR_e_ILELocked_InputSpeed_Loc;
#define CeOSMR_e_ILELockUpSpd_Disabled		((TeOSMR_e_ILELocked_InputSpeed_Loc)0U)
#define CeOSMR_e_ILELockUpSpd_Ni		((TeOSMR_e_ILELocked_InputSpeed_Loc)1U)
#define CeOSMR_e_ILELockUpSpd_Nb		((TeOSMR_e_ILELocked_InputSpeed_Loc)2U)
#endif

/*
* Enum TeOSMR_e_SteadyTransState 
* Default Value:CeOSMR_e_TransSt_Drive 
*/
#ifndef TeOSMR_e_SteadyTransState
typedef uint8 TeOSMR_e_SteadyTransState;
#define CeOSMR_e_TransSt_Park		((TeOSMR_e_SteadyTransState)0U)
#define CeOSMR_e_TransSt_Reverse		((TeOSMR_e_SteadyTransState)1U)
#define CeOSMR_e_TransSt_Neutral		((TeOSMR_e_SteadyTransState)2U)
#define CeOSMR_e_TransSt_Drive		((TeOSMR_e_SteadyTransState)3U)
#endif

/*
* Enum TeOSMR_e_DriveProgram 
* Default Value:CeOSMR_e_DrvPrgrmDflt 
*/
#ifndef TeOSMR_e_DriveProgram
typedef uint8 TeOSMR_e_DriveProgram;
#define CeOSMR_e_DrvPrgrmDflt		((TeOSMR_e_DriveProgram)1U)
#define CeOSMR_e_EcoDriving		((TeOSMR_e_DriveProgram)2U)
#define CeOSMR_e_Neutral		((TeOSMR_e_DriveProgram)3U)
#define CeOSMR_e_TowMode		((TeOSMR_e_DriveProgram)4U)
#define CeOSMR_e_LowRange		((TeOSMR_e_DriveProgram)5U)
#define CeOSMR_e_TerrainMode		((TeOSMR_e_DriveProgram)6U)
#define CeOSMR_e_RockCrawl		((TeOSMR_e_DriveProgram)7U)
#define CeOSMR_e_CrossCountry		((TeOSMR_e_DriveProgram)8U)
#define CeOSMR_e_WinterDrv		((TeOSMR_e_DriveProgram)9U)
#define CeOSMR_e_AntiSlipControl		((TeOSMR_e_DriveProgram)10U)
#define CeOSMR_e_Sport		((TeOSMR_e_DriveProgram)11U)
#define CeOSMR_e_SportCruiseControl		((TeOSMR_e_DriveProgram)12U)
#define CeOSMR_e_CruiseControl		((TeOSMR_e_DriveProgram)13U)
#define CeOSMR_e_ValetMode		((TeOSMR_e_DriveProgram)14U)
#define CeOSMR_e_Downhill		((TeOSMR_e_DriveProgram)15U)
#define CeOSMR_e_Uphill		((TeOSMR_e_DriveProgram)16U)
#define CeOSMR_e_ManualMode		((TeOSMR_e_DriveProgram)17U)
#define CeOSMR_e_SlctLeverPos		((TeOSMR_e_DriveProgram)18U)
#define CeOSMR_e_SpclRangeGear		((TeOSMR_e_DriveProgram)19U)
#define CeOSMR_e_DrvProg20		((TeOSMR_e_DriveProgram)20U)
#endif

/*
* Enum TeOSMR_e_FnctnEnblRegBitPos 
* Default Value:CeOSMR_e_BitPos_PreProc 
*/
#ifndef TeOSMR_e_FnctnEnblRegBitPos
typedef uint8 TeOSMR_e_FnctnEnblRegBitPos;
#define CeOSMR_e_BitPos_PreProc		((TeOSMR_e_FnctnEnblRegBitPos)0U)
#define CeOSMR_e_BitPos_ModeN		((TeOSMR_e_FnctnEnblRegBitPos)1U)
#define CeOSMR_e_BitPos_ModeA		((TeOSMR_e_FnctnEnblRegBitPos)2U)
#define CeOSMR_e_BitPos_ModeB		((TeOSMR_e_FnctnEnblRegBitPos)3U)
#define CeOSMR_e_BitPos_GearA		((TeOSMR_e_FnctnEnblRegBitPos)4U)
#define CeOSMR_e_BitPos_GearB		((TeOSMR_e_FnctnEnblRegBitPos)5U)
#define CeOSMR_e_BitPos_EVM		((TeOSMR_e_FnctnEnblRegBitPos)6U)
#define CeOSMR_e_BitPos_EVN		((TeOSMR_e_FnctnEnblRegBitPos)7U)
#define CeOSMR_e_BitPos_Reserved1		((TeOSMR_e_FnctnEnblRegBitPos)8U)
#define CeOSMR_e_BitPos_ModeB_NR		((TeOSMR_e_FnctnEnblRegBitPos)9U)
#define CeOSMR_e_BitPos_Reserved2		((TeOSMR_e_FnctnEnblRegBitPos)10U)
#define CeOSMR_e_BitPos_ModeA_Idle		((TeOSMR_e_FnctnEnblRegBitPos)11U)
#define CeOSMR_e_BitPos_ModeB_Idle		((TeOSMR_e_FnctnEnblRegBitPos)12U)
#define CeOSMR_e_BitPos_Reserved3		((TeOSMR_e_FnctnEnblRegBitPos)13U)
#define CeOSMR_e_BitPos_CostOffsets		((TeOSMR_e_FnctnEnblRegBitPos)14U)
#define CeOSMR_e_BitPos_FinalArb		((TeOSMR_e_FnctnEnblRegBitPos)15U)
#endif

/*
* Enum TeOSMR_e_HRSR_State 
* Default Value:CeOSMR_e_N_State 
*/
#ifndef TeOSMR_e_HRSR_State
typedef uint8 TeOSMR_e_HRSR_State;
#define CeOSMR_e_N_State		((TeOSMR_e_HRSR_State)0U)
#define CeOSMR_e_M1_State		((TeOSMR_e_HRSR_State)1U)
#define CeOSMR_e_M2_State		((TeOSMR_e_HRSR_State)2U)
#define CeOSMR_e_M3_State		((TeOSMR_e_HRSR_State)3U)
#define CeOSMR_e_G1_State		((TeOSMR_e_HRSR_State)4U)
#define CeOSMR_e_G2_State		((TeOSMR_e_HRSR_State)5U)
#define CeOSMR_e_G3_State		((TeOSMR_e_HRSR_State)6U)
#define CeOSMR_e_G4_State		((TeOSMR_e_HRSR_State)7U)
#endif

/*
* Enum TeOSMR_e_StateAvailability_SrcID 
* Default Value:CeOSMR_e_NoRequest 
*/
#ifndef TeOSMR_e_StateAvailability_SrcID
typedef uint8 TeOSMR_e_StateAvailability_SrcID;
#define CeOSMR_e_NoRequest		((TeOSMR_e_StateAvailability_SrcID)0U)
#define CeOSMR_e_DriveProgram1		((TeOSMR_e_StateAvailability_SrcID)1U)
#define CeOSMR_e_DriveProgram2		((TeOSMR_e_StateAvailability_SrcID)2U)
#define CeOSMR_e_DriveProgram3		((TeOSMR_e_StateAvailability_SrcID)3U)
#define CeOSMR_e_DriveProgram4		((TeOSMR_e_StateAvailability_SrcID)4U)
#define CeOSMR_e_DriveProgram5		((TeOSMR_e_StateAvailability_SrcID)5U)
#define CeOSMR_e_DriveProgram6		((TeOSMR_e_StateAvailability_SrcID)6U)
#define CeOSMR_e_DriveProgram7		((TeOSMR_e_StateAvailability_SrcID)7U)
#define CeOSMR_e_DriveProgram8		((TeOSMR_e_StateAvailability_SrcID)8U)
#define CeOSMR_e_DriveProgram9		((TeOSMR_e_StateAvailability_SrcID)9U)
#define CeOSMR_e_DriveProgram10		((TeOSMR_e_StateAvailability_SrcID)10U)
#define CeOSMR_e_DriveProgram11		((TeOSMR_e_StateAvailability_SrcID)11U)
#define CeOSMR_e_DriveProgram12		((TeOSMR_e_StateAvailability_SrcID)12U)
#define CeOSMR_e_DriveProgram13		((TeOSMR_e_StateAvailability_SrcID)13U)
#define CeOSMR_e_DriveProgram14		((TeOSMR_e_StateAvailability_SrcID)14U)
#define CeOSMR_e_DriveProgram15		((TeOSMR_e_StateAvailability_SrcID)15U)
#define CeOSMR_e_DriveProgram16		((TeOSMR_e_StateAvailability_SrcID)16U)
#define CeOSMR_e_DriveProgram17		((TeOSMR_e_StateAvailability_SrcID)17U)
#define CeOSMR_e_DriveProgram18		((TeOSMR_e_StateAvailability_SrcID)18U)
#define CeOSMR_e_DriveProgram19		((TeOSMR_e_StateAvailability_SrcID)19U)
#define CeOSMR_e_DriveProgram20		((TeOSMR_e_StateAvailability_SrcID)20U)
#define CeOSMR_e_DriveProgram21		((TeOSMR_e_StateAvailability_SrcID)21U)
#define CeOSMR_e_DriveProgram22		((TeOSMR_e_StateAvailability_SrcID)22U)
#define CeOSMR_e_DriveProgram23		((TeOSMR_e_StateAvailability_SrcID)23U)
#define CeOSMR_e_DriveProgram24		((TeOSMR_e_StateAvailability_SrcID)24U)
#define CeOSMR_e_DriveProgram25		((TeOSMR_e_StateAvailability_SrcID)25U)
#define CeOSMR_e_DriveProgram26		((TeOSMR_e_StateAvailability_SrcID)26U)
#define CeOSMR_e_DriveProgram27		((TeOSMR_e_StateAvailability_SrcID)27U)
#define CeOSMR_e_DriveProgram28		((TeOSMR_e_StateAvailability_SrcID)28U)
#define CeOSMR_e_DriveProgram29		((TeOSMR_e_StateAvailability_SrcID)29U)
#define CeOSMR_e_DriveProgram30		((TeOSMR_e_StateAvailability_SrcID)30U)
#define CeOSMR_e_AvailableGears		((TeOSMR_e_StateAvailability_SrcID)31U)
#define CeOSMR_e_CatalystHeating		((TeOSMR_e_StateAvailability_SrcID)32U)
#define CeOSMR_e_CompBsdSeriesMdAllwd		((TeOSMR_e_StateAvailability_SrcID)33U)
#define CeOSMR_e_Drivability		((TeOSMR_e_StateAvailability_SrcID)34U)
#define CeOSMR_e_HillHold		((TeOSMR_e_StateAvailability_SrcID)35U)
#define CeOSMR_e_StabilityControl		((TeOSMR_e_StateAvailability_SrcID)36U)
#define CeOSMR_e_StartStopSt		((TeOSMR_e_StateAvailability_SrcID)37U)
#define CeOSMR_e_TCaseShftEffrtRdctn		((TeOSMR_e_StateAvailability_SrcID)38U)
#define CeOSMR_e_TransmissionOverride		((TeOSMR_e_StateAvailability_SrcID)39U)
#define CeOSMR_e_TransRngSt_P		((TeOSMR_e_StateAvailability_SrcID)40U)
#define CeOSMR_e_TransRngSt_R		((TeOSMR_e_StateAvailability_SrcID)41U)
#define CeOSMR_e_TransRngSt_N		((TeOSMR_e_StateAvailability_SrcID)42U)
#define CeOSMR_e_TransRngSt_D		((TeOSMR_e_StateAvailability_SrcID)43U)
#define CeOSMR_e_TCaseN4HiShift		((TeOSMR_e_StateAvailability_SrcID)44U)
#define CeOSMR_e_ServEngOffReq		((TeOSMR_e_StateAvailability_SrcID)45U)
#define CeOSMR_e_WED_AllwdStates_LowLvl		((TeOSMR_e_StateAvailability_SrcID)46U)
#define CeOSMR_e_WED_AllwdStates_MedLvl		((TeOSMR_e_StateAvailability_SrcID)47U)
#define CeOSMR_e_WED_AllwdStates_HighLvl		((TeOSMR_e_StateAvailability_SrcID)48U)
#define CeOSMR_e_eBoostSt		((TeOSMR_e_StateAvailability_SrcID)49U)
#define CeOSMR_e_RemedialAction_HW_Config		((TeOSMR_e_StateAvailability_SrcID)50U)
#endif

/*
* Enum TePDTR_e_BattDischg_State 
* Default Value:CePDTR_e_No_Dischrg 
*/
#ifndef TePDTR_e_BattDischg_State
typedef uint8 TePDTR_e_BattDischg_State;
#define CePDTR_e_No_Dischrg		((TePDTR_e_BattDischg_State)0U)
#define CePDTR_e_Dischrg_BatTempCriticl		((TePDTR_e_BattDischg_State)1U)
#define CePDTR_e_Dischrg_BatTempNotOpt		((TePDTR_e_BattDischg_State)2U)
#define CePDTR_e_Dischrg_AmbTempLow		((TePDTR_e_BattDischg_State)3U)
#define CePDTR_e_Dischrg_ForcBatCool_Hys		((TePDTR_e_BattDischg_State)4U)
#define CePDTR_e_Dischrg_CabReqPrsnt		((TePDTR_e_BattDischg_State)5U)
#define CePDTR_e_Dischrg_BatAndCab_Cndtn		((TePDTR_e_BattDischg_State)6U)
#define CePDTR_e_Dischrg_ForcBatHeat_Hys		((TePDTR_e_BattDischg_State)7U)
#define CePDTR_e_Dischrg_CabReqInOV		((TePDTR_e_BattDischg_State)8U)
#define CePDTR_e_NoValidReq		((TePDTR_e_BattDischg_State)255U)
#endif

/*
* Enum TePLTR_e_Towing_MD_RQ 
* Default Value:CePLTR_e_Towing_MD_RQ_OFF 
*/
#ifndef TePLTR_e_Towing_MD_RQ
typedef uint8 TePLTR_e_Towing_MD_RQ;
#define CePLTR_e_Towing_MD_RQ_OFF		((TePLTR_e_Towing_MD_RQ)0U)
#define CePLTR_e_Towing_MD_RQ_ON		((TePLTR_e_Towing_MD_RQ)1U)
#define CePLTR_e_Towing_MD_RQ_Undefined		((TePLTR_e_Towing_MD_RQ)2U)
#define CePLTR_e_Towing_MD_RQ_SNA		((TePLTR_e_Towing_MD_RQ)3U)
#endif

/*
* Enum TePLTR_e_ShipingMode 
* Default Value:CePLTR_e_ShipingMode_CUST_MD 
*/
#ifndef TePLTR_e_ShipingMode
typedef uint8 TePLTR_e_ShipingMode;
#define CePLTR_e_ShipingMode_CUST_MD		((TePLTR_e_ShipingMode)0U)
#define CePLTR_e_ShipingMode_ABBRV_MD		((TePLTR_e_ShipingMode)1U)
#define CePLTR_e_ShipingMode_SHIP_MD		((TePLTR_e_ShipingMode)2U)
#define CePLTR_e_ShipingMode_NOT_PROG		((TePLTR_e_ShipingMode)3U)
#endif

/*
* Enum TePLTR_e_DriverDoorAjarRawSts 
* Default Value:CePLTR_e_DoorAjarRaw_DEFAULT 
*/
#ifndef TePLTR_e_DriverDoorAjarRawSts
typedef uint8 TePLTR_e_DriverDoorAjarRawSts;
#define CePLTR_e_DoorAjarRaw_DEFAULT		((TePLTR_e_DriverDoorAjarRawSts)0U)
#define CePLTR_e_DoorAjarRaw_FL_SSA		((TePLTR_e_DriverDoorAjarRawSts)1U)
#define CePLTR_e_DoorAjarRaw_FL_SSB		((TePLTR_e_DriverDoorAjarRawSts)2U)
#define CePLTR_e_DoorAjarRaw_FL_SSC		((TePLTR_e_DriverDoorAjarRawSts)3U)
#define CePLTR_e_DoorAjarRaw_FL_SSD		((TePLTR_e_DriverDoorAjarRawSts)4U)
#define CePLTR_e_DoorAjarRaw_FL_SSE		((TePLTR_e_DriverDoorAjarRawSts)5U)
#define CePLTR_e_DoorAjarRaw_OPEN_SSA		((TePLTR_e_DriverDoorAjarRawSts)6U)
#define CePLTR_e_DoorAjarRaw_OPEN_SSB		((TePLTR_e_DriverDoorAjarRawSts)7U)
#define CePLTR_e_DoorAjarRaw_CLOSED_SSA		((TePLTR_e_DriverDoorAjarRawSts)8U)
#define CePLTR_e_DoorAjarRaw_CLOSED_SSB		((TePLTR_e_DriverDoorAjarRawSts)9U)
#define CePLTR_e_DoorAjarRaw_FH_SSA		((TePLTR_e_DriverDoorAjarRawSts)10U)
#define CePLTR_e_DoorAjarRaw_FH_SSB		((TePLTR_e_DriverDoorAjarRawSts)11U)
#define CePLTR_e_DoorAjarRaw_FH_SSC		((TePLTR_e_DriverDoorAjarRawSts)12U)
#define CePLTR_e_DoorAjarRaw_FH_SSD		((TePLTR_e_DriverDoorAjarRawSts)13U)
#define CePLTR_e_DoorAjarRaw_FH_SSE		((TePLTR_e_DriverDoorAjarRawSts)14U)
#define CePLTR_e_DoorAjarRaw_SNA		((TePLTR_e_DriverDoorAjarRawSts)15U)
#endif

/*
* Enum TePLTR_e_DriverDoorAjarXtionSts 
* Default Value:CePLTR_e_DoorAjarXtion_DEFAULT 
*/
#ifndef TePLTR_e_DriverDoorAjarXtionSts
typedef uint8 TePLTR_e_DriverDoorAjarXtionSts;
#define CePLTR_e_DoorAjarXtion_DEFAULT		((TePLTR_e_DriverDoorAjarXtionSts)0U)
#define CePLTR_e_DoorAjarXtion_NONE		((TePLTR_e_DriverDoorAjarXtionSts)1U)
#define CePLTR_e_DoorAjarXtion_TRNS		((TePLTR_e_DriverDoorAjarXtionSts)2U)
#define CePLTR_e_DoorAjarXtion_SNA		((TePLTR_e_DriverDoorAjarXtionSts)3U)
#endif

/*
* Enum TePLTR_e_DrvrSeatSnsrSts 
* Default Value:CePLTR_e_DrvrSeatSnsrSts_Init 
*/
#ifndef TePLTR_e_DrvrSeatSnsrSts
typedef uint8 TePLTR_e_DrvrSeatSnsrSts;
#define CePLTR_e_DrvrSeatSnsrSts_Init		((TePLTR_e_DrvrSeatSnsrSts)0U)
#define CePLTR_e_Drvr_NotPresent		((TePLTR_e_DrvrSeatSnsrSts)1U)
#define CePLTR_e_Drvr_Present		((TePLTR_e_DrvrSeatSnsrSts)2U)
#define CePLTR_e_DrvrSeatSnsrSts_SNA		((TePLTR_e_DrvrSeatSnsrSts)3U)
#endif

/*
* Enum TePLTR_e_DRV_SEATBELT 
* Default Value:CePLTR_e_DRV_SEATBELT_OK 
*/
#ifndef TePLTR_e_DRV_SEATBELT
typedef uint8 TePLTR_e_DRV_SEATBELT;
#define CePLTR_e_DRV_SEATBELT_OK		((TePLTR_e_DRV_SEATBELT)0U)
#define CePLTR_e_DRV_SEATBELT_NOK		((TePLTR_e_DRV_SEATBELT)1U)
#define CePLTR_e_SEATBELT_FAIL		((TePLTR_e_DRV_SEATBELT)2U)
#define CePLTR_e_SEATBELT_SNA		((TePLTR_e_DRV_SEATBELT)3U)
#endif

/*
* Enum TePLTR_e_DriverDoor2AjarRawSts 
* Default Value:CePLTR_e_Door2AjarRaw_DEFAULT 
*/
#ifndef TePLTR_e_DriverDoor2AjarRawSts
typedef uint8 TePLTR_e_DriverDoor2AjarRawSts;
#define CePLTR_e_Door2AjarRaw_DEFAULT		((TePLTR_e_DriverDoor2AjarRawSts)0U)
#define CePLTR_e_Door2AjarRaw_FL_SSA		((TePLTR_e_DriverDoor2AjarRawSts)1U)
#define CePLTR_e_Door2AjarRaw_FL_SSB		((TePLTR_e_DriverDoor2AjarRawSts)2U)
#define CePLTR_e_Door2AjarRaw_FL_SSC		((TePLTR_e_DriverDoor2AjarRawSts)3U)
#define CePLTR_e_Door2AjarRaw_FL_SSD		((TePLTR_e_DriverDoor2AjarRawSts)4U)
#define CePLTR_e_Door2AjarRaw_FL_SSE		((TePLTR_e_DriverDoor2AjarRawSts)5U)
#define CePLTR_e_Door2AjarRaw_OPEN_SSA		((TePLTR_e_DriverDoor2AjarRawSts)6U)
#define CePLTR_e_Door2AjarRaw_OPEN_SSB		((TePLTR_e_DriverDoor2AjarRawSts)7U)
#define CePLTR_e_Door2AjarRaw_CLOSED_SSA		((TePLTR_e_DriverDoor2AjarRawSts)8U)
#define CePLTR_e_Door2AjarRaw_CLOSED_SSB		((TePLTR_e_DriverDoor2AjarRawSts)9U)
#define CePLTR_e_Door2AjarRaw_FH_SSA		((TePLTR_e_DriverDoor2AjarRawSts)10U)
#define CePLTR_e_Door2AjarRaw_FH_SSB		((TePLTR_e_DriverDoor2AjarRawSts)11U)
#define CePLTR_e_Door2AjarRaw_FH_SSC		((TePLTR_e_DriverDoor2AjarRawSts)12U)
#define CePLTR_e_Door2AjarRaw_FH_SSD		((TePLTR_e_DriverDoor2AjarRawSts)13U)
#define CePLTR_e_Door2AjarRaw_FH_SSE		((TePLTR_e_DriverDoor2AjarRawSts)14U)
#define CePLTR_e_Door2AjarRaw_SNA		((TePLTR_e_DriverDoor2AjarRawSts)15U)
#endif

/*
* Enum TePLTR_e_DriverDoor2AjarXtionSts 
* Default Value:CePLTR_e_Door2AjarXtion_DEFAULT 
*/
#ifndef TePLTR_e_DriverDoor2AjarXtionSts
typedef uint8 TePLTR_e_DriverDoor2AjarXtionSts;
#define CePLTR_e_Door2AjarXtion_DEFAULT		((TePLTR_e_DriverDoor2AjarXtionSts)0U)
#define CePLTR_e_Door2AjarXtion_NONE		((TePLTR_e_DriverDoor2AjarXtionSts)1U)
#define CePLTR_e_Door2AjarXtion_TRNS		((TePLTR_e_DriverDoor2AjarXtionSts)2U)
#define CePLTR_e_Door2AjarXtion_SNA		((TePLTR_e_DriverDoor2AjarXtionSts)3U)
#endif

/*
* Enum TePLTR_e_ECMDriverDoorSts 
* Default Value:CePLTR_e_ECMDriverDoorSts_OPEN 
*/
#ifndef TePLTR_e_ECMDriverDoorSts
typedef uint8 TePLTR_e_ECMDriverDoorSts;
#define CePLTR_e_ECMDriverDoorSts_OPEN		((TePLTR_e_ECMDriverDoorSts)0U)
#define CePLTR_e_ECMDriverDoorSts_CLOSED		((TePLTR_e_ECMDriverDoorSts)1U)
#define CePLTR_e_ECMDriverDoorSts_FAULT		((TePLTR_e_ECMDriverDoorSts)2U)
#define CePLTR_e_ECMDriverDoorSts_SNA		((TePLTR_e_ECMDriverDoorSts)3U)
#endif

/*
* Enum TePLTR_e_ECMVtdFreeze 
* Default Value:CePLTR_e_NoReset 
*/
#ifndef TePLTR_e_ECMVtdFreeze
typedef uint8 TePLTR_e_ECMVtdFreeze;
#define CePLTR_e_NoReset		((TePLTR_e_ECMVtdFreeze)0U)
#define CePLTR_e_LifetimeRecentReset		((TePLTR_e_ECMVtdFreeze)1U)
#define CePLTR_e_RecentReset		((TePLTR_e_ECMVtdFreeze)2U)
#define CePLTR_e_Freeze		((TePLTR_e_ECMVtdFreeze)3U)
#endif

/*
* Enum TePLTR_e_InvOprStat 
* Default Value:CePLTR_e_NoPlgIn_Tools 
*/
#ifndef TePLTR_e_InvOprStat
typedef uint8 TePLTR_e_InvOprStat;
#define CePLTR_e_NoPlgIn_Tools		((TePLTR_e_InvOprStat)0U)
#define CePLTR_e_PlgIn_NoOpr		((TePLTR_e_InvOprStat)1U)
#define CePLTR_e_PlgIn_InvOpr_Tools		((TePLTR_e_InvOprStat)2U)
#endif

/*
* Enum TePLTR_e_LSMDExtReleaseLockReq 
* Default Value:CePLTR_e_NotActive 
*/
#ifndef TePLTR_e_LSMDExtReleaseLockReq
typedef uint8 TePLTR_e_LSMDExtReleaseLockReq;
#define CePLTR_e_NotActive		((TePLTR_e_LSMDExtReleaseLockReq)0U)
#define CePLTR_e_Lock		((TePLTR_e_LSMDExtReleaseLockReq)1U)
#define CePLTR_e_Release		((TePLTR_e_LSMDExtReleaseLockReq)2U)
#endif

/*
* Enum TePLTR_e_LwsAngleType 
* Default Value:CePLTR_e_Absolute 
*/
#ifndef TePLTR_e_LwsAngleType
typedef uint8 TePLTR_e_LwsAngleType;
#define CePLTR_e_Absolute		((TePLTR_e_LwsAngleType)0U)
#define CePLTR_e_Relative		((TePLTR_e_LwsAngleType)1U)
#define CePLTR_e_LwsAngleType_SNA		((TePLTR_e_LwsAngleType)2U)
#endif

/*
* Enum TePLTR_e_V2GOprStat 
* Default Value:CePLTR_e_NoPlgIn 
*/
#ifndef TePLTR_e_V2GOprStat
typedef uint8 TePLTR_e_V2GOprStat;
#define CePLTR_e_NoPlgIn		((TePLTR_e_V2GOprStat)0U)
#define CePLTR_e_PlgIn_NOOP_V2G		((TePLTR_e_V2GOprStat)1U)
#define CePLTR_e_PlgIn_V2GOpr		((TePLTR_e_V2GOprStat)2U)
#endif

/*
* Enum TePLTR_e_VehCategory 
* Default Value:CePLTR_e_Category_M1 
*/
#ifndef TePLTR_e_VehCategory
typedef uint8 TePLTR_e_VehCategory;
#define CePLTR_e_Category_M1		((TePLTR_e_VehCategory)0U)
#define CePLTR_e_Category_M2_lt		((TePLTR_e_VehCategory)1U)
#define CePLTR_e_Category_M2_gt		((TePLTR_e_VehCategory)2U)
#define CePLTR_e_Category_N1		((TePLTR_e_VehCategory)3U)
#define CePLTR_e_Category_N2		((TePLTR_e_VehCategory)4U)
#endif

/*
* Enum TePLTR_e_EPBHoldSts 
* Default Value:CePLTR_e_EPBHoldSts_REL 
*/
#ifndef TePLTR_e_EPBHoldSts
typedef uint8 TePLTR_e_EPBHoldSts;
#define CePLTR_e_EPBHoldSts_REL		((TePLTR_e_EPBHoldSts)0U)
#define CePLTR_e_EPBHoldSts_APPLIED		((TePLTR_e_EPBHoldSts)1U)
#define CePLTR_e_EPBHoldSts_DynamBrkESC		((TePLTR_e_EPBHoldSts)2U)
#define CePLTR_e_EPBHoldSts_DynamBrkEPB		((TePLTR_e_EPBHoldSts)3U)
#define CePLTR_e_EPBHoldSts_Emrgnc_Brk		((TePLTR_e_EPBHoldSts)4U)
#define CePLTR_e_EPBHoldSts_APPLYING		((TePLTR_e_EPBHoldSts)5U)
#define CePLTR_e_EPBHoldSts_MaintMd		((TePLTR_e_EPBHoldSts)6U)
#define CePLTR_e_EPBHoldSts_AssmblyChk		((TePLTR_e_EPBHoldSts)7U)
#define CePLTR_e_EPBHoldSts_InspMd		((TePLTR_e_EPBHoldSts)8U)
#define CePLTR_e_EPBHoldSts_ReClamping		((TePLTR_e_EPBHoldSts)9U)
#define CePLTR_e_EPBHoldSts_Adjust_Md		((TePLTR_e_EPBHoldSts)10U)
#define CePLTR_e_EPBHoldSts_RELEASING		((TePLTR_e_EPBHoldSts)11U)
#define CePLTR_e_EPBHoldSts_Flt_EPBRel		((TePLTR_e_EPBHoldSts)12U)
#define CePLTR_e_EPBHoldSts_Flt_EPBAppl		((TePLTR_e_EPBHoldSts)13U)
#define CePLTR_e_EPBHoldSts_Flt_Prsnt		((TePLTR_e_EPBHoldSts)14U)
#define CePLTR_e_EPBHoldSts_SNA		((TePLTR_e_EPBHoldSts)15U)
#define CePLTR_e_EPBHoldSts_DC		((TePLTR_e_EPBHoldSts)16U)
#define CePLTR_e_EPBHoldSts_BSU		((TePLTR_e_EPBHoldSts)17U)
#endif

/*
* Enum TePLTR_e_HybridType 
* Default Value:CePLTR_e_NotApplicable 
*/
#ifndef TePLTR_e_HybridType
typedef uint8 TePLTR_e_HybridType;
#define CePLTR_e_NotApplicable		((TePLTR_e_HybridType)0U)
#define CePLTR_e_BattEVeh		((TePLTR_e_HybridType)1U)
#define CePLTR_e_HybEVeh		((TePLTR_e_HybridType)2U)
#define CePLTR_e_PlugHybEVeh		((TePLTR_e_HybridType)3U)
#define CePLTR_e_BSG48V		((TePLTR_e_HybridType)4U)
#define CePLTR_e_BSG12V		((TePLTR_e_HybridType)5U)
#endif

/*
* Enum TePLTR_e_VehicleCountryCode 
* Default Value:CePLTR_e_VCC_OTHERS 
*/
#ifndef TePLTR_e_VehicleCountryCode
typedef uint8 TePLTR_e_VehicleCountryCode;
#define CePLTR_e_VCC_OTHERS		((TePLTR_e_VehicleCountryCode)0U)
#define CePLTR_e_VCC_CHINA		((TePLTR_e_VehicleCountryCode)1U)
#endif

/*
* Enum TePLTR_e_ShiftIndSt 
* Default Value:CePLTR_e_NotPresent 
*/
#ifndef TePLTR_e_ShiftIndSt
typedef uint8 TePLTR_e_ShiftIndSt;
#define CePLTR_e_NotPresent		((TePLTR_e_ShiftIndSt)0U)
#define CePLTR_e_GSI		((TePLTR_e_ShiftIndSt)1U)
#define CePLTR_e_Enhanced_GSI		((TePLTR_e_ShiftIndSt)2U)
#define CePLTR_e_PSI		((TePLTR_e_ShiftIndSt)3U)
#define CePLTR_e_PGSI		((TePLTR_e_ShiftIndSt)4U)
#endif

/*
* Enum TePLTR_e_VehCfgSt 
* Default Value:CePLTR_e_NotAvailable 
*/
#ifndef TePLTR_e_VehCfgSt
typedef uint8 TePLTR_e_VehCfgSt;
#define CePLTR_e_NotAvailable		((TePLTR_e_VehCfgSt)0U)
#define CePLTR_e_Programmed		((TePLTR_e_VehCfgSt)1U)
#define CePLTR_e_RequestData		((TePLTR_e_VehCfgSt)2U)
#define CePLTR_e_SNA		((TePLTR_e_VehCfgSt)3U)
#endif

/*
* Enum TePLTR_e_BCMPreCondCabinReq 
* Default Value:CePLTR_e_CPCDefault 
*/
#ifndef TePLTR_e_BCMPreCondCabinReq
typedef uint8 TePLTR_e_BCMPreCondCabinReq;
#define CePLTR_e_CPCDefault		((TePLTR_e_BCMPreCondCabinReq)0U)
#define CePLTR_e_CabinPreCondStrt		((TePLTR_e_BCMPreCondCabinReq)1U)
#define CePLTR_e_CabinPreCondStop		((TePLTR_e_BCMPreCondCabinReq)2U)
#define CePLTR_e_CPCSNA		((TePLTR_e_BCMPreCondCabinReq)3U)
#endif

/*
* Enum TePLTR_e_BSM_AxleTrq_Enbld 
* Default Value:CePLTR_e_No_Req 
*/
#ifndef TePLTR_e_BSM_AxleTrq_Enbld
typedef uint8 TePLTR_e_BSM_AxleTrq_Enbld;
#define CePLTR_e_No_Req		((TePLTR_e_BSM_AxleTrq_Enbld)0U)
#define CePLTR_e_ACC_NCC		((TePLTR_e_BSM_AxleTrq_Enbld)1U)
#define CePLTR_e_SSC		((TePLTR_e_BSM_AxleTrq_Enbld)2U)
#define CePLTR_e_PPPA		((TePLTR_e_BSM_AxleTrq_Enbld)3U)
#define CePLTR_e_RRCC		((TePLTR_e_BSM_AxleTrq_Enbld)4U)
#define CePLTR_e_BSM_AxleTrq_Enbld_SNA		((TePLTR_e_BSM_AxleTrq_Enbld)15U)
#endif

/*
* Enum TePLTR_e_Controller 
* Default Value:CePLTR_e_PIM_HCP 
*/
#ifndef TePLTR_e_Controller
typedef uint8 TePLTR_e_Controller;
#define CePLTR_e_PIM_HCP		((TePLTR_e_Controller)0U)
#define CePLTR_e_MGU_HCP		((TePLTR_e_Controller)1U)
#define CePLTR_e_P1P4_HCP		((TePLTR_e_Controller)2U)
#define CePLTR_e_P1P2_HCP		((TePLTR_e_Controller)3U)
#define CePLTR_e_P1RP2_HCP		((TePLTR_e_Controller)4U)
#define CePLTR_e_P1P2p5_HCPM		((TePLTR_e_Controller)5U)
#define CePLTR_e_BEV_EVCU		((TePLTR_e_Controller)6U)
#define CePLTR_e_VF_EVCU		((TePLTR_e_Controller)7U)
#define CePLTR_e_M182_BEV_VDCM		((TePLTR_e_Controller)8U)
#define CePLTR_e_M182_P1R_VDCM		((TePLTR_e_Controller)9U)
#define CePLTR_e_COREBEV_VDCM		((TePLTR_e_Controller)10U)
#define CePLTR_e_DT_REEV_VDCM		((TePLTR_e_Controller)11U)
#define CePLTR_e_M182_P1R_PIM		((TePLTR_e_Controller)12U)
#endif

/*
* Enum TePLTR_e_Cruise_Control_Logic 
* Default Value:CePLTR_e_Logic1 
*/
#ifndef TePLTR_e_Cruise_Control_Logic
typedef uint8 TePLTR_e_Cruise_Control_Logic;
#define CePLTR_e_Logic1		((TePLTR_e_Cruise_Control_Logic)0U)
#define CePLTR_e_Logic2		((TePLTR_e_Cruise_Control_Logic)1U)
#endif

/*
* Enum TePLTR_e_RTC_Status_Type 
* Default Value:CePLTR_e_RTC_Time_Normal 
*/
#ifndef TePLTR_e_RTC_Status_Type
typedef uint8 TePLTR_e_RTC_Status_Type;
#define CePLTR_e_RTC_Init		((TePLTR_e_RTC_Status_Type)0U)
#define CePLTR_e_RTC_Time_Normal		((TePLTR_e_RTC_Status_Type)1U)
#define CePLTR_e_RTC_Invalid_Powerdown_Time		((TePLTR_e_RTC_Status_Type)2U)
#define CePLTR_e_RTC_Time_BatteryDisconnected		((TePLTR_e_RTC_Status_Type)3U)
#define CePLTR_e_RTC_Time_Failure		((TePLTR_e_RTC_Status_Type)4U)
#endif

/*
* Enum TePLTR_e_AdaptiveCruiseCtrl 
* Default Value:CePLTR_e_ACC_Absent 
*/
#ifndef TePLTR_e_AdaptiveCruiseCtrl
typedef uint8 TePLTR_e_AdaptiveCruiseCtrl;
#define CePLTR_e_ACC_Absent		((TePLTR_e_AdaptiveCruiseCtrl)0U)
#define CePLTR_e_ACC		((TePLTR_e_AdaptiveCruiseCtrl)1U)
#define CePLTR_e_ACC_Plus		((TePLTR_e_AdaptiveCruiseCtrl)2U)
#endif

/*
* Enum TePLTR_e_Autonomy_Lvl 
* Default Value:CePLTR_e_None_Level1 
*/
#ifndef TePLTR_e_Autonomy_Lvl
typedef uint8 TePLTR_e_Autonomy_Lvl;
#define CePLTR_e_None_Level1		((TePLTR_e_Autonomy_Lvl)0U)
#define CePLTR_e_Level2		((TePLTR_e_Autonomy_Lvl)1U)
#define CePLTR_e_Level2_Plus		((TePLTR_e_Autonomy_Lvl)2U)
#endif

/*
* Enum TePLTR_e_IncreasingSpdConst 
* Default Value:CePLTR_e_Increasing_0 
*/
#ifndef TePLTR_e_IncreasingSpdConst
typedef uint8 TePLTR_e_IncreasingSpdConst;
#define CePLTR_e_Increasing_0		((TePLTR_e_IncreasingSpdConst)0U)
#define CePLTR_e_Increasing_1		((TePLTR_e_IncreasingSpdConst)1U)
#define CePLTR_e_Increasing_2		((TePLTR_e_IncreasingSpdConst)2U)
#define CePLTR_e_Increasing_3		((TePLTR_e_IncreasingSpdConst)3U)
#define CePLTR_e_Increasing_4		((TePLTR_e_IncreasingSpdConst)4U)
#define CePLTR_e_Increasing_5		((TePLTR_e_IncreasingSpdConst)5U)
#define CePLTR_e_Increasing_6		((TePLTR_e_IncreasingSpdConst)6U)
#define CePLTR_e_Increasing_7		((TePLTR_e_IncreasingSpdConst)7U)
#endif

/*
* Enum TePLTR_e_ACCSystemSts 
* Default Value:CePLTR_e_Off 
*/
#ifndef TePLTR_e_ACCSystemSts
typedef uint8 TePLTR_e_ACCSystemSts;
#define CePLTR_e_Off		((TePLTR_e_ACCSystemSts)0U)
#define CePLTR_e_Enabled		((TePLTR_e_ACCSystemSts)1U)
#define CePLTR_e_Engaged		((TePLTR_e_ACCSystemSts)2U)
#define CePLTR_e_Engaged_BrakeOnly		((TePLTR_e_ACCSystemSts)3U)
#define CePLTR_e_Override		((TePLTR_e_ACCSystemSts)4U)
#define CePLTR_e_Cancel		((TePLTR_e_ACCSystemSts)5U)
#define CePLTR_e_NCC_Enabled		((TePLTR_e_ACCSystemSts)6U)
#define CePLTR_e_NCC_Engaged		((TePLTR_e_ACCSystemSts)7U)
#define CePLTR_e_NCC_Cancel		((TePLTR_e_ACCSystemSts)8U)
#define CePLTR_e_HAS_BSoC		((TePLTR_e_ACCSystemSts)9U)
#define CePLTR_e_RRCC_Enabled_No_Set_Speed		((TePLTR_e_ACCSystemSts)10U)
#define CePLTR_e_RRCC_Enabled_With_Set_Speed		((TePLTR_e_ACCSystemSts)11U)
#define CePLTR_e_RRCC_Engaged		((TePLTR_e_ACCSystemSts)12U)
#define CePLTR_e_ACCSystemSts_SNA		((TePLTR_e_ACCSystemSts)13U)
#endif

/*
* Enum TePLTR_e_MRM_Status 
* Default Value:CePLTR_e_Not_Active 
*/
#ifndef TePLTR_e_MRM_Status
typedef uint8 TePLTR_e_MRM_Status;
#define CePLTR_e_Not_Active		((TePLTR_e_MRM_Status)0U)
#define CePLTR_e_MRM_in_Process		((TePLTR_e_MRM_Status)1U)
#define CePLTR_e_Vehicle_Sec_Request		((TePLTR_e_MRM_Status)2U)
#define CePLTR_e_Vehicle_Sec_Complete		((TePLTR_e_MRM_Status)3U)
#define CePLTR_e_Canceled		((TePLTR_e_MRM_Status)4U)
#endif

/*
* Enum TePLTR_e_WSInverterSts 
* Default Value:CePLTR_e_WSInverterSts_NOT_ACTIVE 
*/
#ifndef TePLTR_e_WSInverterSts
typedef uint8 TePLTR_e_WSInverterSts;
#define CePLTR_e_WSInverterSts_NOT_ACTIVE		((TePLTR_e_WSInverterSts)0U)
#define CePLTR_e_WSInverterSts_ACTIVE		((TePLTR_e_WSInverterSts)1U)
#define CePLTR_e_WSInverterSts_SNA		((TePLTR_e_WSInverterSts)3U)
#endif

/*
* Enum TePLTR_e_HAS_TelltaleSts 
* Default Value:CePLTR_e_HAS_TelltaleSts_OFF 
*/
#ifndef TePLTR_e_HAS_TelltaleSts
typedef uint8 TePLTR_e_HAS_TelltaleSts;
#define CePLTR_e_HAS_TelltaleSts_OFF		((TePLTR_e_HAS_TelltaleSts)0U)
#define CePLTR_e_HAS_TelltaleSts_GREY		((TePLTR_e_HAS_TelltaleSts)1U)
#define CePLTR_e_HAS_TelltaleSts_GREEN		((TePLTR_e_HAS_TelltaleSts)2U)
#define CePLTR_e_HAS_TelltaleSts_YELLOW		((TePLTR_e_HAS_TelltaleSts)3U)
#define CePLTR_e_HAS_TelltaleSts_RED		((TePLTR_e_HAS_TelltaleSts)4U)
#define CePLTR_e_GREEN_HANDS_FREE		((TePLTR_e_HAS_TelltaleSts)5U)
#define CePLTR_e_YELLOW_HANDS_FREE		((TePLTR_e_HAS_TelltaleSts)6U)
#define CePLTR_e_HAS_TelltaleSts_SNA		((TePLTR_e_HAS_TelltaleSts)7U)
#endif

/*
* Enum TePLTR_e_AEB_SystemSts 
* Default Value:CePLTR_e_FCW_Off 
*/
#ifndef TePLTR_e_AEB_SystemSts
typedef uint8 TePLTR_e_AEB_SystemSts;
#define CePLTR_e_FCW_Off		((TePLTR_e_AEB_SystemSts)0U)
#define CePLTR_e_FCW_On_Only_Warning		((TePLTR_e_AEB_SystemSts)1U)
#define CePLTR_e_FCW_On_Full		((TePLTR_e_AEB_SystemSts)2U)
#endif

/*
* Enum TePLTR_e_Command_15Sts 
* Default Value:CePLTR_e_Not_Pressed 
*/
#ifndef TePLTR_e_Command_15Sts
typedef uint8 TePLTR_e_Command_15Sts;
#define CePLTR_e_Not_Pressed		((TePLTR_e_Command_15Sts)0U)
#define CePLTR_e_Pressed		((TePLTR_e_Command_15Sts)1U)
#define CePLTR_e_Command_15Sts_SNA		((TePLTR_e_Command_15Sts)2U)
#endif

/*
* Enum TePLTR_e_eBurn_Stages 
* Default Value:CePLTR_e_eBurn_NormalStage 
*/
#ifndef TePLTR_e_eBurn_Stages
typedef uint8 TePLTR_e_eBurn_Stages;
#define CePLTR_e_eBurn_NormalStage		((TePLTR_e_eBurn_Stages)0U)
#define CePLTR_e_eBurn_Stage1		((TePLTR_e_eBurn_Stages)1U)
#define CePLTR_e_eBurn_Stage2		((TePLTR_e_eBurn_Stages)2U)
#define CePLTR_e_eBurn_Stage3		((TePLTR_e_eBurn_Stages)3U)
#define CePLTR_e_eBurn_NotUsed1		((TePLTR_e_eBurn_Stages)4U)
#define CePLTR_e_eBurn_NotUsed2		((TePLTR_e_eBurn_Stages)5U)
#define CePLTR_e_eBurn_NotUsed3		((TePLTR_e_eBurn_Stages)6U)
#define CePLTR_e_eBurn_SNA		((TePLTR_e_eBurn_Stages)7U)
#endif

/*
* Enum TePLTR_e_RTCSyncDiagStat 
* Default Value:CePLTR_e_RTCSyncDiagStat_INIT 
*/
#ifndef TePLTR_e_RTCSyncDiagStat
typedef uint8 TePLTR_e_RTCSyncDiagStat;
#define CePLTR_e_RTCSyncDiagStat_INIT		((TePLTR_e_RTCSyncDiagStat)0U)
#define CePLTR_e_RTCSyncDiagStat_RUNNING		((TePLTR_e_RTCSyncDiagStat)1U)
#endif

/*
* Enum TePLTR_e_RTCSyncDiag_Type 
* Default Value:CePLTR_e_RTCSyncDiag_HCPOnly 
*/
#ifndef TePLTR_e_RTCSyncDiag_Type
typedef uint8 TePLTR_e_RTCSyncDiag_Type;
#define CePLTR_e_RTCSyncDiag_HCPOnly		((TePLTR_e_RTCSyncDiag_Type)1U)
#define CePLTR_e_RTCSyncDiag_GPSOnly		((TePLTR_e_RTCSyncDiag_Type)2U)
#define CePLTR_e_RTCSyncDiag_BOTH_OR		((TePLTR_e_RTCSyncDiag_Type)3U)
#define CePLTR_e_RTCSyncDiag_BOTH_AND		((TePLTR_e_RTCSyncDiag_Type)4U)
#endif

/*
* Enum TePLTR_e_RTCSyncDiagTestReport 
* Default Value:CePLTR_e_RTCSyncDiag_NotTested 
*/
#ifndef TePLTR_e_RTCSyncDiagTestReport
typedef uint8 TePLTR_e_RTCSyncDiagTestReport;
#define CePLTR_e_RTCSyncDiag_NotTested		((TePLTR_e_RTCSyncDiagTestReport)0U)
#define CePLTR_e_RTCSyncDiag_Pass		((TePLTR_e_RTCSyncDiagTestReport)1U)
#define CePLTR_e_RTCSyncDiag_Fail		((TePLTR_e_RTCSyncDiagTestReport)2U)
#endif

/*
* Enum TePLTR_e_ParkingGearShiftReq_BSM 
* Default Value:CePLTR_e_GearShiftReq_Idle 
*/
#ifndef TePLTR_e_ParkingGearShiftReq_BSM
typedef uint8 TePLTR_e_ParkingGearShiftReq_BSM;
#define CePLTR_e_GearShiftReq_Idle		((TePLTR_e_ParkingGearShiftReq_BSM)0U)
#define CePLTR_e_GearShiftReq_P		((TePLTR_e_ParkingGearShiftReq_BSM)1U)
#define CePLTR_e_GearShiftReq_R		((TePLTR_e_ParkingGearShiftReq_BSM)2U)
#define CePLTR_e_GearShiftReq_N		((TePLTR_e_ParkingGearShiftReq_BSM)3U)
#define CePLTR_e_GearShiftReq_D		((TePLTR_e_ParkingGearShiftReq_BSM)4U)
#define CePLTR_e_GearShiftReq_SNA		((TePLTR_e_ParkingGearShiftReq_BSM)7U)
#endif

/*
* Enum TePLTR_e_SelectSpdSts 
* Default Value:CePLTR_e_SelectSpdSts_OFF 
*/
#ifndef TePLTR_e_SelectSpdSts
typedef uint8 TePLTR_e_SelectSpdSts;
#define CePLTR_e_SelectSpdSts_OFF		((TePLTR_e_SelectSpdSts)0U)
#define CePLTR_e_SelectSpdMode		((TePLTR_e_SelectSpdSts)1U)
#define CePLTR_e_SelectSpdModeInhibit		((TePLTR_e_SelectSpdSts)2U)
#define CePLTR_e_SelectSpdSts_SNA		((TePLTR_e_SelectSpdSts)3U)
#endif

/*
* Enum TePLTR_e_DrvrDoorOnOffSts 
* Default Value:CePLTR_e_DOOR_ON 
*/
#ifndef TePLTR_e_DrvrDoorOnOffSts
typedef uint8 TePLTR_e_DrvrDoorOnOffSts;
#define CePLTR_e_DOOR_ON		((TePLTR_e_DrvrDoorOnOffSts)0U)
#define CePLTR_e_DOOR_OFF		((TePLTR_e_DrvrDoorOnOffSts)1U)
#define CePLTR_e_FLT		((TePLTR_e_DrvrDoorOnOffSts)2U)
#define CePLTR_e_DrvrDoorOnOffSts_SNA		((TePLTR_e_DrvrDoorOnOffSts)3U)
#endif

/*
* Enum TePLTR_e_HiBmLvr_Stat 
* Default Value:CePLTR_e_HiBmLvr_Stat_Idle 
*/
#ifndef TePLTR_e_HiBmLvr_Stat
typedef uint8 TePLTR_e_HiBmLvr_Stat;
#define CePLTR_e_HiBmLvr_Stat_Idle		((TePLTR_e_HiBmLvr_Stat)0U)
#define CePLTR_e_HIBM_ON_PSD		((TePLTR_e_HiBmLvr_Stat)1U)
#define CePLTR_e_HIBM_FLASH_ON_PSD		((TePLTR_e_HiBmLvr_Stat)2U)
#define CePLTR_e_HiBmLvr_Stat_SNA		((TePLTR_e_HiBmLvr_Stat)3U)
#endif

/*
* Enum TePLTR_e_ASCM_Stat 
* Default Value:CePLTR_e_ASCM_Stat_NONE 
*/
#ifndef TePLTR_e_ASCM_Stat
typedef uint8 TePLTR_e_ASCM_Stat;
#define CePLTR_e_ASCM_Stat_NONE		((TePLTR_e_ASCM_Stat)0U)
#define CePLTR_e_ASCM_Stat_DUMP		((TePLTR_e_ASCM_Stat)1U)
#define CePLTR_e_ASCM_Stat_PARK		((TePLTR_e_ASCM_Stat)2U)
#define CePLTR_e_ASCM_Stat_AERO		((TePLTR_e_ASCM_Stat)3U)
#define CePLTR_e_ASCM_Stat_NVL		((TePLTR_e_ASCM_Stat)4U)
#define CePLTR_e_ASCM_Stat_OR1		((TePLTR_e_ASCM_Stat)5U)
#define CePLTR_e_ASCM_Stat_ORL2		((TePLTR_e_ASCM_Stat)6U)
#define CePLTR_e_ASCM_Stat_Lifter		((TePLTR_e_ASCM_Stat)7U)
#define CePLTR_e_ASCM_Stat_RAISE		((TePLTR_e_ASCM_Stat)8U)
#define CePLTR_e_ASCM_Stat_LOWER		((TePLTR_e_ASCM_Stat)9U)
#define CePLTR_e_ASCM_Stat_SYSFAIL		((TePLTR_e_ASCM_Stat)10U)
#define CePLTR_e_ASCM_Stat_SRVS		((TePLTR_e_ASCM_Stat)11U)
#define CePLTR_e_ASCM_Stat_AERO2		((TePLTR_e_ASCM_Stat)12U)
#define CePLTR_e_ASCM_Stat_Clearance2		((TePLTR_e_ASCM_Stat)13U)
#define CePLTR_e_ASCM_Stat_SNA		((TePLTR_e_ASCM_Stat)15U)
#endif

/*
* Enum TePMDR_e_PowerMode 
* Default Value:CePMDR_e_PowerMode_Off 
*/
#ifndef TePMDR_e_PowerMode
typedef uint8 TePMDR_e_PowerMode;
#define CePMDR_e_PowerMode_Off		((TePMDR_e_PowerMode)0U)
#define CePMDR_e_PowerMode_Acc		((TePMDR_e_PowerMode)1U)
#define CePMDR_e_PowerMode_Run		((TePMDR_e_PowerMode)2U)
#define CePMDR_e_PowerMode_Crank		((TePMDR_e_PowerMode)3U)
#define CePMDR_e_PowerMode_SNA		((TePMDR_e_PowerMode)4U)
#endif

/*
* Enum TePMDR_e_KeyInIgn 
* Default Value:CePMDR_e_KeyInIgn_DEFAULT 
*/
#ifndef TePMDR_e_KeyInIgn
typedef uint8 TePMDR_e_KeyInIgn;
#define CePMDR_e_KeyInIgn_DEFAULT		((TePMDR_e_KeyInIgn)0U)
#define CePMDR_e_KeyInIgn_Not_In_Ign		((TePMDR_e_KeyInIgn)1U)
#define CePMDR_e_KeyInIgn_In_Ign		((TePMDR_e_KeyInIgn)2U)
#define CePMDR_e_KeyInIgn_SNA		((TePMDR_e_KeyInIgn)3U)
#endif

/*
* Enum TePMDR_e_KeyStatus 
* Default Value:CePMDR_e_KeySt_Off 
*/
#ifndef TePMDR_e_KeyStatus
typedef uint8 TePMDR_e_KeyStatus;
#define CePMDR_e_KeySt_Off		((TePMDR_e_KeyStatus)0U)
#define CePMDR_e_KeySt_Acc		((TePMDR_e_KeyStatus)1U)
#define CePMDR_e_KeySt_RunPreCrank		((TePMDR_e_KeyStatus)2U)
#define CePMDR_e_KeySt_Crank		((TePMDR_e_KeyStatus)3U)
#define CePMDR_e_KeySt_RunPostCrank		((TePMDR_e_KeyStatus)4U)
#define CePMDR_e_KeySt_SNA		((TePMDR_e_KeyStatus)5U)
#endif

/*
* Enum TePMDR_e_RunCrankSrc 
* Default Value:CePMDR_e_RunCrank_Default 
*/
#ifndef TePMDR_e_RunCrankSrc
typedef uint8 TePMDR_e_RunCrankSrc;
#define CePMDR_e_RunCrank_Default		((TePMDR_e_RunCrankSrc)0U)
#define CePMDR_e_RunCrank_CAN_CBC		((TePMDR_e_RunCrankSrc)1U)
#define CePMDR_e_RunCrank_HW_Digital		((TePMDR_e_RunCrankSrc)2U)
#define CePMDR_e_RunCrank_HW_Analog		((TePMDR_e_RunCrankSrc)3U)
#define CePMDR_e_RunCrank_CAN_ECM		((TePMDR_e_RunCrankSrc)4U)
#endif

/*
* Enum TePMDR_e_PMM_PowerModeSrc 
* Default Value:CePMDR_e_PMMPowerMode_Default 
*/
#ifndef TePMDR_e_PMM_PowerModeSrc
typedef uint8 TePMDR_e_PMM_PowerModeSrc;
#define CePMDR_e_PMMPowerMode_Default		((TePMDR_e_PMM_PowerModeSrc)0U)
#define CePMDR_e_PMMPowerMode_CAN		((TePMDR_e_PMM_PowerModeSrc)1U)
#define CePMDR_e_PMMPowerMode_HW		((TePMDR_e_PMM_PowerModeSrc)2U)
#define CePMDR_e_PMMPowerMode_Others		((TePMDR_e_PMM_PowerModeSrc)3U)
#define CePMDR_e_PMMPowerMode_OneHWLine		((TePMDR_e_PMM_PowerModeSrc)4U)
#endif

/*
* Enum TePMDR_e_AccRunSrc 
* Default Value:CePMDR_e_AccRun_Default 
*/
#ifndef TePMDR_e_AccRunSrc
typedef uint8 TePMDR_e_AccRunSrc;
#define CePMDR_e_AccRun_Default		((TePMDR_e_AccRunSrc)0U)
#define CePMDR_e_AccRun_Digital		((TePMDR_e_AccRunSrc)1U)
#define CePMDR_e_AccRun_Analog		((TePMDR_e_AccRunSrc)2U)
#endif

/*
* Enum TePMDR_e_OperationalMode 
* Default Value:CePMDR_e_Init 
*/
#ifndef TePMDR_e_OperationalMode
typedef uint8 TePMDR_e_OperationalMode;
#define CePMDR_e_Init		((TePMDR_e_OperationalMode)0U)
#define CePMDR_e_Ign_Off_WithoutKey		((TePMDR_e_OperationalMode)1U)
#define CePMDR_e_Ign_Off		((TePMDR_e_OperationalMode)2U)
#define CePMDR_e_Ign_Acc		((TePMDR_e_OperationalMode)3U)
#define CePMDR_e_Ign_On		((TePMDR_e_OperationalMode)4U)
#define CePMDR_e_Ign_PreStart		((TePMDR_e_OperationalMode)5U)
#define CePMDR_e_Ign_Start		((TePMDR_e_OperationalMode)6U)
#define CePMDR_e_Ign_Cranking		((TePMDR_e_OperationalMode)7U)
#define CePMDR_e_Ign_On_EngOn		((TePMDR_e_OperationalMode)8U)
#define CePMDR_e_Ign_PreAcc		((TePMDR_e_OperationalMode)9U)
#define CePMDR_e_Ign_PreOff		((TePMDR_e_OperationalMode)10U)
#define CePMDR_e_Auto_Cranking		((TePMDR_e_OperationalMode)11U)
#define CePMDR_e_Auto_Stop		((TePMDR_e_OperationalMode)12U)
#define CePMDR_e_KeyAuthenticated		((TePMDR_e_OperationalMode)13U)
#define CePMDR_e_NotUsed		((TePMDR_e_OperationalMode)14U)
#define CePMDR_e_SNA		((TePMDR_e_OperationalMode)15U)
#endif

/*
* Enum TePMPR_e_FCCP_State 
* Default Value:CePMPR_e_FCCP_Off 
*/
#ifndef TePMPR_e_FCCP_State
typedef uint8 TePMPR_e_FCCP_State;
#define CePMPR_e_FCCP_Off		((TePMPR_e_FCCP_State)0U)
#define CePMPR_e_FCCP_On		((TePMPR_e_FCCP_State)1U)
#endif

/*
* Enum TePMPR_e_FCCP_VoltageRange 
* Default Value:CePMPR_e_FCCP_12Volts 
*/
#ifndef TePMPR_e_FCCP_VoltageRange
typedef uint8 TePMPR_e_FCCP_VoltageRange;
#define CePMPR_e_FCCP_12Volts		((TePMPR_e_FCCP_VoltageRange)0U)
#define CePMPR_e_FCCP_24Volts		((TePMPR_e_FCCP_VoltageRange)1U)
#define CePMPR_e_FCCP_48Volts		((TePMPR_e_FCCP_VoltageRange)2U)
#define CePMPR_e_FCCP_Invalid		((TePMPR_e_FCCP_VoltageRange)3U)
#endif

/*
* Enum TePMPR_e_FTSNA 
* Default Value:CePMPR_e_FTSNA_False 
*/
#ifndef TePMPR_e_FTSNA
typedef uint8 TePMPR_e_FTSNA;
#define CePMPR_e_FTSNA_False		((TePMPR_e_FTSNA)0U)
#define CePMPR_e_FTSNA_True		((TePMPR_e_FTSNA)1U)
#define CePMPR_e_FTSNA_SNA		((TePMPR_e_FTSNA)3U)
#endif

/*
* Enum TePMPR_e_TFSNA 
* Default Value:CePMPR_e_TFSNA_False 
*/
#ifndef TePMPR_e_TFSNA
typedef uint8 TePMPR_e_TFSNA;
#define CePMPR_e_TFSNA_True		((TePMPR_e_TFSNA)0U)
#define CePMPR_e_TFSNA_False		((TePMPR_e_TFSNA)1U)
#define CePMPR_e_TFSNA_SNA		((TePMPR_e_TFSNA)3U)
#endif

/*
* Enum TePMPR_e_NodeError 
* Default Value:CePMPR_e_NodeError_NoError 
*/
#ifndef TePMPR_e_NodeError
typedef uint8 TePMPR_e_NodeError;
#define CePMPR_e_NodeError_NoError		((TePMPR_e_NodeError)0U)
#define CePMPR_e_NodeError_ActiveError		((TePMPR_e_NodeError)1U)
#define CePMPR_e_NodeError_ErrorStatusChanged		((TePMPR_e_NodeError)2U)
#define CePMPR_e_NodeError_SNA		((TePMPR_e_NodeError)3U)
#endif

/*
* Enum TePMTR_e_ThrmlDevisEnbl 
* Default Value:CePMTR_e_DISBL_All_Thrml 
*/
#ifndef TePMTR_e_ThrmlDevisEnbl
typedef uint8 TePMTR_e_ThrmlDevisEnbl;
#define CePMTR_e_DISBL_All_Thrml		((TePMTR_e_ThrmlDevisEnbl)0U)
#define CePMTR_e_ENB_All_Thrml		((TePMTR_e_ThrmlDevisEnbl)1U)
#define CePMTR_e_ENB_All_Excpt_Comp		((TePMTR_e_ThrmlDevisEnbl)2U)
#define CePMTR_e_Enb_Only_LT_Pmp_N_Fan		((TePMTR_e_ThrmlDevisEnbl)3U)
#define CePMTR_e_ENB_Only_Pmps		((TePMTR_e_ThrmlDevisEnbl)4U)
#endif

/*
* Enum TePMTR_e_VehicleMode 
* Default Value:CePMTR_e_ShippingMode 
*/
#ifndef TePMTR_e_VehicleMode
typedef uint8 TePMTR_e_VehicleMode;
#define CePMTR_e_ShippingMode		((TePMTR_e_VehicleMode)0U)
#define CePMTR_e_NormalOperation		((TePMTR_e_VehicleMode)1U)
#define CePMTR_e_REMMode		((TePMTR_e_VehicleMode)2U)
#define CePMTR_e_FaultMode		((TePMTR_e_VehicleMode)3U)
#define CePMTR_e_ShippingNDefrost		((TePMTR_e_VehicleMode)4U)
#endif

/*
* Enum TePMTR_e_ThermalRelayStatus 
* Default Value:CePMTR_e_ThermalRelay_SNA 
*/
#ifndef TePMTR_e_ThermalRelayStatus
typedef uint8 TePMTR_e_ThermalRelayStatus;
#define CePMTR_e_ThermalRelayOpen		((TePMTR_e_ThermalRelayStatus)0U)
#define CePMTR_e_ThermalRelayClosed		((TePMTR_e_ThermalRelayStatus)1U)
#define CePMTR_e_ThermalRelay_SNA		((TePMTR_e_ThermalRelayStatus)3U)
#endif

/*
* Enum TePMTR_e_ThermalPowerModing_PropArch 
* Default Value:CePMTR_e_PHEV_or_BEV 
*/
#ifndef TePMTR_e_ThermalPowerModing_PropArch
typedef uint8 TePMTR_e_ThermalPowerModing_PropArch;
#define CePMTR_e_PHEV_or_BEV		((TePMTR_e_ThermalPowerModing_PropArch)0U)
#define CePMTR_e_mHEV_or_BSG		((TePMTR_e_ThermalPowerModing_PropArch)1U)
#endif

/*
* Enum TePMTR_e_ThermlEnblReason 
* Default Value:CePMTR_e_EnblKey_Acc_or_DrvDoorAjr 
*/
#ifndef TePMTR_e_ThermlEnblReason
typedef uint8 TePMTR_e_ThermlEnblReason;
#define CePMTR_e_EnblKey_Acc_or_DrvDoorAjr		((TePMTR_e_ThermlEnblReason)0U)
#define CePMTR_e_EnblKeyOnly_Run		((TePMTR_e_ThermlEnblReason)1U)
#define CePMTR_e_EnblKeyOnly_Cranked		((TePMTR_e_ThermlEnblReason)2U)
#define CePMTR_e_EnblPlugOnly_NoChrg		((TePMTR_e_ThermlEnblReason)3U)
#define CePMTR_e_EnblPlugOnly_Chrg		((TePMTR_e_ThermlEnblReason)4U)
#define CePMTR_e_EnblRemStrOnly_Honrd		((TePMTR_e_ThermlEnblReason)5U)
#define CePMTR_e_EnblKeyAcc_PlugNoChrg		((TePMTR_e_ThermlEnblReason)6U)
#define CePMTR_e_EnblKeyAcc_PlugChrg		((TePMTR_e_ThermlEnblReason)7U)
#define CePMTR_e_EnblKeyRun_PlugNoChrg		((TePMTR_e_ThermlEnblReason)8U)
#define CePMTR_e_EnblKeyRun_PlugChrg		((TePMTR_e_ThermlEnblReason)9U)
#define CePMTR_e_EnblKeyCrankd_PlugNoChrg		((TePMTR_e_ThermlEnblReason)10U)
#define CePMTR_e_EnblKeyCrankd_PlugChrg		((TePMTR_e_ThermlEnblReason)11U)
#define CePMTR_e_EnblRemStr_PlugNoChrg		((TePMTR_e_ThermlEnblReason)12U)
#define CePMTR_e_EnblRemStr_PlugChrg		((TePMTR_e_ThermlEnblReason)13U)
#define CePMTR_e_EnblPeriodWup_PlugNoChrg		((TePMTR_e_ThermlEnblReason)14U)
#define CePMTR_e_EnblPeriodWup_PlugChrg		((TePMTR_e_ThermlEnblReason)15U)
#define CePMTR_e_EnblKey_Crank		((TePMTR_e_ThermlEnblReason)16U)
#define CePMTR_e_DisableAll		((TePMTR_e_ThermlEnblReason)17U)
#define CePMTR_e_EnblPeriodWup_NotPlugIn		((TePMTR_e_ThermlEnblReason)18U)
#endif

/*
* Enum TePPCR_e_PPawl_Request 
* Default Value:CePPCR_e_PPAWL_UNKNOWN_Request 
*/
#ifndef TePPCR_e_PPawl_Request
typedef uint8 TePPCR_e_PPawl_Request;
#define CePPCR_e_PPAWL_UNKNOWN_Request		((TePPCR_e_PPawl_Request)0U)
#define CePPCR_e_PPAWL_MOVE_TO_DISENG		((TePPCR_e_PPawl_Request)1U)
#define CePPCR_e_PPAWL_MOVE_TO_ENG		((TePPCR_e_PPawl_Request)2U)
#define CePPCR_e_PPAWL_ZeroRefLearn		((TePPCR_e_PPawl_Request)3U)
#define CePPCR_e_PPAWL_Idle		((TePPCR_e_PPawl_Request)4U)
#define CePPCR_e_PPAWL_InitAtPwrUpSegOne		((TePPCR_e_PPawl_Request)5U)
#define CePPCR_e_PPAWL_InitAtPwrUpSegTwo		((TePPCR_e_PPawl_Request)6U)
#define CePPCR_e_PPAWL_STUCK_INIT		((TePPCR_e_PPawl_Request)7U)
#define CePPCR_e_PPAWL_STUCK_ENGAGED		((TePPCR_e_PPawl_Request)8U)
#define CePPCR_e_PPAWL_STUCK_DISENGAGED		((TePPCR_e_PPawl_Request)9U)
#define CePPCR_e_PPAWL_STUCK_ZEROREFLRN		((TePPCR_e_PPawl_Request)10U)
#define CePPCR_e_PPAWL_AutoUnlock_Eng		((TePPCR_e_PPawl_Request)11U)
#define CePPCR_e_PPAWL_AutoUnlock_InitEng		((TePPCR_e_PPawl_Request)12U)
#define CePPCR_e_PPAWL_AutoUnlock_DisEng		((TePPCR_e_PPawl_Request)13U)
#define CePPCR_e_PPAWL_AutoUnlock_InitDisEng		((TePPCR_e_PPawl_Request)14U)
#endif

/*
* Enum TePPCR_e_PPawl_Fdbck 
* Default Value:CePPCR_e_PPAWL_UNKNOWN_Position 
*/
#ifndef TePPCR_e_PPawl_Fdbck
typedef uint8 TePPCR_e_PPawl_Fdbck;
#define CePPCR_e_PPAWL_UNKNOWN_Position		((TePPCR_e_PPawl_Fdbck)0U)
#define CePPCR_e_PPAWL_InitSegOneInProgress		((TePPCR_e_PPawl_Fdbck)1U)
#define CePPCR_e_PPAWL_InitSegOneComplete		((TePPCR_e_PPawl_Fdbck)2U)
#define CePPCR_e_PPAWL_InitSegTwoInProgress		((TePPCR_e_PPawl_Fdbck)3U)
#define CePPCR_e_PPAWL_InitSegTwoComplete		((TePPCR_e_PPawl_Fdbck)4U)
#define CePPCR_e_PPAWL_DisEngaging		((TePPCR_e_PPawl_Fdbck)5U)
#define CePPCR_e_PPAWL_DISENGAGED		((TePPCR_e_PPawl_Fdbck)6U)
#define CePPCR_e_PPAWL_Engaging		((TePPCR_e_PPawl_Fdbck)7U)
#define CePPCR_e_PPAWL_ENGAGED		((TePPCR_e_PPawl_Fdbck)8U)
#define CePPCR_e_PPAWL_ZeroRefLrnInProgress		((TePPCR_e_PPawl_Fdbck)9U)
#define CePPCR_e_PPAWL_ZeroRefLrnComplete		((TePPCR_e_PPawl_Fdbck)10U)
#define CePPCR_e_PPAWL_AutoUnlock_Engaging		((TePPCR_e_PPawl_Fdbck)11U)
#define CePPCR_e_PPAWL_AutoUnlock_EngCmplt		((TePPCR_e_PPawl_Fdbck)12U)
#define CePPCR_e_PPAWL_AutoUnlock_DisEngaging		((TePPCR_e_PPawl_Fdbck)13U)
#define CePPCR_e_PPAWL_AutoUnlock_DisEngCmplt		((TePPCR_e_PPawl_Fdbck)14U)
#define CePPCR_e_PPAWL_AutoUnlock_InitEngaging		((TePPCR_e_PPawl_Fdbck)15U)
#define CePPCR_e_PPAWL_AutoUnlock_InitEngCmplt		((TePPCR_e_PPawl_Fdbck)16U)
#define CePPCR_e_PPAWL_AutoUnlock_InitDisEngaging		((TePPCR_e_PPawl_Fdbck)17U)
#define CePPCR_e_PPAWL_AutoUnlock_InitDisEngCmplt		((TePPCR_e_PPawl_Fdbck)18U)
#define CePPCR_e_PPAWL_BROKEN		((TePPCR_e_PPawl_Fdbck)19U)
#endif

/*
* Enum TePPCR_e_EngageSt_Init 
* Default Value:CePPCR_e_Init1 
*/
#ifndef TePPCR_e_EngageSt_Init
typedef uint8 TePPCR_e_EngageSt_Init;
#define CePPCR_e_Init1		((TePPCR_e_EngageSt_Init)1U)
#define CePPCR_e_Init2		((TePPCR_e_EngageSt_Init)2U)
#define CePPCR_e_Init3		((TePPCR_e_EngageSt_Init)3U)
#define CePPCR_e_Init4		((TePPCR_e_EngageSt_Init)4U)
#define CePPCR_e_Init5		((TePPCR_e_EngageSt_Init)5U)
#define CePPCR_e_Init6		((TePPCR_e_EngageSt_Init)6U)
#define CePPCR_e_Init7		((TePPCR_e_EngageSt_Init)7U)
#define CePPCR_e_Init8		((TePPCR_e_EngageSt_Init)8U)
#define CePPCR_e_Init9		((TePPCR_e_EngageSt_Init)9U)
#define CePPCR_e_Init10		((TePPCR_e_EngageSt_Init)10U)
#define CePPCR_e_Init11		((TePPCR_e_EngageSt_Init)11U)
#define CePPCR_e_Init12		((TePPCR_e_EngageSt_Init)12U)
#endif

/*
* Enum TePPCR_e_DisEngageSt 
* Default Value:CePPCR_e_DisEngageSt1 
*/
#ifndef TePPCR_e_DisEngageSt
typedef uint8 TePPCR_e_DisEngageSt;
#define CePPCR_e_DisEngageSt1		((TePPCR_e_DisEngageSt)1U)
#define CePPCR_e_DisEngageSt2		((TePPCR_e_DisEngageSt)2U)
#define CePPCR_e_DisEngageSt3		((TePPCR_e_DisEngageSt)3U)
#define CePPCR_e_DisEngageSt4		((TePPCR_e_DisEngageSt)4U)
#define CePPCR_e_DisEngageSt5		((TePPCR_e_DisEngageSt)5U)
#define CePPCR_e_DisEngageSt6		((TePPCR_e_DisEngageSt)6U)
#define CePPCR_e_DisEngageSt7		((TePPCR_e_DisEngageSt)7U)
#define CePPCR_e_DisEngageSt8		((TePPCR_e_DisEngageSt)8U)
#define CePPCR_e_DisEngageSt9		((TePPCR_e_DisEngageSt)9U)
#define CePPCR_e_DisEngageSt10		((TePPCR_e_DisEngageSt)10U)
#define CePPCR_e_DisEngageSt11		((TePPCR_e_DisEngageSt)11U)
#define CePPCR_e_DisEngageSt12		((TePPCR_e_DisEngageSt)12U)
#endif

/*
* Enum TePPCR_e_EngageSt 
* Default Value:CePPCR_e_EngageSt1 
*/
#ifndef TePPCR_e_EngageSt
typedef uint8 TePPCR_e_EngageSt;
#define CePPCR_e_EngageSt1		((TePPCR_e_EngageSt)1U)
#define CePPCR_e_EngageSt2		((TePPCR_e_EngageSt)2U)
#define CePPCR_e_EngageSt3		((TePPCR_e_EngageSt)3U)
#define CePPCR_e_EngageSt4		((TePPCR_e_EngageSt)4U)
#define CePPCR_e_EngageSt5		((TePPCR_e_EngageSt)5U)
#define CePPCR_e_EngageSt6		((TePPCR_e_EngageSt)6U)
#endif

/*
* Enum TePPCR_e_PPUnlockStEngInit 
* Default Value:CePPCR_e_PPUnlockStEngInit1 
*/
#ifndef TePPCR_e_PPUnlockStEngInit
typedef uint8 TePPCR_e_PPUnlockStEngInit;
#define CePPCR_e_PPUnlockStEngInit1		((TePPCR_e_PPUnlockStEngInit)1U)
#define CePPCR_e_PPUnlockStEngInit2		((TePPCR_e_PPUnlockStEngInit)2U)
#define CePPCR_e_PPUnlockStEngInit3		((TePPCR_e_PPUnlockStEngInit)3U)
#define CePPCR_e_PPUnlockStEngInit4		((TePPCR_e_PPUnlockStEngInit)4U)
#endif

/*
* Enum TePPCR_e_PPUnlockStDisInit 
* Default Value:CePPCR_e_PPUnlockStDisInit1 
*/
#ifndef TePPCR_e_PPUnlockStDisInit
typedef uint8 TePPCR_e_PPUnlockStDisInit;
#define CePPCR_e_PPUnlockStDisInit1		((TePPCR_e_PPUnlockStDisInit)1U)
#define CePPCR_e_PPUnlockStDisInit2		((TePPCR_e_PPUnlockStDisInit)2U)
#define CePPCR_e_PPUnlockStDisInit3		((TePPCR_e_PPUnlockStDisInit)3U)
#define CePPCR_e_PPUnlockStDisInit4		((TePPCR_e_PPUnlockStDisInit)4U)
#define CePPCR_e_PPUnlockStDisInit5		((TePPCR_e_PPUnlockStDisInit)5U)
#define CePPCR_e_PPUnlockStDisInit6		((TePPCR_e_PPUnlockStDisInit)6U)
#define CePPCR_e_PPUnlockStDisInit7		((TePPCR_e_PPUnlockStDisInit)7U)
#define CePPCR_e_PPUnlockStDisInit8		((TePPCR_e_PPUnlockStDisInit)8U)
#endif

/*
* Enum TePPCR_e_PPUnlockStDis 
* Default Value:CePPCR_e_PPUnlockStDis1 
*/
#ifndef TePPCR_e_PPUnlockStDis
typedef uint8 TePPCR_e_PPUnlockStDis;
#define CePPCR_e_PPUnlockStDis1		((TePPCR_e_PPUnlockStDis)1U)
#define CePPCR_e_PPUnlockStDis2		((TePPCR_e_PPUnlockStDis)2U)
#define CePPCR_e_PPUnlockStDis3		((TePPCR_e_PPUnlockStDis)3U)
#endif

/*
* Enum TePPCR_e_PPUnlockStEng 
* Default Value:CePPCR_e_PPUnlockStEng1 
*/
#ifndef TePPCR_e_PPUnlockStEng
typedef uint8 TePPCR_e_PPUnlockStEng;
#define CePPCR_e_PPUnlockStEng1		((TePPCR_e_PPUnlockStEng)1U)
#define CePPCR_e_PPUnlockStEng2		((TePPCR_e_PPUnlockStEng)2U)
#define CePPCR_e_PPUnlockStEng3		((TePPCR_e_PPUnlockStEng)3U)
#endif

/*
* Enum TePPCR_e_NVRAM_Dither_St 
* Default Value:CePPCR_e_NVRAM_Dither_St1 
*/
#ifndef TePPCR_e_NVRAM_Dither_St
typedef uint8 TePPCR_e_NVRAM_Dither_St;
#define CePPCR_e_NVRAM_Dither_St1		((TePPCR_e_NVRAM_Dither_St)1U)
#define CePPCR_e_NVRAM_Dither_St2		((TePPCR_e_NVRAM_Dither_St)2U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_Flt_Stat 
* Default Value:CePPCR_e_FS_No_Fault 
*/
#ifndef TePPCR_e_PCUCtrl_Flt_Stat
typedef uint8 TePPCR_e_PCUCtrl_Flt_Stat;
#define CePPCR_e_FS_No_Fault		((TePPCR_e_PCUCtrl_Flt_Stat)0U)
#define CePPCR_e_FS_Dereating		((TePPCR_e_PCUCtrl_Flt_Stat)1U)
#define CePPCR_e_FS_Retrying		((TePPCR_e_PCUCtrl_Flt_Stat)2U)
#define CePPCR_e_FS_Non_Recoverable		((TePPCR_e_PCUCtrl_Flt_Stat)3U)
#define CePPCR_e_FS_SNA		((TePPCR_e_PCUCtrl_Flt_Stat)4U)
#define CePPCR_e_FS_Reserved		((TePPCR_e_PCUCtrl_Flt_Stat)5U)
#define CePPCR_e_FS_Reserved2		((TePPCR_e_PCUCtrl_Flt_Stat)6U)
#define CePPCR_e_FS_Reserved3		((TePPCR_e_PCUCtrl_Flt_Stat)7U)
#define CePPCR_e_FS_Reserved4		((TePPCR_e_PCUCtrl_Flt_Stat)8U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_MPR_Pos 
* Default Value:CePPCR_e_MPR_Init 
*/
#ifndef TePPCR_e_PCUCtrl_MPR_Pos
typedef uint8 TePPCR_e_PCUCtrl_MPR_Pos;
#define CePPCR_e_MPR_Init		((TePPCR_e_PCUCtrl_MPR_Pos)0U)
#define CePPCR_e_MPR_Unknown		((TePPCR_e_PCUCtrl_MPR_Pos)1U)
#define CePPCR_e_MPR_Engaged		((TePPCR_e_PCUCtrl_MPR_Pos)2U)
#define CePPCR_e_MPR_Disengaged		((TePPCR_e_PCUCtrl_MPR_Pos)3U)
#define CePPCR_e_MPR_SNA		((TePPCR_e_PCUCtrl_MPR_Pos)4U)
#define CePPCR_e_MPR_Reserved		((TePPCR_e_PCUCtrl_MPR_Pos)5U)
#define CePPCR_e_MPR_Reserved1		((TePPCR_e_PCUCtrl_MPR_Pos)6U)
#define CePPCR_e_MPR_Reserved2		((TePPCR_e_PCUCtrl_MPR_Pos)7U)
#define CePPCR_e_MPR_Reserved3		((TePPCR_e_PCUCtrl_MPR_Pos)8U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_MtrPosStat 
* Default Value:CePPCR_e_Mtr_Unknown 
*/
#ifndef TePPCR_e_PCUCtrl_MtrPosStat
typedef uint8 TePPCR_e_PCUCtrl_MtrPosStat;
#define CePPCR_e_Mtr_Unknown		((TePPCR_e_PCUCtrl_MtrPosStat)1U)
#define CePPCR_e_Mtr_Engaged_Endstop		((TePPCR_e_PCUCtrl_MtrPosStat)2U)
#define CePPCR_e_Mtr_Engaged		((TePPCR_e_PCUCtrl_MtrPosStat)3U)
#define CePPCR_e_Mtr_Between_End_Diseng		((TePPCR_e_PCUCtrl_MtrPosStat)4U)
#define CePPCR_e_Mtr_Disengaged		((TePPCR_e_PCUCtrl_MtrPosStat)5U)
#define CePPCR_e_Mtr_Disengaged_Endstop		((TePPCR_e_PCUCtrl_MtrPosStat)6U)
#define CePPCR_e_Mtr_SNA		((TePPCR_e_PCUCtrl_MtrPosStat)7U)
#define CePPCR_e_Mtr_Reserved		((TePPCR_e_PCUCtrl_MtrPosStat)8U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_PP_REQ 
* Default Value:CePPCR_e_Req_No_Req 
*/
#ifndef TePPCR_e_PCUCtrl_PP_REQ
typedef uint8 TePPCR_e_PCUCtrl_PP_REQ;
#define CePPCR_e_Req_No_Req		((TePPCR_e_PCUCtrl_PP_REQ)0U)
#define CePPCR_e_Req_Disengage		((TePPCR_e_PCUCtrl_PP_REQ)1U)
#define CePPCR_e_Req_Engage		((TePPCR_e_PCUCtrl_PP_REQ)2U)
#define CePPCR_e_Req_SNA		((TePPCR_e_PCUCtrl_PP_REQ)3U)
#define CePPCR_e_Req_Reserved2		((TePPCR_e_PCUCtrl_PP_REQ)4U)
#define CePPCR_e_Req_Reserved3		((TePPCR_e_PCUCtrl_PP_REQ)5U)
#define CePPCR_e_Req_Reserved4		((TePPCR_e_PCUCtrl_PP_REQ)6U)
#define CePPCR_e_Req_Reserved5		((TePPCR_e_PCUCtrl_PP_REQ)7U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_PosSnsr 
* Default Value:CePPCR_e_PosSnsr_Unknown 
*/
#ifndef TePPCR_e_PCUCtrl_PosSnsr
typedef uint8 TePPCR_e_PCUCtrl_PosSnsr;
#define CePPCR_e_PosSnsr_Unknown		((TePPCR_e_PCUCtrl_PosSnsr)1U)
#define CePPCR_e_PosSnsr_Engaged		((TePPCR_e_PCUCtrl_PosSnsr)2U)
#define CePPCR_e_PosSnsr_Between_Eng_Diseng		((TePPCR_e_PCUCtrl_PosSnsr)3U)
#define CePPCR_e_PosSnsr_Tooth_to_Tooth		((TePPCR_e_PCUCtrl_PosSnsr)4U)
#define CePPCR_e_PosSnsr_Disengaged		((TePPCR_e_PCUCtrl_PosSnsr)5U)
#define CePPCR_e_PosSnsr_SNA		((TePPCR_e_PCUCtrl_PosSnsr)6U)
#define CePPCR_e_PosSnsr_Reserved		((TePPCR_e_PCUCtrl_PosSnsr)7U)
#define CePPCR_e_PosSnsr_Reserved2		((TePPCR_e_PCUCtrl_PosSnsr)8U)
#endif

/*
* Enum TePPCR_e_InitSegOneSt 
* Default Value:CePPCR_e_InitSegOneSt1 
*/
#ifndef TePPCR_e_InitSegOneSt
typedef uint8 TePPCR_e_InitSegOneSt;
#define CePPCR_e_InitSegOneSt1		((TePPCR_e_InitSegOneSt)1U)
#define CePPCR_e_InitSegOneSt2		((TePPCR_e_InitSegOneSt)2U)
#define CePPCR_e_InitSegOneSt3		((TePPCR_e_InitSegOneSt)3U)
#define CePPCR_e_InitSegOneSt4		((TePPCR_e_InitSegOneSt)4U)
#define CePPCR_e_InitSegOneSt5		((TePPCR_e_InitSegOneSt)5U)
#define CePPCR_e_InitSegOneSt6		((TePPCR_e_InitSegOneSt)6U)
#define CePPCR_e_InitSegOneSt7		((TePPCR_e_InitSegOneSt)7U)
#define CePPCR_e_InitSegOneSt8		((TePPCR_e_InitSegOneSt)8U)
#define CePPCR_e_InitSegOneSt9		((TePPCR_e_InitSegOneSt)9U)
#define CePPCR_e_InitSegOneSt10		((TePPCR_e_InitSegOneSt)10U)
#endif

/*
* Enum TePPCR_e_InitSegTwoSt 
* Default Value:CePPCR_e_InitSegTwoSt1 
*/
#ifndef TePPCR_e_InitSegTwoSt
typedef uint8 TePPCR_e_InitSegTwoSt;
#define CePPCR_e_InitSegTwoSt1		((TePPCR_e_InitSegTwoSt)1U)
#define CePPCR_e_InitSegTwoSt2		((TePPCR_e_InitSegTwoSt)2U)
#define CePPCR_e_InitSegTwoSt3		((TePPCR_e_InitSegTwoSt)3U)
#define CePPCR_e_InitSegTwoSt4		((TePPCR_e_InitSegTwoSt)4U)
#define CePPCR_e_InitSegTwoSt5		((TePPCR_e_InitSegTwoSt)5U)
#define CePPCR_e_InitSegTwoSt6		((TePPCR_e_InitSegTwoSt)6U)
#define CePPCR_e_InitSegTwoSt7		((TePPCR_e_InitSegTwoSt)7U)
#define CePPCR_e_InitSegTwoSt8		((TePPCR_e_InitSegTwoSt)8U)
#define CePPCR_e_InitSegTwoSt9		((TePPCR_e_InitSegTwoSt)9U)
#endif

/*
* Enum TePPCR_e_EngFdbckSt 
* Default Value:CePPCR_e_EngFdbckSt1 
*/
#ifndef TePPCR_e_EngFdbckSt
typedef uint8 TePPCR_e_EngFdbckSt;
#define CePPCR_e_EngFdbckSt1		((TePPCR_e_EngFdbckSt)1U)
#define CePPCR_e_EngFdbckSt2		((TePPCR_e_EngFdbckSt)2U)
#define CePPCR_e_EngFdbckSt3		((TePPCR_e_EngFdbckSt)3U)
#define CePPCR_e_EngFdbckSt4		((TePPCR_e_EngFdbckSt)4U)
#define CePPCR_e_EngFdbckSt5		((TePPCR_e_EngFdbckSt)5U)
#define CePPCR_e_EngFdbckSt6		((TePPCR_e_EngFdbckSt)6U)
#define CePPCR_e_EngFdbckSt7		((TePPCR_e_EngFdbckSt)7U)
#endif

/*
* Enum TePPCR_e_DisEngFdbckSt 
* Default Value:CePPCR_e_DisEngFdbckSt1 
*/
#ifndef TePPCR_e_DisEngFdbckSt
typedef uint8 TePPCR_e_DisEngFdbckSt;
#define CePPCR_e_DisEngFdbckSt1		((TePPCR_e_DisEngFdbckSt)1U)
#define CePPCR_e_DisEngFdbckSt2		((TePPCR_e_DisEngFdbckSt)2U)
#define CePPCR_e_DisEngFdbckSt3		((TePPCR_e_DisEngFdbckSt)3U)
#define CePPCR_e_DisEngFdbckSt4		((TePPCR_e_DisEngFdbckSt)4U)
#define CePPCR_e_DisEngFdbckSt5		((TePPCR_e_DisEngFdbckSt)5U)
#define CePPCR_e_DisEngFdbckSt6		((TePPCR_e_DisEngFdbckSt)6U)
#endif

/*
* Enum TePPCR_e_RefLrnSt 
* Default Value:CePPCR_e_RefLrnSt1 
*/
#ifndef TePPCR_e_RefLrnSt
typedef uint8 TePPCR_e_RefLrnSt;
#define CePPCR_e_RefLrnSt1		((TePPCR_e_RefLrnSt)1U)
#define CePPCR_e_RefLrnSt2		((TePPCR_e_RefLrnSt)2U)
#define CePPCR_e_RefLrnSt3		((TePPCR_e_RefLrnSt)3U)
#define CePPCR_e_RefLrnSt4		((TePPCR_e_RefLrnSt)4U)
#define CePPCR_e_RefLrnSt5		((TePPCR_e_RefLrnSt)5U)
#define CePPCR_e_RefLrnSt6		((TePPCR_e_RefLrnSt)6U)
#define CePPCR_e_RefLrnSt7		((TePPCR_e_RefLrnSt)7U)
#define CePPCR_e_RefLrnSt8		((TePPCR_e_RefLrnSt)8U)
#endif

/*
* Enum TePPCR_e_DitherEng 
* Default Value:CePPCR_e_DitherEng1 
*/
#ifndef TePPCR_e_DitherEng
typedef uint8 TePPCR_e_DitherEng;
#define CePPCR_e_DitherEng1		((TePPCR_e_DitherEng)1U)
#define CePPCR_e_DitherEng2		((TePPCR_e_DitherEng)2U)
#endif

/*
* Enum TePPCR_e_DitherDiseng 
* Default Value:CePPCR_e_DitherDiseng1 
*/
#ifndef TePPCR_e_DitherDiseng
typedef uint8 TePPCR_e_DitherDiseng;
#define CePPCR_e_DitherDiseng1		((TePPCR_e_DitherDiseng)1U)
#define CePPCR_e_DitherDiseng2		((TePPCR_e_DitherDiseng)2U)
#endif

/*
* Enum TePPCR_e_ReqCond 
* Default Value:CePPCR_e_ReqCond1 
*/
#ifndef TePPCR_e_ReqCond
typedef uint8 TePPCR_e_ReqCond;
#define CePPCR_e_ReqCond1		((TePPCR_e_ReqCond)1U)
#define CePPCR_e_ReqCond2		((TePPCR_e_ReqCond)2U)
#define CePPCR_e_ReqCond3		((TePPCR_e_ReqCond)3U)
#define CePPCR_e_ReqCond4		((TePPCR_e_ReqCond)4U)
#define CePPCR_e_ReqCond5		((TePPCR_e_ReqCond)5U)
#endif

/*
* Enum TePPCR_e_PPawlHBridge_Diag 
* Default Value:CePPCR_e_No_Fault 
*/
#ifndef TePPCR_e_PPawlHBridge_Diag
typedef uint8 TePPCR_e_PPawlHBridge_Diag;
#define CePPCR_e_No_Fault		((TePPCR_e_PPawlHBridge_Diag)0U)
#define CePPCR_e_Not_Tested		((TePPCR_e_PPawlHBridge_Diag)1U)
#define CePPCR_e_Open_Circuit		((TePPCR_e_PPawlHBridge_Diag)2U)
#define CePPCR_e_Over_Temp		((TePPCR_e_PPawlHBridge_Diag)8U)
#define CePPCR_e_Under_Volt		((TePPCR_e_PPawlHBridge_Diag)10U)
#define CePPCR_e_Curr_Limitation		((TePPCR_e_PPawlHBridge_Diag)23U)
#define CePPCR_e_STG_Out1		((TePPCR_e_PPawlHBridge_Diag)25U)
#define CePPCR_e_STG_Out2		((TePPCR_e_PPawlHBridge_Diag)26U)
#define CePPCR_e_STB_Out1		((TePPCR_e_PPawlHBridge_Diag)27U)
#define CePPCR_e_STB_Out2		((TePPCR_e_PPawlHBridge_Diag)28U)
#define CePPCR_e_SHORT_OverLoad		((TePPCR_e_PPawlHBridge_Diag)29U)
#endif

/*
* Enum TePPCR_e_PCUCtrl_StateCode 
* Default Value:CePPCR_e_SC_Init 
*/
#ifndef TePPCR_e_PCUCtrl_StateCode
typedef uint8 TePPCR_e_PCUCtrl_StateCode;
#define CePPCR_e_SC_Init		((TePPCR_e_PCUCtrl_StateCode)0U)
#define CePPCR_e_SC_Engaging		((TePPCR_e_PCUCtrl_StateCode)1U)
#define CePPCR_e_SC_Engaged		((TePPCR_e_PCUCtrl_StateCode)2U)
#define CePPCR_e_SC_Disengaging		((TePPCR_e_PCUCtrl_StateCode)3U)
#define CePPCR_e_SC_Disengaged		((TePPCR_e_PCUCtrl_StateCode)4U)
#define CePPCR_e_SC_Fault		((TePPCR_e_PCUCtrl_StateCode)5U)
#define CePPCR_e_SC_SNA		((TePPCR_e_PCUCtrl_StateCode)7U)
#define CePPCR_e_SC_Reserved		((TePPCR_e_PCUCtrl_StateCode)6U)
#endif

/*
* Enum TePRXR_e_VehicleCountryCode 
* Default Value:CePRXR_e_VCC_OTHERS 
*/
#ifndef TePRXR_e_VehicleCountryCode
typedef uint8 TePRXR_e_VehicleCountryCode;
#define CePRXR_e_VCC_OTHERS		((TePRXR_e_VehicleCountryCode)0U)
#define CePRXR_e_VCC_CHINA		((TePRXR_e_VehicleCountryCode)1U)
#endif

/*
* Enum TePRXR_e_ShiftIndSt 
* Default Value:CePRXR_e_NotPresent 
*/
#ifndef TePRXR_e_ShiftIndSt
typedef uint8 TePRXR_e_ShiftIndSt;
#define CePRXR_e_NotPresent		((TePRXR_e_ShiftIndSt)0U)
#define CePRXR_e_GSI		((TePRXR_e_ShiftIndSt)1U)
#define CePRXR_e_Enhanced_GSI		((TePRXR_e_ShiftIndSt)2U)
#define CePRXR_e_PSI		((TePRXR_e_ShiftIndSt)3U)
#define CePRXR_e_PGSI		((TePRXR_e_ShiftIndSt)4U)
#endif

/*
* Enum TePRXR_e_RRM_VP_Level 
* Default Value:CePRXR_e_RRM_VP_Absent 
*/
#ifndef TePRXR_e_RRM_VP_Level
typedef uint8 TePRXR_e_RRM_VP_Level;
#define CePRXR_e_RRM_VP_Absent		((TePRXR_e_RRM_VP_Level)0U)
#define CePRXR_e_RRM_VP_Level1		((TePRXR_e_RRM_VP_Level)1U)
#define CePRXR_e_RRM_VP_Level2		((TePRXR_e_RRM_VP_Level)2U)
#define CePRXR_e_RRM_VP_Level3		((TePRXR_e_RRM_VP_Level)3U)
#define CePRXR_e_RRM_VP_Level4		((TePRXR_e_RRM_VP_Level)4U)
#define CePRXR_e_RRM_VP_LevelHigh		((TePRXR_e_RRM_VP_Level)15U)
#define CePRXR_e_RRM_NotUsed		((TePRXR_e_RRM_VP_Level)17U)
#endif

/*
* Enum TePRXR_e_AdaptiveCruiseCtrl 
* Default Value:CePRXR_e_ACC_Absent 
*/
#ifndef TePRXR_e_AdaptiveCruiseCtrl
typedef uint8 TePRXR_e_AdaptiveCruiseCtrl;
#define CePRXR_e_ACC_Absent		((TePRXR_e_AdaptiveCruiseCtrl)0U)
#define CePRXR_e_ACC		((TePRXR_e_AdaptiveCruiseCtrl)1U)
#define CePRXR_e_ACC_Plus		((TePRXR_e_AdaptiveCruiseCtrl)2U)
#endif

/*
* Enum TePRXR_e_IncreasingSpdConst 
* Default Value:CePRXR_e_Increasing_0 
*/
#ifndef TePRXR_e_IncreasingSpdConst
typedef uint8 TePRXR_e_IncreasingSpdConst;
#define CePRXR_e_Increasing_0		((TePRXR_e_IncreasingSpdConst)0U)
#define CePRXR_e_Increasing_1		((TePRXR_e_IncreasingSpdConst)1U)
#define CePRXR_e_Increasing_2		((TePRXR_e_IncreasingSpdConst)2U)
#define CePRXR_e_Increasing_3		((TePRXR_e_IncreasingSpdConst)3U)
#define CePRXR_e_Increasing_4		((TePRXR_e_IncreasingSpdConst)4U)
#define CePRXR_e_Increasing_5		((TePRXR_e_IncreasingSpdConst)5U)
#define CePRXR_e_Increasing_6		((TePRXR_e_IncreasingSpdConst)6U)
#define CePRXR_e_Increasing_7		((TePRXR_e_IncreasingSpdConst)7U)
#endif

/*
* Enum TePRXR_e_VehCategory 
* Default Value:CePRXR_e_Category_M1 
*/
#ifndef TePRXR_e_VehCategory
typedef uint8 TePRXR_e_VehCategory;
#define CePRXR_e_Category_M1		((TePRXR_e_VehCategory)0U)
#define CePRXR_e_Category_M2_lt		((TePRXR_e_VehCategory)1U)
#define CePRXR_e_Category_M2_gt		((TePRXR_e_VehCategory)2U)
#define CePRXR_e_Category_N1		((TePRXR_e_VehCategory)3U)
#define CePRXR_e_Category_N2		((TePRXR_e_VehCategory)4U)
#endif

/*
* Enum TePRXR_e_Autonomy_Lvl 
* Default Value:CePRXR_e_None_Level1 
*/
#ifndef TePRXR_e_Autonomy_Lvl
typedef uint8 TePRXR_e_Autonomy_Lvl;
#define CePRXR_e_None_Level1		((TePRXR_e_Autonomy_Lvl)0U)
#define CePRXR_e_Level2		((TePRXR_e_Autonomy_Lvl)1U)
#define CePRXR_e_Level2_Plus		((TePRXR_e_Autonomy_Lvl)2U)
#endif

/*
* Enum TePRXR_e_Cruise_Control_Logic 
* Default Value:CePRXR_e_Logic1 
*/
#ifndef TePRXR_e_Cruise_Control_Logic
typedef uint8 TePRXR_e_Cruise_Control_Logic;
#define CePRXR_e_Logic1		((TePRXR_e_Cruise_Control_Logic)0U)
#define CePRXR_e_Logic2		((TePRXR_e_Cruise_Control_Logic)1U)
#endif

/*
* Enum TePRXR_e_Plug_and_Charge 
* Default Value:CePRXR_e_Absent 
*/
#ifndef TePRXR_e_Plug_and_Charge
typedef uint8 TePRXR_e_Plug_and_Charge;
#define CePRXR_e_Absent		((TePRXR_e_Plug_and_Charge)0U)
#define CePRXR_e_Step1		((TePRXR_e_Plug_and_Charge)1U)
#define CePRXR_e_Step2		((TePRXR_e_Plug_and_Charge)2U)
#endif

/*
* Enum TePRXR_e_TerrainSelectorModes 
* Default Value:CePRXR_e_Invalid 
*/
#ifndef TePRXR_e_TerrainSelectorModes
typedef uint8 TePRXR_e_TerrainSelectorModes;
#define CePRXR_e_Invalid		((TePRXR_e_TerrainSelectorModes)0U)
#define CePRXR_e_Two_Modes		((TePRXR_e_TerrainSelectorModes)1U)
#define CePRXR_e_Three_Modes		((TePRXR_e_TerrainSelectorModes)2U)
#define CePRXR_e_Four_Modes		((TePRXR_e_TerrainSelectorModes)3U)
#define CePRXR_e_Five_Modes		((TePRXR_e_TerrainSelectorModes)4U)
#define CePRXR_e_Three_Modes_wo_Sport		((TePRXR_e_TerrainSelectorModes)5U)
#define CePRXR_e_Four_Modes_wo_Sport		((TePRXR_e_TerrainSelectorModes)6U)
#endif

/*
* Enum TePRXR_e_HybridType 
* Default Value:CePRXR_e_NotApplicable 
*/
#ifndef TePRXR_e_HybridType
typedef uint8 TePRXR_e_HybridType;
#define CePRXR_e_NotApplicable		((TePRXR_e_HybridType)0U)
#define CePRXR_e_BattEVeh		((TePRXR_e_HybridType)1U)
#define CePRXR_e_HybEVeh		((TePRXR_e_HybridType)2U)
#define CePRXR_e_PlugHybEVeh		((TePRXR_e_HybridType)3U)
#define CePRXR_e_BSG48V		((TePRXR_e_HybridType)4U)
#define CePRXR_e_BSG12V		((TePRXR_e_HybridType)5U)
#define CePRXR_e_RangeEPB		((TePRXR_e_HybridType)6U)
#endif

/*
* Enum TePRXR_e_AxleLockerPresence 
* Default Value:CePRXR_e_ALP_Absent 
*/
#ifndef TePRXR_e_AxleLockerPresence
typedef uint8 TePRXR_e_AxleLockerPresence;
#define CePRXR_e_ALP_Absent		((TePRXR_e_AxleLockerPresence)0U)
#define CePRXR_e_RearAxleLocker		((TePRXR_e_AxleLockerPresence)1U)
#define CePRXR_e_FrontAxleLocker		((TePRXR_e_AxleLockerPresence)2U)
#endif

/*
* Enum TePRXR_e_OnboardPowPanelType 
* Default Value:CePRXR_e_NoType 
*/
#ifndef TePRXR_e_OnboardPowPanelType
typedef uint8 TePRXR_e_OnboardPowPanelType;
#define CePRXR_e_NoType		((TePRXR_e_OnboardPowPanelType)0U)
#define CePRXR_e_Type_1		((TePRXR_e_OnboardPowPanelType)1U)
#define CePRXR_e_Type_2		((TePRXR_e_OnboardPowPanelType)2U)
#define CePRXR_e_Type_3		((TePRXR_e_OnboardPowPanelType)3U)
#define CePRXR_e_Type_4		((TePRXR_e_OnboardPowPanelType)4U)
#endif

/*
* Enum TePRXR_e_RWSRackTravelLimits 
* Default Value:CePRXR_e_Limit_0 
*/
#ifndef TePRXR_e_RWSRackTravelLimits
typedef uint8 TePRXR_e_RWSRackTravelLimits;
#define CePRXR_e_Limit_0		((TePRXR_e_RWSRackTravelLimits)0U)
#define CePRXR_e_Limit_1		((TePRXR_e_RWSRackTravelLimits)1U)
#endif

/*
* Enum TePSMR_e_LV2PVSMode 
* Default Value:CePSMR_e_NO_Fault 
*/
#ifndef TePSMR_e_LV2PVSMode
typedef uint8 TePSMR_e_LV2PVSMode;
#define CePSMR_e_NO_Fault		((TePSMR_e_LV2PVSMode)0U)
#define CePSMR_e_PVS1Faulty		((TePSMR_e_LV2PVSMode)1U)
#define CePSMR_e_PVS2Faulty		((TePSMR_e_LV2PVSMode)2U)
#define CePSMR_e_PVS_Incoh		((TePSMR_e_LV2PVSMode)3U)
#define CePSMR_e_Lv2PVSZeroTrqReq		((TePSMR_e_LV2PVSMode)4U)
#define CePSMR_e_NotValid		((TePSMR_e_LV2PVSMode)5U)
#endif

/*
* Enum TePSMR_e_KeySts 
* Default Value:CePSMR_e_Lv2_IGN_LK 
*/
#ifndef TePSMR_e_KeySts
typedef uint8 TePSMR_e_KeySts;
#define CePSMR_e_Lv2_INIT		((TePSMR_e_KeySts)0U)
#define CePSMR_e_Lv2_IGN_LK		((TePSMR_e_KeySts)1U)
#define CePSMR_e_Lv2_ACC		((TePSMR_e_KeySts)3U)
#define CePSMR_e_Lv2_RUN		((TePSMR_e_KeySts)4U)
#define CePSMR_e_Lv2_Start		((TePSMR_e_KeySts)5U)
#define CePSMR_e_Lv2_SNA		((TePSMR_e_KeySts)7U)
#endif

/*
* Enum TePTAR_e_ImmediateTorqRespType 
* Default Value:CePTAR_e_Inactive 
*/
#ifndef TePTAR_e_ImmediateTorqRespType
typedef uint8 TePTAR_e_ImmediateTorqRespType;
#define CePTAR_e_Inactive		((TePTAR_e_ImmediateTorqRespType)0U)
#define CePTAR_e_PleasibilityLimited		((TePTAR_e_ImmediateTorqRespType)1U)
#define CePTAR_e_MaximumRange		((TePTAR_e_ImmediateTorqRespType)2U)
#define CePTAR_e_AutoActuationSelect		((TePTAR_e_ImmediateTorqRespType)3U)
#define CePTAR_e_ImmediateTorqRespTypeSize		((TePTAR_e_ImmediateTorqRespType)4U)
#endif

/*
* Enum TePWDR_e_FuseStatus 
* Default Value:CePWDR_e_FuseNotSupported 
*/
#ifndef TePWDR_e_FuseStatus
typedef uint8 TePWDR_e_FuseStatus;
#define CePWDR_e_FuseNotSupported		((TePWDR_e_FuseStatus)0U)
#define CePWDR_e_FusePassed		((TePWDR_e_FuseStatus)1U)
#define CePWDR_e_FuseFailed		((TePWDR_e_FuseStatus)2U)
#define CePWDR_e_FuseInvalid		((TePWDR_e_FuseStatus)3U)
#endif

/*
* Enum TePWMD_e_CanLocStatus 
* Default Value:CePWMD_e_LOC_Disable 
*/
#ifndef TePWMD_e_CanLocStatus
typedef uint8 TePWMD_e_CanLocStatus;
#define CePWMD_e_LOC_Disable		((TePWMD_e_CanLocStatus)0U)
#define CePWMD_e_LOC_Enable		((TePWMD_e_CanLocStatus)1U)
#define CePWMD_e_LOC_Enable_Limited		((TePWMD_e_CanLocStatus)2U)
#endif

/*
* Enum TeRCVR_e_Vlv_Stat 
* Default Value:CeRCVR_e_Vlv_Deenergize 
*/
#ifndef TeRCVR_e_Vlv_Stat
typedef uint8 TeRCVR_e_Vlv_Stat;
#define CeRCVR_e_Vlv_Deenergize		((TeRCVR_e_Vlv_Stat)0U)
#define CeRCVR_e_Vlv_Energize		((TeRCVR_e_Vlv_Stat)1U)
#define CeRCVR_e_Vlv_Faulty		((TeRCVR_e_Vlv_Stat)2U)
#endif

/*
* Enum TeRCVR_e_HT_SO_VlvState 
* Default Value:CeRCVR_e_HTSO_Vlv_OFF 
*/
#ifndef TeRCVR_e_HT_SO_VlvState
typedef uint8 TeRCVR_e_HT_SO_VlvState;
#define CeRCVR_e_HTSO_Vlv_OFF		((TeRCVR_e_HT_SO_VlvState)0U)
#define CeRCVR_e_HTSO_Vlv_ON		((TeRCVR_e_HT_SO_VlvState)10U)
#define CeRCVR_e_HTSO_Vlv_Faulty		((TeRCVR_e_HT_SO_VlvState)100U)
#endif

/*
* Enum TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt 
* Default Value:CeRCVR_e_HTSOV_Return_Control_to_ECU 
*/
#ifndef TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt
typedef uint8 TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt;
#define CeRCVR_e_HTSOV_Return_Control_to_ECU		((TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt)0U)
#define CeRCVR_e_HTSOV_Reset_to_Default		((TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt)1U)
#define CeRCVR_e_HTSOV_Short_Term_Adjustment		((TeRCVR_e_HT_Shtoff_VlvCmd_IO_CntrlSt)3U)
#endif

/*
* Enum TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt 
* Default Value:CeRCVR_e_FrtRfgVlv_Return_Control_to_ECU 
*/
#ifndef TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt
typedef uint8 TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt;
#define CeRCVR_e_FrtRfgVlv_Return_Control_to_ECU		((TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt)0U)
#define CeRCVR_e_FrtRfgVlv_Reset_to_Default		((TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt)1U)
#define CeRCVR_e_FrtRfgVlv_Short_Term_Adjustment		((TeRCVR_e_FrtRfgVlvCmd_IO_CntrlSt)3U)
#endif

/*
* Enum TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt 
* Default Value:CeRCVR_e_ChlrRfgVlv_Return_Control_to_ECU 
*/
#ifndef TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt
typedef uint8 TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt;
#define CeRCVR_e_ChlrRfgVlv_Return_Control_to_ECU		((TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt)0U)
#define CeRCVR_e_ChlrRfgVlv_Reset_to_Default		((TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt)1U)
#define CeRCVR_e_ChlrRfgVlv_Short_Term_Adjustment		((TeRCVR_e_ChlrRfgVlvCmd_IO_CntrlSt)3U)
#endif

/*
* Enum TeRCVR_e_CabVlvCmd_IO_CntrlSt 
* Default Value:CeRCVR_e_CabVlv_Return_Control_to_ECU 
*/
#ifndef TeRCVR_e_CabVlvCmd_IO_CntrlSt
typedef uint8 TeRCVR_e_CabVlvCmd_IO_CntrlSt;
#define CeRCVR_e_CabVlv_Return_Control_to_ECU		((TeRCVR_e_CabVlvCmd_IO_CntrlSt)0U)
#define CeRCVR_e_CabVlv_Reset_to_Default		((TeRCVR_e_CabVlvCmd_IO_CntrlSt)1U)
#define CeRCVR_e_CabVlv_Short_Term_Adjustment		((TeRCVR_e_CabVlvCmd_IO_CntrlSt)3U)
#endif

/*
* Enum TeRCVR_e_HT_CabVlvState 
* Default Value:CeRCVR_e_HTCab_Vlv_OFF 
*/
#ifndef TeRCVR_e_HT_CabVlvState
typedef uint8 TeRCVR_e_HT_CabVlvState;
#define CeRCVR_e_HTCab_Vlv_OFF		((TeRCVR_e_HT_CabVlvState)0U)
#define CeRCVR_e_HTCab_Vlv_ON		((TeRCVR_e_HT_CabVlvState)10U)
#define CeRCVR_e_HTCab_Vlv_Learning		((TeRCVR_e_HT_CabVlvState)20U)
#define CeRCVR_e_HTCab_Vlv_Faulty		((TeRCVR_e_HT_CabVlvState)100U)
#endif

/*
* Enum TeRCVR_e_HTCV_Calibration_Sts 
* Default Value:CeRCVR_e_HTCV_Completed_Passed 
*/
#ifndef TeRCVR_e_HTCV_Calibration_Sts
typedef uint8 TeRCVR_e_HTCV_Calibration_Sts;
#define CeRCVR_e_HTCV_Completed_Passed		((TeRCVR_e_HTCV_Calibration_Sts)0U)
#define CeRCVR_e_HTCV_Completed_Failed		((TeRCVR_e_HTCV_Calibration_Sts)1U)
#define CeRCVR_e_HTCV_Calibration_Inprogress		((TeRCVR_e_HTCV_Calibration_Sts)2U)
#define CeRCVR_e_Not_Calibrated		((TeRCVR_e_HTCV_Calibration_Sts)255U)
#endif

/*
* Enum TeRCVR_e_DVC_HTCV_Calibration 
* Default Value:CeRCVR_e_DVC_HTCV_Calibration_Start 
*/
#ifndef TeRCVR_e_DVC_HTCV_Calibration
typedef uint8 TeRCVR_e_DVC_HTCV_Calibration;
#define CeRCVR_e_DVC_HTCV_Calibration_Start		((TeRCVR_e_DVC_HTCV_Calibration)1U)
#define CeRCVR_e_DVC_HTCV_Calibration_Stop		((TeRCVR_e_DVC_HTCV_Calibration)2U)
#define CeRCVR_e_DVC_HTCV_Calibration_Result		((TeRCVR_e_DVC_HTCV_Calibration)3U)
#endif

/*
* Enum TeRCVR_e_CPV_Calibration_Req 
* Default Value:CeRCVR_e_CPV_No_Calibration 
*/
#ifndef TeRCVR_e_CPV_Calibration_Req
typedef uint8 TeRCVR_e_CPV_Calibration_Req;
#define CeRCVR_e_CPV_No_Calibration		((TeRCVR_e_CPV_Calibration_Req)0U)
#define CeRCVR_e_CPV_Closed_Pstn_Calibration		((TeRCVR_e_CPV_Calibration_Req)1U)
#define CeRCVR_e_CPV_Open_Pstn_Calibration		((TeRCVR_e_CPV_Calibration_Req)2U)
#define CeRCVR_e_CPV_Dual_Pstn_Calibration		((TeRCVR_e_CPV_Calibration_Req)3U)
#endif

/*
* Enum TeRCVR_e_CPV_Calibration_Sts 
* Default Value:CeRCVR_e_CPV_Calibration_Complete 
*/
#ifndef TeRCVR_e_CPV_Calibration_Sts
typedef uint8 TeRCVR_e_CPV_Calibration_Sts;
#define CeRCVR_e_CPV_Calibration_Not_Complete		((TeRCVR_e_CPV_Calibration_Sts)0U)
#define CeRCVR_e_CPV_Calibration_Taking_Place		((TeRCVR_e_CPV_Calibration_Sts)1U)
#define CeRCVR_e_CPV_Calibration_Complete		((TeRCVR_e_CPV_Calibration_Sts)2U)
#define CeRCVR_e_CPV_Calibration_Fail		((TeRCVR_e_CPV_Calibration_Sts)3U)
#endif

/*
* Enum TeRCVR_e_CPV_Status 
* Default Value:CeRCVR_e_CPV_Status_OK 
*/
#ifndef TeRCVR_e_CPV_Status
typedef uint8 TeRCVR_e_CPV_Status;
#define CeRCVR_e_CPV_Status_OK		((TeRCVR_e_CPV_Status)0U)
#define CeRCVR_e_CPV_Status_Block		((TeRCVR_e_CPV_Status)1U)
#define CeRCVR_e_CPV_Status_Calibration_Rq		((TeRCVR_e_CPV_Status)2U)
#endif

/*
* Enum TeRCVR_e_CPV_ErrorMsg 
* Default Value:CeRCVR_e_CPV_ErrorMsg_OK 
*/
#ifndef TeRCVR_e_CPV_ErrorMsg
typedef uint8 TeRCVR_e_CPV_ErrorMsg;
#define CeRCVR_e_CPV_ErrorMsg_OK		((TeRCVR_e_CPV_ErrorMsg)0U)
#define CeRCVR_e_CPV_ErrorMsg_OV		((TeRCVR_e_CPV_ErrorMsg)1U)
#define CeRCVR_e_CPV_ErrorMsg_UV		((TeRCVR_e_CPV_ErrorMsg)2U)
#define CeRCVR_e_CPV_ErrorMsg_TW		((TeRCVR_e_CPV_ErrorMsg)3U)
#define CeRCVR_e_CPV_ErrorMsg_OL		((TeRCVR_e_CPV_ErrorMsg)4U)
#define CeRCVR_e_CPV_ErrorMsg_OC		((TeRCVR_e_CPV_ErrorMsg)5U)
#define CeRCVR_e_CPV_ErrorMsg_MB		((TeRCVR_e_CPV_ErrorMsg)6U)
#define CeRCVR_e_CPV_ErrorMsg_UBP		((TeRCVR_e_CPV_ErrorMsg)7U)
#define CeRCVR_e_CPV_ErrorMsg_SNA		((TeRCVR_e_CPV_ErrorMsg)8U)
#define CeRCVR_e_CPV_ErrorMsg_NotSet		((TeRCVR_e_CPV_ErrorMsg)9U)
#endif

/*
* Enum TeRCVR_e_CPV_States 
* Default Value:CeRCVR_e_CPV_States_Default 
*/
#ifndef TeRCVR_e_CPV_States
typedef uint8 TeRCVR_e_CPV_States;
#define CeRCVR_e_CPV_States_Default		((TeRCVR_e_CPV_States)0U)
#define CeRCVR_e_CPV_States_Powered		((TeRCVR_e_CPV_States)1U)
#define CeRCVR_e_CPV_States_Faulty		((TeRCVR_e_CPV_States)2U)
#define CeRCVR_e_CPV_States_Calibration		((TeRCVR_e_CPV_States)3U)
#define CeRCVR_e_CPV_States_Save		((TeRCVR_e_CPV_States)4U)
#endif

/*
* Enum TeRCVR_e_CPV_Calibration_Routine_Sts 
* Default Value:CeRCVR_e_CPV_RoutineSts_In_Progress 
*/
#ifndef TeRCVR_e_CPV_Calibration_Routine_Sts
typedef uint8 TeRCVR_e_CPV_Calibration_Routine_Sts;
#define CeRCVR_e_CPV_RoutineSts_Complete_Pass		((TeRCVR_e_CPV_Calibration_Routine_Sts)0U)
#define CeRCVR_e_CPV_RoutineSts_Complete_Fail		((TeRCVR_e_CPV_Calibration_Routine_Sts)1U)
#define CeRCVR_e_CPV_RoutineSts_In_Progress		((TeRCVR_e_CPV_Calibration_Routine_Sts)2U)
#endif

/*
* Enum TeRCVR_e_EXV_Calibration_Req 
* Default Value:CeRCVR_e_EXV_No_Calibration 
*/
#ifndef TeRCVR_e_EXV_Calibration_Req
typedef uint8 TeRCVR_e_EXV_Calibration_Req;
#define CeRCVR_e_EXV_No_Calibration		((TeRCVR_e_EXV_Calibration_Req)0U)
#define CeRCVR_e_EXV_Closed_Pstn_Calibration		((TeRCVR_e_EXV_Calibration_Req)1U)
#define CeRCVR_e_EXV_Open_Pstn_Calibration		((TeRCVR_e_EXV_Calibration_Req)2U)
#define CeRCVR_e_EXV_Dual_Pstn_Calibration		((TeRCVR_e_EXV_Calibration_Req)3U)
#endif

/*
* Enum TeRCVR_e_EXV_Calibration_Sts 
* Default Value:CeRCVR_e_EXV_Calibration_Complete 
*/
#ifndef TeRCVR_e_EXV_Calibration_Sts
typedef uint8 TeRCVR_e_EXV_Calibration_Sts;
#define CeRCVR_e_EXV_Calibration_Taking_Place		((TeRCVR_e_EXV_Calibration_Sts)0U)
#define CeRCVR_e_EXV_Calibration_Fail		((TeRCVR_e_EXV_Calibration_Sts)1U)
#define CeRCVR_e_EXV_Calibration_Complete		((TeRCVR_e_EXV_Calibration_Sts)2U)
#define CeRCVR_e_EXV_Calibration_SNA		((TeRCVR_e_EXV_Calibration_Sts)3U)
#endif

/*
* Enum TeRCVR_e_EXV_Status 
* Default Value:CeRCVR_e_EXV_Status_OK 
*/
#ifndef TeRCVR_e_EXV_Status
typedef uint8 TeRCVR_e_EXV_Status;
#define CeRCVR_e_EXV_Status_OK		((TeRCVR_e_EXV_Status)0U)
#define CeRCVR_e_EXV_Status_Init		((TeRCVR_e_EXV_Status)1U)
#define CeRCVR_e_EXV_Status_Inoperative		((TeRCVR_e_EXV_Status)2U)
#define CeRCVR_e_EXV_Status_SNA		((TeRCVR_e_EXV_Status)3U)
#endif

/*
* Enum TeRCVR_e_EXV_ErrorMsg 
* Default Value:CeRCVR_e_EXV_ErrorMsg_OK 
*/
#ifndef TeRCVR_e_EXV_ErrorMsg
typedef uint8 TeRCVR_e_EXV_ErrorMsg;
#define CeRCVR_e_EXV_ErrorMsg_OK		((TeRCVR_e_EXV_ErrorMsg)0U)
#define CeRCVR_e_EXV_ErrorMsg_OV		((TeRCVR_e_EXV_ErrorMsg)1U)
#define CeRCVR_e_EXV_ErrorMsg_UV		((TeRCVR_e_EXV_ErrorMsg)2U)
#define CeRCVR_e_EXV_ErrorMsg_OT		((TeRCVR_e_EXV_ErrorMsg)3U)
#define CeRCVR_e_EXV_ErrorMsg_InFlt		((TeRCVR_e_EXV_ErrorMsg)4U)
#define CeRCVR_e_EXV_ErrorMsg_OC		((TeRCVR_e_EXV_ErrorMsg)5U)
#define CeRCVR_e_EXV_ErrorMsg_MB		((TeRCVR_e_EXV_ErrorMsg)6U)
#define CeRCVR_e_EXV_ErrorMsg_UBP		((TeRCVR_e_EXV_ErrorMsg)7U)
#define CeRCVR_e_EXV_ErrorMsg_SNA		((TeRCVR_e_EXV_ErrorMsg)15U)
#endif

/*
* Enum TeRCVR_e_VlvCmd_IO_CntrlSt 
* Default Value:CeRCVR_e_VlvCmd_Return_Control_to_ECU 
*/
#ifndef TeRCVR_e_VlvCmd_IO_CntrlSt
typedef uint8 TeRCVR_e_VlvCmd_IO_CntrlSt;
#define CeRCVR_e_VlvCmd_Return_Control_to_ECU		((TeRCVR_e_VlvCmd_IO_CntrlSt)0U)
#define CeRCVR_e_VlvCmd_Reset_to_Default		((TeRCVR_e_VlvCmd_IO_CntrlSt)1U)
#define CeRCVR_e_VlvCmd_Short_Term_Adjustment		((TeRCVR_e_VlvCmd_IO_CntrlSt)3U)
#endif

/*
* Enum TeRCVR_e_EXV_Routine_Sts 
* Default Value:CeRCVR_e_EXV_Routine_In_Progress 
*/
#ifndef TeRCVR_e_EXV_Routine_Sts
typedef uint8 TeRCVR_e_EXV_Routine_Sts;
#define CeRCVR_e_EXV_Routine_Passed		((TeRCVR_e_EXV_Routine_Sts)0U)
#define CeRCVR_e_EXV_Routine_Failed		((TeRCVR_e_EXV_Routine_Sts)1U)
#define CeRCVR_e_EXV_Routine_In_Progress		((TeRCVR_e_EXV_Routine_Sts)2U)
#endif

/*
* Enum TeRCVR_e_FCV_States 
* Default Value:CeRCVR_e_FCV_States_Sleep 
*/
#ifndef TeRCVR_e_FCV_States
typedef uint8 TeRCVR_e_FCV_States;
#define CeRCVR_e_FCV_States_Sleep		((TeRCVR_e_FCV_States)0U)
#define CeRCVR_e_FCV_States_Normal		((TeRCVR_e_FCV_States)1U)
#define CeRCVR_e_FCV_States_Error		((TeRCVR_e_FCV_States)2U)
#define CeRCVR_e_FCV_States_Calibration		((TeRCVR_e_FCV_States)3U)
#endif

/*
* Enum TeRCVR_e_FCV_Calibration_Req 
* Default Value:CeRCVR_e_FCV_Allow_Normal_Operation 
*/
#ifndef TeRCVR_e_FCV_Calibration_Req
typedef uint8 TeRCVR_e_FCV_Calibration_Req;
#define CeRCVR_e_FCV_Allow_Normal_Operation		((TeRCVR_e_FCV_Calibration_Req)0U)
#define CeRCVR_e_FCV_Inhibit_Self_Calibration		((TeRCVR_e_FCV_Calibration_Req)1U)
#define CeRCVR_e_FCV_Force_Clear_Errors		((TeRCVR_e_FCV_Calibration_Req)2U)
#define CeRCVR_e_FCV_Force_Self_Calibration		((TeRCVR_e_FCV_Calibration_Req)3U)
#define CeRCVR_e_FCV_Force_Reset		((TeRCVR_e_FCV_Calibration_Req)4U)
#define CeRCVR_e_FCV_1Point_Init_Close		((TeRCVR_e_FCV_Calibration_Req)5U)
#define CeRCVR_e_FCV_1Point_Init_Open		((TeRCVR_e_FCV_Calibration_Req)6U)
#endif

/*
* Enum TeRCVR_e_FCV_Block_Det_Enbl 
* Default Value:CeRCVR_e_FCV_False 
*/
#ifndef TeRCVR_e_FCV_Block_Det_Enbl
typedef uint8 TeRCVR_e_FCV_Block_Det_Enbl;
#define CeRCVR_e_FCV_False		((TeRCVR_e_FCV_Block_Det_Enbl)0U)
#define CeRCVR_e_FCV_True		((TeRCVR_e_FCV_Block_Det_Enbl)1U)
#define CeRCVR_e_FCV_Invalid		((TeRCVR_e_FCV_Block_Det_Enbl)2U)
#endif

/*
* Enum TeRCVR_e_Valve_Stuck_Status 
* Default Value:CeRCVR_e_Closed 
*/
#ifndef TeRCVR_e_Valve_Stuck_Status
typedef uint8 TeRCVR_e_Valve_Stuck_Status;
#define CeRCVR_e_Closed		((TeRCVR_e_Valve_Stuck_Status)0U)
#define CeRCVR_e_Open		((TeRCVR_e_Valve_Stuck_Status)1U)
#define CeRCVR_e_Faulty_Closed		((TeRCVR_e_Valve_Stuck_Status)2U)
#define CeRCVR_e_Faulty_Open		((TeRCVR_e_Valve_Stuck_Status)3U)
#define CeRCVR_e_Faulty_Open_Bypass		((TeRCVR_e_Valve_Stuck_Status)4U)
#define CeRCVR_e_SNA		((TeRCVR_e_Valve_Stuck_Status)5U)
#endif

/*
* Enum TeRTMR_e_BattRapidChrgEnable 
* Default Value:CeRTMR_e_BattRapidChrgDisable 
*/
#ifndef TeRTMR_e_BattRapidChrgEnable
typedef uint8 TeRTMR_e_BattRapidChrgEnable;
#define CeRTMR_e_BattRapidChrgDisable		((TeRTMR_e_BattRapidChrgEnable)0U)
#define CeRTMR_e_BattRapidChrgEnable		((TeRTMR_e_BattRapidChrgEnable)1U)
#endif

/*
* Enum TeRTMR_e_RollTestStatus 
* Default Value:CeRTMR_e_TestSt_Enabled 
*/
#ifndef TeRTMR_e_RollTestStatus
typedef uint8 TeRTMR_e_RollTestStatus;
#define CeRTMR_e_TestSt_Enabled		((TeRTMR_e_RollTestStatus)2U)
#define CeRTMR_e_TestSt_InProgress		((TeRTMR_e_RollTestStatus)4U)
#define CeRTMR_e_TestSt_Aborted		((TeRTMR_e_RollTestStatus)8U)
#define CeRTMR_e_TestSt_TimeOut		((TeRTMR_e_RollTestStatus)16U)
#define CeRTMR_e_TestSt_Complete		((TeRTMR_e_RollTestStatus)32U)
#endif

/*
* Enum TeRTMR_e_BattChrgCmnd 
* Default Value:CeRTMR_e_BattChrgCmnd_Terminate 
*/
#ifndef TeRTMR_e_BattChrgCmnd
typedef uint8 TeRTMR_e_BattChrgCmnd;
#define CeRTMR_e_BattChrgCmnd_Terminate		((TeRTMR_e_BattChrgCmnd)0U)
#define CeRTMR_e_BattChrgCmnd_Start		((TeRTMR_e_BattChrgCmnd)1U)
#define CeRTMR_e_BattChrgCmnd_StandBy		((TeRTMR_e_BattChrgCmnd)2U)
#define CeRTMR_e_BattChrgCmnd_Resume		((TeRTMR_e_BattChrgCmnd)3U)
#endif

/*
* Enum TeRTMR_e_BattChrgStatus 
* Default Value:CeRTMR_e_BattChrgStatus_NotStarted 
*/
#ifndef TeRTMR_e_BattChrgStatus
typedef uint8 TeRTMR_e_BattChrgStatus;
#define CeRTMR_e_BattChrgStatus_NotStarted		((TeRTMR_e_BattChrgStatus)0U)
#define CeRTMR_e_BattChrgStatus_InProgress		((TeRTMR_e_BattChrgStatus)1U)
#define CeRTMR_e_BattChrgStatus_StandBy		((TeRTMR_e_BattChrgStatus)2U)
#define CeRTMR_e_BattChrgStatus_Aborted		((TeRTMR_e_BattChrgStatus)3U)
#define CeRTMR_e_BattChrgStatus_Complete		((TeRTMR_e_BattChrgStatus)4U)
#define CeRTMR_e_BattChrgStatus_Terminated		((TeRTMR_e_BattChrgStatus)5U)
#endif

/*
* Enum TeRTMR_e_ClutchLrnStatus 
* Default Value:CeRTMR_e_ClutchLrn_Inactive 
*/
#ifndef TeRTMR_e_ClutchLrnStatus
typedef uint8 TeRTMR_e_ClutchLrnStatus;
#define CeRTMR_e_ClutchLrn_Inactive		((TeRTMR_e_ClutchLrnStatus)0U)
#define CeRTMR_e_ClutchLrn_Enabled		((TeRTMR_e_ClutchLrnStatus)2U)
#define CeRTMR_e_ClutchLrn_InProgress		((TeRTMR_e_ClutchLrnStatus)4U)
#define CeRTMR_e_ClutchLrn_Aborted		((TeRTMR_e_ClutchLrnStatus)8U)
#define CeRTMR_e_ClutchLrn_TimeOut		((TeRTMR_e_ClutchLrnStatus)16U)
#define CeRTMR_e_ClutchLrn_Complete		((TeRTMR_e_ClutchLrnStatus)32U)
#endif

/*
* Enum TeRTMR_e_ClutchLrnType 
* Default Value:CeRTMR_e_Clutch_NoLrn 
*/
#ifndef TeRTMR_e_ClutchLrnType
typedef uint8 TeRTMR_e_ClutchLrnType;
#define CeRTMR_e_Clutch_NoLrn		((TeRTMR_e_ClutchLrnType)0U)
#define CeRTMR_e_Clutch_EOL		((TeRTMR_e_ClutchLrnType)1U)
#define CeRTMR_e_Clutch_SerAE		((TeRTMR_e_ClutchLrnType)2U)
#define CeRTMR_e_Clutch_SerK0		((TeRTMR_e_ClutchLrnType)3U)
#define CeRTMR_e_Clutch_SerILE		((TeRTMR_e_ClutchLrnType)4U)
#endif

/*
* Enum TeRTMR_e_GPFRegenSts 
* Default Value:CeRTMR_e_GPFRegenSts_Stopped 
*/
#ifndef TeRTMR_e_GPFRegenSts
typedef uint8 TeRTMR_e_GPFRegenSts;
#define CeRTMR_e_GPFRegenSts_Stopped		((TeRTMR_e_GPFRegenSts)0U)
#define CeRTMR_e_GPFRegenSts_Start		((TeRTMR_e_GPFRegenSts)1U)
#define CeRTMR_e_GPFRegenSts_Aborted		((TeRTMR_e_GPFRegenSts)2U)
#endif

/*
* Enum TeRTMR_e_ROLRoutineResults 
* Default Value:CeRTMR_e_ROLNotActive 
*/
#ifndef TeRTMR_e_ROLRoutineResults
typedef uint8 TeRTMR_e_ROLRoutineResults;
#define CeRTMR_e_ROLNotActive		((TeRTMR_e_ROLRoutineResults)0U)
#define CeRTMR_e_InProgress		((TeRTMR_e_ROLRoutineResults)1U)
#define CeRTMR_e_Failed		((TeRTMR_e_ROLRoutineResults)2U)
#define CeRTMR_e_Passed		((TeRTMR_e_ROLRoutineResults)3U)
#endif

/*
* Enum TeRTMR_e_ROLStatus 
* Default Value:CeRTMR_e_ROLStatus_Inactive 
*/
#ifndef TeRTMR_e_ROLStatus
typedef uint8 TeRTMR_e_ROLStatus;
#define CeRTMR_e_ROLStatus_Inactive		((TeRTMR_e_ROLStatus)0U)
#define CeRTMR_e_ROLStatus_Requested		((TeRTMR_e_ROLStatus)1U)
#define CeRTMR_e_ROLStatus_StartEng		((TeRTMR_e_ROLStatus)2U)
#define CeRTMR_e_ROLStatus_StopEng		((TeRTMR_e_ROLStatus)3U)
#define CeRTMR_e_ROLStatus_DsblMtr_OITR		((TeRTMR_e_ROLStatus)4U)
#define CeRTMR_e_ROLStatus_DsblEngCL		((TeRTMR_e_ROLStatus)5U)
#define CeRTMR_e_ROLStatus_DsblMtrB		((TeRTMR_e_ROLStatus)6U)
#define CeRTMR_e_ROLStatus_DsblMtr		((TeRTMR_e_ROLStatus)7U)
#define CeRTMR_e_ROLStatus_ROLInProg		((TeRTMR_e_ROLStatus)8U)
#define CeRTMR_e_ROLStatus_CompletebyMCP		((TeRTMR_e_ROLStatus)9U)
#define CeRTMR_e_ROLStatus_Complete		((TeRTMR_e_ROLStatus)10U)
#define CeRTMR_e_ROLStatus_Aborted		((TeRTMR_e_ROLStatus)11U)
#endif

/*
* Enum TeRTMR_e_WEDLearningProcedure 
* Default Value:CeRTMR_e_WED_Not_Active 
*/
#ifndef TeRTMR_e_WEDLearningProcedure
typedef uint8 TeRTMR_e_WEDLearningProcedure;
#define CeRTMR_e_WED_Not_Active		((TeRTMR_e_WEDLearningProcedure)0U)
#define CeRTMR_e_WED_Active		((TeRTMR_e_WEDLearningProcedure)1U)
#define CeRTMR_e_WED_Complete		((TeRTMR_e_WEDLearningProcedure)2U)
#define CeRTMR_e_WED_Fail		((TeRTMR_e_WEDLearningProcedure)3U)
#endif

/*
* Enum TeRTMR_e_WEDToothAbutResults 
* Default Value:CeRTMR_e_WED_Passed 
*/
#ifndef TeRTMR_e_WEDToothAbutResults
typedef uint8 TeRTMR_e_WEDToothAbutResults;
#define CeRTMR_e_WED_Passed		((TeRTMR_e_WEDToothAbutResults)0U)
#define CeRTMR_e_WED_Failed		((TeRTMR_e_WEDToothAbutResults)1U)
#define CeRTMR_e_WED_InProgress		((TeRTMR_e_WEDToothAbutResults)2U)
#endif

/*
* Enum TeSCOR_e_OptRng_SG 
* Default Value:CeSCOR_e_SG_Neutral 
*/
#ifndef TeSCOR_e_OptRng_SG
typedef uint8 TeSCOR_e_OptRng_SG;
#define CeSCOR_e_SG_Neutral		((TeSCOR_e_OptRng_SG)0U)
#define CeSCOR_e_SG_ModeA		((TeSCOR_e_OptRng_SG)1U)
#define CeSCOR_e_SG_ModeB		((TeSCOR_e_OptRng_SG)2U)
#define CeSCOR_e_SG_Gear		((TeSCOR_e_OptRng_SG)3U)
#define CeSCOR_e_SG_EngOff		((TeSCOR_e_OptRng_SG)4U)
#define CeSCOR_e_SG_Neutral_EngOff		((TeSCOR_e_OptRng_SG)5U)
#endif

/*
* Enum TeSCOR_e_OptGear_SG 
* Default Value:CeSCOR_e_SG_1 
*/
#ifndef TeSCOR_e_OptGear_SG
typedef uint8 TeSCOR_e_OptGear_SG;
#define CeSCOR_e_SG_Reverse		((TeSCOR_e_OptGear_SG)1U)
#define CeSCOR_e_SG_1		((TeSCOR_e_OptGear_SG)2U)
#define CeSCOR_e_SG_2		((TeSCOR_e_OptGear_SG)3U)
#define CeSCOR_e_SG_3		((TeSCOR_e_OptGear_SG)4U)
#define CeSCOR_e_SG_4		((TeSCOR_e_OptGear_SG)5U)
#define CeSCOR_e_SG_5		((TeSCOR_e_OptGear_SG)6U)
#define CeSCOR_e_SG_6		((TeSCOR_e_OptGear_SG)7U)
#define CeSCOR_e_SG_7		((TeSCOR_e_OptGear_SG)8U)
#define CeSCOR_e_SG_8		((TeSCOR_e_OptGear_SG)9U)
#endif

/*
* Enum TeSCOR_e_ChrgStDrvMdStrat 
* Default Value:CeSCOR_e_CSStrat 
*/
#ifndef TeSCOR_e_ChrgStDrvMdStrat
typedef uint8 TeSCOR_e_ChrgStDrvMdStrat;
#define CeSCOR_e_CSStrat		((TeSCOR_e_ChrgStDrvMdStrat)1U)
#define CeSCOR_e_CDStrat		((TeSCOR_e_ChrgStDrvMdStrat)2U)
#define CeSCOR_e_EVNowStrat		((TeSCOR_e_ChrgStDrvMdStrat)3U)
#endif

/*
* Enum TeSCOR_e_StratNRGHystState 
* Default Value:CeSCOR_e_DisabledSt 
*/
#ifndef TeSCOR_e_StratNRGHystState
typedef uint8 TeSCOR_e_StratNRGHystState;
#define CeSCOR_e_DisabledSt		((TeSCOR_e_StratNRGHystState)0U)
#define CeSCOR_e_EnabledSt		((TeSCOR_e_StratNRGHystState)1U)
#endif

/*
* Enum TeSCPR_e_DayOfWeek 
* Default Value:CeSCPR_e_Day_NoDay 
*/
#ifndef TeSCPR_e_DayOfWeek
typedef uint8 TeSCPR_e_DayOfWeek;
#define CeSCPR_e_Day_Sunday		((TeSCPR_e_DayOfWeek)0U)
#define CeSCPR_e_Day_Monday		((TeSCPR_e_DayOfWeek)1U)
#define CeSCPR_e_Day_Tuesday		((TeSCPR_e_DayOfWeek)2U)
#define CeSCPR_e_Day_Wednesday		((TeSCPR_e_DayOfWeek)3U)
#define CeSCPR_e_Day_Thursday		((TeSCPR_e_DayOfWeek)4U)
#define CeSCPR_e_Day_Friday		((TeSCPR_e_DayOfWeek)5U)
#define CeSCPR_e_Day_Saturday		((TeSCPR_e_DayOfWeek)6U)
#define CeSCPR_e_Day_NoDay		((TeSCPR_e_DayOfWeek)15U)
#endif

/*
* Enum TeSCPR_e_NextSchDay 
* Default Value:CeSCPR_e_NextSchDay_NoSel 
*/
#ifndef TeSCPR_e_NextSchDay
typedef uint8 TeSCPR_e_NextSchDay;
#define CeSCPR_e_NextSchDay_NoSel		((TeSCPR_e_NextSchDay)0U)
#define CeSCPR_e_NextSchDay_Monday		((TeSCPR_e_NextSchDay)1U)
#define CeSCPR_e_NextSchDay_Tuesday		((TeSCPR_e_NextSchDay)2U)
#define CeSCPR_e_NextSchDay_Wednesday		((TeSCPR_e_NextSchDay)3U)
#define CeSCPR_e_NextSchDay_Thursday		((TeSCPR_e_NextSchDay)4U)
#define CeSCPR_e_NextSchDay_Friday		((TeSCPR_e_NextSchDay)5U)
#define CeSCPR_e_NextSchDay_Saturday		((TeSCPR_e_NextSchDay)6U)
#define CeSCPR_e_NextSchDay_Sunday		((TeSCPR_e_NextSchDay)7U)
#define CeSCPR_e_NextSchDay_NoSchSet		((TeSCPR_e_NextSchDay)9U)
#define CeSCPR_e_NextSchDay_SNA		((TeSCPR_e_NextSchDay)15U)
#endif

/*
* Enum TeSCPR_e_Intent 
* Default Value:CeSCPR_e_Default 
*/
#ifndef TeSCPR_e_Intent
typedef uint8 TeSCPR_e_Intent;
#define CeSCPR_e_Default		((TeSCPR_e_Intent)0U)
#define CeSCPR_e_ChargeNow		((TeSCPR_e_Intent)1U)
#define CeSCPR_e_FollowSchedule		((TeSCPR_e_Intent)2U)
#define CeSCPR_e_StopCharge		((TeSCPR_e_Intent)3U)
#define CeSCPR_e_ImmediateCharge		((TeSCPR_e_Intent)4U)
#endif

/*
* Enum TeSCPR_e_InitStatus 
* Default Value:CeSCPR_e_InitDefault 
*/
#ifndef TeSCPR_e_InitStatus
typedef uint8 TeSCPR_e_InitStatus;
#define CeSCPR_e_InitDefault		((TeSCPR_e_InitStatus)0U)
#define CeSCPR_e_InitInProg		((TeSCPR_e_InitStatus)1U)
#define CeSCPR_e_InitComplete		((TeSCPR_e_InitStatus)2U)
#endif

/*
* Enum TeSCPR_e_NxtChrg_SchedType 
* Default Value:CeSCPR_e_No_Selection 
*/
#ifndef TeSCPR_e_NxtChrg_SchedType
typedef uint8 TeSCPR_e_NxtChrg_SchedType;
#define CeSCPR_e_No_Selection		((TeSCPR_e_NxtChrg_SchedType)0U)
#define CeSCPR_e_Standard_Charge		((TeSCPR_e_NxtChrg_SchedType)1U)
#define CeSCPR_e_External_Charge		((TeSCPR_e_NxtChrg_SchedType)2U)
#define CeSCPR_e_Both		((TeSCPR_e_NxtChrg_SchedType)3U)
#endif

/*
* Enum TeSCPR_e_Coop_Status 
* Default Value:CeSCPR_e_DefaultSts 
*/
#ifndef TeSCPR_e_Coop_Status
typedef uint8 TeSCPR_e_Coop_Status;
#define CeSCPR_e_DefaultSts		((TeSCPR_e_Coop_Status)0U)
#define CeSCPR_e_Regular_Charging		((TeSCPR_e_Coop_Status)1U)
#define CeSCPR_e_External_Charging		((TeSCPR_e_Coop_Status)2U)
#define CeSCPR_e_ChargeNow_Override		((TeSCPR_e_Coop_Status)3U)
#define CeSCPR_e_Other_reason		((TeSCPR_e_Coop_Status)4U)
#endif

/*
* Enum TeSRAR_e_SysShtDwnTyp 
* Default Value:CeSRAR_e_NoFlt 
*/
#ifndef TeSRAR_e_SysShtDwnTyp
typedef uint8 TeSRAR_e_SysShtDwnTyp;
#define CeSRAR_e_NoFlt		((TeSRAR_e_SysShtDwnTyp)0U)
#define CeSRAR_e_RecSysShtDwn		((TeSRAR_e_SysShtDwnTyp)1U)
#define CeSRAR_e_RetSysShtDwn		((TeSRAR_e_SysShtDwnTyp)2U)
#define CeSRAR_e_NonRecSysShtDwn		((TeSRAR_e_SysShtDwnTyp)3U)
#endif

/*
* Enum TeSRAR_e_EngStrtType 
* Default Value:CeSRAR_e_NoStrt 
*/
#ifndef TeSRAR_e_EngStrtType
typedef uint8 TeSRAR_e_EngStrtType;
#define CeSRAR_e_NoStrt		((TeSRAR_e_EngStrtType)0U)
#define CeSRAR_e_AnyStrt		((TeSRAR_e_EngStrtType)1U)
#define CeSRAR_e_EngTrqStrt		((TeSRAR_e_EngStrtType)2U)
#define CeSRAR_e_HybTrqStrt		((TeSRAR_e_EngStrtType)3U)
#endif

/*
* Enum TeSRAR_e_TCMECMComFail_C1CAN 
* Default Value:CeSRAR_e_NoFaultHCPTCMECM_C1 
*/
#ifndef TeSRAR_e_TCMECMComFail_C1CAN
typedef uint8 TeSRAR_e_TCMECMComFail_C1CAN;
#define CeSRAR_e_NoFaultHCPTCMECM_C1		((TeSRAR_e_TCMECMComFail_C1CAN)0U)
#define CeSRAR_e_LoC_TCM_HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)1U)
#define CeSRAR_e_LoC_ECM_HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)2U)
#define CeSRAR_e_LoC_ECM_TCM_HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)3U)
#define CeSRAR_e_undefine4HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)4U)
#define CeSRAR_e_undefine5HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)5U)
#define CeSRAR_e_undefine6HCP_C1		((TeSRAR_e_TCMECMComFail_C1CAN)6U)
#define CeSRAR_e_BusFailHCP_C1CAN		((TeSRAR_e_TCMECMComFail_C1CAN)7U)
#endif

/*
* Enum TeSRAR_e_TCMECMComFail_ePTCAN 
* Default Value:CeSRAR_e_NoFaultHCPTCMECM_ePT 
*/
#ifndef TeSRAR_e_TCMECMComFail_ePTCAN
typedef uint8 TeSRAR_e_TCMECMComFail_ePTCAN;
#define CeSRAR_e_NoFaultHCPTCMECM_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)0U)
#define CeSRAR_e_LoC_TCM_HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)1U)
#define CeSRAR_e_LoC_ECM_HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)2U)
#define CeSRAR_e_LoC_ECM_TCM_HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)3U)
#define CeSRAR_e_undefine4HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)4U)
#define CeSRAR_e_undefine5HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)5U)
#define CeSRAR_e_undefine6HCP_ePT		((TeSRAR_e_TCMECMComFail_ePTCAN)6U)
#define CeSRAR_e_BusFailHCP_ePTCAN		((TeSRAR_e_TCMECMComFail_ePTCAN)7U)
#endif

/*
* Enum TeSRAR_e_BPCMComFail_ePTCAN 
* Default Value:CeSRAR_e_NoFaultHCPBPCM_ePT 
*/
#ifndef TeSRAR_e_BPCMComFail_ePTCAN
typedef uint8 TeSRAR_e_BPCMComFail_ePTCAN;
#define CeSRAR_e_NoFaultHCPBPCM_ePT		((TeSRAR_e_BPCMComFail_ePTCAN)0U)
#define CeSRAR_e_LoC_BPCM_HCP_ePT		((TeSRAR_e_BPCMComFail_ePTCAN)1U)
#define CeSRAR_e_undefine2HCP_ePT		((TeSRAR_e_BPCMComFail_ePTCAN)2U)
#define CeSRAR_e_BusFailHCPBPCM_ePTCAN		((TeSRAR_e_BPCMComFail_ePTCAN)3U)
#endif

/*
* Enum TeSRAR_e_BSMComFail_C1CAN 
* Default Value:CeSRAR_e_NoFaultHCPBSM_C1 
*/
#ifndef TeSRAR_e_BSMComFail_C1CAN
typedef uint8 TeSRAR_e_BSMComFail_C1CAN;
#define CeSRAR_e_NoFaultHCPBSM_C1		((TeSRAR_e_BSMComFail_C1CAN)0U)
#define CeSRAR_e_LoC_BSM_HCP_C1		((TeSRAR_e_BSMComFail_C1CAN)1U)
#define CeSRAR_e_undefine2HCP_C1		((TeSRAR_e_BSMComFail_C1CAN)2U)
#define CeSRAR_e_BusFailHCPBSM_C1CAN		((TeSRAR_e_BSMComFail_C1CAN)3U)
#endif

/*
* Enum TeSRAR_e_BSMComFail_C2CAN 
* Default Value:CeSRAR_e_NoFaultHCPBSM_C2 
*/
#ifndef TeSRAR_e_BSMComFail_C2CAN
typedef uint8 TeSRAR_e_BSMComFail_C2CAN;
#define CeSRAR_e_NoFaultHCPBSM_C2		((TeSRAR_e_BSMComFail_C2CAN)0U)
#define CeSRAR_e_LoC_BSM_HCP_C2		((TeSRAR_e_BSMComFail_C2CAN)1U)
#define CeSRAR_e_undefine2HCP_C2		((TeSRAR_e_BSMComFail_C2CAN)2U)
#define CeSRAR_e_BusFailHCP_C2CAN		((TeSRAR_e_BSMComFail_C2CAN)3U)
#endif

/*
* Enum TeSRAR_e_CommFail 
* Default Value:CeSRAR_e_CommFail_NoFault 
*/
#ifndef TeSRAR_e_CommFail
typedef uint8 TeSRAR_e_CommFail;
#define CeSRAR_e_CommFail_NoFault		((TeSRAR_e_CommFail)0U)
#define CeSRAR_e_undefinedLoC		((TeSRAR_e_CommFail)1U)
#define CeSRAR_e_LOC_VDCM		((TeSRAR_e_CommFail)2U)
#define CeSRAR_e_Bus_Failure_CAN		((TeSRAR_e_CommFail)3U)
#endif

/*
* Enum TeSRMR_e_AHH_ApplyReleaseReq 
* Default Value:CeSRMR_e_AHH_Inactive 
*/
#ifndef TeSRMR_e_AHH_ApplyReleaseReq
typedef uint8 TeSRMR_e_AHH_ApplyReleaseReq;
#define CeSRMR_e_AHH_Inactive		((TeSRMR_e_AHH_ApplyReleaseReq)0U)
#define CeSRMR_e_AHH_Apply		((TeSRMR_e_AHH_ApplyReleaseReq)1U)
#define CeSRMR_e_AHH_Blended_Release		((TeSRMR_e_AHH_ApplyReleaseReq)2U)
#define CeSRMR_e_AHH_ReqNotDefined		((TeSRMR_e_AHH_ApplyReleaseReq)3U)
#define CeSRMR_e_AHH_Fast_Release		((TeSRMR_e_AHH_ApplyReleaseReq)4U)
#define CeSRMR_e_AHH_EPB_Apply		((TeSRMR_e_AHH_ApplyReleaseReq)5U)
#define CeSRMR_e_AHH_Hydrl_Apply		((TeSRMR_e_AHH_ApplyReleaseReq)6U)
#define CeSRMR_e_AHH_SNA		((TeSRMR_e_AHH_ApplyReleaseReq)7U)
#endif

/*
* Enum TeSRMR_e_HVBatCntctrStat 
* Default Value:CeSRMR_e_Cntctr_Opn 
*/
#ifndef TeSRMR_e_HVBatCntctrStat
typedef uint8 TeSRMR_e_HVBatCntctrStat;
#define CeSRMR_e_Cntctr_Opn		((TeSRMR_e_HVBatCntctrStat)0U)
#define CeSRMR_e_PreChrg		((TeSRMR_e_HVBatCntctrStat)1U)
#define CeSRMR_e_Closed		((TeSRMR_e_HVBatCntctrStat)2U)
#define CeSRMR_e_Prechrg_Fld		((TeSRMR_e_HVBatCntctrStat)3U)
#define CeSRMR_e_PreChrg_Inhibit		((TeSRMR_e_HVBatCntctrStat)4U)
#define CeSRMR_e_Cntctr_SNA		((TeSRMR_e_HVBatCntctrStat)7U)
#endif

/*
* Enum TeSRMR_e_EngCntrlMode 
* Default Value:CeSRMR_e_TorqueMode 
*/
#ifndef TeSRMR_e_EngCntrlMode
typedef uint8 TeSRMR_e_EngCntrlMode;
#define CeSRMR_e_TorqueMode		((TeSRMR_e_EngCntrlMode)0U)
#define CeSRMR_e_SpeedMode		((TeSRMR_e_EngCntrlMode)1U)
#endif

/*
* Enum TeSRMR_e_HybCmndEngTorqRespTyp 
* Default Value:CeSRMR_e_Inactive 
*/
#ifndef TeSRMR_e_HybCmndEngTorqRespTyp
typedef uint8 TeSRMR_e_HybCmndEngTorqRespTyp;
#define CeSRMR_e_Inactive		((TeSRMR_e_HybCmndEngTorqRespTyp)0U)
#define CeSRMR_e_Pleasability_Limited		((TeSRMR_e_HybCmndEngTorqRespTyp)1U)
#define CeSRMR_e_Maximum_Range		((TeSRMR_e_HybCmndEngTorqRespTyp)2U)
#define CeSRMR_e_Automatic		((TeSRMR_e_HybCmndEngTorqRespTyp)3U)
#endif

/*
* Enum TeSRMR_e_Limit_ChartMode 
* Default Value:CeSRMR_e_None 
*/
#ifndef TeSRMR_e_Limit_ChartMode
typedef uint8 TeSRMR_e_Limit_ChartMode;
#define CeSRMR_e_Over_limit		((TeSRMR_e_Limit_ChartMode)1U)
#define CeSRMR_e_None		((TeSRMR_e_Limit_ChartMode)0U)
#define CeSRMR_e_Under_Limit		((TeSRMR_e_Limit_ChartMode)2U)
#endif

/*
* Enum TeSRMR_e_SwitchMd 
* Default Value:CeSRMR_e_DsblNoSwitch 
*/
#ifndef TeSRMR_e_SwitchMd
typedef uint8 TeSRMR_e_SwitchMd;
#define CeSRMR_e_DsblNoSwitch		((TeSRMR_e_SwitchMd)0U)
#define CeSRMR_e_TorqCntrl		((TeSRMR_e_SwitchMd)1U)
#define CeSRMR_e_SpeedCntrl		((TeSRMR_e_SwitchMd)2U)
#define CeSRMR_e_ActvDischarge		((TeSRMR_e_SwitchMd)3U)
#define CeSRMR_e_DsblImmd		((TeSRMR_e_SwitchMd)4U)
#define CeSRMR_e_RapidShtdwnComnd		((TeSRMR_e_SwitchMd)6U)
#define CeSRMR_e_ActiveShortCircuit		((TeSRMR_e_SwitchMd)9U)
#endif

/*
* Enum TeSRMR_e_TransRangeState 
* Default Value:CeSRMR_e_NoSelectionAvailable 
*/
#ifndef TeSRMR_e_TransRangeState
typedef uint8 TeSRMR_e_TransRangeState;
#define CeSRMR_e_NoSelectionAvailable		((TeSRMR_e_TransRangeState)0U)
#define CeSRMR_e_TransRangePark		((TeSRMR_e_TransRangeState)1U)
#define CeSRMR_e_TransRangeReverse		((TeSRMR_e_TransRangeState)2U)
#define CeSRMR_e_TransRangeNeutral		((TeSRMR_e_TransRangeState)3U)
#define CeSRMR_e_TransRangeDrive		((TeSRMR_e_TransRangeState)4U)
#define CeSRMR_e_TransRangeDrive1		((TeSRMR_e_TransRangeState)5U)
#define CeSRMR_e_TransRangeDrive2		((TeSRMR_e_TransRangeState)6U)
#define CeSRMR_e_TransRangeDrive3		((TeSRMR_e_TransRangeState)7U)
#define CeSRMR_e_TransRangeDrive4		((TeSRMR_e_TransRangeState)8U)
#define CeSRMR_e_TransRangeDrive5		((TeSRMR_e_TransRangeState)9U)
#define CeSRMR_e_TransRangeDrive6		((TeSRMR_e_TransRangeState)10U)
#define CeSRMR_e_TransRangeDrive7		((TeSRMR_e_TransRangeState)11U)
#define CeSRMR_e_TransRangeDrive8		((TeSRMR_e_TransRangeState)12U)
#define CeSRMR_e_TransRangeDrive9		((TeSRMR_e_TransRangeState)13U)
#define CeSRMR_e_TransRangeDrive10		((TeSRMR_e_TransRangeState)14U)
#define CeSRMR_e_TransRangeDrive11		((TeSRMR_e_TransRangeState)15U)
#define CeSRMR_e_TransRangeDrive12		((TeSRMR_e_TransRangeState)16U)
#define CeSRMR_e_ParkToReverse		((TeSRMR_e_TransRangeState)17U)
#define CeSRMR_e_ParkToNeutral		((TeSRMR_e_TransRangeState)18U)
#define CeSRMR_e_ParkToDrive		((TeSRMR_e_TransRangeState)19U)
#define CeSRMR_e_ReverseToPark		((TeSRMR_e_TransRangeState)20U)
#define CeSRMR_e_ReverseToNeutral		((TeSRMR_e_TransRangeState)21U)
#define CeSRMR_e_ReverseToDrive		((TeSRMR_e_TransRangeState)22U)
#define CeSRMR_e_NeutralToPark		((TeSRMR_e_TransRangeState)23U)
#define CeSRMR_e_NeutralToReverse		((TeSRMR_e_TransRangeState)24U)
#define CeSRMR_e_NeutralToDrive		((TeSRMR_e_TransRangeState)25U)
#define CeSRMR_e_DriveToPark		((TeSRMR_e_TransRangeState)26U)
#define CeSRMR_e_DriveToReverse		((TeSRMR_e_TransRangeState)27U)
#define CeSRMR_e_DriveToNeutral		((TeSRMR_e_TransRangeState)28U)
#define CeSRMR_e_TransRangeIllegal		((TeSRMR_e_TransRangeState)29U)
#endif

/*
* Enum TeSRMR_e_EPBReq 
* Default Value:CeSRMR_e_EPBReq_NA 
*/
#ifndef TeSRMR_e_EPBReq
typedef uint8 TeSRMR_e_EPBReq;
#define CeSRMR_e_EPBReq_NA		((TeSRMR_e_EPBReq)0U)
#define CeSRMR_e_EPBReq_ACTIVE		((TeSRMR_e_EPBReq)1U)
#define CeSRMR_e_EPBReq_SNA		((TeSRMR_e_EPBReq)3U)
#endif

/*
* Enum TeSRMR_e_PRND_STAT 
* Default Value:CeSRMR_e_LVR_P 
*/
#ifndef TeSRMR_e_PRND_STAT
typedef uint8 TeSRMR_e_PRND_STAT;
#define CeSRMR_e_LVR_P		((TeSRMR_e_PRND_STAT)0U)
#define CeSRMR_e_LVR_R		((TeSRMR_e_PRND_STAT)1U)
#define CeSRMR_e_LVR_N		((TeSRMR_e_PRND_STAT)2U)
#define CeSRMR_e_LVR_D		((TeSRMR_e_PRND_STAT)4U)
#define CeSRMR_e_NOT_R		((TeSRMR_e_PRND_STAT)5U)
#define CeSRMR_e_PRND_SNA		((TeSRMR_e_PRND_STAT)7U)
#endif

/*
* Enum TeSRMR_e_ShifterPOS 
* Default Value:CeSRMR_e_ShifterPosNoSelection 
*/
#ifndef TeSRMR_e_ShifterPOS
typedef uint8 TeSRMR_e_ShifterPOS;
#define CeSRMR_e_ShifterPosNoSelection		((TeSRMR_e_ShifterPOS)0U)
#define CeSRMR_e_ShifterPosBlank		((TeSRMR_e_ShifterPOS)32U)
#define CeSRMR_e_ShifterPosPark		((TeSRMR_e_ShifterPOS)80U)
#define CeSRMR_e_ShifterPosReverse		((TeSRMR_e_ShifterPOS)82U)
#define CeSRMR_e_ShifterPosNeutral		((TeSRMR_e_ShifterPOS)78U)
#define CeSRMR_e_ShifterPosDrive		((TeSRMR_e_ShifterPOS)68U)
#define CeSRMR_e_ShifterPosL		((TeSRMR_e_ShifterPOS)76U)
#define CeSRMR_e_ShifterPosD2		((TeSRMR_e_ShifterPOS)130U)
#define CeSRMR_e_ShifterPosD3		((TeSRMR_e_ShifterPOS)131U)
#define CeSRMR_e_ShifterPosD4		((TeSRMR_e_ShifterPOS)132U)
#define CeSRMR_e_ShifterPosD5		((TeSRMR_e_ShifterPOS)133U)
#define CeSRMR_e_ShifterPosONE		((TeSRMR_e_ShifterPOS)49U)
#define CeSRMR_e_ShifterPosTWO		((TeSRMR_e_ShifterPOS)50U)
#define CeSRMR_e_ShifterPosTHREE		((TeSRMR_e_ShifterPOS)51U)
#define CeSRMR_e_ShifterPosFOUR		((TeSRMR_e_ShifterPOS)52U)
#define CeSRMR_e_ShifterPosFIVE		((TeSRMR_e_ShifterPOS)53U)
#define CeSRMR_e_ShifterPosSIX		((TeSRMR_e_ShifterPOS)54U)
#define CeSRMR_e_ShifterPosSEVEN		((TeSRMR_e_ShifterPOS)55U)
#define CeSRMR_e_ShifterPosEIGHT		((TeSRMR_e_ShifterPOS)56U)
#define CeSRMR_e_ShifterPosNINE		((TeSRMR_e_ShifterPOS)57U)
#define CeSRMR_e_ShifterPosA		((TeSRMR_e_ShifterPOS)65U)
#define CeSRMR_e_ShifterPosD		((TeSRMR_e_ShifterPOS)68U)
#define CeSRMR_e_ShifterPosF		((TeSRMR_e_ShifterPOS)70U)
#define CeSRMR_e_ShifterPosM		((TeSRMR_e_ShifterPOS)77U)
#define CeSRMR_e_ShifterPosN		((TeSRMR_e_ShifterPOS)78U)
#define CeSRMR_e_ShifterPosS		((TeSRMR_e_ShifterPOS)83U)
#define CeSRMR_e_ShifterPosDS		((TeSRMR_e_ShifterPOS)128U)
#define CeSRMR_e_ShifterPosSNOW		((TeSRMR_e_ShifterPOS)135U)
#define CeSRMR_e_ShifterPosNOT_N		((TeSRMR_e_ShifterPOS)254U)
#define CeSRMR_e_ShifterPosSNA		((TeSRMR_e_ShifterPOS)255U)
#endif

/*
* Enum TeSRMR_e_ShiftRngSt 
* Default Value:CeSRMR_e_Btwn_Rng 
*/
#ifndef TeSRMR_e_ShiftRngSt
typedef uint8 TeSRMR_e_ShiftRngSt;
#define CeSRMR_e_Btwn_Rng		((TeSRMR_e_ShiftRngSt)0U)
#define CeSRMR_e_RngSt_Park		((TeSRMR_e_ShiftRngSt)1U)
#define CeSRMR_e_RngSt_Rev		((TeSRMR_e_ShiftRngSt)2U)
#define CeSRMR_e_RngSt_Neut		((TeSRMR_e_ShiftRngSt)3U)
#define CeSRMR_e_RngSt_Drive		((TeSRMR_e_ShiftRngSt)4U)
#define CeSRMR_e_RngSt_One		((TeSRMR_e_ShiftRngSt)5U)
#define CeSRMR_e_RngSt_Two		((TeSRMR_e_ShiftRngSt)6U)
#define CeSRMR_e_RngSt_Three		((TeSRMR_e_ShiftRngSt)7U)
#define CeSRMR_e_RngSt_Four		((TeSRMR_e_ShiftRngSt)8U)
#define CeSRMR_e_RngSt_Five		((TeSRMR_e_ShiftRngSt)9U)
#define CeSRMR_e_RngSt_Six		((TeSRMR_e_ShiftRngSt)10U)
#define CeSRMR_e_RngSt_SNA		((TeSRMR_e_ShiftRngSt)15U)
#endif

/*
* Enum TeSRMR_e_LimitationMd 
* Default Value:CeSRMR_e_NoLimitation 
*/
#ifndef TeSRMR_e_LimitationMd
typedef uint8 TeSRMR_e_LimitationMd;
#define CeSRMR_e_NoLimitation		((TeSRMR_e_LimitationMd)0U)
#define CeSRMR_e_SoftLimitation		((TeSRMR_e_LimitationMd)1U)
#define CeSRMR_e_MedLimitation		((TeSRMR_e_LimitationMd)2U)
#define CeSRMR_e_HardLimitation		((TeSRMR_e_LimitationMd)3U)
#define CeSRMR_e_UltraHardLimitation		((TeSRMR_e_LimitationMd)4U)
#define CeSRMR_e_StopLimitation		((TeSRMR_e_LimitationMd)5U)
#define CeSRMR_e_KeyOffLimitation		((TeSRMR_e_LimitationMd)6U)
#endif

/*
* Enum TeSSDR_e_KeySts 
* Default Value:CeSSDR_e_KeyOff 
*/
#ifndef TeSSDR_e_KeySts
typedef uint8 TeSSDR_e_KeySts;
#define CeSSDR_e_KeyOff		((TeSSDR_e_KeySts)0U)
#define CeSSDR_e_KeyAccy		((TeSSDR_e_KeySts)1U)
#define CeSSDR_e_KeyPostRunAccy		((TeSSDR_e_KeySts)2U)
#define CeSSDR_e_KeyRun		((TeSSDR_e_KeySts)3U)
#define CeSSDR_e_KeyCrank		((TeSSDR_e_KeySts)4U)
#define CeSSDR_e_KeyPostCrnk		((TeSSDR_e_KeySts)5U)
#endif

/*
* Enum TeSSDR_e_HVBattChrgStat 
* Default Value:CeSSDR_e_NotPlgdIn 
*/
#ifndef TeSSDR_e_HVBattChrgStat
typedef uint8 TeSSDR_e_HVBattChrgStat;
#define CeSSDR_e_NotPlgdIn		((TeSSDR_e_HVBattChrgStat)0U)
#define CeSSDR_e_PlgIn_NOOP		((TeSSDR_e_HVBattChrgStat)1U)
#define CeSSDR_e_PlgIn_NoChrgReq		((TeSSDR_e_HVBattChrgStat)2U)
#define CeSSDR_e_PlgIn_HVBattChrg		((TeSSDR_e_HVBattChrgStat)3U)
#endif

/*
* Enum TeSSDR_e_InvOprStat 
* Default Value:CeSSDR_e_NoPlgIn_Tools 
*/
#ifndef TeSSDR_e_InvOprStat
typedef uint8 TeSSDR_e_InvOprStat;
#define CeSSDR_e_NoPlgIn_Tools		((TeSSDR_e_InvOprStat)0U)
#define CeSSDR_e_PlgIn_NoOpr		((TeSSDR_e_InvOprStat)1U)
#define CeSSDR_e_PlgIn_InvOpr_Tools		((TeSSDR_e_InvOprStat)2U)
#endif

/*
* Enum TeSSDR_e_V2GOprStat 
* Default Value:CeSSDR_e_NoPlgIn 
*/
#ifndef TeSSDR_e_V2GOprStat
typedef uint8 TeSSDR_e_V2GOprStat;
#define CeSSDR_e_NoPlgIn		((TeSSDR_e_V2GOprStat)0U)
#define CeSSDR_e_PlgIn_NOOP_V2G		((TeSSDR_e_V2GOprStat)1U)
#define CeSSDR_e_PlgIn_V2GOpr		((TeSSDR_e_V2GOprStat)2U)
#endif

/*
* Enum TeSSMR_e_MtrInvrtrSt 
* Default Value:CeSSMR_e_NormalPowerStageOff 
*/
#ifndef TeSSMR_e_MtrInvrtrSt
typedef uint8 TeSSMR_e_MtrInvrtrSt;
#define CeSSMR_e_NormalPowerStageOff		((TeSSMR_e_MtrInvrtrSt)0U)
#define CeSSMR_e_NormalPowerStageOn		((TeSSMR_e_MtrInvrtrSt)1U)
#define CeSSMR_e_NormalPowerStageOnOvrd		((TeSSMR_e_MtrInvrtrSt)2U)
#define CeSSMR_e_ActiveDischarge		((TeSSMR_e_MtrInvrtrSt)3U)
#define CeSSMR_e_InverterFaulted		((TeSSMR_e_MtrInvrtrSt)4U)
#define CeSSMR_e_NormalPowerStageOffHvRqd		((TeSSMR_e_MtrInvrtrSt)5U)
#endif

/*
* Enum TeSSMR_e_CmndAxleTorqRespTyp 
* Default Value:CeSSMR_e_Inactive 
*/
#ifndef TeSSMR_e_CmndAxleTorqRespTyp
typedef uint8 TeSSMR_e_CmndAxleTorqRespTyp;
#define CeSSMR_e_Inactive		((TeSSMR_e_CmndAxleTorqRespTyp)0U)
#define CeSSMR_e_LimitedPleasability		((TeSSMR_e_CmndAxleTorqRespTyp)1U)
#define CeSSMR_e_MaximumRange		((TeSSMR_e_CmndAxleTorqRespTyp)2U)
#endif

/*
* Enum TeSSMR_e_RngEqnSel 
* Default Value:CeSSMR_e_UseNeutralEqn 
*/
#ifndef TeSSMR_e_RngEqnSel
typedef uint8 TeSSMR_e_RngEqnSel;
#define CeSSMR_e_UseNeutralEqn		((TeSSMR_e_RngEqnSel)0U)
#define CeSSMR_e_UseM1Eqn		((TeSSMR_e_RngEqnSel)1U)
#define CeSSMR_e_UseM2Eqn		((TeSSMR_e_RngEqnSel)2U)
#define CeSSMR_e_UseG1Eqn		((TeSSMR_e_RngEqnSel)3U)
#define CeSSMR_e_UseG2Eqn		((TeSSMR_e_RngEqnSel)4U)
#define CeSSMR_e_UseG3Eqn		((TeSSMR_e_RngEqnSel)5U)
#define CeSSMR_e_UseG4Eqn		((TeSSMR_e_RngEqnSel)6U)
#endif

/*
* Enum TeSSMR_e_TransOutSpdPolarity 
* Default Value:CeSSMR_e_SNA 
*/
#ifndef TeSSMR_e_TransOutSpdPolarity
typedef uint8 TeSSMR_e_TransOutSpdPolarity;
#define CeSSMR_e_SNA		((TeSSMR_e_TransOutSpdPolarity)3U)
#define CeSSMR_e_DB		((TeSSMR_e_TransOutSpdPolarity)2U)
#define CeSSMR_e_DF		((TeSSMR_e_TransOutSpdPolarity)1U)
#define CeSSMR_e_DND		((TeSSMR_e_TransOutSpdPolarity)0U)
#endif

/*
* Enum TeSTDR_e_ToConversionType 
* Default Value:CeSTDR_e_NoConversion 
*/
#ifndef TeSTDR_e_ToConversionType
typedef uint8 TeSTDR_e_ToConversionType;
#define CeSTDR_e_NoConversion		((TeSTDR_e_ToConversionType)0U)
#define CeSTDR_e_Axle2TransOut		((TeSTDR_e_ToConversionType)1U)
#define CeSTDR_e_TransOut2Sum		((TeSTDR_e_ToConversionType)2U)
#define CeSTDR_e_Axle2Sum		((TeSTDR_e_ToConversionType)3U)
#endif

/*
* Enum TeSTMR_e_Lv2PRND_Stat 
* Default Value:CeSTMR_e_LVR_P 
*/
#ifndef TeSTMR_e_Lv2PRND_Stat
typedef uint8 TeSTMR_e_Lv2PRND_Stat;
#define CeSTMR_e_LVR_P		((TeSTMR_e_Lv2PRND_Stat)0U)
#define CeSTMR_e_LVR_R		((TeSTMR_e_Lv2PRND_Stat)1U)
#define CeSTMR_e_LVR_N		((TeSTMR_e_Lv2PRND_Stat)2U)
#define CeSTMR_e_LVR_D		((TeSTMR_e_Lv2PRND_Stat)4U)
#define CeSTMR_e_NOT_R		((TeSTMR_e_Lv2PRND_Stat)5U)
#define CeSTMR_e_PRND_SNA		((TeSTMR_e_Lv2PRND_Stat)7U)
#endif

/*
* Enum TeSTMR_e_DrvRqShftROT_DPT 
* Default Value:CeSTMR_e_ShftROT_Init 
*/
#ifndef TeSTMR_e_DrvRqShftROT_DPT
typedef uint8 TeSTMR_e_DrvRqShftROT_DPT;
#define CeSTMR_e_ShftROT_Init		((TeSTMR_e_DrvRqShftROT_DPT)0U)
#define CeSTMR_e_ShftROT_P		((TeSTMR_e_DrvRqShftROT_DPT)1U)
#define CeSTMR_e_ShftROT_R		((TeSTMR_e_DrvRqShftROT_DPT)2U)
#define CeSTMR_e_ShftROT_N		((TeSTMR_e_DrvRqShftROT_DPT)3U)
#define CeSTMR_e_ShftROT_D		((TeSTMR_e_DrvRqShftROT_DPT)4U)
#define CeSTMR_e_ShftROT_Fifth		((TeSTMR_e_DrvRqShftROT_DPT)5U)
#define CeSTMR_e_ShftROT_SNA		((TeSTMR_e_DrvRqShftROT_DPT)7U)
#endif

/*
* Enum TeSTMR_e_ShiftLeverPos 
* Default Value:CeSTMR_e_SL_NSA 
*/
#ifndef TeSTMR_e_ShiftLeverPos
typedef uint8 TeSTMR_e_ShiftLeverPos;
#define CeSTMR_e_SL_NSA		((TeSTMR_e_ShiftLeverPos)0U)
#define CeSTMR_e_Trans_Park		((TeSTMR_e_ShiftLeverPos)1U)
#define CeSTMR_e_Trans_Rev		((TeSTMR_e_ShiftLeverPos)2U)
#define CeSTMR_e_Trans_Neutral		((TeSTMR_e_ShiftLeverPos)3U)
#define CeSTMR_e_Trans_Drive		((TeSTMR_e_ShiftLeverPos)4U)
#define CeSTMR_e_Trans_LowGr		((TeSTMR_e_ShiftLeverPos)5U)
#define CeSTMR_e_TIP_AutoStick		((TeSTMR_e_ShiftLeverPos)6U)
#define CeSTMR_e_Plus		((TeSTMR_e_ShiftLeverPos)7U)
#define CeSTMR_e_Minus		((TeSTMR_e_ShiftLeverPos)8U)
#define CeSTMR_e_Sport		((TeSTMR_e_ShiftLeverPos)9U)
#define CeSTMR_SNA		((TeSTMR_e_ShiftLeverPos)15U)
#endif

/*
* Enum TeSTMR_e_ECM_LHOM_Trans 
* Default Value:CeSTMR_e_ECM_LHOM_Notactv 
*/
#ifndef TeSTMR_e_ECM_LHOM_Trans
typedef uint8 TeSTMR_e_ECM_LHOM_Trans;
#define CeSTMR_e_ECM_LHOM_Notactv		((TeSTMR_e_ECM_LHOM_Trans)0U)
#define CeSTMR_e_ECM_NoRedundtTrqReq		((TeSTMR_e_ECM_LHOM_Trans)1U)
#define CeSTMR_e_ECM_PreciseTrq		((TeSTMR_e_ECM_LHOM_Trans)2U)
#define CeSTMR_e_ECM_ImpreciseTrq		((TeSTMR_e_ECM_LHOM_Trans)3U)
#endif

/*
* Enum TeSTMR_e_TCM_GearEngaged 
* Default Value:CeSTMR_e_GrEngd_Neutral 
*/
#ifndef TeSTMR_e_TCM_GearEngaged
typedef uint8 TeSTMR_e_TCM_GearEngaged;
#define CeSTMR_e_GrEngd_Neutral		((TeSTMR_e_TCM_GearEngaged)0U)
#define CeSTMR_e_GrEngd_Fwd_Gr1		((TeSTMR_e_TCM_GearEngaged)1U)
#define CeSTMR_e_GrEngd_Fwd_Gr2		((TeSTMR_e_TCM_GearEngaged)2U)
#define CeSTMR_e_GrEngd_Fwd_Gr3		((TeSTMR_e_TCM_GearEngaged)3U)
#define CeSTMR_e_GrEngd_Fwd_Gr4		((TeSTMR_e_TCM_GearEngaged)4U)
#define CeSTMR_e_GrEngd_Fwd_Gr5		((TeSTMR_e_TCM_GearEngaged)5U)
#define CeSTMR_e_GrEngd_Fwd_Gr6		((TeSTMR_e_TCM_GearEngaged)6U)
#define CeSTMR_e_GrEngd_Fwd_Gr7		((TeSTMR_e_TCM_GearEngaged)7U)
#define CeSTMR_e_GrEngd_Fwd_Gr8		((TeSTMR_e_TCM_GearEngaged)8U)
#define CeSTMR_e_GrEngd_Fwd_Gr9		((TeSTMR_e_TCM_GearEngaged)9U)
#define CeSTMR_e_GrEngd_Reverse		((TeSTMR_e_TCM_GearEngaged)14U)
#define CeSTMR_e_GrEngd_Reverse2		((TeSTMR_e_TCM_GearEngaged)11U)
#define CeSTMR_e_GrEngd_Park		((TeSTMR_e_TCM_GearEngaged)13U)
#define CeSTMR_e_GrEngd_SNA		((TeSTMR_e_TCM_GearEngaged)15U)
#endif

/*
* Enum TeSTMR_e_TCM_TrgtGear 
* Default Value:CeSTMR_e_TrgtGr_Neutral 
*/
#ifndef TeSTMR_e_TCM_TrgtGear
typedef uint8 TeSTMR_e_TCM_TrgtGear;
#define CeSTMR_e_TrgtGr_Neutral		((TeSTMR_e_TCM_TrgtGear)0U)
#define CeSTMR_e_TrgtGr_Fwd_Gr1		((TeSTMR_e_TCM_TrgtGear)1U)
#define CeSTMR_e_TrgtGr_Fwd_Gr2		((TeSTMR_e_TCM_TrgtGear)2U)
#define CeSTMR_e_TrgtGr_Fwd_Gr3		((TeSTMR_e_TCM_TrgtGear)3U)
#define CeSTMR_e_TrgtGr_Fwd_Gr4		((TeSTMR_e_TCM_TrgtGear)4U)
#define CeSTMR_e_TrgtGr_Fwd_Gr5		((TeSTMR_e_TCM_TrgtGear)5U)
#define CeSTMR_e_TrgtGr_Fwd_Gr6		((TeSTMR_e_TCM_TrgtGear)6U)
#define CeSTMR_e_TrgtGr_Fwd_Gr7		((TeSTMR_e_TCM_TrgtGear)7U)
#define CeSTMR_e_TrgtGr_Fwd_Gr8		((TeSTMR_e_TCM_TrgtGear)8U)
#define CeSTMR_e_TrgtGr_Fwd_Gr9		((TeSTMR_e_TCM_TrgtGear)9U)
#define CeSTMR_e_TrgtGr_Reverse		((TeSTMR_e_TCM_TrgtGear)14U)
#define CeSTMR_e_TrgtGr_ReverseGear2		((TeSTMR_e_TCM_TrgtGear)11U)
#define CeSTMR_e_TrgtGr_Park		((TeSTMR_e_TCM_TrgtGear)13U)
#define CeSTMR_e_TrgtGr_SNA		((TeSTMR_e_TCM_TrgtGear)15U)
#endif

/*
* Enum TeSTMR_e_TCM_GrShftTyp 
* Default Value:CeSTMR_e_TCM_SteadyState 
*/
#ifndef TeSTMR_e_TCM_GrShftTyp
typedef uint8 TeSTMR_e_TCM_GrShftTyp;
#define CeSTMR_e_TCM_SteadyState		((TeSTMR_e_TCM_GrShftTyp)0U)
#define CeSTMR_e_TCM_1stEngBrkTo1stGear		((TeSTMR_e_TCM_GrShftTyp)1U)
#define CeSTMR_e_TCM_1stTo2ndGear		((TeSTMR_e_TCM_GrShftTyp)2U)
#define CeSTMR_e_TCM_1stTo3rdGear		((TeSTMR_e_TCM_GrShftTyp)3U)
#define CeSTMR_e_TCM_2ndTo3rdGear		((TeSTMR_e_TCM_GrShftTyp)4U)
#define CeSTMR_e_TCM_2ndTo4thGear		((TeSTMR_e_TCM_GrShftTyp)5U)
#define CeSTMR_e_TCM_2ndTo6thGear		((TeSTMR_e_TCM_GrShftTyp)6U)
#define CeSTMR_e_TCM_3rdTo4thGear		((TeSTMR_e_TCM_GrShftTyp)7U)
#define CeSTMR_e_TCM_3rdTo5thGear		((TeSTMR_e_TCM_GrShftTyp)8U)
#define CeSTMR_e_TCM_4thTo5thGear		((TeSTMR_e_TCM_GrShftTyp)9U)
#define CeSTMR_e_TCM_4thTo6thGear		((TeSTMR_e_TCM_GrShftTyp)10U)
#define CeSTMR_e_TCM_5thTo6thGear		((TeSTMR_e_TCM_GrShftTyp)11U)
#define CeSTMR_e_TCM_1stTo1stEngBrkGear		((TeSTMR_e_TCM_GrShftTyp)12U)
#define CeSTMR_e_TCM_2ndTo1stEngBrkGear		((TeSTMR_e_TCM_GrShftTyp)13U)
#define CeSTMR_e_TCM_2ndTo1stGear		((TeSTMR_e_TCM_GrShftTyp)14U)
#define CeSTMR_e_TCM_3rdTo1stGear		((TeSTMR_e_TCM_GrShftTyp)15U)
#define CeSTMR_e_TCM_3rdTo2ndGear		((TeSTMR_e_TCM_GrShftTyp)16U)
#define CeSTMR_e_TCM_4thTo2ndGear		((TeSTMR_e_TCM_GrShftTyp)17U)
#define CeSTMR_e_TCM_6thTo2ndGear		((TeSTMR_e_TCM_GrShftTyp)18U)
#define CeSTMR_e_TCM_4thTo3rdGear		((TeSTMR_e_TCM_GrShftTyp)19U)
#define CeSTMR_e_TCM_5thTo3rdGear		((TeSTMR_e_TCM_GrShftTyp)20U)
#define CeSTMR_e_TCM_5thTo4thGear		((TeSTMR_e_TCM_GrShftTyp)21U)
#define CeSTMR_e_TCM_6thTo4thGear		((TeSTMR_e_TCM_GrShftTyp)22U)
#define CeSTMR_e_TCM_6thTo5thGear		((TeSTMR_e_TCM_GrShftTyp)23U)
#define CeSTMR_e_TCM_ReverseGearInhibited		((TeSTMR_e_TCM_GrShftTyp)24U)
#define CeSTMR_e_TCM_Neutral1st		((TeSTMR_e_TCM_GrShftTyp)25U)
#define CeSTMR_e_TCM_Neutral2nd		((TeSTMR_e_TCM_GrShftTyp)26U)
#define CeSTMR_e_TCM_Neutral3rd		((TeSTMR_e_TCM_GrShftTyp)27U)
#define CeSTMR_e_TCM_Neutral4th		((TeSTMR_e_TCM_GrShftTyp)28U)
#define CeSTMR_e_TCM_Neutral5th		((TeSTMR_e_TCM_GrShftTyp)29U)
#define CeSTMR_e_TCM_Neutral6th		((TeSTMR_e_TCM_GrShftTyp)30U)
#define CeSTMR_e_TCM_NeutralTo1stGearDrive		((TeSTMR_e_TCM_GrShftTyp)31U)
#define CeSTMR_e_TCM_NeutralTo2ndGearDrive		((TeSTMR_e_TCM_GrShftTyp)32U)
#define CeSTMR_e_TCM_NeutralTo3rdGearDrive		((TeSTMR_e_TCM_GrShftTyp)33U)
#define CeSTMR_e_TCM_NeutralTo4thGearDrive		((TeSTMR_e_TCM_GrShftTyp)34U)
#define CeSTMR_e_TCM_NeutralTo5thGearDrive		((TeSTMR_e_TCM_GrShftTyp)35U)
#define CeSTMR_e_TCM_NeutralTo6thGearDrive		((TeSTMR_e_TCM_GrShftTyp)36U)
#define CeSTMR_e_TCM_NeutralToReverse		((TeSTMR_e_TCM_GrShftTyp)37U)
#define CeSTMR_e_TCM_1stGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)38U)
#define CeSTMR_e_TCM_2ndGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)39U)
#define CeSTMR_e_TCM_3rdGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)40U)
#define CeSTMR_e_TCM_4thGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)41U)
#define CeSTMR_e_TCM_5thGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)42U)
#define CeSTMR_e_TCM_6thGearDriveToNeutral		((TeSTMR_e_TCM_GrShftTyp)43U)
#define CeSTMR_e_TCM_Reverse1stGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)44U)
#define CeSTMR_e_TCM_Reverse2ndGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)45U)
#define CeSTMR_e_TCM_Reverse3rdGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)46U)
#define CeSTMR_e_TCM_Reverse4thGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)47U)
#define CeSTMR_e_TCM_Reverse5thGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)48U)
#define CeSTMR_e_TCM_Reverse6thGearToNeutral		((TeSTMR_e_TCM_GrShftTyp)49U)
#define CeSTMR_e_TCM_NeutralIdleControlEntryinDrive		((TeSTMR_e_TCM_GrShftTyp)50U)
#define CeSTMR_e_TCM_NeutralIdleControlTo1stEngBrkGearDrive		((TeSTMR_e_TCM_GrShftTyp)51U)
#define CeSTMR_e_TCM_NeutralIdleControlTo1stGearDrive		((TeSTMR_e_TCM_GrShftTyp)52U)
#define CeSTMR_e_TCM_NeutralIdleControlTo2ndGearDrive		((TeSTMR_e_TCM_GrShftTyp)53U)
#define CeSTMR_e_TCM_NeutralIdleControlTo3rdGearDrive		((TeSTMR_e_TCM_GrShftTyp)54U)
#define CeSTMR_e_TCM_NeutralIdleControlTo4tGearDrive		((TeSTMR_e_TCM_GrShftTyp)55U)
#define CeSTMR_e_TCM_NeutralIdleControlTo5thGearDrive		((TeSTMR_e_TCM_GrShftTyp)56U)
#define CeSTMR_e_TCM_NeutralIdleControlTo6thGearDrive		((TeSTMR_e_TCM_GrShftTyp)57U)
#define CeSTMR_e_TCM_NeutralIdleControlEntryinReverse		((TeSTMR_e_TCM_GrShftTyp)58U)
#define CeSTMR_e_TCM_NeutralIdleControlExitinReverse		((TeSTMR_e_TCM_GrShftTyp)59U)
#define CeSTMR_e_TCM_ReverseGearToHEV		((TeSTMR_e_TCM_GrShftTyp)60U)
#define CeSTMR_e_TCM_1stGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)61U)
#define CeSTMR_e_TCM_2ndGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)62U)
#define CeSTMR_e_TCM_3rdGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)63U)
#define CeSTMR_e_TCM_4thGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)64U)
#define CeSTMR_e_TCM_5thGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)65U)
#define CeSTMR_e_TCM_6thGearDriveToHEV		((TeSTMR_e_TCM_GrShftTyp)66U)
#define CeSTMR_e_TCM_HEVToReverseGear		((TeSTMR_e_TCM_GrShftTyp)67U)
#define CeSTMR_e_TCM_HEVTo1stGearDrive_C1Oncoming		((TeSTMR_e_TCM_GrShftTyp)68U)
#define CeSTMR_e_TCM_HEVTo2ndGearDrive		((TeSTMR_e_TCM_GrShftTyp)69U)
#define CeSTMR_e_TCM_HEVTo3rdGearDrive		((TeSTMR_e_TCM_GrShftTyp)70U)
#define CeSTMR_e_TCM_HEVTo4thGearDrive		((TeSTMR_e_TCM_GrShftTyp)71U)
#define CeSTMR_e_TCM_HEVTo5thGearDrive		((TeSTMR_e_TCM_GrShftTyp)72U)
#define CeSTMR_e_TCM_HEVTo6thGearDrive		((TeSTMR_e_TCM_GrShftTyp)73U)
#define CeSTMR_e_TCM_HEVTo1stGearDrive_F1Oncoming		((TeSTMR_e_TCM_GrShftTyp)74U)
#endif

/*
* Enum TeSTMR_e_CANC_KeySts_P1P4 
* Default Value:CeSTMR_e_P1P4_Key_Init 
*/
#ifndef TeSTMR_e_CANC_KeySts_P1P4
typedef uint8 TeSTMR_e_CANC_KeySts_P1P4;
#define CeSTMR_e_P1P4_Key_Init		((TeSTMR_e_CANC_KeySts_P1P4)0U)
#define CeSTMR_e_P1P4_Key_Lock		((TeSTMR_e_CANC_KeySts_P1P4)1U)
#define CeSTMR_e_P1P4_Key_ACC		((TeSTMR_e_CANC_KeySts_P1P4)3U)
#define CeSTMR_e_P1P4_Key_RUN		((TeSTMR_e_CANC_KeySts_P1P4)4U)
#define CeSTMR_e_P1P4_Key_START		((TeSTMR_e_CANC_KeySts_P1P4)5U)
#define CeSTMR_e_P1P4_Key_SNA		((TeSTMR_e_CANC_KeySts_P1P4)7U)
#endif

/*
* Enum TeSTMR_e_RdPrfmMd_MinMax 
* Default Value:CeSTMR_e_NoRdPerfmMdRq 
*/
#ifndef TeSTMR_e_RdPrfmMd_MinMax
typedef uint8 TeSTMR_e_RdPrfmMd_MinMax;
#define CeSTMR_e_NoRdPerfmMdRq		((TeSTMR_e_RdPrfmMd_MinMax)0U)
#define CeSTMR_e_RdPerfmMd_Max		((TeSTMR_e_RdPrfmMd_MinMax)1U)
#define CeSTMR_e_RdPerfmMd_Min		((TeSTMR_e_RdPrfmMd_MinMax)2U)
#endif

/*
* Enum TeSTMR_e_AHH_ApplyReleaseReq 
* Default Value:CeSTMR_e_AHH_Inactive 
*/
#ifndef TeSTMR_e_AHH_ApplyReleaseReq
typedef uint8 TeSTMR_e_AHH_ApplyReleaseReq;
#define CeSTMR_e_AHH_Inactive		((TeSTMR_e_AHH_ApplyReleaseReq)0U)
#define CeSTMR_e_AHH_Apply		((TeSTMR_e_AHH_ApplyReleaseReq)1U)
#define CeSTMR_e_AHH_Blended_Release		((TeSTMR_e_AHH_ApplyReleaseReq)2U)
#define CeSTMR_e_AHH_ReqNotDefined		((TeSTMR_e_AHH_ApplyReleaseReq)3U)
#define CeSTMR_e_AHH_Fast_Release		((TeSTMR_e_AHH_ApplyReleaseReq)4U)
#define CeSTMR_e_AHH_EPB_Apply		((TeSTMR_e_AHH_ApplyReleaseReq)5U)
#define CeSTMR_e_AHH_Hydrl_Apply		((TeSTMR_e_AHH_ApplyReleaseReq)6U)
#define CeSTMR_e_AHH_Apply_SNA		((TeSTMR_e_AHH_ApplyReleaseReq)7U)
#endif

/*
* Enum TeSTMR_e_AHH_ReadyStatus 
* Default Value:CeSTMR_e_AHH_NotReady 
*/
#ifndef TeSTMR_e_AHH_ReadyStatus
typedef uint8 TeSTMR_e_AHH_ReadyStatus;
#define CeSTMR_e_AHH_NotReady		((TeSTMR_e_AHH_ReadyStatus)0U)
#define CeSTMR_e_AHH_Ready		((TeSTMR_e_AHH_ReadyStatus)1U)
#define CeSTMR_e_AHH_Active		((TeSTMR_e_AHH_ReadyStatus)2U)
#define CeSTMR_e_AHH_EPB_Ready		((TeSTMR_e_AHH_ReadyStatus)3U)
#define CeSTMR_e_AHH_Hydrl_Ready		((TeSTMR_e_AHH_ReadyStatus)4U)
#define CeSTMR_e_AHH_Hyd_Releasing_EPB_Not_Avail		((TeSTMR_e_AHH_ReadyStatus)5U)
#define CeSTMR_e_AHH_StatusNotDefined_6		((TeSTMR_e_AHH_ReadyStatus)6U)
#define CeSTMR_e_AHH_Ready_SNA		((TeSTMR_e_AHH_ReadyStatus)7U)
#endif

/*
* Enum TeSTMR_e_Lv2BrkPdlStat 
* Default Value:CeSTMR_e_BrkStat_NotDtrmnd 
*/
#ifndef TeSTMR_e_Lv2BrkPdlStat
typedef uint8 TeSTMR_e_Lv2BrkPdlStat;
#define CeSTMR_e_BrkNotAppld		((TeSTMR_e_Lv2BrkPdlStat)0U)
#define CeSTMR_e_BrakeAppld		((TeSTMR_e_Lv2BrkPdlStat)1U)
#define CeSTMR_e_BrkStat_NotDtrmnd		((TeSTMR_e_Lv2BrkPdlStat)2U)
#endif

/*
* Enum TeSTMR_e_Lv2BEVDrvMd 
* Default Value:CeSTMR_e_DrvMd_NotDtrmnd 
*/
#ifndef TeSTMR_e_Lv2BEVDrvMd
typedef uint8 TeSTMR_e_Lv2BEVDrvMd;
#define CeSTMR_e_DrvMd_NotDtrmnd		((TeSTMR_e_Lv2BEVDrvMd)0U)
#define CeSTMR_e_DrvMd_Normal		((TeSTMR_e_Lv2BEVDrvMd)1U)
#define CeSTMR_e_DrvMd_Range		((TeSTMR_e_Lv2BEVDrvMd)2U)
#define CeSTMR_e_DrvMd_Sport		((TeSTMR_e_Lv2BEVDrvMd)3U)
#define CeSTMR_e_DrvMd_WR		((TeSTMR_e_Lv2BEVDrvMd)4U)
#define CeSTMR_e_DrvMd_Camel		((TeSTMR_e_Lv2BEVDrvMd)5U)
#define CeSTMR_e_DrvMd_Power		((TeSTMR_e_Lv2BEVDrvMd)6U)
#define CeSTMR_e_DrvMd_Trekking		((TeSTMR_e_Lv2BEVDrvMd)7U)
#define CeSTMR_e_DrvMd_Auto		((TeSTMR_e_Lv2BEVDrvMd)8U)
#define CeSTMR_e_DrvMd_Snow		((TeSTMR_e_Lv2BEVDrvMd)9U)
#define CeSTMR_e_DrvMd_Sand		((TeSTMR_e_Lv2BEVDrvMd)10U)
#define CeSTMR_e_DrvMd_Mud		((TeSTMR_e_Lv2BEVDrvMd)11U)
#define CeSTMR_e_DrvMd_Rock		((TeSTMR_e_Lv2BEVDrvMd)12U)
#define CeSTMR_e_DrvMd_Race		((TeSTMR_e_Lv2BEVDrvMd)13U)
#define CeSTMR_e_DrvMd_SM		((TeSTMR_e_Lv2BEVDrvMd)14U)
#define CeSTMR_e_DrvMd_OffRoad		((TeSTMR_e_Lv2BEVDrvMd)15U)
#define CeSTMR_e_DrvMd_TurtleMd1		((TeSTMR_e_Lv2BEVDrvMd)16U)
#define CeSTMR_e_DrvMd_TurtleMd2		((TeSTMR_e_Lv2BEVDrvMd)17U)
#define CeSTMR_e_DrvMd_TurtleMd3		((TeSTMR_e_Lv2BEVDrvMd)18U)
#define CeSTMR_e_DrvMd_TurtleMd4		((TeSTMR_e_Lv2BEVDrvMd)19U)
#endif

/*
* Enum TeSTMR_e_ACCSystemSts 
* Default Value:CeSTMR_e_Off 
*/
#ifndef TeSTMR_e_ACCSystemSts
typedef uint8 TeSTMR_e_ACCSystemSts;
#define CeSTMR_e_Off		((TeSTMR_e_ACCSystemSts)0U)
#define CeSTMR_e_Enabled		((TeSTMR_e_ACCSystemSts)1U)
#define CeSTMR_e_Engaged		((TeSTMR_e_ACCSystemSts)2U)
#define CeSTMR_e_Engaged_BrakeOnly		((TeSTMR_e_ACCSystemSts)3U)
#define CeSTMR_e_Override		((TeSTMR_e_ACCSystemSts)4U)
#define CeSTMR_e_Cancel		((TeSTMR_e_ACCSystemSts)5U)
#endif

/*
* Enum TeSTMR_e_DriveStyleSts 
* Default Value:CeSTMR_e_Normal 
*/
#ifndef TeSTMR_e_DriveStyleSts
typedef uint8 TeSTMR_e_DriveStyleSts;
#define CeSTMR_e_Normal		((TeSTMR_e_DriveStyleSts)0U)
#define CeSTMR_e_City		((TeSTMR_e_DriveStyleSts)1U)
#define CeSTMR_e_SportFun		((TeSTMR_e_DriveStyleSts)2U)
#define CeSTMR_e_WinterRace		((TeSTMR_e_DriveStyleSts)3U)
#define CeSTMR_e_Eco		((TeSTMR_e_DriveStyleSts)4U)
#define CeSTMR_e_TracePlus		((TeSTMR_e_DriveStyleSts)5U)
#define CeSTMR_e_Trekking		((TeSTMR_e_DriveStyleSts)6U)
#define CeSTMR_e_Auto		((TeSTMR_e_DriveStyleSts)7U)
#define CeSTMR_e_Snow		((TeSTMR_e_DriveStyleSts)8U)
#define CeSTMR_e_Sand		((TeSTMR_e_DriveStyleSts)9U)
#define CeSTMR_e_Mud		((TeSTMR_e_DriveStyleSts)10U)
#define CeSTMR_e_Rock		((TeSTMR_e_DriveStyleSts)11U)
#define CeSTMR_e_Race		((TeSTMR_e_DriveStyleSts)12U)
#define CeSTMR_e_SandMud		((TeSTMR_e_DriveStyleSts)13U)
#define CeSTMR_e_OffRoad		((TeSTMR_e_DriveStyleSts)14U)
#define CeSTMR_e_DSS_SNA		((TeSTMR_e_DriveStyleSts)31U)
#endif

/*
* Enum TeSTMR_e_VehACCStat 
* Default Value:CeSTMR_e_Lv2Absent 
*/
#ifndef TeSTMR_e_VehACCStat
typedef uint8 TeSTMR_e_VehACCStat;
#define CeSTMR_e_Lv2Absent		((TeSTMR_e_VehACCStat)0U)
#define CeSTMR_e_Lv2ACC		((TeSTMR_e_VehACCStat)1U)
#define CeSTMR_e_Lv2ACCPlus		((TeSTMR_e_VehACCStat)2U)
#endif

/*
* Enum TeSTMR_e_OPDHoldStatus 
* Default Value:CeSTMR_e_In_Active 
*/
#ifndef TeSTMR_e_OPDHoldStatus
typedef uint8 TeSTMR_e_OPDHoldStatus;
#define CeSTMR_e_In_Active		((TeSTMR_e_OPDHoldStatus)0U)
#define CeSTMR_e_Holding		((TeSTMR_e_OPDHoldStatus)1U)
#define CeSTMR_e_Ready_to_Release		((TeSTMR_e_OPDHoldStatus)2U)
#define CeSTMR_e_OPDHS_SNA		((TeSTMR_e_OPDHoldStatus)3U)
#endif

/*
* Enum TeSTMR_e_Clutch1_Sts 
* Default Value:CeSTMR_e_Disengaged_Clutch1 
*/
#ifndef TeSTMR_e_Clutch1_Sts
typedef uint8 TeSTMR_e_Clutch1_Sts;
#define CeSTMR_e_Disengaged_Clutch1		((TeSTMR_e_Clutch1_Sts)0U)
#define CeSTMR_e_Prefilled_Clutch1		((TeSTMR_e_Clutch1_Sts)1U)
#define CeSTMR_e_TorqueMode_Clutch1		((TeSTMR_e_Clutch1_Sts)2U)
#define CeSTMR_e_SlipControl_Clutch1		((TeSTMR_e_Clutch1_Sts)3U)
#define CeSTMR_e_Control_Closed_5_rpm_Clutch1		((TeSTMR_e_Clutch1_Sts)4U)
#define CeSTMR_e_Closed_Overpressure_Clutch1		((TeSTMR_e_Clutch1_Sts)5U)
#endif

/*
* Enum TeSTMR_e_Clutch2_Sts 
* Default Value:CeSTMR_e_Disengaged_Clutch2 
*/
#ifndef TeSTMR_e_Clutch2_Sts
typedef uint8 TeSTMR_e_Clutch2_Sts;
#define CeSTMR_e_Disengaged_Clutch2		((TeSTMR_e_Clutch2_Sts)0U)
#define CeSTMR_e_Prefilled_Clutch2		((TeSTMR_e_Clutch2_Sts)1U)
#define CeSTMR_e_TorqueMode_Clutch2		((TeSTMR_e_Clutch2_Sts)2U)
#define CeSTMR_e_SlipControl_Clutch2		((TeSTMR_e_Clutch2_Sts)3U)
#define CeSTMR_e_Control_Closed_5_rpm_Clutch2		((TeSTMR_e_Clutch2_Sts)4U)
#define CeSTMR_e_Closed_Overpressure_Clutch2		((TeSTMR_e_Clutch2_Sts)5U)
#endif

/*
* Enum TeSTMR_e_Synchronizer2_Status 
* Default Value:CeSTMR_e_SyncOpen 
*/
#ifndef TeSTMR_e_Synchronizer2_Status
typedef uint8 TeSTMR_e_Synchronizer2_Status;
#define CeSTMR_e_SyncOpen		((TeSTMR_e_Synchronizer2_Status)0U)
#define CeSTMR_e_SyncClosed		((TeSTMR_e_Synchronizer2_Status)1U)
#define CeSTMR_e_SyncSNA		((TeSTMR_e_Synchronizer2_Status)3U)
#endif

/*
* Enum TeSTMR_e_GearShftType1_P1P2p5 
* Default Value:CeSTMR_e_SteadyState_Typ1 
*/
#ifndef TeSTMR_e_GearShftType1_P1P2p5
typedef uint8 TeSTMR_e_GearShftType1_P1P2p5;
#define CeSTMR_e_SteadyState_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)0U)
#define CeSTMR_e_1stTo2ndGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)2U)
#define CeSTMR_e_2ndTo3rdGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)4U)
#define CeSTMR_e_3rdTo4thGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)7U)
#define CeSTMR_e_4thTo5thGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)9U)
#define CeSTMR_e_5thTo6thGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)11U)
#define CeSTMR_e_2ndTo1stGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)14U)
#define CeSTMR_e_3rdTo2ndGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)16U)
#define CeSTMR_e_4thTo3rdGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)19U)
#define CeSTMR_e_5thTo4thGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)21U)
#define CeSTMR_e_6thTo5thGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)23U)
#define CeSTMR_e_ReverseGearToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)60U)
#define CeSTMR_e_1stGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)61U)
#define CeSTMR_e_2ndGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)62U)
#define CeSTMR_e_3rdGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)63U)
#define CeSTMR_e_4thGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)64U)
#define CeSTMR_e_5thGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)65U)
#define CeSTMR_e_6thGearDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)66U)
#define CeSTMR_e_HEVToReverseGear_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)67U)
#define CeSTMR_e_HEVTo1stGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)68U)
#define CeSTMR_e_HEVTo2ndGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)69U)
#define CeSTMR_e_HEVTo3rdGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)70U)
#define CeSTMR_e_HEVTo4thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)71U)
#define CeSTMR_e_HEVTo5thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)72U)
#define CeSTMR_e_HEVTo6thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)73U)
#define CeSTMR_e_6To7_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)89U)
#define CeSTMR_e_7To6_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)90U)
#define CeSTMR_e_7thDriveToHEV_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)93U)
#define CeSTMR_e_HEVTo7thDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)94U)
#define CeSTMR_e_1stTo4thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)95U)
#define CeSTMR_e_1stTo6thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)96U)
#define CeSTMR_e_2ndTo5thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)97U)
#define CeSTMR_e_2ndTo7thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)98U)
#define CeSTMR_e_3rdTo6thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)99U)
#define CeSTMR_e_4thTo1stGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)100U)
#define CeSTMR_e_4thTo7thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)101U)
#define CeSTMR_e_5thTo2ndGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)102U)
#define CeSTMR_e_6thTo1stGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)103U)
#define CeSTMR_e_6thTo3rdGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)104U)
#define CeSTMR_e_7thTo2ndGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)105U)
#define CeSTMR_e_7thTo4thGearDrive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)106U)
#define CeSTMR_e_SyncNto1Passive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)107U)
#define CeSTMR_e_SyncNto3Passive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)108U)
#define CeSTMR_e_SyncNto5Passive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)109U)
#define CeSTMR_e_SyncNto7Passive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)110U)
#define CeSTMR_e_1toSyncNPassive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)111U)
#define CeSTMR_e_3toSyncNPassive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)112U)
#define CeSTMR_e_5toSyncNPassive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)113U)
#define CeSTMR_e_7toSyncNPassive_Typ1		((TeSTMR_e_GearShftType1_P1P2p5)114U)
#endif

/*
* Enum TeSTMR_e_TCMStrtTypReq 
* Default Value:CeSTMR_e_Init_Normal_Start 
*/
#ifndef TeSTMR_e_TCMStrtTypReq
typedef uint8 TeSTMR_e_TCMStrtTypReq;
#define CeSTMR_e_Init_Normal_Start		((TeSTMR_e_TCMStrtTypReq)0U)
#define CeSTMR_e_No_Request		((TeSTMR_e_TCMStrtTypReq)1U)
#define CeSTMR_e_EM_Start_Request		((TeSTMR_e_TCMStrtTypReq)2U)
#define CeSTMR_e_Impulse_Start_Request		((TeSTMR_e_TCMStrtTypReq)3U)
#define CeSTMR_e_Clutch_Start_Request		((TeSTMR_e_TCMStrtTypReq)4U)
#define CeSTMR_e_External_Start_Request		((TeSTMR_e_TCMStrtTypReq)5U)
#define CeSTMR_e_Reversed_Start_Request		((TeSTMR_e_TCMStrtTypReq)6U)
#define CeSTMR_e_Emergency_Start_Cold		((TeSTMR_e_TCMStrtTypReq)14U)
#define CeSTMR_e_Emergency_Start_Normal		((TeSTMR_e_TCMStrtTypReq)15U)
#define CeSTMR_e_Variant_16		((TeSTMR_e_TCMStrtTypReq)16U)
#define CeSTMR_e_Stop_Type_1_Offload_K0		((TeSTMR_e_TCMStrtTypReq)29U)
#define CeSTMR_e_Stop_Type_2_True_Capacity		((TeSTMR_e_TCMStrtTypReq)30U)
#define CeSTMR_e_SNA		((TeSTMR_e_TCMStrtTypReq)31U)
#endif

/*
* Enum TeSTMR_e_Synchronizer1_Status 
* Default Value:CeSTMR_e_SyncOpen_sync1 
*/
#ifndef TeSTMR_e_Synchronizer1_Status
typedef uint8 TeSTMR_e_Synchronizer1_Status;
#define CeSTMR_e_SyncOpen_sync1		((TeSTMR_e_Synchronizer1_Status)0U)
#define CeSTMR_e_SyncClosed_sync1		((TeSTMR_e_Synchronizer1_Status)1U)
#define CeSTMR_e_SyncSNA_sync1		((TeSTMR_e_Synchronizer1_Status)3U)
#endif

/*
* Enum TeSTMR_e_ShiftLeverPositionReq 
* Default Value:CeSTMR_e_ShiftNotActive 
*/
#ifndef TeSTMR_e_ShiftLeverPositionReq
typedef uint8 TeSTMR_e_ShiftLeverPositionReq;
#define CeSTMR_e_ShiftNotActive		((TeSTMR_e_ShiftLeverPositionReq)0U)
#define CeSTMR_e_ParkShift		((TeSTMR_e_ShiftLeverPositionReq)1U)
#define CeSTMR_e_ReverseShift		((TeSTMR_e_ShiftLeverPositionReq)2U)
#define CeSTMR_e_NeutralShift		((TeSTMR_e_ShiftLeverPositionReq)3U)
#define CeSTMR_e_DriveShift		((TeSTMR_e_ShiftLeverPositionReq)4U)
#define CeSTMR_e_LandShift		((TeSTMR_e_ShiftLeverPositionReq)5U)
#define CeSTMR_e_TIP_Autostick		((TeSTMR_e_ShiftLeverPositionReq)6U)
#define CeSTMR_e_PlusShift		((TeSTMR_e_ShiftLeverPositionReq)7U)
#define CeSTMR_e_MinusShift		((TeSTMR_e_ShiftLeverPositionReq)8U)
#define CeSTMR_e_SportShift		((TeSTMR_e_ShiftLeverPositionReq)9U)
#define CeSTMR_e_BothShift		((TeSTMR_e_ShiftLeverPositionReq)10U)
#define CeSTMR_e_SNAShift		((TeSTMR_e_ShiftLeverPositionReq)15U)
#endif

/*
* Enum TeSTMR_e_LHOM_Fault_2 
* Default Value:CeSTMR_e_NoRequest 
*/
#ifndef TeSTMR_e_LHOM_Fault_2
typedef uint8 TeSTMR_e_LHOM_Fault_2;
#define CeSTMR_e_NoRequest		((TeSTMR_e_LHOM_Fault_2)0U)
#define CeSTMR_e_Disable_ST1		((TeSTMR_e_LHOM_Fault_2)1U)
#define CeSTMR_e_Disable_C1_ST1		((TeSTMR_e_LHOM_Fault_2)2U)
#define CeSTMR_e_Disable_ST2		((TeSTMR_e_LHOM_Fault_2)3U)
#define CeSTMR_e_Disable_C2_ST2		((TeSTMR_e_LHOM_Fault_2)4U)
#define CeSTMR_e_Disable_C1_ST1_ST2		((TeSTMR_e_LHOM_Fault_2)5U)
#define CeSTMR_e_Complete_Neutral		((TeSTMR_e_LHOM_Fault_2)6U)
#define CeSTMR_e_Disable_C2		((TeSTMR_e_LHOM_Fault_2)7U)
#endif

/*
* Enum TeSTMR_e_Synchronizer1_Gear 
* Default Value:CeSTMR_e_Synch1_Neutral 
*/
#ifndef TeSTMR_e_Synchronizer1_Gear
typedef uint8 TeSTMR_e_Synchronizer1_Gear;
#define CeSTMR_e_Synch1_Neutral		((TeSTMR_e_Synchronizer1_Gear)0U)
#define CeSTMR_e_Synch1_1stGear		((TeSTMR_e_Synchronizer1_Gear)1U)
#define CeSTMR_e_Synch1_3rdGear		((TeSTMR_e_Synchronizer1_Gear)2U)
#define CeSTMR_e_Synch1_5thGear		((TeSTMR_e_Synchronizer1_Gear)3U)
#define CeSTMR_e_Synch1_7thGear		((TeSTMR_e_Synchronizer1_Gear)4U)
#define CeSTMR_e_Synch1_SNA		((TeSTMR_e_Synchronizer1_Gear)7U)
#endif

/*
* Enum TeSTMR_e_Synchronizer2_Gear 
* Default Value:CeSTMR_e_Synch2_Neutral 
*/
#ifndef TeSTMR_e_Synchronizer2_Gear
typedef uint8 TeSTMR_e_Synchronizer2_Gear;
#define CeSTMR_e_Synch2_Neutral		((TeSTMR_e_Synchronizer2_Gear)0U)
#define CeSTMR_e_Synch2_2dnGear		((TeSTMR_e_Synchronizer2_Gear)1U)
#define CeSTMR_e_Synch2_4thGear		((TeSTMR_e_Synchronizer2_Gear)2U)
#define CeSTMR_e_Synch2_6thGear		((TeSTMR_e_Synchronizer2_Gear)3U)
#define CeSTMR_e_Synch2_Park		((TeSTMR_e_Synchronizer2_Gear)4U)
#define CeSTMR_e_Synch2_Reverse		((TeSTMR_e_Synchronizer2_Gear)5U)
#define CeSTMR_e_Synch2_SNA		((TeSTMR_e_Synchronizer2_Gear)7U)
#endif

/*
* Enum TeSTMR_e_DriveStyleSts_M182 
* Default Value:CeSTMR_e_Auto_M182 
*/
#ifndef TeSTMR_e_DriveStyleSts_M182
typedef uint8 TeSTMR_e_DriveStyleSts_M182;
#define CeSTMR_e_Auto_M182		((TeSTMR_e_DriveStyleSts_M182)0U)
#define CeSTMR_e_Offroad_M182		((TeSTMR_e_DriveStyleSts_M182)5U)
#define CeSTMR_e_ECO_M182		((TeSTMR_e_DriveStyleSts_M182)6U)
#define CeSTMR_e_Corsa_M182		((TeSTMR_e_DriveStyleSts_M182)7U)
#define CeSTMR_e_Sport_M182		((TeSTMR_e_DriveStyleSts_M182)8U)
#endif

/*
* Enum TeSTMR_e_Lv2M182DrvMd 
* Default Value:CeSTMR_e_DrvMdM182_Auto 
*/
#ifndef TeSTMR_e_Lv2M182DrvMd
typedef uint8 TeSTMR_e_Lv2M182DrvMd;
#define CeSTMR_e_DrvMdM182_Auto		((TeSTMR_e_Lv2M182DrvMd)0U)
#define CeSTMR_e_DrvMdM182_Offroad		((TeSTMR_e_Lv2M182DrvMd)1U)
#define CeSTMR_e_DrvMdM182_Eco		((TeSTMR_e_Lv2M182DrvMd)2U)
#define CeSTMR_e_DrvMdM182_Sport		((TeSTMR_e_Lv2M182DrvMd)3U)
#define CeSTMR_e_DrvMdM182_TurtleMd1		((TeSTMR_e_Lv2M182DrvMd)4U)
#define CeSTMR_e_DrvMdM182_TurtleMd2		((TeSTMR_e_Lv2M182DrvMd)5U)
#define CeSTMR_e_DrvMdM182_TurtleMd3		((TeSTMR_e_Lv2M182DrvMd)6U)
#define CeSTMR_e_DrvMdM182_TurtleMd4		((TeSTMR_e_Lv2M182DrvMd)7U)
#endif

/*
* Enum TeSTMR_e_ESS_Engine_State_EE 
* Default Value:CeSTMR_e_ENS_STOPPED 
*/
#ifndef TeSTMR_e_ESS_Engine_State_EE
typedef uint8 TeSTMR_e_ESS_Engine_State_EE;
#define CeSTMR_e_ENS_STOPPED		((TeSTMR_e_ESS_Engine_State_EE)1U)
#define CeSTMR_e_ENS_RQ_ST		((TeSTMR_e_ESS_Engine_State_EE)2U)
#define CeSTMR_e_ENS_RUN		((TeSTMR_e_ESS_Engine_State_EE)3U)
#define CeSTMR_e_ENS_STOP_PEND		((TeSTMR_e_ESS_Engine_State_EE)4U)
#define CeSTMR_e_ENS_ST_PRTCT		((TeSTMR_e_ESS_Engine_State_EE)5U)
#define CeSTMR_e_ENS_ST_INH		((TeSTMR_e_ESS_Engine_State_EE)6U)
#define CeSTMR_e_ENS_DSBL		((TeSTMR_e_ESS_Engine_State_EE)7U)
#define CeSTMR_e_ENS_IHB_LATCH		((TeSTMR_e_ESS_Engine_State_EE)8U)
#define CeSTMR_e_ENS_ST		((TeSTMR_e_ESS_Engine_State_EE)9U)
#define CeSTMR_e_KEY_START		((TeSTMR_e_ESS_Engine_State_EE)10U)
#define CeSTMR_e_ENS_CHANGED_MIND		((TeSTMR_e_ESS_Engine_State_EE)11U)
#define CeSTMR_e_KEY_TORQUE_START		((TeSTMR_e_ESS_Engine_State_EE)12U)
#define CeSTMR_e_ENS_DISARM_RUN		((TeSTMR_e_ESS_Engine_State_EE)13U)
#define CeSTMR_e_ENS_SNA		((TeSTMR_e_ESS_Engine_State_EE)14U)
#endif

/*
* Enum TeSTMR_e_eCoastSel 
* Default Value:CeSTMR_e_Level1 
*/
#ifndef TeSTMR_e_eCoastSel
typedef uint8 TeSTMR_e_eCoastSel;
#define CeSTMR_e_Level0		((TeSTMR_e_eCoastSel)0U)
#define CeSTMR_e_Level1		((TeSTMR_e_eCoastSel)1U)
#define CeSTMR_e_Level2		((TeSTMR_e_eCoastSel)2U)
#define CeSTMR_e_Level3		((TeSTMR_e_eCoastSel)3U)
#define CeSTMR_e_NotAvail		((TeSTMR_e_eCoastSel)5U)
#endif

/*
* Enum TeSTMR_e_Lv2ECO_Mode_Latch 
* Default Value:CeSTMR_e_ECO_NotAvail 
*/
#ifndef TeSTMR_e_Lv2ECO_Mode_Latch
typedef uint8 TeSTMR_e_Lv2ECO_Mode_Latch;
#define CeSTMR_e_ECO_NotAvail		((TeSTMR_e_Lv2ECO_Mode_Latch)0U)
#define CeSTMR_e_Reset2OFF		((TeSTMR_e_Lv2ECO_Mode_Latch)1U)
#define CeSTMR_e_Reset2ON		((TeSTMR_e_Lv2ECO_Mode_Latch)2U)
#define CeSTMR_e_PrevSts		((TeSTMR_e_Lv2ECO_Mode_Latch)3U)
#endif

/*
* Enum TeSTMR_e_EPBHoldSts 
* Default Value:CeSTMR_e_EPBHoldSts_REL 
*/
#ifndef TeSTMR_e_EPBHoldSts
typedef uint8 TeSTMR_e_EPBHoldSts;
#define CeSTMR_e_EPBHoldSts_REL		((TeSTMR_e_EPBHoldSts)0U)
#define CeSTMR_e_EPBHoldSts_APPLIED		((TeSTMR_e_EPBHoldSts)1U)
#define CeSTMR_e_EPBHoldSts_DynamBrkESC		((TeSTMR_e_EPBHoldSts)2U)
#define CeSTMR_e_EPBHoldSts_DynamBrkEPB		((TeSTMR_e_EPBHoldSts)3U)
#define CeSTMR_e_EPBHoldSts_Emrgnc_Brk		((TeSTMR_e_EPBHoldSts)4U)
#define CeSTMR_e_EPBHoldSts_APPLYING		((TeSTMR_e_EPBHoldSts)5U)
#define CeSTMR_e_EPBHoldSts_MaintMd		((TeSTMR_e_EPBHoldSts)6U)
#define CeSTMR_e_EPBHoldSts_AssmblyChk		((TeSTMR_e_EPBHoldSts)7U)
#define CeSTMR_e_EPBHoldSts_InspMd		((TeSTMR_e_EPBHoldSts)8U)
#define CeSTMR_e_EPBHoldSts_ReClamping		((TeSTMR_e_EPBHoldSts)9U)
#define CeSTMR_e_EPBHoldSts_Adjust_Md		((TeSTMR_e_EPBHoldSts)10U)
#define CeSTMR_e_EPBHoldSts_RELEASING		((TeSTMR_e_EPBHoldSts)11U)
#define CeSTMR_e_EPBHoldSts_Flt_EPBRel		((TeSTMR_e_EPBHoldSts)12U)
#define CeSTMR_e_EPBHoldSts_Flt_EPBAppl		((TeSTMR_e_EPBHoldSts)13U)
#define CeSTMR_e_EPBHoldSts_Flt_Prsnt		((TeSTMR_e_EPBHoldSts)14U)
#define CeSTMR_e_EPBHoldSts_SNA		((TeSTMR_e_EPBHoldSts)15U)
#define CeSTMR_e_EPBHoldSts_DC		((TeSTMR_e_EPBHoldSts)16U)
#define CeSTMR_e_EPBHoldSts_BSU		((TeSTMR_e_EPBHoldSts)17U)
#endif

/*
* Enum TeSTMR_e_WED_ShaftStatus 
* Default Value:CeSTMR_e_WED_NotAvailable 
*/
#ifndef TeSTMR_e_WED_ShaftStatus
typedef uint8 TeSTMR_e_WED_ShaftStatus;
#define CeSTMR_e_WED_NotAvailable		((TeSTMR_e_WED_ShaftStatus)0U)
#define CeSTMR_e_WED_Engaging		((TeSTMR_e_WED_ShaftStatus)1U)
#define CeSTMR_e_WED_Engaged		((TeSTMR_e_WED_ShaftStatus)2U)
#define CeSTMR_e_WED_Disengaging		((TeSTMR_e_WED_ShaftStatus)3U)
#define CeSTMR_e_WED_Disdngaged		((TeSTMR_e_WED_ShaftStatus)4U)
#define CeSTMR_e_WED_StuckOpen		((TeSTMR_e_WED_ShaftStatus)5U)
#define CeSTMR_e_WED_StuckClosed		((TeSTMR_e_WED_ShaftStatus)6U)
#define CeSTMR_e_WED_SNA		((TeSTMR_e_WED_ShaftStatus)7U)
#endif

/*
* Enum TeSTMR_e_ACCSystemSts_M182 
* Default Value:CeSTMR_e_Off_M182 
*/
#ifndef TeSTMR_e_ACCSystemSts_M182
typedef uint8 TeSTMR_e_ACCSystemSts_M182;
#define CeSTMR_e_Off_M182		((TeSTMR_e_ACCSystemSts_M182)0U)
#define CeSTMR_e_Enabled_M182		((TeSTMR_e_ACCSystemSts_M182)1U)
#define CeSTMR_e_Engaged_M182		((TeSTMR_e_ACCSystemSts_M182)2U)
#define CeSTMR_e_Engaged_BrakeOnly_M182		((TeSTMR_e_ACCSystemSts_M182)3U)
#define CeSTMR_e_Cancel_M182		((TeSTMR_e_ACCSystemSts_M182)4U)
#define CeSTMR_e_NCC_Enbl_M182		((TeSTMR_e_ACCSystemSts_M182)5U)
#define CeSTMR_e_NCC_Engaged_M182		((TeSTMR_e_ACCSystemSts_M182)6U)
#define CeSTMR_e_NCC_Cancel_M182		((TeSTMR_e_ACCSystemSts_M182)7U)
#define CeSTMR_e_HAS_BSoC		((TeSTMR_e_ACCSystemSts_M182)8U)
#define CeSTMR_e_RRCC_EnblNoSet		((TeSTMR_e_ACCSystemSts_M182)9U)
#define CeSTMR_e_RRCC_EnblWithSet		((TeSTMR_e_ACCSystemSts_M182)10U)
#define CeSTMR_e_RRCC_Engaged		((TeSTMR_e_ACCSystemSts_M182)11U)
#define CeSTMR_e_ACCSystem_SNA		((TeSTMR_e_ACCSystemSts_M182)15U)
#endif

/*
* Enum TeSTMR_e_LimitMaxPowerSel 
* Default Value:CeSTMR_e_Not_Active 
*/
#ifndef TeSTMR_e_LimitMaxPowerSel
typedef uint8 TeSTMR_e_LimitMaxPowerSel;
#define CeSTMR_e_Not_Active		((TeSTMR_e_LimitMaxPowerSel)0U)
#define CeSTMR_e_Active		((TeSTMR_e_LimitMaxPowerSel)1U)
#define CeSTMR_e_Reserved_1		((TeSTMR_e_LimitMaxPowerSel)2U)
#define CeSTMR_e_Reserved_2		((TeSTMR_e_LimitMaxPowerSel)3U)
#endif

/*
* Enum TeSTRR_e_HybStrtrSt 
* Default Value:CeSTRR_e_KeyOffSt 
*/
#ifndef TeSTRR_e_HybStrtrSt
typedef uint8 TeSTRR_e_HybStrtrSt;
#define CeSTRR_e_KeyOffSt		((TeSTRR_e_HybStrtrSt)0U)
#define CeSTRR_e_EngOffSt		((TeSTRR_e_HybStrtrSt)1U)
#define CeSTRR_e_EngStartingSt		((TeSTRR_e_HybStrtrSt)2U)
#define CeSTRR_e_EngRunningSt		((TeSTRR_e_HybStrtrSt)3U)
#define CeSTRR_e_EngStoppingSt		((TeSTRR_e_HybStrtrSt)4U)
#endif

/*
* Enum TeSTRR_e_EngStrtStopType 
* Default Value:CeSTRR_e_NoAction 
*/
#ifndef TeSTRR_e_EngStrtStopType
typedef uint8 TeSTRR_e_EngStrtStopType;
#define CeSTRR_e_NoAction		((TeSTRR_e_EngStrtStopType)0U)
#define CeSTRR_e_KeyCrnkHybTrq		((TeSTRR_e_EngStrtStopType)1U)
#define CeSTRR_e_KeyCrnkEngTrq		((TeSTRR_e_EngStrtStopType)2U)
#define CeSTRR_e_KeyCrnkLowPwrB		((TeSTRR_e_EngStrtStopType)3U)
#define CeSTRR_e_KeyCrnkGeneric		((TeSTRR_e_EngStrtStopType)4U)
#define CeSTRR_e_AStrtSmooth		((TeSTRR_e_EngStrtStopType)5U)
#define CeSTRR_e_AStrtNormal		((TeSTRR_e_EngStrtStopType)6U)
#define CeSTRR_e_AStrtAggrsv		((TeSTRR_e_EngStrtStopType)7U)
#define CeSTRR_e_AStrtGeneric		((TeSTRR_e_EngStrtStopType)8U)
#define CeSTRR_e_CompressTst		((TeSTRR_e_EngStrtStopType)9U)
#define CeSTRR_e_KeyCrnkGreenEng		((TeSTRR_e_EngStrtStopType)10U)
#define CeSTRR_e_StopCtrld		((TeSTRR_e_EngStrtStopType)11U)
#define CeSTRR_e_StopImmed		((TeSTRR_e_EngStrtStopType)12U)
#define CeSTRR_e_AStrtReverse		((TeSTRR_e_EngStrtStopType)13U)
#define CeSTRR_e_AStrtCltchStrt		((TeSTRR_e_EngStrtStopType)14U)
#define CeSTRR_e_AStrtImpStrt		((TeSTRR_e_EngStrtStopType)15U)
#define CeSTRR_e_AStrtEMStrt		((TeSTRR_e_EngStrtStopType)16U)
#define CeSTRR_e_LoPwrEMStrt		((TeSTRR_e_EngStrtStopType)17U)
#endif

/*
* Enum TeSTRR_e_STMTrigger 
* Default Value:CeSTRR_e_InactiveTr 
*/
#ifndef TeSTRR_e_STMTrigger
typedef uint8 TeSTRR_e_STMTrigger;
#define CeSTRR_e_InactiveTr		((TeSTRR_e_STMTrigger)0U)
#define CeSTRR_e_EngStartTr		((TeSTRR_e_STMTrigger)1U)
#define CeSTRR_e_EngRunTr		((TeSTRR_e_STMTrigger)2U)
#define CeSTRR_e_EngStopTr		((TeSTRR_e_STMTrigger)3U)
#define CeSTRR_e_EngOffTr		((TeSTRR_e_STMTrigger)4U)
#define CeSTRR_e_KeyOffFailTr		((TeSTRR_e_STMTrigger)5U)
#endif

/*
* Enum TeSTRR_e_SilentStrtChkMod 
* Default Value:CeSTRR_e_Normal 
*/
#ifndef TeSTRR_e_SilentStrtChkMod
typedef uint8 TeSTRR_e_SilentStrtChkMod;
#define CeSTRR_e_Normal		((TeSTRR_e_SilentStrtChkMod)0U)
#define CeSTRR_e_SilentStrtEntry		((TeSTRR_e_SilentStrtChkMod)1U)
#define CeSTRR_e_SilentStrtExit		((TeSTRR_e_SilentStrtChkMod)2U)
#define CeSTRR_e_EvalDlydKeyCrank		((TeSTRR_e_SilentStrtChkMod)3U)
#endif

/*
* Enum TeSTRR_e_AutoStopStartOvrrd 
* Default Value:CeSTRR_e_NoOvrrd 
*/
#ifndef TeSTRR_e_AutoStopStartOvrrd
typedef uint8 TeSTRR_e_AutoStopStartOvrrd;
#define CeSTRR_e_NoOvrrd		((TeSTRR_e_AutoStopStartOvrrd)0U)
#define CeSTRR_e_OvrrdEngOff		((TeSTRR_e_AutoStopStartOvrrd)1U)
#define CeSTRR_e_OvrrdEngOn		((TeSTRR_e_AutoStopStartOvrrd)2U)
#define CeSTRR_e_OvrrdInvalid		((TeSTRR_e_AutoStopStartOvrrd)3U)
#define CeSTRR_e_OvrrdImmedStop		((TeSTRR_e_AutoStopStartOvrrd)4U)
#endif

/*
* Enum TeSTRR_e_DrivabltyPbattLmt 
* Default Value:CeSTRR_e_PbattLT_Drvbility 
*/
#ifndef TeSTRR_e_DrivabltyPbattLmt
typedef uint8 TeSTRR_e_DrivabltyPbattLmt;
#define CeSTRR_e_PbattLT_Drvbility		((TeSTRR_e_DrivabltyPbattLmt)0U)
#define CeSTRR_e_PbattST_Drvbility		((TeSTRR_e_DrivabltyPbattLmt)1U)
#define CeSTRR_e_PbattBst_Drvbility		((TeSTRR_e_DrivabltyPbattLmt)2U)
#endif

/*
* Enum TeSTRR_e_EngOffRsnSTGC 
* Default Value:CeSTRR_e_None 
*/
#ifndef TeSTRR_e_EngOffRsnSTGC
typedef uint8 TeSTRR_e_EngOffRsnSTGC;
#define CeSTRR_e_None		((TeSTRR_e_EngOffRsnSTGC)0U)
#define CeSTRR_e_ECM		((TeSTRR_e_EngOffRsnSTGC)1U)
#define CeSTRR_e_HCP		((TeSTRR_e_EngOffRsnSTGC)2U)
#define CeSTRR_e_ECMHCP		((TeSTRR_e_EngOffRsnSTGC)3U)
#define CeSTRR_e_RemStp		((TeSTRR_e_EngOffRsnSTGC)4U)
#endif

/*
* Enum TeSTRR_e_FCMdReqOvrrd 
* Default Value:CeSTRR_e_NoOvrd 
*/
#ifndef TeSTRR_e_FCMdReqOvrrd
typedef uint8 TeSTRR_e_FCMdReqOvrrd;
#define CeSTRR_e_Off		((TeSTRR_e_FCMdReqOvrrd)0U)
#define CeSTRR_e_Run		((TeSTRR_e_FCMdReqOvrrd)1U)
#define CeSTRR_e_ImmedShutDown		((TeSTRR_e_FCMdReqOvrrd)2U)
#define CeSTRR_e_QuickStop		((TeSTRR_e_FCMdReqOvrrd)3U)
#define CeSTRR_e_NoOvrd		((TeSTRR_e_FCMdReqOvrrd)4U)
#endif

/*
* Enum TeTAIB_e_FltDtctnSt 
* Default Value:CeTAIB_e_NoErr 
*/
#ifndef TeTAIB_e_FltDtctnSt
typedef uint8 TeTAIB_e_FltDtctnSt;
#define CeTAIB_e_NoErr		((TeTAIB_e_FltDtctnSt)0U)
#define CeTAIB_e_ErrM0		((TeTAIB_e_FltDtctnSt)1U)
#define CeTAIB_e_ErrM1		((TeTAIB_e_FltDtctnSt)2U)
#define CeTAIB_e_ErrM2		((TeTAIB_e_FltDtctnSt)3U)
#define CeTAIB_e_ErrM0FU		((TeTAIB_e_FltDtctnSt)4U)
#define CeTAIB_e_ErrM1FU		((TeTAIB_e_FltDtctnSt)5U)
#define CeTAIB_e_ErrM2FU		((TeTAIB_e_FltDtctnSt)6U)
#endif

/*
* Enum TeTAIB_e_ToutMeasSt 
* Default Value:CeTAIB_e_Normal 
*/
#ifndef TeTAIB_e_ToutMeasSt
typedef uint8 TeTAIB_e_ToutMeasSt;
#define CeTAIB_e_Normal		((TeTAIB_e_ToutMeasSt)0U)
#define CeTAIB_e_TimeoutRunning		((TeTAIB_e_ToutMeasSt)1U)
#define CeTAIB_e_TimeoutEnd		((TeTAIB_e_ToutMeasSt)2U)
#define CeTAIB_e_Invalid		((TeTAIB_e_ToutMeasSt)3U)
#endif

/*
* Enum TeTAIR_e_AGS_ErrLIN 
* Default Value:CeTAIR_e_AGS_NO_ERROR 
*/
#ifndef TeTAIR_e_AGS_ErrLIN
typedef uint8 TeTAIR_e_AGS_ErrLIN;
#define CeTAIR_e_AGS_NO_ERROR		((TeTAIR_e_AGS_ErrLIN)0U)
#define CeTAIR_e_AGS_LIN_SHORT		((TeTAIR_e_AGS_ErrLIN)1U)
#define CeTAIR_e_AGS_LIN_TO		((TeTAIR_e_AGS_ErrLIN)2U)
#define CeTAIR_e_AGS_SNA		((TeTAIR_e_AGS_ErrLIN)3U)
#endif

/*
* Enum TeTAIR_e_IO_CntrlSt 
* Default Value:CeTAIR_e_Return_Control_to_ECU 
*/
#ifndef TeTAIR_e_IO_CntrlSt
typedef uint8 TeTAIR_e_IO_CntrlSt;
#define CeTAIR_e_Return_Control_to_ECU		((TeTAIR_e_IO_CntrlSt)0U)
#define CeTAIR_e_Reset_to_Default		((TeTAIR_e_IO_CntrlSt)1U)
#define CeTAIR_e_Short_Term_Adjustment		((TeTAIR_e_IO_CntrlSt)3U)
#endif

/*
* Enum TeTAIR_e_EXV_Calibration_Sts 
* Default Value:CeTAIR_e_EXV_Calibration_Complete 
*/
#ifndef TeTAIR_e_EXV_Calibration_Sts
typedef uint8 TeTAIR_e_EXV_Calibration_Sts;
#define CeTAIR_e_EXV_Calibration_Taking_Place		((TeTAIR_e_EXV_Calibration_Sts)0U)
#define CeTAIR_e_EXV_Calibration_Fail		((TeTAIR_e_EXV_Calibration_Sts)1U)
#define CeTAIR_e_EXV_Calibration_Complete		((TeTAIR_e_EXV_Calibration_Sts)2U)
#define CeTAIR_e_EXV_Calibration_SNA		((TeTAIR_e_EXV_Calibration_Sts)3U)
#endif

/*
* Enum TeTAIR_e_EXV_Status 
* Default Value:CeTAIR_e_EXV_Status_OK 
*/
#ifndef TeTAIR_e_EXV_Status
typedef uint8 TeTAIR_e_EXV_Status;
#define CeTAIR_e_EXV_Status_OK		((TeTAIR_e_EXV_Status)0U)
#define CeTAIR_e_EXV_Status_Init		((TeTAIR_e_EXV_Status)1U)
#define CeTAIR_e_EXV_Status_Inoperative		((TeTAIR_e_EXV_Status)2U)
#define CeTAIR_e_EXV_Status_SNA		((TeTAIR_e_EXV_Status)3U)
#endif

/*
* Enum TeTAIR_e_EXV_ErrorMsg 
* Default Value:CeTAIR_e_EXV_ErrorMsg_OK 
*/
#ifndef TeTAIR_e_EXV_ErrorMsg
typedef uint8 TeTAIR_e_EXV_ErrorMsg;
#define CeTAIR_e_EXV_ErrorMsg_OK		((TeTAIR_e_EXV_ErrorMsg)0U)
#define CeTAIR_e_EXV_ErrorMsg_OV		((TeTAIR_e_EXV_ErrorMsg)1U)
#define CeTAIR_e_EXV_ErrorMsg_UV		((TeTAIR_e_EXV_ErrorMsg)2U)
#define CeTAIR_e_EXV_ErrorMsg_OT		((TeTAIR_e_EXV_ErrorMsg)3U)
#define CeTAIR_e_EXV_ErrorMsg_InFlt		((TeTAIR_e_EXV_ErrorMsg)4U)
#define CeTAIR_e_EXV_ErrorMsg_OC		((TeTAIR_e_EXV_ErrorMsg)5U)
#define CeTAIR_e_EXV_ErrorMsg_MB		((TeTAIR_e_EXV_ErrorMsg)6U)
#define CeTAIR_e_EXV_ErrorMsg_UBP		((TeTAIR_e_EXV_ErrorMsg)7U)
#define CeTAIR_e_EXV_ErrorMsg_SNA		((TeTAIR_e_EXV_ErrorMsg)15U)
#endif

/*
* Enum TeTAIR_e_CPV_Calibration_Sts 
* Default Value:CeTAIR_e_CPV_Calibration_Complete 
*/
#ifndef TeTAIR_e_CPV_Calibration_Sts
typedef uint8 TeTAIR_e_CPV_Calibration_Sts;
#define CeTAIR_e_CPV_Calibration_Not_Complete		((TeTAIR_e_CPV_Calibration_Sts)0U)
#define CeTAIR_e_CPV_Calibration_Taking_Place		((TeTAIR_e_CPV_Calibration_Sts)1U)
#define CeTAIR_e_CPV_Calibration_Complete		((TeTAIR_e_CPV_Calibration_Sts)2U)
#define CeTAIR_e_CPV_Calibration_Fail		((TeTAIR_e_CPV_Calibration_Sts)3U)
#endif

/*
* Enum TeTAIR_e_DVC_HTCV_Calibration 
* Default Value:CeTAIR_e_DVC_HTCV_Calibration_Start 
*/
#ifndef TeTAIR_e_DVC_HTCV_Calibration
typedef uint8 TeTAIR_e_DVC_HTCV_Calibration;
#define CeTAIR_e_DVC_HTCV_Calibration_Start		((TeTAIR_e_DVC_HTCV_Calibration)1U)
#define CeTAIR_e_DVC_HTCV_Calibration_Stop		((TeTAIR_e_DVC_HTCV_Calibration)2U)
#define CeTAIR_e_DVC_HTCV_Calibration_Result		((TeTAIR_e_DVC_HTCV_Calibration)3U)
#endif

/*
* Enum TeTAIR_e_CPV_Status 
* Default Value:CeTAIR_e_CPV_Status_OK 
*/
#ifndef TeTAIR_e_CPV_Status
typedef uint8 TeTAIR_e_CPV_Status;
#define CeTAIR_e_CPV_Status_OK		((TeTAIR_e_CPV_Status)0U)
#define CeTAIR_e_CPV_Status_Block		((TeTAIR_e_CPV_Status)1U)
#define CeTAIR_e_CPV_Status_Calibration_Rq		((TeTAIR_e_CPV_Status)2U)
#endif

/*
* Enum TeTAIR_e_CompStat 
* Default Value:CeTAIR_e_NormalOp 
*/
#ifndef TeTAIR_e_CompStat
typedef uint8 TeTAIR_e_CompStat;
#define CeTAIR_e_NormalOp		((TeTAIR_e_CompStat)0U)
#define CeTAIR_e_Degraded		((TeTAIR_e_CompStat)1U)
#define CeTAIR_e_Inoperative		((TeTAIR_e_CompStat)2U)
#endif

/*
* Enum TeTAIR_e_CompFltSts 
* Default Value:CeTAIR_e_CompFltSts_NoFault 
*/
#ifndef TeTAIR_e_CompFltSts
typedef uint8 TeTAIR_e_CompFltSts;
#define CeTAIR_e_CompFltSts_NoFault		((TeTAIR_e_CompFltSts)0U)
#define CeTAIR_e_CompFltSts_UdrVltg		((TeTAIR_e_CompFltSts)1U)
#define CeTAIR_e_CompFltSts_OvrVltg		((TeTAIR_e_CompFltSts)2U)
#define CeTAIR_e_CompFltSts_OvrTmp		((TeTAIR_e_CompFltSts)3U)
#define CeTAIR_e_CompFltSts_InputCtlr		((TeTAIR_e_CompFltSts)4U)
#define CeTAIR_e_CompFltSts_CrntFlty		((TeTAIR_e_CompFltSts)5U)
#define CeTAIR_e_CompFltSts_InternFlt		((TeTAIR_e_CompFltSts)6U)
#define CeTAIR_e_CompFltSts_MemoryFlty		((TeTAIR_e_CompFltSts)7U)
#define CeTAIR_e_CompFltSts_Rotor_Lock		((TeTAIR_e_CompFltSts)8U)
#define CeTAIR_e_CompFltSts_LOC_with_HCP		((TeTAIR_e_CompFltSts)9U)
#define CeTAIR_e_CompFltSts_LOC_with_ORC		((TeTAIR_e_CompFltSts)10U)
#define CeTAIR_e_CompFltSts_SNA		((TeTAIR_e_CompFltSts)15U)
#endif

/*
* Enum TeTAIR_e_ECM_AC_ClutchSts 
* Default Value:CeTAIR_e_ClutchSts_Default 
*/
#ifndef TeTAIR_e_ECM_AC_ClutchSts
typedef uint8 TeTAIR_e_ECM_AC_ClutchSts;
#define CeTAIR_e_ClutchSts_Default		((TeTAIR_e_ECM_AC_ClutchSts)0U)
#define CeTAIR_e_ClutchSts_ECMDsblsClutch		((TeTAIR_e_ECM_AC_ClutchSts)1U)
#define CeTAIR_e_ClutchSts_ACnotSlctd		((TeTAIR_e_ECM_AC_ClutchSts)2U)
#define CeTAIR_e_ClutchSts_ClutchEngd		((TeTAIR_e_ECM_AC_ClutchSts)3U)
#endif

/*
* Enum TeTAIR_e_HTRBV_SystemState 
* Default Value:CeTAIR_e_Normal 
*/
#ifndef TeTAIR_e_HTRBV_SystemState
typedef uint8 TeTAIR_e_HTRBV_SystemState;
#define CeTAIR_e_Normal		((TeTAIR_e_HTRBV_SystemState)0U)
#define CeTAIR_e_Error		((TeTAIR_e_HTRBV_SystemState)1U)
#define CeTAIR_e_Calibrating		((TeTAIR_e_HTRBV_SystemState)2U)
#define CeTAIR_e_Sleep		((TeTAIR_e_HTRBV_SystemState)3U)
#endif

/*
* Enum TeTAIR_e_AGS_Calibration_Sts 
* Default Value:CeTAIR_e_AGS_NotCalibrated 
*/
#ifndef TeTAIR_e_AGS_Calibration_Sts
typedef uint8 TeTAIR_e_AGS_Calibration_Sts;
#define CeTAIR_e_AGS_Calibrated		((TeTAIR_e_AGS_Calibration_Sts)0U)
#define CeTAIR_e_AGS_NotCalibrated		((TeTAIR_e_AGS_Calibration_Sts)1U)
#endif

/*
* Enum TeTAIR_e_HTRBV_Err_Ecu 
* Default Value:CeTAIR_e_NoEcuError 
*/
#ifndef TeTAIR_e_HTRBV_Err_Ecu
typedef uint8 TeTAIR_e_HTRBV_Err_Ecu;
#define CeTAIR_e_NoEcuError		((TeTAIR_e_HTRBV_Err_Ecu)0U)
#define CeTAIR_e_CoreError		((TeTAIR_e_HTRBV_Err_Ecu)1U)
#define CeTAIR_e_WatchdogTimeout		((TeTAIR_e_HTRBV_Err_Ecu)2U)
#define CeTAIR_e_CoreAndWatchdogTimeout		((TeTAIR_e_HTRBV_Err_Ecu)3U)
#endif

/*
* Enum TeTAIR_e_HTRBV_ErrLinCom 
* Default Value:CeTAIR_e_LINComNoErrors 
*/
#ifndef TeTAIR_e_HTRBV_ErrLinCom
typedef uint8 TeTAIR_e_HTRBV_ErrLinCom;
#define CeTAIR_e_LINComNoErrors		((TeTAIR_e_HTRBV_ErrLinCom)0U)
#define CeTAIR_e_ResponseError		((TeTAIR_e_HTRBV_ErrLinCom)1U)
#define CeTAIR_e_ResponseTimeout		((TeTAIR_e_HTRBV_ErrLinCom)2U)
#endif

/*
* Enum TeTAIR_e_HTRBV_Err_Voltage 
* Default Value:CeTAIR_e_NoVoltError 
*/
#ifndef TeTAIR_e_HTRBV_Err_Voltage
typedef uint8 TeTAIR_e_HTRBV_Err_Voltage;
#define CeTAIR_e_NoVoltError		((TeTAIR_e_HTRBV_Err_Voltage)0U)
#define CeTAIR_e_UnderRange		((TeTAIR_e_HTRBV_Err_Voltage)1U)
#define CeTAIR_e_OverRange		((TeTAIR_e_HTRBV_Err_Voltage)2U)
#endif

/*
* Enum TeTAIR_e_HTRBV_ErrPosition 
* Default Value:CeTAIR_e_NoPosError 
*/
#ifndef TeTAIR_e_HTRBV_ErrPosition
typedef uint8 TeTAIR_e_HTRBV_ErrPosition;
#define CeTAIR_e_NoPosError		((TeTAIR_e_HTRBV_ErrPosition)0U)
#define CeTAIR_e_Re_ReferencingInProg		((TeTAIR_e_HTRBV_ErrPosition)1U)
#define CeTAIR_e_StallDetect_ReduceRng		((TeTAIR_e_HTRBV_ErrPosition)2U)
#define CeTAIR_e_End_StopNotDetected		((TeTAIR_e_HTRBV_ErrPosition)3U)
#define CeTAIR_e_Self_CalibrationError		((TeTAIR_e_HTRBV_ErrPosition)4U)
#endif

/*
* Enum TeTAIR_e_HTRBV_Err_Motor 
* Default Value:CeTAIR_e_NoMotorError 
*/
#ifndef TeTAIR_e_HTRBV_Err_Motor
typedef uint8 TeTAIR_e_HTRBV_Err_Motor;
#define CeTAIR_e_NoMotorError		((TeTAIR_e_HTRBV_Err_Motor)0U)
#define CeTAIR_e_OpenCircuit		((TeTAIR_e_HTRBV_Err_Motor)1U)
#define CeTAIR_e_ShortCircuitToVBatt		((TeTAIR_e_HTRBV_Err_Motor)2U)
#define CeTAIR_e_ShortCircuitToGround		((TeTAIR_e_HTRBV_Err_Motor)3U)
#define CeTAIR_e_FETOverTemperature		((TeTAIR_e_HTRBV_Err_Motor)4U)
#define CeTAIR_e_FETUnderTemperature		((TeTAIR_e_HTRBV_Err_Motor)5U)
#define CeTAIR_e_FETOverCurrent		((TeTAIR_e_HTRBV_Err_Motor)6U)
#endif

/*
* Enum TeTAIR_e_RearDefrostSts 
* Default Value:CeTAIR_e_RearDefrostSts_OFF 
*/
#ifndef TeTAIR_e_RearDefrostSts
typedef uint8 TeTAIR_e_RearDefrostSts;
#define CeTAIR_e_RearDefrostSts_OFF		((TeTAIR_e_RearDefrostSts)0U)
#define CeTAIR_e_RearDefrostSts_ON		((TeTAIR_e_RearDefrostSts)1U)
#define CeTAIR_e_RearDefrostSts_Blink		((TeTAIR_e_RearDefrostSts)2U)
#define CeTAIR_e_RearDefrostSts_SNA		((TeTAIR_e_RearDefrostSts)3U)
#endif

/*
* Enum TeTAPR_e_AHS_Type 
* Default Value:CeTAPR_e_AHS_T 
*/
#ifndef TeTAPR_e_AHS_Type
typedef uint8 TeTAPR_e_AHS_Type;
#define CeTAPR_e_AHS_T		((TeTAPR_e_AHS_Type)0U)
#define CeTAPR_e_AHS_F		((TeTAPR_e_AHS_Type)1U)
#define CeTAPR_e_AHS_C		((TeTAPR_e_AHS_Type)2U)
#endif

/*
* Enum TeTAPR_e_HCP_Application 
* Default Value:CeTAPR_e_HCP_T 
*/
#ifndef TeTAPR_e_HCP_Application
typedef uint8 TeTAPR_e_HCP_Application;
#define CeTAPR_e_HCP_T		((TeTAPR_e_HCP_Application)0U)
#define CeTAPR_e_HCP_F		((TeTAPR_e_HCP_Application)1U)
#define CeTAPR_e_HCP_PT		((TeTAPR_e_HCP_Application)2U)
#define CeTAPR_e_HCP_PF		((TeTAPR_e_HCP_Application)3U)
#define CeTAPR_e_HCP_UF		((TeTAPR_e_HCP_Application)4U)
#endif

/*
* Enum TeTAPR_e_TAOP_Flts 
* Default Value:CeTAPD_e_TAOP_Undefined 
*/
#ifndef TeTAPR_e_TAOP_Flts
typedef uint8 TeTAPR_e_TAOP_Flts;
#define CeTAPD_e_TAOP_Undefined		((TeTAPR_e_TAOP_Flts)0U)
#define CeTAPD_e_TAOP_MtrCurRng		((TeTAPR_e_TAOP_Flts)1U)
#define CeTAPD_e_TAOP_CtlrTempHi		((TeTAPR_e_TAOP_Flts)2U)
#define CeTAPD_e_TAOP_CtlrOverTemp		((TeTAPR_e_TAOP_Flts)3U)
#define CeTAPD_e_TAOP_MtrVltLo		((TeTAPR_e_TAOP_Flts)4U)
#define CeTAPD_e_TAOP_TempSnsr		((TeTAPR_e_TAOP_Flts)5U)
#define CeTAPD_e_TAOP_MtrDrvCkt		((TeTAPR_e_TAOP_Flts)6U)
#define CeTAPD_e_TAOP_MtrPhaseCkt		((TeTAPR_e_TAOP_Flts)7U)
#define CeTAPD_e_TAOP_InvldPWM		((TeTAPR_e_TAOP_Flts)8U)
#define CeTAPD_e_TAOP_CtlrProc		((TeTAPR_e_TAOP_Flts)9U)
#define CeTAPD_e_TAOP_MtrNoStrt		((TeTAPR_e_TAOP_Flts)10U)
#define CeTAPD_e_TAOP_PrologueValue		((TeTAPR_e_TAOP_Flts)100U)
#define CeTAPD_e_TAOP_EpilogueValue		((TeTAPR_e_TAOP_Flts)101U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_Sts 
* Default Value:CeTAPR_e_NO_REQ 
*/
#ifndef TeTAPR_e_TransAuxPmp_Sts
typedef uint8 TeTAPR_e_TransAuxPmp_Sts;
#define CeTAPR_e_NO_REQ		((TeTAPR_e_TransAuxPmp_Sts)0U)
#define CeTAPR_e_REQ_Honored		((TeTAPR_e_TransAuxPmp_Sts)1U)
#define CeTAPR_e_REQ_Denied		((TeTAPR_e_TransAuxPmp_Sts)2U)
#define CeTAPR_e_REQ_OUT_RANGE		((TeTAPR_e_TransAuxPmp_Sts)3U)
#define CeTAPR_e_SNA		((TeTAPR_e_TransAuxPmp_Sts)4U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_TmpErr 
* Default Value:CeTAPR_e_TmpErr_NO_FAULT 
*/
#ifndef TeTAPR_e_TransAuxPmp_TmpErr
typedef uint8 TeTAPR_e_TransAuxPmp_TmpErr;
#define CeTAPR_e_TmpErr_NO_FAULT		((TeTAPR_e_TransAuxPmp_TmpErr)0U)
#define CeTAPR_e_OVER_TEPM_FAULT		((TeTAPR_e_TransAuxPmp_TmpErr)1U)
#define CeTAPR_e_UNDER_TEMP_FAULT		((TeTAPR_e_TransAuxPmp_TmpErr)2U)
#define CeTAPR_e_TmpErr_SNA		((TeTAPR_e_TransAuxPmp_TmpErr)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_CrntErr 
* Default Value:CeTAPR_e_CrntErr_NO_FAULT 
*/
#ifndef TeTAPR_e_TransAuxPmp_CrntErr
typedef uint8 TeTAPR_e_TransAuxPmp_CrntErr;
#define CeTAPR_e_CrntErr_NO_FAULT		((TeTAPR_e_TransAuxPmp_CrntErr)0U)
#define CeTAPR_e_OVER_CUR_FAULT		((TeTAPR_e_TransAuxPmp_CrntErr)1U)
#define CeTAPR_e_UNDER_CUR_FAULT		((TeTAPR_e_TransAuxPmp_CrntErr)2U)
#define CeTAPR_e_CrntErr_SNA		((TeTAPR_e_TransAuxPmp_CrntErr)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_VltgtErr 
* Default Value:CeTAPR_e_VltgtErr_NO_FAULT 
*/
#ifndef TeTAPR_e_TransAuxPmp_VltgtErr
typedef uint8 TeTAPR_e_TransAuxPmp_VltgtErr;
#define CeTAPR_e_VltgtErr_NO_FAULT		((TeTAPR_e_TransAuxPmp_VltgtErr)0U)
#define CeTAPR_e_OVER_VLTG_FAULT		((TeTAPR_e_TransAuxPmp_VltgtErr)1U)
#define CeTAPR_e_UNDER_VLTG_FAULT		((TeTAPR_e_TransAuxPmp_VltgtErr)2U)
#define CeTAPR_e_VltgtErr_SNA		((TeTAPR_e_TransAuxPmp_VltgtErr)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_SpdErr 
* Default Value:CeTAPR_e_SpdErr_NO_FAULT 
*/
#ifndef TeTAPR_e_TransAuxPmp_SpdErr
typedef uint8 TeTAPR_e_TransAuxPmp_SpdErr;
#define CeTAPR_e_SpdErr_NO_FAULT		((TeTAPR_e_TransAuxPmp_SpdErr)0U)
#define CeTAPR_e_OVER_SPD_FAULT		((TeTAPR_e_TransAuxPmp_SpdErr)1U)
#define CeTAPR_e_UNDER_SPD_FAULT		((TeTAPR_e_TransAuxPmp_SpdErr)2U)
#define CeTAPR_e_SpdErr_SNA		((TeTAPR_e_TransAuxPmp_SpdErr)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_StallEvnt 
* Default Value:CeTAPR_e_StallEvnt_FALSE 
*/
#ifndef TeTAPR_e_TransAuxPmp_StallEvnt
typedef uint8 TeTAPR_e_TransAuxPmp_StallEvnt;
#define CeTAPR_e_StallEvnt_FALSE		((TeTAPR_e_TransAuxPmp_StallEvnt)0U)
#define CeTAPR_e_TEP_STALL		((TeTAPR_e_TransAuxPmp_StallEvnt)1U)
#define CeTAPR_e_PER_STALL		((TeTAPR_e_TransAuxPmp_StallEvnt)2U)
#define CeTAPR_e_StallEvnt_SNA		((TeTAPR_e_TransAuxPmp_StallEvnt)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_Stat 
* Default Value:CeTAPR_e_TAP_Stat_OFF 
*/
#ifndef TeTAPR_e_TransAuxPmp_Stat
typedef uint8 TeTAPR_e_TransAuxPmp_Stat;
#define CeTAPR_e_TAP_Stat_OFF		((TeTAPR_e_TransAuxPmp_Stat)0U)
#define CeTAPR_e_TAP_Stat_ON		((TeTAPR_e_TransAuxPmp_Stat)1U)
#define CeTAPR_e_TAP_Stat_NotUsed		((TeTAPR_e_TransAuxPmp_Stat)2U)
#define CeTAPR_e_TAP_Stat_SNA		((TeTAPR_e_TransAuxPmp_Stat)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_TempSrc 
* Default Value:CeTAPR_e_TempSrc_INIT 
*/
#ifndef TeTAPR_e_TransAuxPmp_TempSrc
typedef uint8 TeTAPR_e_TransAuxPmp_TempSrc;
#define CeTAPR_e_TempSrc_INIT		((TeTAPR_e_TransAuxPmp_TempSrc)0U)
#define CeTAPR_e_TempSrc_Poke		((TeTAPR_e_TransAuxPmp_TempSrc)1U)
#define CeTAPR_e_TempSrc_Fsft		((TeTAPR_e_TransAuxPmp_TempSrc)2U)
#define CeTAPR_e_TempSrc_Tmot		((TeTAPR_e_TransAuxPmp_TempSrc)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_PostRunCmd 
* Default Value:CeTAPR_e_TAP_PostRunCmd_NoPostRun 
*/
#ifndef TeTAPR_e_TransAuxPmp_PostRunCmd
typedef uint8 TeTAPR_e_TransAuxPmp_PostRunCmd;
#define CeTAPR_e_TAP_PostRunCmd_NoPostRun		((TeTAPR_e_TransAuxPmp_PostRunCmd)0U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_1		((TeTAPR_e_TransAuxPmp_PostRunCmd)1U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_2		((TeTAPR_e_TransAuxPmp_PostRunCmd)2U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_3		((TeTAPR_e_TransAuxPmp_PostRunCmd)3U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_4		((TeTAPR_e_TransAuxPmp_PostRunCmd)4U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_5		((TeTAPR_e_TransAuxPmp_PostRunCmd)5U)
#define CeTAPR_e_TAP_PostRunCmd_Stage_6		((TeTAPR_e_TransAuxPmp_PostRunCmd)6U)
#define CeTAPR_e_TAP_PostRunCmd_SNA		((TeTAPR_e_TransAuxPmp_PostRunCmd)7U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_TrueFalseSNA 
* Default Value:CeTAPR_e_TAP_TrueFalseSNA_False 
*/
#ifndef TeTAPR_e_TransAuxPmp_TrueFalseSNA
typedef uint8 TeTAPR_e_TransAuxPmp_TrueFalseSNA;
#define CeTAPR_e_TAP_TrueFalseSNA_True		((TeTAPR_e_TransAuxPmp_TrueFalseSNA)0U)
#define CeTAPR_e_TAP_TrueFalseSNA_False		((TeTAPR_e_TransAuxPmp_TrueFalseSNA)1U)
#define CeTAPR_e_TAP_TrueFalseSNA_SNA		((TeTAPR_e_TransAuxPmp_TrueFalseSNA)3U)
#endif

/*
* Enum TeTAPR_e_TransAuxPmp_FalseTrueSNA 
* Default Value:CeTAPR_e_TAP_FalseTrueSNA_False 
*/
#ifndef TeTAPR_e_TransAuxPmp_FalseTrueSNA
typedef uint8 TeTAPR_e_TransAuxPmp_FalseTrueSNA;
#define CeTAPR_e_TAP_FalseTrueSNA_False		((TeTAPR_e_TransAuxPmp_FalseTrueSNA)0U)
#define CeTAPR_e_TAP_FalseTrueSNA_True		((TeTAPR_e_TransAuxPmp_FalseTrueSNA)1U)
#define CeTAPR_e_TAP_FalseTrueSNA_SNA		((TeTAPR_e_TransAuxPmp_FalseTrueSNA)3U)
#endif

/*
* Enum TeTBPR_e_PatternSwActvStatus 
* Default Value:CeTBPR_e_NoSwitchActv 
*/
#ifndef TeTBPR_e_PatternSwActvStatus
typedef uint8 TeTBPR_e_PatternSwActvStatus;
#define CeTBPR_e_NoSwitchActv		((TeTBPR_e_PatternSwActvStatus)0U)
#define CeTBPR_e_Switch1_Actv		((TeTBPR_e_PatternSwActvStatus)1U)
#define CeTBPR_e_Switch2_Actv		((TeTBPR_e_PatternSwActvStatus)2U)
#define CeTBPR_e_Switch3_Actv		((TeTBPR_e_PatternSwActvStatus)3U)
#define CeTBPR_e_Switch4_Actv		((TeTBPR_e_PatternSwActvStatus)4U)
#endif

/*
* Enum TeTCCR_e_LCCStatus 
* Default Value:CeTCCR_e_LCCReleased 
*/
#ifndef TeTCCR_e_LCCStatus
typedef uint8 TeTCCR_e_LCCStatus;
#define CeTCCR_e_LCCReleased		((TeTCCR_e_LCCStatus)0U)
#define CeTCCR_e_LCCClosing		((TeTCCR_e_LCCStatus)1U)
#define CeTCCR_e_LCCOpening		((TeTCCR_e_LCCStatus)2U)
#define CeTCCR_e_LCCLocked		((TeTCCR_e_LCCStatus)3U)
#endif

/*
* Enum TeTHMR_e_SvcLamp 
* Default Value:CeTHMR_e_SvcLampOff 
*/
#ifndef TeTHMR_e_SvcLamp
typedef uint8 TeTHMR_e_SvcLamp;
#define CeTHMR_e_SvcLampOff		((TeTHMR_e_SvcLamp)0U)
#define CeTHMR_e_SvcLampOn		((TeTHMR_e_SvcLamp)1U)
#define CeTHMR_e_SvcLampBlink		((TeTHMR_e_SvcLamp)2U)
#define CeTHMR_e_SvcLampSNA		((TeTHMR_e_SvcLamp)3U)
#endif

/*
* Enum TeTHMR_e_LogisticPowerModeSts 
* Default Value:CeTHMR_e_Standard_Power 
*/
#ifndef TeTHMR_e_LogisticPowerModeSts
typedef uint8 TeTHMR_e_LogisticPowerModeSts;
#define CeTHMR_e_Standard_Power		((TeTHMR_e_LogisticPowerModeSts)0U)
#define CeTHMR_e_Logistic_Mode_ON		((TeTHMR_e_LogisticPowerModeSts)1U)
#define CeTHMR_e_Logistic_Mode_PR		((TeTHMR_e_LogisticPowerModeSts)2U)
#endif

/*
* Enum TeTHMR_e_LT_PsvPmp_PostRunCmd 
* Default Value:CeTHMR_e_LT_PsvPmp_NoPostRun 
*/
#ifndef TeTHMR_e_LT_PsvPmp_PostRunCmd
typedef uint8 TeTHMR_e_LT_PsvPmp_PostRunCmd;
#define CeTHMR_e_LT_PsvPmp_NoPostRun		((TeTHMR_e_LT_PsvPmp_PostRunCmd)0U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor1mn2000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)1U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor1mn4000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)2U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor2mn2000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)3U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor2mn4000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)4U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor3mn2000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)5U)
#define CeTHMR_e_LT_PsvPmp_PostRunFor3mn4000RPM		((TeTHMR_e_LT_PsvPmp_PostRunCmd)6U)
#define CeTHMR_e_LT_PsvPmp_PostRunSNA		((TeTHMR_e_LT_PsvPmp_PostRunCmd)7U)
#endif

/*
* Enum TeTHMR_e_HT_AuxPmp_PostRunCmd 
* Default Value:CeTHMR_e_HT_AuxPmp_NoPostRun 
*/
#ifndef TeTHMR_e_HT_AuxPmp_PostRunCmd
typedef uint8 TeTHMR_e_HT_AuxPmp_PostRunCmd;
#define CeTHMR_e_HT_AuxPmp_NoPostRun		((TeTHMR_e_HT_AuxPmp_PostRunCmd)0U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor1mn2000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)1U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor1mn4000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)2U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor2mn2000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)3U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor2mn4000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)4U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor3mn2000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)5U)
#define CeTHMR_e_HT_AuxPmp_PostRunFor3mn4000RPM		((TeTHMR_e_HT_AuxPmp_PostRunCmd)6U)
#define CeTHMR_e_HT_AuxPmp_PostRunSNA		((TeTHMR_e_HT_AuxPmp_PostRunCmd)7U)
#endif

/*
* Enum TeTHMR_e_PE_CoolTransOil_PmpCmnd 
* Default Value:CeTHMR_e_PE_CoolTransOil_PmpOff 
*/
#ifndef TeTHMR_e_PE_CoolTransOil_PmpCmnd
typedef uint8 TeTHMR_e_PE_CoolTransOil_PmpCmnd;
#define CeTHMR_e_PE_CoolTransOil_PmpOff		((TeTHMR_e_PE_CoolTransOil_PmpCmnd)0U)
#define CeTHMR_e_PE_CoolTransOil_PmpOn		((TeTHMR_e_PE_CoolTransOil_PmpCmnd)1U)
#endif

/*
* Enum TeTHMR_e_Pump_Command 
* Default Value:CeTHMR_e_Off 
*/
#ifndef TeTHMR_e_Pump_Command
typedef uint8 TeTHMR_e_Pump_Command;
#define CeTHMR_e_Off		((TeTHMR_e_Pump_Command)0U)
#define CeTHMR_e_On		((TeTHMR_e_Pump_Command)1U)
#endif

/*
* Enum TeTHMR_e_BattCond 
* Default Value:CeTHMR_e_BattCondPumpOff 
*/
#ifndef TeTHMR_e_BattCond
typedef uint8 TeTHMR_e_BattCond;
#define CeTHMR_e_BattCondPumpOff		((TeTHMR_e_BattCond)0U)
#define CeTHMR_e_BattCondFault		((TeTHMR_e_BattCond)1U)
#define CeTHMR_e_BattCondHeating		((TeTHMR_e_BattCond)2U)
#define CeTHMR_e_BattCondPassiveCooling		((TeTHMR_e_BattCond)3U)
#define CeTHMR_e_BattCondActiveCooling		((TeTHMR_e_BattCond)4U)
#define CeTHMR_e_BattCondRecirculation		((TeTHMR_e_BattCond)5U)
#define CeTHMR_e_BattCondBalancing		((TeTHMR_e_BattCond)6U)
#endif

/*
* Enum TeTHMR_e_ThermalMode 
* Default Value:CeTHMR_e_Init 
*/
#ifndef TeTHMR_e_ThermalMode
typedef uint8 TeTHMR_e_ThermalMode;
#define CeTHMR_e_Init		((TeTHMR_e_ThermalMode)0U)
#define CeTHMR_e_Fault		((TeTHMR_e_ThermalMode)1U)
#define CeTHMR_e_OffPlugVehicleOn		((TeTHMR_e_ThermalMode)2U)
#define CeTHMR_e_OffPlugVehicleOff		((TeTHMR_e_ThermalMode)3U)
#define CeTHMR_e_OnPlugVehicleOn		((TeTHMR_e_ThermalMode)4U)
#define CeTHMR_e_OnPlugVehicleOff		((TeTHMR_e_ThermalMode)5U)
#define CeTHMR_e_Standby		((TeTHMR_e_ThermalMode)6U)
#define CeTHMR_e_Sleep		((TeTHMR_e_ThermalMode)7U)
#endif

/*
* Enum TeTHMR_e_CabinPreCondReqStat 
* Default Value:CeTHMR_e_CabinPrec_Dflt 
*/
#ifndef TeTHMR_e_CabinPreCondReqStat
typedef uint8 TeTHMR_e_CabinPreCondReqStat;
#define CeTHMR_e_CabinPrec_Dflt		((TeTHMR_e_CabinPreCondReqStat)0U)
#define CeTHMR_e_OkCabinPrec		((TeTHMR_e_CabinPreCondReqStat)1U)
#define CeTHMR_e_CabinPrec_SP_Reached		((TeTHMR_e_CabinPreCondReqStat)2U)
#define CeTHMR_e_CabinPrec_Off		((TeTHMR_e_CabinPreCondReqStat)3U)
#define CeTHMR_e_CabinPrecReq_Failed		((TeTHMR_e_CabinPreCondReqStat)4U)
#define CeTHMR_e_NoCabPrec_HV_BatCrit		((TeTHMR_e_CabinPreCondReqStat)5U)
#define CeTHMR_e_NoCabPrec_HV_BatCondCmplt		((TeTHMR_e_CabinPreCondReqStat)6U)
#define CeTHMR_e_NoCabPrec_HV_BatCondStop		((TeTHMR_e_CabinPreCondReqStat)7U)
#define CeTHMR_e_NoCabPrec_HV_BatCond_SNA		((TeTHMR_e_CabinPreCondReqStat)15U)
#endif

/*
* Enum TeTHMR_e_CabinThermalMode 
* Default Value:CeTHMR_e_Cab_NoConditioning 
*/
#ifndef TeTHMR_e_CabinThermalMode
typedef uint8 TeTHMR_e_CabinThermalMode;
#define CeTHMR_e_Cab_NoConditioning		((TeTHMR_e_CabinThermalMode)0U)
#define CeTHMR_e_Cab_Cooling		((TeTHMR_e_CabinThermalMode)1U)
#define CeTHMR_e_Cab_Heating		((TeTHMR_e_CabinThermalMode)2U)
#define CeTHMR_e_Cab_Cooling_n_Heating		((TeTHMR_e_CabinThermalMode)3U)
#endif

/*
* Enum TeTHMR_e_HtrClntOut_TempSensFlt 
* Default Value:CeTHMR_e_HtrClntOut_TempSens_NoFault 
*/
#ifndef TeTHMR_e_HtrClntOut_TempSensFlt
typedef uint8 TeTHMR_e_HtrClntOut_TempSensFlt;
#define CeTHMR_e_HtrClntOut_TempSens_NoFault		((TeTHMR_e_HtrClntOut_TempSensFlt)0U)
#define CeTHMR_e_HtrClntOut_TempSens_Faulty		((TeTHMR_e_HtrClntOut_TempSensFlt)1U)
#define CeTHMR_e_HtrClntOut_TempSens_FltSNA		((TeTHMR_e_HtrClntOut_TempSensFlt)2U)
#endif

/*
* Enum TeTHMR_e_HtrClntIn_TempSensFlt 
* Default Value:CeTHMR_e_HtrClntIn_TempSens_NoFault 
*/
#ifndef TeTHMR_e_HtrClntIn_TempSensFlt
typedef uint8 TeTHMR_e_HtrClntIn_TempSensFlt;
#define CeTHMR_e_HtrClntIn_TempSens_NoFault		((TeTHMR_e_HtrClntIn_TempSensFlt)0U)
#define CeTHMR_e_HtrClntIn_TempSens_Faulty		((TeTHMR_e_HtrClntIn_TempSensFlt)1U)
#define CeTHMR_e_HtrClntIn_TempSens_FltSNA		((TeTHMR_e_HtrClntIn_TempSensFlt)2U)
#endif

/*
* Enum TeTHMR_e_VehThermSt 
* Default Value:CeTHMR_e_TempAllowNormalDrive 
*/
#ifndef TeTHMR_e_VehThermSt
typedef uint8 TeTHMR_e_VehThermSt;
#define CeTHMR_e_TempAllowNormalDrive		((TeTHMR_e_VehThermSt)0U)
#define CeTHMR_e_TempAllowDefrost		((TeTHMR_e_VehThermSt)1U)
#define CeTHMR_e_TempAllowLoadShed1		((TeTHMR_e_VehThermSt)2U)
#define CeTHMR_e_DCProactChargPrepActive		((TeTHMR_e_VehThermSt)3U)
#define CeTHMR_e_DCProactChargPrepPassive		((TeTHMR_e_VehThermSt)4U)
#define CeTHMR_e_TempAllowHVACPriority		((TeTHMR_e_VehThermSt)5U)
#define CeTHMR_e_TempAllowChargeLevel1		((TeTHMR_e_VehThermSt)6U)
#define CeTHMR_e_TempAllowChargeLevel2		((TeTHMR_e_VehThermSt)7U)
#define CeTHMR_e_TempAllowChargeLevel3		((TeTHMR_e_VehThermSt)8U)
#define CeTHMR_e_TempAllowPowerPanel		((TeTHMR_e_VehThermSt)9U)
#define CeTHMR_e_TempAllowCabinPrecond		((TeTHMR_e_VehThermSt)10U)
#define CeTHMR_e_TempAllowPeriodicWkup		((TeTHMR_e_VehThermSt)11U)
#define CeTHMR_e_TempAllowChargePrep		((TeTHMR_e_VehThermSt)12U)
#define CeTHMR_e_TempAllowBattCoolOV		((TeTHMR_e_VehThermSt)13U)
#define CeTHMR_e_TempAllowBattHeatOV		((TeTHMR_e_VehThermSt)14U)
#define CeTHMR_e_TempAllowBattCoolNHeatOV		((TeTHMR_e_VehThermSt)15U)
#define CeTHMR_e_RacePrepTrackModeActv		((TeTHMR_e_VehThermSt)16U)
#define CeTHMR_e_RacePrepDragModeActv		((TeTHMR_e_VehThermSt)17U)
#endif

/*
* Enum TeTHMR_e_AftRunRqSrc 
* Default Value:CeTHMR_e_AftrRun_ECM_Rq 
*/
#ifndef TeTHMR_e_AftRunRqSrc
typedef uint8 TeTHMR_e_AftRunRqSrc;
#define CeTHMR_e_AftrRun_ECM_Rq		((TeTHMR_e_AftRunRqSrc)0U)
#define CeTHMR_e_AftrRun_HCP_Rq		((TeTHMR_e_AftRunRqSrc)1U)
#define CeTHMR_e_AftrRun_Max_Rq		((TeTHMR_e_AftRunRqSrc)2U)
#define CeTHMR_e_AftrRun_NoSrcAvail		((TeTHMR_e_AftRunRqSrc)255U)
#endif

/*
* Enum TeTHMR_e_Pump_State 
* Default Value:CeTHMR_e_NoPump_On 
*/
#ifndef TeTHMR_e_Pump_State
typedef uint8 TeTHMR_e_Pump_State;
#define CeTHMR_e_NoPump_On		((TeTHMR_e_Pump_State)0U)
#define CeTHMR_e_LTPP1_On		((TeTHMR_e_Pump_State)1U)
#define CeTHMR_e_LTPP2_On		((TeTHMR_e_Pump_State)2U)
#define CeTHMR_e_LTPP12_On		((TeTHMR_e_Pump_State)3U)
#define CeTHMR_e_LTAP_On		((TeTHMR_e_Pump_State)4U)
#define CeTHMR_e_LTPP1_LTAP_On		((TeTHMR_e_Pump_State)5U)
#define CeTHMR_e_LTPP2_LTAP_On		((TeTHMR_e_Pump_State)6U)
#define CeTHMR_e_LTPP12_LTAP_On		((TeTHMR_e_Pump_State)7U)
#define CeTHMR_e_HTAP_On		((TeTHMR_e_Pump_State)8U)
#define CeTHMR_e_LTPP1_HTAP_On		((TeTHMR_e_Pump_State)9U)
#define CeTHMR_e_LTPP2_HTAP_On		((TeTHMR_e_Pump_State)10U)
#define CeTHMR_e_LTPP12_HTAP_On		((TeTHMR_e_Pump_State)11U)
#define CeTHMR_e_LTAP_HTAP_On		((TeTHMR_e_Pump_State)12U)
#define CeTHMR_e_LTPP1_LTAP_HTAP_On		((TeTHMR_e_Pump_State)13U)
#define CeTHMR_e_LTPP2_LTAP_HTAP_On		((TeTHMR_e_Pump_State)14U)
#define CeTHMR_e_All_Pumps_On		((TeTHMR_e_Pump_State)15U)
#endif

/*
* Enum TeTHMR_e_EmrgcyFanRq_Lvl 
* Default Value:CeTHMR_e_No_EmrgcyFanRq 
*/
#ifndef TeTHMR_e_EmrgcyFanRq_Lvl
typedef uint8 TeTHMR_e_EmrgcyFanRq_Lvl;
#define CeTHMR_e_No_EmrgcyFanRq		((TeTHMR_e_EmrgcyFanRq_Lvl)0U)
#define CeTHMR_e_Low_EmrgcyFanRq_Lv1		((TeTHMR_e_EmrgcyFanRq_Lvl)1U)
#define CeTHMR_e_High_EmrgcyFanRq_Lv2		((TeTHMR_e_EmrgcyFanRq_Lvl)2U)
#define CeTHMR_e_SNA_EmrgcyFanRq		((TeTHMR_e_EmrgcyFanRq_Lvl)3U)
#endif

/*
* Enum TeTHMR_e_BattDischg_State 
* Default Value:CeTHMR_e_No_Dischrg 
*/
#ifndef TeTHMR_e_BattDischg_State
typedef uint8 TeTHMR_e_BattDischg_State;
#define CeTHMR_e_No_Dischrg		((TeTHMR_e_BattDischg_State)0U)
#define CeTHMR_e_Dischrg_BatTempCriticl		((TeTHMR_e_BattDischg_State)1U)
#define CeTHMR_e_Dischrg_BatTempNotOpt		((TeTHMR_e_BattDischg_State)2U)
#define CeTHMR_e_Dischrg_AmbTempLow		((TeTHMR_e_BattDischg_State)3U)
#define CeTHMR_e_Dischrg_ForcBatCool_Hys		((TeTHMR_e_BattDischg_State)4U)
#define CeTHMR_e_Dischrg_CabReqPrsnt		((TeTHMR_e_BattDischg_State)5U)
#define CeTHMR_e_Dischrg_BatAndCab_Cndtn		((TeTHMR_e_BattDischg_State)6U)
#define CeTHMR_e_Dischrg_ForcBatHeat_Hys		((TeTHMR_e_BattDischg_State)7U)
#define CeTHMR_e_Dischrg_CabReqInOV		((TeTHMR_e_BattDischg_State)8U)
#define CeTHMR_e_NoValidReq		((TeTHMR_e_BattDischg_State)255U)
#endif

/*
* Enum TeTHMR_e_CabCoolThrmlState 
* Default Value:CeTHMR_e_NoCabinCooling 
*/
#ifndef TeTHMR_e_CabCoolThrmlState
typedef uint8 TeTHMR_e_CabCoolThrmlState;
#define CeTHMR_e_NoCabinCooling		((TeTHMR_e_CabCoolThrmlState)0U)
#define CeTHMR_e_CabinActiveCooling		((TeTHMR_e_CabCoolThrmlState)1U)
#endif

/*
* Enum TeTHMR_e_CabHeatThrmlMode 
* Default Value:CeTHMR_e_NoActvHeat 
*/
#ifndef TeTHMR_e_CabHeatThrmlMode
typedef uint8 TeTHMR_e_CabHeatThrmlMode;
#define CeTHMR_e_NoActvHeat		((TeTHMR_e_CabHeatThrmlMode)0U)
#define CeTHMR_e_ElectricHtr		((TeTHMR_e_CabHeatThrmlMode)1U)
#define CeTHMR_e_HeatPump		((TeTHMR_e_CabHeatThrmlMode)2U)
#endif

/*
* Enum TeTHMR_e_CabHeatThrmlState 
* Default Value:CeTHMR_e_NoCabinHeating 
*/
#ifndef TeTHMR_e_CabHeatThrmlState
typedef uint8 TeTHMR_e_CabHeatThrmlState;
#define CeTHMR_e_NoCabinHeating		((TeTHMR_e_CabHeatThrmlState)0U)
#define CeTHMR_e_CabinActiveHeating		((TeTHMR_e_CabHeatThrmlState)1U)
#define CeTHMR_e_CabinActivePassiveHeating		((TeTHMR_e_CabHeatThrmlState)2U)
#endif

/*
* Enum TeTHMR_e_AfterRunSM_State 
* Default Value:CeTHMR_e_AfterRunInit 
*/
#ifndef TeTHMR_e_AfterRunSM_State
typedef uint8 TeTHMR_e_AfterRunSM_State;
#define CeTHMR_e_AfterRunInit		((TeTHMR_e_AfterRunSM_State)0U)
#define CeTHMR_e_DtermineAfterRunRequest		((TeTHMR_e_AfterRunSM_State)1U)
#define CeTHMR_e_CmmndRadFanAndPump		((TeTHMR_e_AfterRunSM_State)2U)
#define CeTHMR_e_CmmndContactorOpen		((TeTHMR_e_AfterRunSM_State)3U)
#define CeTHMR_e_PlugInCharging_CmndOutOfAftrRun		((TeTHMR_e_AfterRunSM_State)4U)
#define CeTHMR_e_CalNewAftrRunRq		((TeTHMR_e_AfterRunSM_State)5U)
#define CeTHMR_e_AftrRunComplete		((TeTHMR_e_AfterRunSM_State)6U)
#define CeTHMR_e_DrvrDrOrACCWkup		((TeTHMR_e_AfterRunSM_State)7U)
#define CeTHMR_e_ChartEntry		((TeTHMR_e_AfterRunSM_State)8U)
#define CeTHMR_e_FOTARequested		((TeTHMR_e_AfterRunSM_State)9U)
#define CeTHMR_e_AlternatorMode		((TeTHMR_e_AfterRunSM_State)10U)
#endif

/*
* Enum TeTHMR_e_HVACPerf_Mode 
* Default Value:CeTHMR_e_NormalMode 
*/
#ifndef TeTHMR_e_HVACPerf_Mode
typedef uint8 TeTHMR_e_HVACPerf_Mode;
#define CeTHMR_e_NormalMode		((TeTHMR_e_HVACPerf_Mode)0U)
#define CeTHMR_e_AltrntrMode		((TeTHMR_e_HVACPerf_Mode)1U)
#define CeTHMR_e_LoadShed		((TeTHMR_e_HVACPerf_Mode)2U)
#define CeTHMR_e_LowPwrbudget		((TeTHMR_e_HVACPerf_Mode)3U)
#define CeTHMR_e_BattCrit		((TeTHMR_e_HVACPerf_Mode)4U)
#define CeTHMR_e_HybAltMode		((TeTHMR_e_HVACPerf_Mode)5U)
#define CeTHMR_e_CabDsblREM		((TeTHMR_e_HVACPerf_Mode)6U)
#define CeTHMR_e_CabDsblShipping		((TeTHMR_e_HVACPerf_Mode)7U)
#endif

/*
* Enum TeTHMR_e_VlvState 
* Default Value:CeTHMR_e_NoVlvPwrd 
*/
#ifndef TeTHMR_e_VlvState
typedef uint8 TeTHMR_e_VlvState;
#define CeTHMR_e_NoVlvPwrd		((TeTHMR_e_VlvState)0U)
#define CeTHMR_e_Vlv1Pwrd		((TeTHMR_e_VlvState)1U)
#define CeTHMR_e_Vlv2Pwrd		((TeTHMR_e_VlvState)2U)
#define CeTHMR_e_Vlv1N2Pwrd		((TeTHMR_e_VlvState)3U)
#define CeTHMR_e_Vlv3Pwrd		((TeTHMR_e_VlvState)4U)
#define CeTHMR_e_Vlv1N3Pwrd		((TeTHMR_e_VlvState)5U)
#define CeTHMR_e_Vlv2N3Pwrd		((TeTHMR_e_VlvState)6U)
#define CeTHMR_e_Vlv1N2N3Pwrd		((TeTHMR_e_VlvState)7U)
#endif

/*
* Enum TeTHMR_e_RSVState 
* Default Value:CeTHMR_e_AllOpen 
*/
#ifndef TeTHMR_e_RSVState
typedef uint8 TeTHMR_e_RSVState;
#define CeTHMR_e_AllOpen		((TeTHMR_e_RSVState)0U)
#define CeTHMR_e_EvapOnly		((TeTHMR_e_RSVState)10U)
#define CeTHMR_e_ChillerNFront		((TeTHMR_e_RSVState)20U)
#define CeTHMR_e_ChillerOnly		((TeTHMR_e_RSVState)30U)
#define CeTHMR_e_Faulty		((TeTHMR_e_RSVState)100U)
#endif

/*
* Enum TeTHMR_e_Eng_Htr_HTSOV_St 
* Default Value:CeTHMR_e_NoStateSlctd 
*/
#ifndef TeTHMR_e_Eng_Htr_HTSOV_St
typedef uint8 TeTHMR_e_Eng_Htr_HTSOV_St;
#define CeTHMR_e_NoStateSlctd		((TeTHMR_e_Eng_Htr_HTSOV_St)0U)
#define CeTHMR_e_StateA		((TeTHMR_e_Eng_Htr_HTSOV_St)1U)
#define CeTHMR_e_StateB		((TeTHMR_e_Eng_Htr_HTSOV_St)2U)
#define CeTHMR_e_StateC		((TeTHMR_e_Eng_Htr_HTSOV_St)3U)
#define CeTHMR_e_StateD		((TeTHMR_e_Eng_Htr_HTSOV_St)4U)
#define CeTHMR_e_StateE		((TeTHMR_e_Eng_Htr_HTSOV_St)5U)
#define CeTHMR_e_StateF		((TeTHMR_e_Eng_Htr_HTSOV_St)6U)
#define CeTHMR_e_StateG		((TeTHMR_e_Eng_Htr_HTSOV_St)7U)
#endif

/*
* Enum TeTHMR_e_FCThrmlState 
* Default Value:CeTHMR_e_FCCondOff 
*/
#ifndef TeTHMR_e_FCThrmlState
typedef uint8 TeTHMR_e_FCThrmlState;
#define CeTHMR_e_FCCondOff		((TeTHMR_e_FCThrmlState)0U)
#define CeTHMR_e_FCActvPsvHeat		((TeTHMR_e_FCThrmlState)1U)
#define CeTHMR_e_FCStabilize		((TeTHMR_e_FCThrmlState)2U)
#define CeTHMR_e_FCPsvCool		((TeTHMR_e_FCThrmlState)3U)
#define CeTHMR_e_FCBoostCool		((TeTHMR_e_FCThrmlState)4U)
#endif

/*
* Enum TeTHMR_e_BatThrmlSt 
* Default Value:CeTHMR_e_NoConditioning 
*/
#ifndef TeTHMR_e_BatThrmlSt
typedef uint8 TeTHMR_e_BatThrmlSt;
#define CeTHMR_e_NoConditioning		((TeTHMR_e_BatThrmlSt)0U)
#define CeTHMR_e_ActiveCooling		((TeTHMR_e_BatThrmlSt)1U)
#define CeTHMR_e_Heating		((TeTHMR_e_BatThrmlSt)2U)
#define CeTHMR_e_Balancing		((TeTHMR_e_BatThrmlSt)3U)
#define CeTHMR_e_PassiveCooling		((TeTHMR_e_BatThrmlSt)4U)
#define CeTHMR_e_EmergencyCooling		((TeTHMR_e_BatThrmlSt)5U)
#define CeTHMR_e_PassiveHeating		((TeTHMR_e_BatThrmlSt)6U)
#define CeTHMR_e_ActvPsvHeating		((TeTHMR_e_BatThrmlSt)7U)
#define CeTHMR_e_BTLActvWasteHeatRcvry		((TeTHMR_e_BatThrmlSt)8U)
#endif

/*
* Enum TeTHMR_e_PPCTIS_OT 
* Default Value:CeTHMR_e_EmergencyLevel4 
*/
#ifndef TeTHMR_e_PPCTIS_OT
typedef uint8 TeTHMR_e_PPCTIS_OT;
#define CeTHMR_e_EmergencyLevel4		((TeTHMR_e_PPCTIS_OT)0U)
#define CeTHMR_e_EmergencyLevel3		((TeTHMR_e_PPCTIS_OT)1U)
#define CeTHMR_e_EmergencyLevel1		((TeTHMR_e_PPCTIS_OT)3U)
#endif

/*
* Enum TeTHMR_e_ACCompState 
* Default Value:CeTHMR_e_ACOff 
*/
#ifndef TeTHMR_e_ACCompState
typedef uint8 TeTHMR_e_ACCompState;
#define CeTHMR_e_ACOff		((TeTHMR_e_ACCompState)0U)
#define CeTHMR_e_ACOn		((TeTHMR_e_ACCompState)10U)
#define CeTHMR_e_ValveTransition		((TeTHMR_e_ACCompState)20U)
#define CeTHMR_e_ACFaulty		((TeTHMR_e_ACCompState)100U)
#endif

/*
* Enum TeTHMR_e_HTCL_Heat_Distrib 
* Default Value:CeTHMR_e_NoHeating 
*/
#ifndef TeTHMR_e_HTCL_Heat_Distrib
typedef uint8 TeTHMR_e_HTCL_Heat_Distrib;
#define CeTHMR_e_NoHeating		((TeTHMR_e_HTCL_Heat_Distrib)0U)
#define CeTHMR_e_BatteryHeating		((TeTHMR_e_HTCL_Heat_Distrib)1U)
#define CeTHMR_e_CabinHeating		((TeTHMR_e_HTCL_Heat_Distrib)2U)
#define CeTHMR_e_BatteryNCabinHeating		((TeTHMR_e_HTCL_Heat_Distrib)3U)
#define CeTHMR_e_Faulted		((TeTHMR_e_HTCL_Heat_Distrib)4U)
#endif

/*
* Enum TeTHMR_e_LTCLThermalMode 
* Default Value:CeTHMR_e_LTCLBalancing 
*/
#ifndef TeTHMR_e_LTCLThermalMode
typedef uint8 TeTHMR_e_LTCLThermalMode;
#define CeTHMR_e_LTCLBalancing		((TeTHMR_e_LTCLThermalMode)1U)
#define CeTHMR_e_LTCLPassiveCooling		((TeTHMR_e_LTCLThermalMode)2U)
#define CeTHMR_e_LTCLPassiveHeating		((TeTHMR_e_LTCLThermalMode)3U)
#define CeTHMR_e_LTCLActvWasteHeatRcvry		((TeTHMR_e_LTCLThermalMode)4U)
#define CeTHMR_e_LTCLActvPsvHeating		((TeTHMR_e_LTCLThermalMode)5U)
#endif

/*
* Enum TeTHMR_e_LTCLVlvThrmlState 
* Default Value:CeTHMR_e_Balancing_LTCLVlvSt 
*/
#ifndef TeTHMR_e_LTCLVlvThrmlState
typedef uint8 TeTHMR_e_LTCLVlvThrmlState;
#define CeTHMR_e_Balancing_LTCLVlvSt		((TeTHMR_e_LTCLVlvThrmlState)0U)
#define CeTHMR_e_PsvCooling_LTCLVlvSt		((TeTHMR_e_LTCLVlvThrmlState)1U)
#define CeTHMR_e_PsvHeating_LTCLVlvSt		((TeTHMR_e_LTCLVlvThrmlState)2U)
#define CeTHMR_e_Blocked_LTCLVlvSt		((TeTHMR_e_LTCLVlvThrmlState)3U)
#endif

/*
* Enum TeTHMR_e_PumpOpState 
* Default Value:CeTHMR_e_PumpOff 
*/
#ifndef TeTHMR_e_PumpOpState
typedef uint8 TeTHMR_e_PumpOpState;
#define CeTHMR_e_PumpOff		((TeTHMR_e_PumpOpState)0U)
#define CeTHMR_e_PumpOn		((TeTHMR_e_PumpOpState)10U)
#define CeTHMR_e_PumpFault		((TeTHMR_e_PumpOpState)100U)
#endif

/*
* Enum TeTHMR_e_OilPumpEmrgCoolState 
* Default Value:CeTHMR_e_OilPumpEmrgCool_OFF 
*/
#ifndef TeTHMR_e_OilPumpEmrgCoolState
typedef uint8 TeTHMR_e_OilPumpEmrgCoolState;
#define CeTHMR_e_OilPumpEmrgCool_OFF		((TeTHMR_e_OilPumpEmrgCoolState)0U)
#define CeTHMR_e_OilPumpEmrgCool_ON		((TeTHMR_e_OilPumpEmrgCoolState)1U)
#endif

/*
* Enum TeTHMR_e_NewtonRaphsonSlvr 
* Default Value:CeTHMR_e_Fail_SNA 
*/
#ifndef TeTHMR_e_NewtonRaphsonSlvr
typedef uint8 TeTHMR_e_NewtonRaphsonSlvr;
#define CeTHMR_e_Fail_SNA		((TeTHMR_e_NewtonRaphsonSlvr)0U)
#define CeTHMR_e_Cnvrgd_1stOrdOptimal		((TeTHMR_e_NewtonRaphsonSlvr)1U)
#define CeTHMR_e_Cnvrgd_DeltaXBlwTol		((TeTHMR_e_NewtonRaphsonSlvr)2U)
#define CeTHMR_e_Cnvrgd_FcnRsdBlwTol		((TeTHMR_e_NewtonRaphsonSlvr)3U)
#define CeTHMR_e_Fail_DetJcbBlwTol		((TeTHMR_e_NewtonRaphsonSlvr)4U)
#define CeTHMR_e_Cnvrgd_SrchDirMgBlwTol		((TeTHMR_e_NewtonRaphsonSlvr)5U)
#define CeTHMR_e_Fail_MaxIterCntExcd		((TeTHMR_e_NewtonRaphsonSlvr)6U)
#endif

/*
* Enum TeTHMR_e_HtrState 
* Default Value:CeTHMR_e_HtrOff 
*/
#ifndef TeTHMR_e_HtrState
typedef uint8 TeTHMR_e_HtrState;
#define CeTHMR_e_HtrOff		((TeTHMR_e_HtrState)0U)
#define CeTHMR_e_HtrOn		((TeTHMR_e_HtrState)1U)
#define CeTHMR_e_HtrFault		((TeTHMR_e_HtrState)2U)
#define CeTHMR_e_HtrDefault		((TeTHMR_e_HtrState)3U)
#endif

/*
* Enum TeTIMR_e_TrrnMdReq 
* Default Value:CeTIMR_e_Not_Activated 
*/
#ifndef TeTIMR_e_TrrnMdReq
typedef uint8 TeTIMR_e_TrrnMdReq;
#define CeTIMR_e_Not_Activated		((TeTIMR_e_TrrnMdReq)0U)
#define CeTIMR_e_Up_Activated		((TeTIMR_e_TrrnMdReq)1U)
#define CeTIMR_e_Down_Activated		((TeTIMR_e_TrrnMdReq)2U)
#define CeTIMR_e_Req_SNA		((TeTIMR_e_TrrnMdReq)3U)
#endif

/*
* Enum TeTIMR_e_RaceModeSts 
* Default Value:CeTIMR_e_RaceMode_Off 
*/
#ifndef TeTIMR_e_RaceModeSts
typedef uint8 TeTIMR_e_RaceModeSts;
#define CeTIMR_e_RaceMode_Off		((TeTIMR_e_RaceModeSts)0U)
#define CeTIMR_e_RaceMode_On		((TeTIMR_e_RaceModeSts)1U)
#define CeTIMR_e_RaceMode_Active		((TeTIMR_e_RaceModeSts)2U)
#define CeTIMR_e_RaceMode_Cancelled		((TeTIMR_e_RaceModeSts)3U)
#define CeTIMR_e_RaceMode_Complete		((TeTIMR_e_RaceModeSts)4U)
#define CeTIMR_e_RaceMode_Unavailable		((TeTIMR_e_RaceModeSts)5U)
#endif

/*
* Enum TeTIMR_e_RaceMode_Popup 
* Default Value:CeTIMR_e_TM0 
*/
#ifndef TeTIMR_e_RaceMode_Popup
typedef uint8 TeTIMR_e_RaceMode_Popup;
#define CeTIMR_e_TM0		((TeTIMR_e_RaceMode_Popup)0U)
#define CeTIMR_e_TM1		((TeTIMR_e_RaceMode_Popup)1U)
#define CeTIMR_e_TM2		((TeTIMR_e_RaceMode_Popup)2U)
#define CeTIMR_e_TM3		((TeTIMR_e_RaceMode_Popup)3U)
#define CeTIMR_e_TM4		((TeTIMR_e_RaceMode_Popup)4U)
#define CeTIMR_e_TM5		((TeTIMR_e_RaceMode_Popup)5U)
#define CeTIMR_e_TM6		((TeTIMR_e_RaceMode_Popup)6U)
#define CeTIMR_e_TM7		((TeTIMR_e_RaceMode_Popup)7U)
#define CeTIMR_e_TM8		((TeTIMR_e_RaceMode_Popup)8U)
#define CeTIMR_e_TM9		((TeTIMR_e_RaceMode_Popup)9U)
#define CeTIMR_e_TM10		((TeTIMR_e_RaceMode_Popup)10U)
#define CeTIMR_e_TM11		((TeTIMR_e_RaceMode_Popup)11U)
#define CeTIMR_e_TM12		((TeTIMR_e_RaceMode_Popup)12U)
#define CeTIMR_e_TM13		((TeTIMR_e_RaceMode_Popup)13U)
#define CeTIMR_e_TM14		((TeTIMR_e_RaceMode_Popup)14U)
#define CeTIMR_e_TM15		((TeTIMR_e_RaceMode_Popup)15U)
#define CeTIMR_e_TM16		((TeTIMR_e_RaceMode_Popup)16U)
#define CeTIMR_e_TM17		((TeTIMR_e_RaceMode_Popup)17U)
#define CeTIMR_e_TM18		((TeTIMR_e_RaceMode_Popup)18U)
#define CeTIMR_e_TM19		((TeTIMR_e_RaceMode_Popup)19U)
#define CeTIMR_e_TM20		((TeTIMR_e_RaceMode_Popup)20U)
#define CeTIMR_e_TM21		((TeTIMR_e_RaceMode_Popup)21U)
#define CeTIMR_e_TM22		((TeTIMR_e_RaceMode_Popup)22U)
#define CeTIMR_e_TM23		((TeTIMR_e_RaceMode_Popup)23U)
#define CeTIMR_e_TM24		((TeTIMR_e_RaceMode_Popup)24U)
#define CeTIMR_e_TM25		((TeTIMR_e_RaceMode_Popup)25U)
#define CeTIMR_e_TM26		((TeTIMR_e_RaceMode_Popup)26U)
#define CeTIMR_e_TM27		((TeTIMR_e_RaceMode_Popup)27U)
#define CeTIMR_e_TM28		((TeTIMR_e_RaceMode_Popup)28U)
#define CeTIMR_e_TM29		((TeTIMR_e_RaceMode_Popup)29U)
#define CeTIMR_e_TM30		((TeTIMR_e_RaceMode_Popup)30U)
#define CeTIMR_e_TM31		((TeTIMR_e_RaceMode_Popup)31U)
#define CeTIMR_e_TM32		((TeTIMR_e_RaceMode_Popup)32U)
#define CeTIMR_e_TM33		((TeTIMR_e_RaceMode_Popup)33U)
#define CeTIMR_e_TM34		((TeTIMR_e_RaceMode_Popup)34U)
#define CeTIMR_e_TM35		((TeTIMR_e_RaceMode_Popup)35U)
#define CeTIMR_e_TM36		((TeTIMR_e_RaceMode_Popup)36U)
#define CeTIMR_e_TM37		((TeTIMR_e_RaceMode_Popup)37U)
#define CeTIMR_e_TM38		((TeTIMR_e_RaceMode_Popup)38U)
#define CeTIMR_e_TM39		((TeTIMR_e_RaceMode_Popup)39U)
#define CeTIMR_e_TM40		((TeTIMR_e_RaceMode_Popup)40U)
#define CeTIMR_e_TM41		((TeTIMR_e_RaceMode_Popup)41U)
#define CeTIMR_e_TM42		((TeTIMR_e_RaceMode_Popup)42U)
#define CeTIMR_e_TM43		((TeTIMR_e_RaceMode_Popup)43U)
#define CeTIMR_e_TM44		((TeTIMR_e_RaceMode_Popup)44U)
#define CeTIMR_e_TM45		((TeTIMR_e_RaceMode_Popup)45U)
#define CeTIMR_e_TM46		((TeTIMR_e_RaceMode_Popup)46U)
#define CeTIMR_e_TM47		((TeTIMR_e_RaceMode_Popup)47U)
#define CeTIMR_e_TM48		((TeTIMR_e_RaceMode_Popup)48U)
#define CeTIMR_e_TM49		((TeTIMR_e_RaceMode_Popup)49U)
#define CeTIMR_e_TM50		((TeTIMR_e_RaceMode_Popup)50U)
#define CeTIMR_e_TM51		((TeTIMR_e_RaceMode_Popup)51U)
#define CeTIMR_e_TM52		((TeTIMR_e_RaceMode_Popup)52U)
#define CeTIMR_e_TM53		((TeTIMR_e_RaceMode_Popup)53U)
#define CeTIMR_e_TM54		((TeTIMR_e_RaceMode_Popup)54U)
#define CeTIMR_e_TM55		((TeTIMR_e_RaceMode_Popup)55U)
#define CeTIMR_e_TM56		((TeTIMR_e_RaceMode_Popup)56U)
#define CeTIMR_e_TM57		((TeTIMR_e_RaceMode_Popup)57U)
#define CeTIMR_e_TM58		((TeTIMR_e_RaceMode_Popup)58U)
#define CeTIMR_e_TM59		((TeTIMR_e_RaceMode_Popup)59U)
#define CeTIMR_e_TM60		((TeTIMR_e_RaceMode_Popup)60U)
#define CeTIMR_e_TM61		((TeTIMR_e_RaceMode_Popup)61U)
#define CeTIMR_e_TM62		((TeTIMR_e_RaceMode_Popup)62U)
#define CeTIMR_e_TM63		((TeTIMR_e_RaceMode_Popup)63U)
#define CeTIMR_e_TM64		((TeTIMR_e_RaceMode_Popup)64U)
#endif

/*
* Enum TeTIMR_e_RaceOptions 
* Default Value:CeTIMR_e_NoOptionSelected 
*/
#ifndef TeTIMR_e_RaceOptions
typedef uint8 TeTIMR_e_RaceOptions;
#define CeTIMR_e_NoOptionSelected		((TeTIMR_e_RaceOptions)0U)
#define CeTIMR_e_LaunchControl		((TeTIMR_e_RaceOptions)1U)
#define CeTIMR_e_LineLock		((TeTIMR_e_RaceOptions)2U)
#define CeTIMR_e_Drift		((TeTIMR_e_RaceOptions)3U)
#define CeTIMR_e_Donut		((TeTIMR_e_RaceOptions)4U)
#define CeTIMR_e_RaceCooldown		((TeTIMR_e_RaceOptions)5U)
#endif

/*
* Enum TeTIMR_e_RacePrep 
* Default Value:CeTIMR_e_RacePrep_Off 
*/
#ifndef TeTIMR_e_RacePrep
typedef uint8 TeTIMR_e_RacePrep;
#define CeTIMR_e_RacePrep_Off		((TeTIMR_e_RacePrep)0U)
#define CeTIMR_e_RacePrep_Enabled		((TeTIMR_e_RacePrep)1U)
#define CeTIMR_e_RacePrep_Active		((TeTIMR_e_RacePrep)2U)
#define CeTIMR_e_RacePrep_SNA		((TeTIMR_e_RacePrep)3U)
#endif

/*
* Enum TeTIMR_e_RaceTypeSts 
* Default Value:CeTIMR_e_RaceType_Drag 
*/
#ifndef TeTIMR_e_RaceTypeSts
typedef uint8 TeTIMR_e_RaceTypeSts;
#define CeTIMR_e_RaceType_Drag		((TeTIMR_e_RaceTypeSts)0U)
#define CeTIMR_e_RaceType_Track		((TeTIMR_e_RaceTypeSts)1U)
#endif

/*
* Enum TeTIMR_e_TrrnMdBtnSts 
* Default Value:CeTIMR_e_NotActivated 
*/
#ifndef TeTIMR_e_TrrnMdBtnSts
typedef uint8 TeTIMR_e_TrrnMdBtnSts;
#define CeTIMR_e_NotActivated		((TeTIMR_e_TrrnMdBtnSts)0U)
#define CeTIMR_e_Activated		((TeTIMR_e_TrrnMdBtnSts)1U)
#define CeTIMR_e_ShortToGround		((TeTIMR_e_TrrnMdBtnSts)5U)
#define CeTIMR_e_ShortToPower		((TeTIMR_e_TrrnMdBtnSts)6U)
#define CeTIMR_e_SNA		((TeTIMR_e_TrrnMdBtnSts)7U)
#endif

/*
* Enum TeTIMR_e_TrrnTgglSwtSts 
* Default Value:CeTIMR_e_Switch_Not_Activated 
*/
#ifndef TeTIMR_e_TrrnTgglSwtSts
typedef uint8 TeTIMR_e_TrrnTgglSwtSts;
#define CeTIMR_e_Switch_Not_Activated		((TeTIMR_e_TrrnTgglSwtSts)0U)
#define CeTIMR_e_Left_Up_Activated		((TeTIMR_e_TrrnTgglSwtSts)1U)
#define CeTIMR_e_Right_Down_Activated		((TeTIMR_e_TrrnTgglSwtSts)2U)
#define CeTIMR_e_Short_To_Ground		((TeTIMR_e_TrrnTgglSwtSts)5U)
#define CeTIMR_e_Short_To_Power		((TeTIMR_e_TrrnTgglSwtSts)6U)
#define CeTIMR_e_Signal_Not_Available		((TeTIMR_e_TrrnTgglSwtSts)7U)
#endif

/*
* Enum TeTIMR_e_LaunchIntensity 
* Default Value:CeTIMR_e_Max 
*/
#ifndef TeTIMR_e_LaunchIntensity
typedef uint8 TeTIMR_e_LaunchIntensity;
#define CeTIMR_e_Max		((TeTIMR_e_LaunchIntensity)0U)
#define CeTIMR_e_High		((TeTIMR_e_LaunchIntensity)1U)
#define CeTIMR_e_Med		((TeTIMR_e_LaunchIntensity)2U)
#define CeTIMR_e_Low		((TeTIMR_e_LaunchIntensity)3U)
#define CeTIMR_e_Min		((TeTIMR_e_LaunchIntensity)4U)
#define CeTIMR_e_LI_SNA		((TeTIMR_e_LaunchIntensity)7U)
#endif

/*
* Enum TeTIMR_e_LnchMdLED 
* Default Value:CeTIMR_e_LEDOff 
*/
#ifndef TeTIMR_e_LnchMdLED
typedef uint8 TeTIMR_e_LnchMdLED;
#define CeTIMR_e_LEDOff		((TeTIMR_e_LnchMdLED)0U)
#define CeTIMR_e_LEDCont		((TeTIMR_e_LnchMdLED)1U)
#define CeTIMR_e_LEDBlink		((TeTIMR_e_LnchMdLED)2U)
#define CeTIMR_e_LEDSNA		((TeTIMR_e_LnchMdLED)3U)
#endif

/*
* Enum TeTIMR_e_RaceEntrySts 
* Default Value:CeTIMR_e_RaceEntry_Not_OK 
*/
#ifndef TeTIMR_e_RaceEntrySts
typedef uint8 TeTIMR_e_RaceEntrySts;
#define CeTIMR_e_RaceEntry_Not_OK		((TeTIMR_e_RaceEntrySts)0U)
#define CeTIMR_e_RaceEntry_OK		((TeTIMR_e_RaceEntrySts)1U)
#endif

/*
* Enum TeTIMR_e_BoostRequest 
* Default Value:CeTIMR_e_Boost_Off 
*/
#ifndef TeTIMR_e_BoostRequest
typedef uint8 TeTIMR_e_BoostRequest;
#define CeTIMR_e_Boost_Off		((TeTIMR_e_BoostRequest)0U)
#define CeTIMR_e_Boost_On		((TeTIMR_e_BoostRequest)1U)
#define CeTIMR_e_Boost_Reserved1		((TeTIMR_e_BoostRequest)2U)
#define CeTIMR_e_Boost_Reserved2		((TeTIMR_e_BoostRequest)3U)
#endif

/*
* Enum TeTIMR_e_DiagStatus 
* Default Value:CeTIMR_e_DiagIdle 
*/
#ifndef TeTIMR_e_DiagStatus
typedef uint8 TeTIMR_e_DiagStatus;
#define CeTIMR_e_DiagIdle		((TeTIMR_e_DiagStatus)0U)
#define CeTIMR_e_Passing		((TeTIMR_e_DiagStatus)1U)
#define CeTIMR_e_Failing		((TeTIMR_e_DiagStatus)2U)
#define CeTIMR_e_Pass		((TeTIMR_e_DiagStatus)3U)
#define CeTIMR_e_Fail		((TeTIMR_e_DiagStatus)4U)
#endif

/*
* Enum TeTIMR_e_LnchCtrlSts 
* Default Value:CeTIMR_e_NOT_ALLOWED 
*/
#ifndef TeTIMR_e_LnchCtrlSts
typedef uint8 TeTIMR_e_LnchCtrlSts;
#define CeTIMR_e_IDLE		((TeTIMR_e_LnchCtrlSts)0U)
#define CeTIMR_e_DRIVER_RQ		((TeTIMR_e_LnchCtrlSts)1U)
#define CeTIMR_e_CONFIRMED		((TeTIMR_e_LnchCtrlSts)2U)
#define CeTIMR_e_BRAKE_PRESSED		((TeTIMR_e_LnchCtrlSts)3U)
#define CeTIMR_e_FULL_THROTTLE		((TeTIMR_e_LnchCtrlSts)4U)
#define CeTIMR_e_IN_PROGRESS		((TeTIMR_e_LnchCtrlSts)5U)
#define CeTIMR_e_ABORTED		((TeTIMR_e_LnchCtrlSts)6U)
#define CeTIMR_e_NOT_ALLOWED		((TeTIMR_e_LnchCtrlSts)7U)
#endif

/*
* Enum TeTIMR_e_TextDisplay 
* Default Value:CeTIMR_e_NONE 
*/
#ifndef TeTIMR_e_TextDisplay
typedef uint8 TeTIMR_e_TextDisplay;
#define CeTIMR_e_NONE		((TeTIMR_e_TextDisplay)0U)
#define CeTIMR_e_TxtMsg_1		((TeTIMR_e_TextDisplay)1U)
#define CeTIMR_e_TxtMsg_2		((TeTIMR_e_TextDisplay)2U)
#define CeTIMR_e_TxtMsg_3		((TeTIMR_e_TextDisplay)3U)
#define CeTIMR_e_TxtMsg_4		((TeTIMR_e_TextDisplay)4U)
#define CeTIMR_e_TxtMsg_5		((TeTIMR_e_TextDisplay)5U)
#define CeTIMR_e_TxtMsg_6		((TeTIMR_e_TextDisplay)6U)
#define CeTIMR_e_TxtMsg_7		((TeTIMR_e_TextDisplay)7U)
#define CeTIMR_e_TxtMsg_8		((TeTIMR_e_TextDisplay)8U)
#define CeTIMR_e_TxtMsg_9		((TeTIMR_e_TextDisplay)9U)
#define CeTIMR_e_TxtMsg_10		((TeTIMR_e_TextDisplay)10U)
#define CeTIMR_e_TxtMsg_11		((TeTIMR_e_TextDisplay)11U)
#define CeTIMR_e_TxtMsg_12		((TeTIMR_e_TextDisplay)12U)
#define CeTIMR_e_TxtMsg_13		((TeTIMR_e_TextDisplay)13U)
#define CeTIMR_e_TxtMsg_14		((TeTIMR_e_TextDisplay)14U)
#define CeTIMR_e_TxtMsg_15		((TeTIMR_e_TextDisplay)15U)
#define CeTIMR_e_TxtMsg_16		((TeTIMR_e_TextDisplay)16U)
#define CeTIMR_e_TxtMsg_17		((TeTIMR_e_TextDisplay)17U)
#define CeTIMR_e_TxtMsg_18		((TeTIMR_e_TextDisplay)18U)
#define CeTIMR_e_TxtMsg_19		((TeTIMR_e_TextDisplay)19U)
#define CeTIMR_e_TxtMsg_20		((TeTIMR_e_TextDisplay)20U)
#define CeTIMR_e_TxtMsg_21		((TeTIMR_e_TextDisplay)21U)
#define CeTIMR_e_TxtMsg_22		((TeTIMR_e_TextDisplay)22U)
#define CeTIMR_e_TxtMsg_23		((TeTIMR_e_TextDisplay)23U)
#define CeTIMR_e_TxtMsg_24		((TeTIMR_e_TextDisplay)24U)
#define CeTIMR_e_TxtMsg_25		((TeTIMR_e_TextDisplay)25U)
#define CeTIMR_e_TxtMsg_26		((TeTIMR_e_TextDisplay)26U)
#define CeTIMR_e_TxtMsg_27		((TeTIMR_e_TextDisplay)27U)
#define CeTIMR_e_TxtMsg_28		((TeTIMR_e_TextDisplay)28U)
#define CeTIMR_e_TxtMsg_29		((TeTIMR_e_TextDisplay)29U)
#define CeTIMR_e_TxtMsg_30		((TeTIMR_e_TextDisplay)30U)
#define CeTIMR_e_TxtMsg_SNA		((TeTIMR_e_TextDisplay)31U)
#endif

/*
* Enum TeTINR_e_TCM_TrqCntrlModeReq 
* Default Value:CeTINR_e_None 
*/
#ifndef TeTINR_e_TCM_TrqCntrlModeReq
typedef uint8 TeTINR_e_TCM_TrqCntrlModeReq;
#define CeTINR_e_None		((TeTINR_e_TCM_TrqCntrlModeReq)0U)
#define CeTINR_e_TrqInc		((TeTINR_e_TCM_TrqCntrlModeReq)1U)
#define CeTINR_e_TrqDec		((TeTINR_e_TCM_TrqCntrlModeReq)2U)
#endif

/*
* Enum TeTINR_e_TCMComFail_C1CAN 
* Default Value:CeTINR_e_NoFaultTCM_C1 
*/
#ifndef TeTINR_e_TCMComFail_C1CAN
typedef uint8 TeTINR_e_TCMComFail_C1CAN;
#define CeTINR_e_NoFaultTCM_C1		((TeTINR_e_TCMComFail_C1CAN)0U)
#define CeTINR_e_LoC_HCP_TCM_C1		((TeTINR_e_TCMComFail_C1CAN)1U)
#define CeTINR_e_LoC_ECM_TCM_C1		((TeTINR_e_TCMComFail_C1CAN)2U)
#define CeTINR_e_LoC_ECM_HCP_TCM_C1		((TeTINR_e_TCMComFail_C1CAN)3U)
#define CeTINR_e_undefine4TCM_C1		((TeTINR_e_TCMComFail_C1CAN)4U)
#define CeTINR_e_undefine5TCM_C1		((TeTINR_e_TCMComFail_C1CAN)5U)
#define CeTINR_e_undefine6TCM_C1		((TeTINR_e_TCMComFail_C1CAN)6U)
#define CeTINR_e_BusFailTCM_C1CAN		((TeTINR_e_TCMComFail_C1CAN)7U)
#endif

/*
* Enum TeTINR_e_TCMComFail_ePTCAN 
* Default Value:CeTINR_e_NoFaultTCM_ePT 
*/
#ifndef TeTINR_e_TCMComFail_ePTCAN
typedef uint8 TeTINR_e_TCMComFail_ePTCAN;
#define CeTINR_e_NoFaultTCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)0U)
#define CeTINR_e_LoC_HCP_TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)1U)
#define CeTINR_e_LoC_ECM_TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)2U)
#define CeTINR_e_LoC_ECM_HCP_TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)3U)
#define CeTINR_e_undefine4TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)4U)
#define CeTINR_e_undefine5TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)5U)
#define CeTINR_e_undefine6TCM_ePT		((TeTINR_e_TCMComFail_ePTCAN)6U)
#define CeTINR_e_BusFailTCM_ePTCAN		((TeTINR_e_TCMComFail_ePTCAN)7U)
#endif

/*
* Enum TeTINR_e_TransAdaptStatus 
* Default Value:CeTINR_e_No_Routine_Running 
*/
#ifndef TeTINR_e_TransAdaptStatus
typedef uint8 TeTINR_e_TransAdaptStatus;
#define CeTINR_e_No_Routine_Running		((TeTINR_e_TransAdaptStatus)0U)
#define CeTINR_e_ShftCltchsPulseAdapt_EngOn		((TeTINR_e_TransAdaptStatus)1U)
#define CeTINR_e_ShftCltchsPulseAdapt_EV_Md		((TeTINR_e_TransAdaptStatus)2U)
#define CeTINR_e_K0_PulseAdapt		((TeTINR_e_TransAdaptStatus)3U)
#define CeTINR_e_ILE_Adapt		((TeTINR_e_TransAdaptStatus)4U)
#define CeTINR_e_STADA_ShftCltchsAdapt		((TeTINR_e_TransAdaptStatus)5U)
#define CeTINR_e_STADA_K0_Adapt		((TeTINR_e_TransAdaptStatus)6U)
#define CeTINR_e_STADA_ILE_Adapt		((TeTINR_e_TransAdaptStatus)7U)
#define CeTINR_e_EOLAD_ShftCltchsAdapt		((TeTINR_e_TransAdaptStatus)8U)
#define CeTINR_e_EOLAD_K0_Adapt		((TeTINR_e_TransAdaptStatus)9U)
#define CeTINR_e_Start_Adapt		((TeTINR_e_TransAdaptStatus)10U)
#endif

/*
* Enum TeTINR_e_P2SpdCntrlReq 
* Default Value:CeTINR_e_Inactive 
*/
#ifndef TeTINR_e_P2SpdCntrlReq
typedef uint8 TeTINR_e_P2SpdCntrlReq;
#define CeTINR_e_Inactive		((TeTINR_e_P2SpdCntrlReq)0U)
#define CeTINR_e_SpeedControlRequest		((TeTINR_e_P2SpdCntrlReq)1U)
#define CeTINR_e_NotDefined		((TeTINR_e_P2SpdCntrlReq)2U)
#define CeTINR_e_TCM_sendSNA		((TeTINR_e_P2SpdCntrlReq)3U)
#endif

/*
* Enum TeTINR_e_TCMNeutPhsZeroTrqReq 
* Default Value:CeTINR_e_LimpInactive 
*/
#ifndef TeTINR_e_TCMNeutPhsZeroTrqReq
typedef uint8 TeTINR_e_TCMNeutPhsZeroTrqReq;
#define CeTINR_e_LimpInactive		((TeTINR_e_TCMNeutPhsZeroTrqReq)0U)
#define CeTINR_e_LimpActive		((TeTINR_e_TCMNeutPhsZeroTrqReq)1U)
#define CeTINR_e_LimpMechD6		((TeTINR_e_TCMNeutPhsZeroTrqReq)2U)
#define CeTINR_e_LimpConflctInfo		((TeTINR_e_TCMNeutPhsZeroTrqReq)3U)
#endif

/*
* Enum TeTINR_e_TCMTCCPreventionID 
* Default Value:CeTINR_e_TCCPreventIdInit 
*/
#ifndef TeTINR_e_TCMTCCPreventionID
typedef uint8 TeTINR_e_TCMTCCPreventionID;
#define CeTINR_e_TCCPreventIdInit		((TeTINR_e_TCMTCCPreventionID)0U)
#define CeTINR_e_TCMHonorHCPReq		((TeTINR_e_TCMTCCPreventionID)1U)
#define CeTINR_e_TCCMapArbOvrrd		((TeTINR_e_TCMTCCPreventionID)2U)
#define CeTINR_e_TCCEngageCndNotSatisfd		((TeTINR_e_TCMTCCPreventionID)3U)
#define CeTINR_e_SlipCntrlEnrgyLimExceed		((TeTINR_e_TCMTCCPreventionID)4U)
#define CeTINR_e_RapidTCCOpenOvrrd		((TeTINR_e_TCMTCCPreventionID)5U)
#define CeTINR_e_FailsafeCntrlActv		((TeTINR_e_TCMTCCPreventionID)14U)
#define CeTINR_e_TCCPreventID_SNA		((TeTINR_e_TCMTCCPreventionID)15U)
#endif

/*
* Enum TeTISR_e_InpSpdDfltSource 
* Default Value:CeTISR_e_EngSpeedFromCAN 
*/
#ifndef TeTISR_e_InpSpdDfltSource
typedef uint8 TeTISR_e_InpSpdDfltSource;
#define CeTISR_e_EngSpeedFromCAN		((TeTISR_e_InpSpdDfltSource)0U)
#define CeTISR_e_EngSpeedFromMSPR		((TeTISR_e_InpSpdDfltSource)1U)
#define CeTISR_e_EngSpeedFromSensor		((TeTISR_e_InpSpdDfltSource)2U)
#define CeTISR_e_EngSpeedFromMCP		((TeTISR_e_InpSpdDfltSource)3U)
#define CeTISR_e_EngSpeedFault		((TeTISR_e_InpSpdDfltSource)4U)
#endif

/*
* Enum TeTMDR_e_LockLowSt 
* Default Value:CeTMDR_e_Off 
*/
#ifndef TeTMDR_e_LockLowSt
typedef uint8 TeTMDR_e_LockLowSt;
#define CeTMDR_e_Off		((TeTMDR_e_LockLowSt)0U)
#define CeTMDR_e_AWD_Lock		((TeTMDR_e_LockLowSt)1U)
#define CeTMDR_e_AWD_Low		((TeTMDR_e_LockLowSt)2U)
#endif

/*
* Enum TeTMDR_e_StActv 
* Default Value:CeTMDR_e_AutoActv 
*/
#ifndef TeTMDR_e_StActv
typedef uint8 TeTMDR_e_StActv;
#define CeTMDR_e_AutoActv		((TeTMDR_e_StActv)1U)
#define CeTMDR_e_RockActv		((TeTMDR_e_StActv)2U)
#define CeTMDR_e_SnowActv		((TeTMDR_e_StActv)3U)
#define CeTMDR_e_SportActv		((TeTMDR_e_StActv)4U)
#define CeTMDR_e_MudSandActv		((TeTMDR_e_StActv)5U)
#define CeTMDR_e_MudActv		((TeTMDR_e_StActv)6U)
#define CeTMDR_e_SandActv		((TeTMDR_e_StActv)7U)
#define CeTMDR_e_Auto_LockLowOff		((TeTMDR_e_StActv)8U)
#define CeTMDR_e_HoldLastMode		((TeTMDR_e_StActv)9U)
#define CeTMDR_e_BatLimpHome		((TeTMDR_e_StActv)10U)
#endif

/*
* Enum TeTMDR_e_AWD_St 
* Default Value:CeTMDR_e_AWD_BothAllowed 
*/
#ifndef TeTMDR_e_AWD_St
typedef uint8 TeTMDR_e_AWD_St;
#define CeTMDR_e_AWD_BothAllowed		((TeTMDR_e_AWD_St)0U)
#define CeTMDR_e_AWD_4LockAllowed		((TeTMDR_e_AWD_St)1U)
#define CeTMDR_e_AWD_BothNotAllowed		((TeTMDR_e_AWD_St)2U)
#define CeTMDR_e_AWD_Fault		((TeTMDR_e_AWD_St)3U)
#endif

/*
* Enum TeTMDR_e_TrrnMd 
* Default Value:CeTMDR_e_NotDefine 
*/
#ifndef TeTMDR_e_TrrnMd
typedef uint8 TeTMDR_e_TrrnMd;
#define CeTMDR_e_NotDefine		((TeTMDR_e_TrrnMd)0U)
#define CeTMDR_e_Auto		((TeTMDR_e_TrrnMd)1U)
#define CeTMDR_e_Rock		((TeTMDR_e_TrrnMd)2U)
#define CeTMDR_e_Snow		((TeTMDR_e_TrrnMd)3U)
#define CeTMDR_e_Sport		((TeTMDR_e_TrrnMd)4U)
#define CeTMDR_e_MudSand		((TeTMDR_e_TrrnMd)5U)
#define CeTMDR_e_Mud		((TeTMDR_e_TrrnMd)6U)
#define CeTMDR_e_Sand		((TeTMDR_e_TrrnMd)7U)
#define CeTMDR_e_Tow		((TeTMDR_e_TrrnMd)8U)
#define CeTMDR_e_Valet		((TeTMDR_e_TrrnMd)9U)
#define CeTMDR_e_ECO		((TeTMDR_e_TrrnMd)10U)
#define CeTMDR_e_Custom		((TeTMDR_e_TrrnMd)11U)
#define CeTMDR_e_Street		((TeTMDR_e_TrrnMd)12U)
#define CeTMDR_e_Drag		((TeTMDR_e_TrrnMd)13U)
#define CeTMDR_e_Track		((TeTMDR_e_TrrnMd)14U)
#define CeTMDR_e_Corsa		((TeTMDR_e_TrrnMd)15U)
#define CeTMDR_e_Baja		((TeTMDR_e_TrrnMd)16U)
#define CeTMDR_e_Offroad		((TeTMDR_e_TrrnMd)17U)
#define CeTMDR_e_AutoFault		((TeTMDR_e_TrrnMd)18U)
#define CeTMDR_e_Drift		((TeTMDR_e_TrrnMd)19U)
#define CeTMDR_e_Donut		((TeTMDR_e_TrrnMd)20U)
#define CeTMDR_e_Launch		((TeTMDR_e_TrrnMd)21U)
#define CeTMDR_e_LineLock		((TeTMDR_e_TrrnMd)22U)
#define CeTMDR_e_MaxBoost		((TeTMDR_e_TrrnMd)23U)
#define CeTMDR_e_TimeAttack		((TeTMDR_e_TrrnMd)24U)
#endif

/*
* Enum TeTMIR_e_ECMDrvDrAjar 
* Default Value:CeTMIR_e_DrvDoorClosed 
*/
#ifndef TeTMIR_e_ECMDrvDrAjar
typedef uint8 TeTMIR_e_ECMDrvDrAjar;
#define CeTMIR_e_DrvDoorClosed		((TeTMIR_e_ECMDrvDrAjar)0U)
#define CeTMIR_e_DrvDoorAjar		((TeTMIR_e_ECMDrvDrAjar)1U)
#define CeTMIR_e_DrvDoorFaulted		((TeTMIR_e_ECMDrvDrAjar)2U)
#define CeTMIR_e_DrvDrSNA		((TeTMIR_e_ECMDrvDrAjar)3U)
#endif

/*
* Enum TeTMIR_e_ECM_LTP_FanAftRunRq 
* Default Value:CeTMIR_e_No_AftRunRequest 
*/
#ifndef TeTMIR_e_ECM_LTP_FanAftRunRq
typedef uint8 TeTMIR_e_ECM_LTP_FanAftRunRq;
#define CeTMIR_e_No_AftRunRequest		((TeTMIR_e_ECM_LTP_FanAftRunRq)0U)
#define CeTMIR_e_ECM_AftRunRequest_1		((TeTMIR_e_ECM_LTP_FanAftRunRq)1U)
#define CeTMIR_e_ECM_AftRunRequest_2		((TeTMIR_e_ECM_LTP_FanAftRunRq)2U)
#define CeTMIR_e_ECM_AftRunRequest_3		((TeTMIR_e_ECM_LTP_FanAftRunRq)3U)
#define CeTMIR_e_ECM_AftRunRequest_4		((TeTMIR_e_ECM_LTP_FanAftRunRq)4U)
#define CeTMIR_e_ECM_AftRunRequest_5		((TeTMIR_e_ECM_LTP_FanAftRunRq)5U)
#define CeTMIR_e_ECM_AftRunRequest_6		((TeTMIR_e_ECM_LTP_FanAftRunRq)6U)
#define CeTMIR_e_SNA_AftRunRequest		((TeTMIR_e_ECM_LTP_FanAftRunRq)7U)
#endif

/*
* Enum TeTMMR_e_ClchTypeDef 
* Default Value:CeTMMR_e_ClchZeroTorq 
*/
#ifndef TeTMMR_e_ClchTypeDef
typedef uint8 TeTMMR_e_ClchTypeDef;
#define CeTMMR_e_ClchZeroTorq		((TeTMMR_e_ClchTypeDef)0U)
#define CeTMMR_e_ClchFrict		((TeTMMR_e_ClchTypeDef)1U)
#define CeTMMR_e_ClchBrk		((TeTMMR_e_ClchTypeDef)2U)
#define CeTMMR_e_ClchDog		((TeTMMR_e_ClchTypeDef)3U)
#define CeTMMR_e_ClchOneWay		((TeTMMR_e_ClchTypeDef)4U)
#endif

/*
* Enum TeTMMR_e_GearToEvenGear 
* Default Value:CeTMMR_e_EvenGearN 
*/
#ifndef TeTMMR_e_GearToEvenGear
typedef uint8 TeTMMR_e_GearToEvenGear;
#define CeTMMR_e_EvenGear2		((TeTMMR_e_GearToEvenGear)0U)
#define CeTMMR_e_EvenGear4		((TeTMMR_e_GearToEvenGear)1U)
#define CeTMMR_e_EvenGear6		((TeTMMR_e_GearToEvenGear)2U)
#define CeTMMR_e_EvenGearR		((TeTMMR_e_GearToEvenGear)3U)
#define CeTMMR_e_EvenGearN		((TeTMMR_e_GearToEvenGear)4U)
#endif

/*
* Enum TeTMMR_e_GearToOddGear 
* Default Value:CeTMMR_e_OddGearN 
*/
#ifndef TeTMMR_e_GearToOddGear
typedef uint8 TeTMMR_e_GearToOddGear;
#define CeTMMR_e_OddGear1		((TeTMMR_e_GearToOddGear)0U)
#define CeTMMR_e_OddGear3		((TeTMMR_e_GearToOddGear)1U)
#define CeTMMR_e_OddGear5		((TeTMMR_e_GearToOddGear)2U)
#define CeTMMR_e_OddGear7		((TeTMMR_e_GearToOddGear)3U)
#define CeTMMR_e_OddGearN		((TeTMMR_e_GearToOddGear)4U)
#endif

/*
* Enum TeTMMR_e_MtrBDynFctr 
* Default Value:CeTMMR_e_MtrBDynFctr_Inactive 
*/
#ifndef TeTMMR_e_MtrBDynFctr
typedef uint8 TeTMMR_e_MtrBDynFctr;
#define CeTMMR_e_MtrBDynFctr_Inactive		((TeTMMR_e_MtrBDynFctr)0U)
#define CeTMMR_e_MtrBDynFctr_Low		((TeTMMR_e_MtrBDynFctr)1U)
#define CeTMMR_e_MtrBDynFctr_Medium		((TeTMMR_e_MtrBDynFctr)2U)
#define CeTMMR_e_MtrBDynFctr_High		((TeTMMR_e_MtrBDynFctr)3U)
#endif

/*
* Enum TeTMMR_e_ClchStat 
* Default Value:CeTMMR_e_ClchUnlock 
*/
#ifndef TeTMMR_e_ClchStat
typedef uint8 TeTMMR_e_ClchStat;
#define CeTMMR_e_ClchUnlock		((TeTMMR_e_ClchStat)0U)
#define CeTMMR_e_ClchFill		((TeTMMR_e_ClchStat)1U)
#define CeTMMR_e_ClchSlip		((TeTMMR_e_ClchStat)2U)
#define CeTMMR_e_ClchLock		((TeTMMR_e_ClchStat)3U)
#endif

/*
* Enum TeTMMR_e_TransShftTrqSpdPhs 
* Default Value:CeTMMR_e_InactiveShiftInProgress 
*/
#ifndef TeTMMR_e_TransShftTrqSpdPhs
typedef uint8 TeTMMR_e_TransShftTrqSpdPhs;
#define CeTMMR_e_InactiveShiftInProgress		((TeTMMR_e_TransShftTrqSpdPhs)0U)
#define CeTMMR_e_TrqBeforeSpdPhase		((TeTMMR_e_TransShftTrqSpdPhs)1U)
#define CeTMMR_e_SpdBeforeTrqPhase		((TeTMMR_e_TransShftTrqSpdPhs)2U)
#define CeTMMR_e_GarageShiftInProgress		((TeTMMR_e_TransShftTrqSpdPhs)3U)
#define CeTMMR_e_NeutDsrd		((TeTMMR_e_TransShftTrqSpdPhs)4U)
#define CeTMMR_e_TrqBeforeSpdPhaseMinToff		((TeTMMR_e_TransShftTrqSpdPhs)5U)
#endif

/*
* Enum TeTMMR_e_NCSgnExpctd 
* Default Value:CeTMMR_e_UnknownNCSign 
*/
#ifndef TeTMMR_e_NCSgnExpctd
typedef uint8 TeTMMR_e_NCSgnExpctd;
#define CeTMMR_e_UnknownNCSign		((TeTMMR_e_NCSgnExpctd)0U)
#define CeTMMR_e_NegativeNCSign		((TeTMMR_e_NCSgnExpctd)1U)
#define CeTMMR_e_PositiveNCSign		((TeTMMR_e_NCSgnExpctd)2U)
#endif

/*
* Enum TeTMMR_e_PropulsionMode 
* Default Value:CeTMMR_e_PropulsionMode_SNA 
*/
#ifndef TeTMMR_e_PropulsionMode
typedef uint8 TeTMMR_e_PropulsionMode;
#define CeTMMR_e_Parallel_Hybrid		((TeTMMR_e_PropulsionMode)0U)
#define CeTMMR_e_EV		((TeTMMR_e_PropulsionMode)1U)
#define CeTMMR_e_PropulsionMode_SNA		((TeTMMR_e_PropulsionMode)2U)
#endif

/*
* Enum TeTMMR_e_PropulsionModeEnum 
* Default Value:CeTMMR_e_Always_EV_overrideLatch 
*/
#ifndef TeTMMR_e_PropulsionModeEnum
typedef uint8 TeTMMR_e_PropulsionModeEnum;
#define CeTMMR_e_Always_EV_overrideLatch		((TeTMMR_e_PropulsionModeEnum)0U)
#define CeTMMR_e_Always_EV		((TeTMMR_e_PropulsionModeEnum)1U)
#define CeTMMR_e_based_on_CreepEngSts		((TeTMMR_e_PropulsionModeEnum)2U)
#define CeTMMR_e_Always_Parallel		((TeTMMR_e_PropulsionModeEnum)3U)
#endif

/*
* Enum TeTMMR_e_ShftTypeDrvLnNtrl_DCT 
* Default Value:CeTMMR_e_NoDrvLnNtrl 
*/
#ifndef TeTMMR_e_ShftTypeDrvLnNtrl_DCT
typedef uint8 TeTMMR_e_ShftTypeDrvLnNtrl_DCT;
#define CeTMMR_e_NoDrvLnNtrl		((TeTMMR_e_ShftTypeDrvLnNtrl_DCT)0U)
#define CeTMMR_e_HevToX		((TeTMMR_e_ShftTypeDrvLnNtrl_DCT)1U)
#define CeTMMR_e_DwnShft		((TeTMMR_e_ShftTypeDrvLnNtrl_DCT)2U)
#define CeTMMR_e_UpShft		((TeTMMR_e_ShftTypeDrvLnNtrl_DCT)3U)
#endif

/*
* Enum TeTMMR_e_ShftTypeTgtShaft_DCT 
* Default Value:CeTMMR_e_NoTgtShaft 
*/
#ifndef TeTMMR_e_ShftTypeTgtShaft_DCT
typedef uint8 TeTMMR_e_ShftTypeTgtShaft_DCT;
#define CeTMMR_e_NoTgtShaft		((TeTMMR_e_ShftTypeTgtShaft_DCT)0U)
#define CeTMMR_e_TgtEvenShaft		((TeTMMR_e_ShftTypeTgtShaft_DCT)1U)
#define CeTMMR_e_TgtOddShaft		((TeTMMR_e_ShftTypeTgtShaft_DCT)2U)
#endif

/*
* Enum TeTMMR_e_ShftTypeTrqBreak_DCT 
* Default Value:CeTMMR_e_noTrqBreakShft 
*/
#ifndef TeTMMR_e_ShftTypeTrqBreak_DCT
typedef uint8 TeTMMR_e_ShftTypeTrqBreak_DCT;
#define CeTMMR_e_noTrqBreakShft		((TeTMMR_e_ShftTypeTrqBreak_DCT)0U)
#define CeTMMR_e_evenShaftTrqBreakShft		((TeTMMR_e_ShftTypeTrqBreak_DCT)1U)
#define CeTMMR_e_oddShaftTrqBreakShft		((TeTMMR_e_ShftTypeTrqBreak_DCT)2U)
#endif

/*
* Enum TeTMMR_e_StartType_DCT 
* Default Value:CeTMMR_e_noStrt 
*/
#ifndef TeTMMR_e_StartType_DCT
typedef uint8 TeTMMR_e_StartType_DCT;
#define CeTMMR_e_noStrt		((TeTMMR_e_StartType_DCT)0U)
#define CeTMMR_e_CltchStrtOddShaft		((TeTMMR_e_StartType_DCT)1U)
#define CeTMMR_e_CltchStrtEvenShaft		((TeTMMR_e_StartType_DCT)2U)
#define CeTMMR_e_ImpulseStrt		((TeTMMR_e_StartType_DCT)3U)
#endif

/*
* Enum TeTMMR_e_SyncStat_DCT 
* Default Value:CeTMMR_e_SyncOpen 
*/
#ifndef TeTMMR_e_SyncStat_DCT
typedef uint8 TeTMMR_e_SyncStat_DCT;
#define CeTMMR_e_SyncOpen		((TeTMMR_e_SyncStat_DCT)0U)
#define CeTMMR_e_SyncClosed		((TeTMMR_e_SyncStat_DCT)1U)
#endif

/*
* Enum TeTMMR_e_ClchStat_DCT 
* Default Value:CeTMMR_e_ClchReleased 
*/
#ifndef TeTMMR_e_ClchStat_DCT
typedef uint8 TeTMMR_e_ClchStat_DCT;
#define CeTMMR_e_ClchReleased		((TeTMMR_e_ClchStat_DCT)0U)
#define CeTMMR_e_ClchPreFilled		((TeTMMR_e_ClchStat_DCT)1U)
#define CeTMMR_e_TorqueMode		((TeTMMR_e_ClchStat_DCT)2U)
#define CeTMMR_e_SlipControl		((TeTMMR_e_ClchStat_DCT)3U)
#define CeTMMR_e_MicroSlip		((TeTMMR_e_ClchStat_DCT)4U)
#define CeTMMR_e_ClchOvrPressure		((TeTMMR_e_ClchStat_DCT)5U)
#endif

/*
* Enum TeTMMR_e_TransShiftStat 
* Default Value:CeTMMR_e_SteadyState 
*/
#ifndef TeTMMR_e_TransShiftStat
typedef uint8 TeTMMR_e_TransShiftStat;
#define CeTMMR_e_SteadyState		((TeTMMR_e_TransShiftStat)0U)
#define CeTMMR_e_TorquePhase		((TeTMMR_e_TransShiftStat)1U)
#define CeTMMR_e_SpeedPhase		((TeTMMR_e_TransShiftStat)2U)
#endif

/*
* Enum TeTOSR_e_TOS_VS_WhlResult 
* Default Value:CeTOSR_e_TOS_VS_WhlUnknown 
*/
#ifndef TeTOSR_e_TOS_VS_WhlResult
typedef uint8 TeTOSR_e_TOS_VS_WhlResult;
#define CeTOSR_e_TOS_VS_WhlUnknown		((TeTOSR_e_TOS_VS_WhlResult)0U)
#define CeTOSR_e_TOS_VS_WhlInRange		((TeTOSR_e_TOS_VS_WhlResult)1U)
#define CeTOSR_e_TOS_VS_WhlOutOfRange		((TeTOSR_e_TOS_VS_WhlResult)2U)
#endif

/*
* Enum TeTOSR_e_OutputSpdDfltSource 
* Default Value:CeTOSR_e_TransOutputSpd 
*/
#ifndef TeTOSR_e_OutputSpdDfltSource
typedef uint8 TeTOSR_e_OutputSpdDfltSource;
#define CeTOSR_e_TransOutputSpd		((TeTOSR_e_OutputSpdDfltSource)0U)
#define CeTOSR_e_AvgDrivenWheelSpd		((TeTOSR_e_OutputSpdDfltSource)1U)
#define CeTOSR_e_MotorM1_M2		((TeTOSR_e_OutputSpdDfltSource)2U)
#define CeTOSR_e_TransInputSpd		((TeTOSR_e_OutputSpdDfltSource)3U)
#define CeTOSR_e_SingleDrivenWheelSpd		((TeTOSR_e_OutputSpdDfltSource)4U)
#define CeTOSR_e_EngineSpd		((TeTOSR_e_OutputSpdDfltSource)5U)
#define CeTOSR_e_NoSourceAvailable		((TeTOSR_e_OutputSpdDfltSource)6U)
#endif

/*
* Enum TeTOSR_e_OutputSpdSource 
* Default Value:CeTOSR_e_TransOutputSpdFromSensor 
*/
#ifndef TeTOSR_e_OutputSpdSource
typedef uint8 TeTOSR_e_OutputSpdSource;
#define CeTOSR_e_TransOutputSpdFromSensor		((TeTOSR_e_OutputSpdSource)0U)
#define CeTOSR_e_TransOutputSpdFromMtrB		((TeTOSR_e_OutputSpdSource)1U)
#define CeTOSR_e_TransOutputSpdFromVehSpd		((TeTOSR_e_OutputSpdSource)2U)
#define CeTOSR_e_NTurbineSpeed		((TeTOSR_e_OutputSpdSource)3U)
#define CeTOSR_e_TransOutputSpdUnknown		((TeTOSR_e_OutputSpdSource)4U)
#endif

/*
* Enum TeTOSR_e_OSS_SensorLocation 
* Default Value:CeTOSR_e_NoSensorPresent 
*/
#ifndef TeTOSR_e_OSS_SensorLocation
typedef uint8 TeTOSR_e_OSS_SensorLocation;
#define CeTOSR_e_NoSensorPresent		((TeTOSR_e_OSS_SensorLocation)0U)
#define CeTOSR_e_AfterGearBox		((TeTOSR_e_OSS_SensorLocation)1U)
#define CeTOSR_e_AfterFinalChain		((TeTOSR_e_OSS_SensorLocation)2U)
#define CeTOSR_e_After4WD_TransferCase		((TeTOSR_e_OSS_SensorLocation)3U)
#define CeTOSR_e_AfterFinalDrive		((TeTOSR_e_OSS_SensorLocation)4U)
#define CeTOSR_e_AfterTwoSpeedAxle		((TeTOSR_e_OSS_SensorLocation)5U)
#endif

/*
* Enum TeTOSR_e_TOS_DfltDirection 
* Default Value:CeTOSR_e_DirectionUnknown 
*/
#ifndef TeTOSR_e_TOS_DfltDirection
typedef uint8 TeTOSR_e_TOS_DfltDirection;
#define CeTOSR_e_DirectionUnknown		((TeTOSR_e_TOS_DfltDirection)0U)
#define CeTOSR_e_DirectionInvalid		((TeTOSR_e_TOS_DfltDirection)1U)
#define CeTOSR_e_DirectionForward		((TeTOSR_e_TOS_DfltDirection)2U)
#define CeTOSR_e_DirectionReverse		((TeTOSR_e_TOS_DfltDirection)3U)
#endif

/*
* Enum TeTPCR_e_ThrmPerWup_State 
* Default Value:CeTPCR_e_NoWup_Set_ShortTim_RS_Denied 
*/
#ifndef TeTPCR_e_ThrmPerWup_State
typedef uint8 TeTPCR_e_ThrmPerWup_State;
#define CeTPCR_e_NoWup_Set_ShortTim_RS_Denied		((TeTPCR_e_ThrmPerWup_State)0U)
#define CeTPCR_e_NoWup_FirstSet_ThrmlPerWup_Timer		((TeTPCR_e_ThrmPerWup_State)1U)
#define CeTPCR_e_NoWup_SHIPSet_ThrmlPerWup_DfltTimer		((TeTPCR_e_ThrmPerWup_State)2U)
#define CeTPCR_e_Wup_WaitBatCond_ThrmlPerWup_Timer		((TeTPCR_e_ThrmPerWup_State)3U)
#define CeTPCR_e_WpWaitBatCond_PerWpTimr		((TeTPCR_e_ThrmPerWup_State)4U)
#define CeTPCR_e_Default_PerWup		((TeTPCR_e_ThrmPerWup_State)5U)
#define CeTPCR_e_Default_PerWupDsbld		((TeTPCR_e_ThrmPerWup_State)6U)
#endif

/*
* Enum TeTPCR_e_PerWup_BattEngCond 
* Default Value:CeTPCR_e_NoneOfEngBatt_Cond 
*/
#ifndef TeTPCR_e_PerWup_BattEngCond
typedef uint8 TeTPCR_e_PerWup_BattEngCond;
#define CeTPCR_e_NoneOfEngBatt_Cond		((TeTPCR_e_PerWup_BattEngCond)0U)
#define CeTPCR_e_BattOnly_Cond		((TeTPCR_e_PerWup_BattEngCond)1U)
#define CeTPCR_e_EngOnly_Cond		((TeTPCR_e_PerWup_BattEngCond)2U)
#define CeTPCR_e_Both_Eng_N_Bat_Cond		((TeTPCR_e_PerWup_BattEngCond)3U)
#endif

/*
* Enum TeTPCR_e_ProactiveCondMode 
* Default Value:CeTPCR_e_NoProactiveCond 
*/
#ifndef TeTPCR_e_ProactiveCondMode
typedef uint8 TeTPCR_e_ProactiveCondMode;
#define CeTPCR_e_NoProactiveCond		((TeTPCR_e_ProactiveCondMode)0U)
#define CeTPCR_e_ActiveProactiveCond		((TeTPCR_e_ProactiveCondMode)1U)
#define CeTPCR_e_PassiveProativeCond		((TeTPCR_e_ProactiveCondMode)2U)
#endif

/*
* Enum TeTPCR_e_ProactiveCondStatus 
* Default Value:CeTPCR_e_ProactiveCondOff 
*/
#ifndef TeTPCR_e_ProactiveCondStatus
typedef uint8 TeTPCR_e_ProactiveCondStatus;
#define CeTPCR_e_ProactiveCondOff		((TeTPCR_e_ProactiveCondStatus)0U)
#define CeTPCR_e_ProactiveCondOn		((TeTPCR_e_ProactiveCondStatus)1U)
#define CeTPCR_e_ProactiveCondSPR		((TeTPCR_e_ProactiveCondStatus)2U)
#endif

/*
* Enum TeTPCR_e_CabinPreCondReqStat 
* Default Value:CeTPCR_e_CabinPrec_Dflt 
*/
#ifndef TeTPCR_e_CabinPreCondReqStat
typedef uint8 TeTPCR_e_CabinPreCondReqStat;
#define CeTPCR_e_CabinPrec_Dflt		((TeTPCR_e_CabinPreCondReqStat)0U)
#define CeTPCR_e_NoCabPrec_NotPlugged		((TeTPCR_e_CabinPreCondReqStat)1U)
#define CeTPCR_e_NoCabPrec_SOC		((TeTPCR_e_CabinPreCondReqStat)2U)
#define CeTPCR_e_OkCabinPrec		((TeTPCR_e_CabinPreCondReqStat)3U)
#define CeTPCR_e_CabinPrec_SP_Reached		((TeTPCR_e_CabinPreCondReqStat)4U)
#define CeTPCR_e_CabinPrec_Off		((TeTPCR_e_CabinPreCondReqStat)5U)
#define CeTPCR_e_NoCabPrec_Flts		((TeTPCR_e_CabinPreCondReqStat)6U)
#define CeTPCR_e_NoCabPrec_HV_BatCrit		((TeTPCR_e_CabinPreCondReqStat)7U)
#define CeTPCR_e_NoCabPrec_HV_BatCondCmplt		((TeTPCR_e_CabinPreCondReqStat)8U)
#define CeTPCR_e_NoCabPrec_HV_BatCondStop		((TeTPCR_e_CabinPreCondReqStat)9U)
#define CeTPCR_e_NoCabPrec_SNA		((TeTPCR_e_CabinPreCondReqStat)15U)
#endif

/*
* Enum TeTPCR_e_HVAC_State 
* Default Value:CeTPCR_e_HVAC_Off 
*/
#ifndef TeTPCR_e_HVAC_State
typedef uint8 TeTPCR_e_HVAC_State;
#define CeTPCR_e_HVAC_Off		((TeTPCR_e_HVAC_State)0U)
#define CeTPCR_e_HVAC_On		((TeTPCR_e_HVAC_State)1U)
#define CeTPCR_e_HVAC_SPR		((TeTPCR_e_HVAC_State)2U)
#define CeTPCR_e_HVAC_SNA		((TeTPCR_e_HVAC_State)3U)
#endif

/*
* Enum TeTPCR_e_SC_WakeUpSt 
* Default Value:CeTPCR_e_SC_NotAwake 
*/
#ifndef TeTPCR_e_SC_WakeUpSt
typedef uint8 TeTPCR_e_SC_WakeUpSt;
#define CeTPCR_e_SC_NotAwake		((TeTPCR_e_SC_WakeUpSt)0U)
#define CeTPCR_e_SC_WakeUp		((TeTPCR_e_SC_WakeUpSt)1U)
#define CeTPCR_e_SCWakeUp_SNA		((TeTPCR_e_SC_WakeUpSt)3U)
#endif

/*
* Enum TeTPCR_e_KeepHotCold 
* Default Value:CeTPCR_e_NoRequest 
*/
#ifndef TeTPCR_e_KeepHotCold
typedef uint8 TeTPCR_e_KeepHotCold;
#define CeTPCR_e_NoRequest		((TeTPCR_e_KeepHotCold)0U)
#define CeTPCR_e_AbortedDoorOpen		((TeTPCR_e_KeepHotCold)1U)
#define CeTPCR_e_AbortedHoodOpen		((TeTPCR_e_KeepHotCold)2U)
#define CeTPCR_e_AbortedTrunkOpen		((TeTPCR_e_KeepHotCold)3U)
#define CeTPCR_e_OnPressBrake		((TeTPCR_e_KeepHotCold)4U)
#define CeTPCR_e_OnUnavailable		((TeTPCR_e_KeepHotCold)5U)
#define CeTPCR_e_OnTimeExpired		((TeTPCR_e_KeepHotCold)6U)
#define CeTPCR_e_AbortedLowBattery		((TeTPCR_e_KeepHotCold)7U)
#define CeTPCR_e_AbortedBattTempNotOk		((TeTPCR_e_KeepHotCold)8U)
#endif

/*
* Enum TeTPCR_e_KeepHotColdStatus 
* Default Value:CeTPCR_e_NotActive 
*/
#ifndef TeTPCR_e_KeepHotColdStatus
typedef uint8 TeTPCR_e_KeepHotColdStatus;
#define CeTPCR_e_NotActive		((TeTPCR_e_KeepHotColdStatus)0U)
#define CeTPCR_e_Active		((TeTPCR_e_KeepHotColdStatus)1U)
#define CeTPCR_e_TemporaryNotAvailable		((TeTPCR_e_KeepHotColdStatus)2U)
#define CeTPCR_e_FailStatus		((TeTPCR_e_KeepHotColdStatus)3U)
#endif

/*
* Enum TeTPCR_e_RacePrepState 
* Default Value:CeTPCR_e_NotRacePrep 
*/
#ifndef TeTPCR_e_RacePrepState
typedef uint8 TeTPCR_e_RacePrepState;
#define CeTPCR_e_NotRacePrep		((TeTPCR_e_RacePrepState)0U)
#define CeTPCR_e_RacePrepActiveTrack		((TeTPCR_e_RacePrepState)1U)
#define CeTPCR_e_RacePrepActiveDrag		((TeTPCR_e_RacePrepState)2U)
#define CeTPCR_e_RacePrepSPRTrack		((TeTPCR_e_RacePrepState)3U)
#define CeTPCR_e_RacePrepSPRDrag		((TeTPCR_e_RacePrepState)4U)
#endif

/*
* Enum TeTRAR_e_HybCmndEngTorqRespTyp 
* Default Value:CeTRAR_e_Inactive 
*/
#ifndef TeTRAR_e_HybCmndEngTorqRespTyp
typedef uint8 TeTRAR_e_HybCmndEngTorqRespTyp;
#define CeTRAR_e_Inactive		((TeTRAR_e_HybCmndEngTorqRespTyp)0U)
#define CeTRAR_e_Pleasability_Limited		((TeTRAR_e_HybCmndEngTorqRespTyp)1U)
#define CeTRAR_e_Maximum_Range		((TeTRAR_e_HybCmndEngTorqRespTyp)2U)
#define CeTRAR_e_Automatic		((TeTRAR_e_HybCmndEngTorqRespTyp)3U)
#endif

/*
* Enum TeTRAR_e_EngState 
* Default Value:CeTRAR_e_NonDOD_FF 
*/
#ifndef TeTRAR_e_EngState
typedef uint8 TeTRAR_e_EngState;
#define CeTRAR_e_NonDOD_FF		((TeTRAR_e_EngState)0U)
#define CeTRAR_e_NonDOD_ZF		((TeTRAR_e_EngState)1U)
#define CeTRAR_e_DOD_FF		((TeTRAR_e_EngState)2U)
#define CeTRAR_e_DOD_ZF		((TeTRAR_e_EngState)3U)
#define CeTRAR_e_NonDOD2DOD_FF		((TeTRAR_e_EngState)4U)
#define CeTRAR_e_DOD2NonDOD_FF		((TeTRAR_e_EngState)5U)
#define CeTRAR_e_NonDOD_FF2ZF		((TeTRAR_e_EngState)6U)
#define CeTRAR_e_NonDOD_ZF2FF		((TeTRAR_e_EngState)7U)
#define CeTRAR_e_DOD_FF2ZF		((TeTRAR_e_EngState)8U)
#define CeTRAR_e_DOD_ZF2FF		((TeTRAR_e_EngState)9U)
#define CeTRAR_e_RichFuel		((TeTRAR_e_EngState)10U)
#define CeTRAR_e_RichFuel2Fuel		((TeTRAR_e_EngState)11U)
#endif

/*
* Enum TeTRAR_e_EngArbState 
* Default Value:CeTRAR_e_NormalCase 
*/
#ifndef TeTRAR_e_EngArbState
typedef uint8 TeTRAR_e_EngArbState;
#define CeTRAR_e_NormalCase		((TeTRAR_e_EngArbState)0U)
#define CeTRAR_e_FastTorqueActive		((TeTRAR_e_EngArbState)1U)
#define CeTRAR_e_ESSR		((TeTRAR_e_EngArbState)2U)
#define CeTRAR_e_ManualOverride		((TeTRAR_e_EngArbState)3U)
#define CeTRAR_e_SEM		((TeTRAR_e_EngArbState)4U)
#endif

/*
* Enum TeTRAR_e_EngCntrlMode 
* Default Value:CeTRAR_e_TorqueMode 
*/
#ifndef TeTRAR_e_EngCntrlMode
typedef uint8 TeTRAR_e_EngCntrlMode;
#define CeTRAR_e_TorqueMode		((TeTRAR_e_EngCntrlMode)0U)
#define CeTRAR_e_SpeedMode		((TeTRAR_e_EngCntrlMode)1U)
#endif

/*
* Enum TeTRGR_e_PPawlCmnd 
* Default Value:CeTRGR_e_PPawlIdle 
*/
#ifndef TeTRGR_e_PPawlCmnd
typedef uint8 TeTRGR_e_PPawlCmnd;
#define CeTRGR_e_PPawlIdle		((TeTRGR_e_PPawlCmnd)0U)
#define CeTRGR_e_PPawlEngage		((TeTRGR_e_PPawlCmnd)1U)
#define CeTRGR_e_PPawlDisEngage		((TeTRGR_e_PPawlCmnd)2U)
#endif

/*
* Enum TeTRGR_e_PRNDBlinkRq 
* Default Value:CeTRGR_e_PRNDBlinkNone 
*/
#ifndef TeTRGR_e_PRNDBlinkRq
typedef uint8 TeTRGR_e_PRNDBlinkRq;
#define CeTRGR_e_PRNDBlinkNone		((TeTRGR_e_PRNDBlinkRq)0U)
#define CeTRGR_e_PRNDBlinkPark		((TeTRGR_e_PRNDBlinkRq)1U)
#define CeTRGR_e_PRNDBlinkReverse		((TeTRGR_e_PRNDBlinkRq)2U)
#define CeTRGR_e_PRNDBlinkNeutral		((TeTRGR_e_PRNDBlinkRq)3U)
#define CeTRGR_e_PRNDBlinkDrive		((TeTRGR_e_PRNDBlinkRq)4U)
#define CeTRGR_e_PRNDBlinkLow		((TeTRGR_e_PRNDBlinkRq)5U)
#endif

/*
* Enum TeTRGR_e_ManualGateRq 
* Default Value:CeTRGR_e_ManualGateRq_None 
*/
#ifndef TeTRGR_e_ManualGateRq
typedef uint8 TeTRGR_e_ManualGateRq;
#define CeTRGR_e_ManualGateRq_None		((TeTRGR_e_ManualGateRq)0U)
#define CeTRGR_e_ManualGateRq_Plus		((TeTRGR_e_ManualGateRq)2U)
#define CeTRGR_e_ManualGateRq_Minus		((TeTRGR_e_ManualGateRq)3U)
#define CeTRGR_e_ManualGateRq_Both		((TeTRGR_e_ManualGateRq)4U)
#define CeTRGR_e_ManualGateRq_SNA		((TeTRGR_e_ManualGateRq)7U)
#endif

/*
* Enum TeTRGR_e_TransRangeState 
* Default Value:CeTRGR_e_NoSelectionAvailable 
*/
#ifndef TeTRGR_e_TransRangeState
typedef uint8 TeTRGR_e_TransRangeState;
#define CeTRGR_e_NoSelectionAvailable		((TeTRGR_e_TransRangeState)0U)
#define CeTRGR_e_TransRangePark		((TeTRGR_e_TransRangeState)1U)
#define CeTRGR_e_TransRangeReverse		((TeTRGR_e_TransRangeState)2U)
#define CeTRGR_e_TransRangeNeutral		((TeTRGR_e_TransRangeState)3U)
#define CeTRGR_e_TransRangeDrive		((TeTRGR_e_TransRangeState)4U)
#define CeTRGR_e_TransRangeDrive1		((TeTRGR_e_TransRangeState)5U)
#define CeTRGR_e_TransRangeDrive2		((TeTRGR_e_TransRangeState)6U)
#define CeTRGR_e_TransRangeDrive3		((TeTRGR_e_TransRangeState)7U)
#define CeTRGR_e_TransRangeDrive4		((TeTRGR_e_TransRangeState)8U)
#define CeTRGR_e_TransRangeDrive5		((TeTRGR_e_TransRangeState)9U)
#define CeTRGR_e_TransRangeDrive6		((TeTRGR_e_TransRangeState)10U)
#define CeTRGR_e_TransRangeDrive7		((TeTRGR_e_TransRangeState)11U)
#define CeTRGR_e_TransRangeDrive8		((TeTRGR_e_TransRangeState)12U)
#define CeTRGR_e_TransRangeDrive9		((TeTRGR_e_TransRangeState)13U)
#define CeTRGR_e_TransRangeDrive10		((TeTRGR_e_TransRangeState)14U)
#define CeTRGR_e_TransRangeDrive11		((TeTRGR_e_TransRangeState)15U)
#define CeTRGR_e_TransRangeDrive12		((TeTRGR_e_TransRangeState)16U)
#define CeTRGR_e_ParkToReverse		((TeTRGR_e_TransRangeState)17U)
#define CeTRGR_e_ParkToNeutral		((TeTRGR_e_TransRangeState)18U)
#define CeTRGR_e_ParkToDrive		((TeTRGR_e_TransRangeState)19U)
#define CeTRGR_e_ReverseToPark		((TeTRGR_e_TransRangeState)20U)
#define CeTRGR_e_ReverseToNeutral		((TeTRGR_e_TransRangeState)21U)
#define CeTRGR_e_ReverseToDrive		((TeTRGR_e_TransRangeState)22U)
#define CeTRGR_e_NeutralToPark		((TeTRGR_e_TransRangeState)23U)
#define CeTRGR_e_NeutralToReverse		((TeTRGR_e_TransRangeState)24U)
#define CeTRGR_e_NeutralToDrive		((TeTRGR_e_TransRangeState)25U)
#define CeTRGR_e_DriveToPark		((TeTRGR_e_TransRangeState)26U)
#define CeTRGR_e_DriveToReverse		((TeTRGR_e_TransRangeState)27U)
#define CeTRGR_e_DriveToNeutral		((TeTRGR_e_TransRangeState)28U)
#define CeTRGR_e_TransRangeIllegal		((TeTRGR_e_TransRangeState)29U)
#endif

/*
* Enum TeTRGR_e_PRNDDbgSt 
* Default Value:CeTRGR_e_PRNDDbgSt1 
*/
#ifndef TeTRGR_e_PRNDDbgSt
typedef uint8 TeTRGR_e_PRNDDbgSt;
#define CeTRGR_e_PRNDDbgSt1		((TeTRGR_e_PRNDDbgSt)1U)
#define CeTRGR_e_PRNDDbgSt2		((TeTRGR_e_PRNDDbgSt)2U)
#define CeTRGR_e_PRNDDbgSt3		((TeTRGR_e_PRNDDbgSt)3U)
#define CeTRGR_e_PRNDDbgSt4		((TeTRGR_e_PRNDDbgSt)4U)
#define CeTRGR_e_PRNDDbgSt5		((TeTRGR_e_PRNDDbgSt)5U)
#define CeTRGR_e_PRNDDbgSt6		((TeTRGR_e_PRNDDbgSt)6U)
#define CeTRGR_e_PRNDDbgSt7		((TeTRGR_e_PRNDDbgSt)7U)
#define CeTRGR_e_PRNDDbgSt8		((TeTRGR_e_PRNDDbgSt)8U)
#define CeTRGR_e_PRNDDbgSt9		((TeTRGR_e_PRNDDbgSt)9U)
#define CeTRGR_e_PRNDDbgSt10		((TeTRGR_e_PRNDDbgSt)10U)
#define CeTRGR_e_PRNDDbgSt11		((TeTRGR_e_PRNDDbgSt)11U)
#define CeTRGR_e_PRNDDbgSt12		((TeTRGR_e_PRNDDbgSt)12U)
#define CeTRGR_e_PRNDDbgSt13		((TeTRGR_e_PRNDDbgSt)13U)
#define CeTRGR_e_PRNDDbgSt14		((TeTRGR_e_PRNDDbgSt)14U)
#define CeTRGR_e_PRNDDbgSt15		((TeTRGR_e_PRNDDbgSt)15U)
#define CeTRGR_e_PRNDDbgSt16		((TeTRGR_e_PRNDDbgSt)16U)
#define CeTRGR_e_PRNDDbgSt17		((TeTRGR_e_PRNDDbgSt)17U)
#define CeTRGR_e_PRNDDbgSt18		((TeTRGR_e_PRNDDbgSt)18U)
#define CeTRGR_e_PRNDDbgSt19		((TeTRGR_e_PRNDDbgSt)19U)
#define CeTRGR_e_PRNDDbgSt20		((TeTRGR_e_PRNDDbgSt)20U)
#define CeTRGR_e_PRNDDbgSt21		((TeTRGR_e_PRNDDbgSt)21U)
#define CeTRGR_e_PRNDDbgSt22		((TeTRGR_e_PRNDDbgSt)22U)
#define CeTRGR_e_PRNDDbgSt23		((TeTRGR_e_PRNDDbgSt)23U)
#define CeTRGR_e_PRNDDbgSt24		((TeTRGR_e_PRNDDbgSt)24U)
#define CeTRGR_e_PRNDDbgSt25		((TeTRGR_e_PRNDDbgSt)25U)
#define CeTRGR_e_PRNDDbgSt26		((TeTRGR_e_PRNDDbgSt)26U)
#define CeTRGR_e_PRNDDbgSt27		((TeTRGR_e_PRNDDbgSt)27U)
#define CeTRGR_e_PRNDDbgSt28		((TeTRGR_e_PRNDDbgSt)28U)
#define CeTRGR_e_PRNDDbgSt29		((TeTRGR_e_PRNDDbgSt)29U)
#define CeTRGR_e_PRNDDbgSt30		((TeTRGR_e_PRNDDbgSt)30U)
#endif

/*
* Enum TeTRGR_e_TrnLeverPstn 
* Default Value:CeTRGR_e_BetweenRanges 
*/
#ifndef TeTRGR_e_TrnLeverPstn
typedef uint8 TeTRGR_e_TrnLeverPstn;
#define CeTRGR_e_BetweenRanges		((TeTRGR_e_TrnLeverPstn)0U)
#define CeTRGR_e_ParkRange		((TeTRGR_e_TrnLeverPstn)1U)
#define CeTRGR_e_ReverseRange		((TeTRGR_e_TrnLeverPstn)2U)
#define CeTRGR_e_NeutralRange		((TeTRGR_e_TrnLeverPstn)3U)
#define CeTRGR_e_ForwardRangeA		((TeTRGR_e_TrnLeverPstn)4U)
#define CeTRGR_e_ForwardRangeB		((TeTRGR_e_TrnLeverPstn)5U)
#define CeTRGR_e_ForwardRangeC		((TeTRGR_e_TrnLeverPstn)6U)
#define CeTRGR_e_ForwardRangeD		((TeTRGR_e_TrnLeverPstn)7U)
#define CeTRGR_e_ForwardRangeE		((TeTRGR_e_TrnLeverPstn)8U)
#define CeTRGR_e_ForwardRangeF		((TeTRGR_e_TrnLeverPstn)9U)
#define CeTRGR_e_LeverPstnUnknown		((TeTRGR_e_TrnLeverPstn)10U)
#endif

/*
* Enum TeTRGR_e_TransDirctnSt 
* Default Value:CeTRGR_e_TransDirctnBetweenPstn 
*/
#ifndef TeTRGR_e_TransDirctnSt
typedef uint8 TeTRGR_e_TransDirctnSt;
#define CeTRGR_e_TransDirctnBetweenPstn		((TeTRGR_e_TransDirctnSt)0U)
#define CeTRGR_e_TransDirctnPark		((TeTRGR_e_TransDirctnSt)1U)
#define CeTRGR_e_TransDirctnReverse		((TeTRGR_e_TransDirctnSt)2U)
#define CeTRGR_e_TransDirctnNeutral		((TeTRGR_e_TransDirctnSt)3U)
#define CeTRGR_e_TransDirctnDrive		((TeTRGR_e_TransDirctnSt)4U)
#define CeTRGR_e_TransDirctnReserved1		((TeTRGR_e_TransDirctnSt)5U)
#define CeTRGR_e_TransDirctnReserved2		((TeTRGR_e_TransDirctnSt)6U)
#define CeTRGR_e_TransDirctnUnknownPstn		((TeTRGR_e_TransDirctnSt)7U)
#endif

/*
* Enum TeTRGR_e_ERS_SW 
* Default Value:CeTRGR_e_ERSBttn_NotActvtd 
*/
#ifndef TeTRGR_e_ERS_SW
typedef uint8 TeTRGR_e_ERS_SW;
#define CeTRGR_e_ERSBttn_NotActvtd		((TeTRGR_e_ERS_SW)0U)
#define CeTRGR_e_ERSBttn_Plus		((TeTRGR_e_ERS_SW)1U)
#define CeTRGR_e_ERSBttn_Minus		((TeTRGR_e_ERS_SW)2U)
#define CeTRGR_e_ERS_PLHD		((TeTRGR_e_ERS_SW)3U)
#define CeTRGR_e_ERS_MIHD		((TeTRGR_e_ERS_SW)4U)
#define CeTRGR_e_ERSBttn_NotDef		((TeTRGR_e_ERS_SW)5U)
#define CeTRGR_e_ERSBttn_EXIT		((TeTRGR_e_ERS_SW)6U)
#define CeTRGR_e_ERSBttn_SNA		((TeTRGR_e_ERS_SW)7U)
#endif

/*
* Enum TeTRGR_e_AutoPosCorrMd 
* Default Value:CeTRGR_e_AutoPosCorrMd_Off 
*/
#ifndef TeTRGR_e_AutoPosCorrMd
typedef uint8 TeTRGR_e_AutoPosCorrMd;
#define CeTRGR_e_AutoPosCorrMd_Off		((TeTRGR_e_AutoPosCorrMd)0U)
#define CeTRGR_e_AutoPosCorrMd_On		((TeTRGR_e_AutoPosCorrMd)1U)
#define CeTRGR_e_AutoPosCorrMd_Pending		((TeTRGR_e_AutoPosCorrMd)2U)
#define CeTRGR_e_AutoPosCorrMd_SNA		((TeTRGR_e_AutoPosCorrMd)3U)
#endif

/*
* Enum TeTRGR_e_ShftDisp 
* Default Value:CeTRGR_e_ERS_BetweenRng 
*/
#ifndef TeTRGR_e_ShftDisp
typedef uint8 TeTRGR_e_ShftDisp;
#define CeTRGR_e_ERS_BetweenRng		((TeTRGR_e_ShftDisp)0U)
#define CeTRGR_e_ERS_Park		((TeTRGR_e_ShftDisp)1U)
#define CeTRGR_e_ERS_Reverse		((TeTRGR_e_ShftDisp)2U)
#define CeTRGR_e_ERS_Neutral		((TeTRGR_e_ShftDisp)3U)
#define CeTRGR_e_ERS_Drive		((TeTRGR_e_ShftDisp)4U)
#define CeTRGR_e_ERS_Drive1		((TeTRGR_e_ShftDisp)5U)
#define CeTRGR_e_ERS_Drive2		((TeTRGR_e_ShftDisp)6U)
#define CeTRGR_e_ERS_Drive3		((TeTRGR_e_ShftDisp)7U)
#define CeTRGR_e_ERS_Drive4		((TeTRGR_e_ShftDisp)8U)
#define CeTRGR_e_ERS_Drive5		((TeTRGR_e_ShftDisp)9U)
#define CeTRGR_e_ERS_Drive6		((TeTRGR_e_ShftDisp)10U)
#define CeTRGR_e_ERS_Drive7		((TeTRGR_e_ShftDisp)11U)
#define CeTRGR_e_ERS_Drive8		((TeTRGR_e_ShftDisp)12U)
#define CeTRGR_e_ERS_Drive9		((TeTRGR_e_ShftDisp)13U)
#define CeTRGR_e_ERS_Drive10		((TeTRGR_e_ShftDisp)14U)
#define CeTRGR_e_ERS_Drive11		((TeTRGR_e_ShftDisp)15U)
#define CeTRGR_e_ERS_Drive12		((TeTRGR_e_ShftDisp)16U)
#define CeTRGR_e_ERS_SNA		((TeTRGR_e_ShftDisp)17U)
#endif

/*
* Enum TeTRGR_e_PRNDReq_Map 
* Default Value:CeTRGR_e_PRNDLReqPark 
*/
#ifndef TeTRGR_e_PRNDReq_Map
typedef uint8 TeTRGR_e_PRNDReq_Map;
#define CeTRGR_e_PRNDLReqPark		((TeTRGR_e_PRNDReq_Map)0U)
#define CeTRGR_e_PRNDLReqReverse		((TeTRGR_e_PRNDReq_Map)1U)
#define CeTRGR_e_PRNDLReqNeutral		((TeTRGR_e_PRNDReq_Map)2U)
#define CeTRGR_e_PRNDLReqDrive		((TeTRGR_e_PRNDReq_Map)4U)
#define CeTRGR_e_PRNDLReqNOT_R		((TeTRGR_e_PRNDReq_Map)5U)
#define CeTRGR_e_PRNDLReqSNA		((TeTRGR_e_PRNDReq_Map)7U)
#define CeTRGR_e_PRNDLReqNA		((TeTRGR_e_PRNDReq_Map)8U)
#endif

/*
* Enum TeTRGR_e_TXFlt_Map 
* Default Value:CeTRGR_e_TXFlt_OK 
*/
#ifndef TeTRGR_e_TXFlt_Map
typedef uint8 TeTRGR_e_TXFlt_Map;
#define CeTRGR_e_TXFlt_OK		((TeTRGR_e_TXFlt_Map)0U)
#define CeTRGR_e_TXFlt_TPF		((TeTRGR_e_TXFlt_Map)1U)
#define CeTRGR_e_TXFlt_SNA		((TeTRGR_e_TXFlt_Map)3U)
#endif

/*
* Enum TeTRGR_e_EPBReq 
* Default Value:CeTRGR_e_EPBReq_NA 
*/
#ifndef TeTRGR_e_EPBReq
typedef uint8 TeTRGR_e_EPBReq;
#define CeTRGR_e_EPBReq_NA		((TeTRGR_e_EPBReq)0U)
#define CeTRGR_e_EPBReq_ACTIVE		((TeTRGR_e_EPBReq)1U)
#define CeTRGR_e_EPBReq_SNA		((TeTRGR_e_EPBReq)3U)
#endif

/*
* Enum TeTRGR_e_ReverseSts 
* Default Value:CeTRGR_e_ReverseSts_Not_Inserted 
*/
#ifndef TeTRGR_e_ReverseSts
typedef uint8 TeTRGR_e_ReverseSts;
#define CeTRGR_e_ReverseSts_Not_Inserted		((TeTRGR_e_ReverseSts)0U)
#define CeTRGR_e_ReverseSts_Inserted		((TeTRGR_e_ReverseSts)1U)
#define CeTRGR_e_ReverseSts_SNA		((TeTRGR_e_ReverseSts)3U)
#endif

/*
* Enum TeTRGR_e_BrakingModeSts 
* Default Value:CeTRGR_e_BrakingMode_Not_Active 
*/
#ifndef TeTRGR_e_BrakingModeSts
typedef uint8 TeTRGR_e_BrakingModeSts;
#define CeTRGR_e_BrakingMode_Not_Active		((TeTRGR_e_BrakingModeSts)0U)
#define CeTRGR_e_BrakingMode_Active		((TeTRGR_e_BrakingModeSts)1U)
#define CeTRGR_e_BrakingMode_SNA		((TeTRGR_e_BrakingModeSts)3U)
#endif

/*
* Enum TeTRGR_e_BrakingModeIndSts 
* Default Value:CeTRGR_e_IndSts_OFF 
*/
#ifndef TeTRGR_e_BrakingModeIndSts
typedef uint8 TeTRGR_e_BrakingModeIndSts;
#define CeTRGR_e_IndSts_OFF		((TeTRGR_e_BrakingModeIndSts)0U)
#define CeTRGR_e_IndSts_CONT		((TeTRGR_e_BrakingModeIndSts)1U)
#define CeTRGR_e_IndSts_Blinking		((TeTRGR_e_BrakingModeIndSts)2U)
#define CeTRGR_e_IndSts_SNA		((TeTRGR_e_BrakingModeIndSts)3U)
#endif

/*
* Enum TeTRGR_e_SecureIdleHMI 
* Default Value:CeTRGR_e_SecureIdleHMI_Default 
*/
#ifndef TeTRGR_e_SecureIdleHMI
typedef uint8 TeTRGR_e_SecureIdleHMI;
#define CeTRGR_e_SecureIdleHMI_Default		((TeTRGR_e_SecureIdleHMI)0U)
#define CeTRGR_e_SecureIdleHMI_Active		((TeTRGR_e_SecureIdleHMI)1U)
#define CeTRGR_e_SecureIdleHMI_SNA		((TeTRGR_e_SecureIdleHMI)3U)
#endif

/*
* Enum TeTRGR_e_SecureIdleSts 
* Default Value:CeTRGR_e_SecureIdle_Disabled 
*/
#ifndef TeTRGR_e_SecureIdleSts
typedef uint8 TeTRGR_e_SecureIdleSts;
#define CeTRGR_e_SecureIdle_Disabled		((TeTRGR_e_SecureIdleSts)0U)
#define CeTRGR_e_SecureIdle_Enabled		((TeTRGR_e_SecureIdleSts)1U)
#define CeTRGR_e_SecureIdle_Faulted_KeyNotFound		((TeTRGR_e_SecureIdleSts)2U)
#define CeTRGR_e_SecureIdle_Faulted_KeyFobFound		((TeTRGR_e_SecureIdleSts)3U)
#define CeTRGR_e_SecureIdle_EnabledLatched		((TeTRGR_e_SecureIdleSts)4U)
#define CeTRGR_e_SecureIdle_SNA		((TeTRGR_e_SecureIdleSts)5U)
#endif

/*
* Enum TeTRIR_e_ClimateInfo 
* Default Value:CeTRIR_e_SPST_ON 
*/
#ifndef TeTRIR_e_ClimateInfo
typedef uint8 TeTRIR_e_ClimateInfo;
#define CeTRIR_e_SPST_ON		((TeTRIR_e_ClimateInfo)0U)
#define CeTRIR_e_CABIN_HI		((TeTRIR_e_ClimateInfo)1U)
#define CeTRIR_e_CABIN_LO		((TeTRIR_e_ClimateInfo)2U)
#define CeTRIR_e_MAX_AC		((TeTRIR_e_ClimateInfo)3U)
#define CeTRIR_e_FT_DEFROST		((TeTRIR_e_ClimateInfo)4U)
#define CeTRIR_e_EBL		((TeTRIR_e_ClimateInfo)5U)
#define CeTRIR_e_SNA		((TeTRIR_e_ClimateInfo)7U)
#endif

/*
* Enum TeTRIR_e_SDS_ActualState 
* Default Value:CeTRIR_e_SDS_OFF 
*/
#ifndef TeTRIR_e_SDS_ActualState
typedef uint8 TeTRIR_e_SDS_ActualState;
#define CeTRIR_e_SDS_OFF		((TeTRIR_e_SDS_ActualState)0U)
#define CeTRIR_e_SDS_ON		((TeTRIR_e_SDS_ActualState)1U)
#define CeTRIR_e_SDS_SNA		((TeTRIR_e_SDS_ActualState)3U)
#endif

/*
* Enum TeTRIR_e_HCP_MaxCoolingReq 
* Default Value:CeTRIR_e_HCP_MaxCoolingNotRequested 
*/
#ifndef TeTRIR_e_HCP_MaxCoolingReq
typedef uint8 TeTRIR_e_HCP_MaxCoolingReq;
#define CeTRIR_e_HCP_MaxCoolingNotRequested		((TeTRIR_e_HCP_MaxCoolingReq)0U)
#define CeTRIR_e_HCP_MaxCoolingRequested		((TeTRIR_e_HCP_MaxCoolingReq)1U)
#define CeTRIR_e_HCP_MaxCoolingReqSNA		((TeTRIR_e_HCP_MaxCoolingReq)3U)
#endif

/*
* Enum TeTRIR_e_HVAC_ECO_State 
* Default Value:CeTRIR_e_HVAC_ECO_OFF 
*/
#ifndef TeTRIR_e_HVAC_ECO_State
typedef uint8 TeTRIR_e_HVAC_ECO_State;
#define CeTRIR_e_HVAC_ECO_OFF		((TeTRIR_e_HVAC_ECO_State)0U)
#define CeTRIR_e_HVAC_ECO_ON		((TeTRIR_e_HVAC_ECO_State)1U)
#define CeTRIR_e_HVAC_ECO_BLINK		((TeTRIR_e_HVAC_ECO_State)2U)
#define CeTRIR_e_HVAC_ECO_SNA		((TeTRIR_e_HVAC_ECO_State)3U)
#endif

/*
* Enum TeTRIR_e_HVAC_State 
* Default Value:CeTRIR_e_HVAC_Off 
*/
#ifndef TeTRIR_e_HVAC_State
typedef uint8 TeTRIR_e_HVAC_State;
#define CeTRIR_e_HVAC_Off		((TeTRIR_e_HVAC_State)0U)
#define CeTRIR_e_HVAC_On		((TeTRIR_e_HVAC_State)1U)
#define CeTRIR_e_HVAC_SPR		((TeTRIR_e_HVAC_State)2U)
#define CeTRIR_e_HVAC_SNA		((TeTRIR_e_HVAC_State)3U)
#endif

/*
* Enum TeTRIR_e_ClimateSts 
* Default Value:CeTRIR_e_ModeOFF 
*/
#ifndef TeTRIR_e_ClimateSts
typedef uint8 TeTRIR_e_ClimateSts;
#define CeTRIR_e_ModeOFF		((TeTRIR_e_ClimateSts)0U)
#define CeTRIR_e_ModeLOW		((TeTRIR_e_ClimateSts)1U)
#define CeTRIR_e_ModeMEDIUM		((TeTRIR_e_ClimateSts)2U)
#define CeTRIR_e_ModeHIGH		((TeTRIR_e_ClimateSts)3U)
#define CeTRIR_e_ModeSNA		((TeTRIR_e_ClimateSts)7U)
#endif

/*
* Enum TeTRMR_e_PRNDL 
* Default Value:CeTRMR_e_PRNDL_Park 
*/
#ifndef TeTRMR_e_PRNDL
typedef uint8 TeTRMR_e_PRNDL;
#define CeTRMR_e_PRNDL_Park		((TeTRMR_e_PRNDL)8U)
#define CeTRMR_e_PRNDL_Rvrs		((TeTRMR_e_PRNDL)7U)
#define CeTRMR_e_PRNDL_Neut		((TeTRMR_e_PRNDL)6U)
#define CeTRMR_e_PRNDL_Drive		((TeTRMR_e_PRNDL)5U)
#define CeTRMR_e_PRNDL_Unkown		((TeTRMR_e_PRNDL)0U)
#endif

/*
* Enum TeTRNR_e_TCMGearStat 
* Default Value:CeTRNR_e_Neutral 
*/
#ifndef TeTRNR_e_TCMGearStat
typedef uint8 TeTRNR_e_TCMGearStat;
#define CeTRNR_e_Neutral		((TeTRNR_e_TCMGearStat)0U)
#define CeTRNR_e_D1		((TeTRNR_e_TCMGearStat)1U)
#define CeTRNR_e_D2		((TeTRNR_e_TCMGearStat)2U)
#define CeTRNR_e_D3		((TeTRNR_e_TCMGearStat)3U)
#define CeTRNR_e_D4		((TeTRNR_e_TCMGearStat)4U)
#define CeTRNR_e_D5		((TeTRNR_e_TCMGearStat)5U)
#define CeTRNR_e_D6		((TeTRNR_e_TCMGearStat)6U)
#define CeTRNR_e_D7		((TeTRNR_e_TCMGearStat)7U)
#define CeTRNR_e_D8		((TeTRNR_e_TCMGearStat)8U)
#define CeTRNR_e_D9		((TeTRNR_e_TCMGearStat)9U)
#define CeTRNR_e_Reverse		((TeTRNR_e_TCMGearStat)10U)
#define CeTRNR_e_Reverse2		((TeTRNR_e_TCMGearStat)11U)
#define CeTRNR_e_Park		((TeTRNR_e_TCMGearStat)12U)
#endif

/*
* Enum TeTRNR_e_TCMTgtMdReq 
* Default Value:CeTRNR_e_SerEngOff 
*/
#ifndef TeTRNR_e_TCMTgtMdReq
typedef uint8 TeTRNR_e_TCMTgtMdReq;
#define CeTRNR_e_SerEngOff		((TeTRNR_e_TCMTgtMdReq)0U)
#define CeTRNR_e_SerEngOn		((TeTRNR_e_TCMTgtMdReq)1U)
#define CeTRNR_e_PrllEngOff		((TeTRNR_e_TCMTgtMdReq)2U)
#define CeTRNR_e_PrllEngOn		((TeTRNR_e_TCMTgtMdReq)3U)
#endif

/*
* Enum TeTRNR_e_TCMStrtStpMd 
* Default Value:CeTRNR_e_TCMStrtStpMd_inactv 
*/
#ifndef TeTRNR_e_TCMStrtStpMd
typedef uint8 TeTRNR_e_TCMStrtStpMd;
#define CeTRNR_e_TCMStrtStpMd_inactv		((TeTRNR_e_TCMStrtStpMd)0U)
#define CeTRNR_e_TCMStrtStpMd_actv		((TeTRNR_e_TCMStrtStpMd)1U)
#define CeTRNR_e_TCMStrtStpMd_EngProdTrq		((TeTRNR_e_TCMStrtStpMd)2U)
#define CeTRNR_e_TCMStrtStpMd_EndOfSeq		((TeTRNR_e_TCMStrtStpMd)7U)
#endif

/*
* Enum TeTRNR_e_TCMStrtTypReq 
* Default Value:CeTRNR_e_NormalStrt 
*/
#ifndef TeTRNR_e_TCMStrtTypReq
typedef uint8 TeTRNR_e_TCMStrtTypReq;
#define CeTRNR_e_NormalStrt		((TeTRNR_e_TCMStrtTypReq)0U)
#define CeTRNR_e_NoStrtReq		((TeTRNR_e_TCMStrtTypReq)1U)
#define CeTRNR_e_EMStrt		((TeTRNR_e_TCMStrtTypReq)2U)
#define CeTRNR_e_ImpulseStrt		((TeTRNR_e_TCMStrtTypReq)3U)
#define CeTRNR_e_ClutchStrt		((TeTRNR_e_TCMStrtTypReq)4U)
#define CeTRNR_e_ExternalStrt		((TeTRNR_e_TCMStrtTypReq)5U)
#define CeTRNR_e_ReversedStrt		((TeTRNR_e_TCMStrtTypReq)6U)
#define CeTRNR_e_EmgyStrtCold		((TeTRNR_e_TCMStrtTypReq)14U)
#define CeTRNR_e_EmgyStrtNorm		((TeTRNR_e_TCMStrtTypReq)15U)
#define CeTRNR_e_Var16		((TeTRNR_e_TCMStrtTypReq)16U)
#define CeTRNR_e_StpNorm		((TeTRNR_e_TCMStrtTypReq)29U)
#define CeTRNR_e_StpCoast		((TeTRNR_e_TCMStrtTypReq)30U)
#define CeTRNR_e_Fail		((TeTRNR_e_TCMStrtTypReq)31U)
#endif

/*
* Enum TeTRNR_e_TCMModeReq 
* Default Value:CeTRNR_e_K1DisK0Dis 
*/
#ifndef TeTRNR_e_TCMModeReq
typedef uint8 TeTRNR_e_TCMModeReq;
#define CeTRNR_e_K1DisK0Dis		((TeTRNR_e_TCMModeReq)0U)
#define CeTRNR_e_K1DisK0En		((TeTRNR_e_TCMModeReq)1U)
#define CeTRNR_e_K1EnK0Dis		((TeTRNR_e_TCMModeReq)2U)
#define CeTRNR_e_K1EnK0En		((TeTRNR_e_TCMModeReq)3U)
#endif

/*
* Enum TeTRNR_e_Synchro2Sts 
* Default Value:CeTRNR_e_Synchro_Open 
*/
#ifndef TeTRNR_e_Synchro2Sts
typedef uint8 TeTRNR_e_Synchro2Sts;
#define CeTRNR_e_Synchro_Open		((TeTRNR_e_Synchro2Sts)0U)
#define CeTRNR_e_Synchro_Closed		((TeTRNR_e_Synchro2Sts)1U)
#define CeTRNR_e_Synchro_Undefined2		((TeTRNR_e_Synchro2Sts)2U)
#define CeTRNR_e_Synchro_SNA		((TeTRNR_e_Synchro2Sts)3U)
#endif

/*
* Enum TeTRNR_e_TCMShftType 
* Default Value:CeTRNR_e_SteadyState 
*/
#ifndef TeTRNR_e_TCMShftType
typedef uint8 TeTRNR_e_TCMShftType;
#define CeTRNR_e_SteadyState		((TeTRNR_e_TCMShftType)0U)
#define CeTRNR_e_1stEngBrkTo1stGear		((TeTRNR_e_TCMShftType)1U)
#define CeTRNR_e_1stTo2ndGear		((TeTRNR_e_TCMShftType)2U)
#define CeTRNR_e_1stTo3rdGear		((TeTRNR_e_TCMShftType)3U)
#define CeTRNR_e_2ndTo3rdGear		((TeTRNR_e_TCMShftType)4U)
#define CeTRNR_e_2ndTo4thGear		((TeTRNR_e_TCMShftType)5U)
#define CeTRNR_e_2ndTo6thGear		((TeTRNR_e_TCMShftType)6U)
#define CeTRNR_e_3rdTo4thGear		((TeTRNR_e_TCMShftType)7U)
#define CeTRNR_e_3rdTo5thGear		((TeTRNR_e_TCMShftType)8U)
#define CeTRNR_e_4thTo5thGear		((TeTRNR_e_TCMShftType)9U)
#define CeTRNR_e_4thTo6thGear		((TeTRNR_e_TCMShftType)10U)
#define CeTRNR_e_5thTo6thGear		((TeTRNR_e_TCMShftType)11U)
#define CeTRNR_e_1stTo1stEngBrkGear		((TeTRNR_e_TCMShftType)12U)
#define CeTRNR_e_2ndTo1stEngBrkGear		((TeTRNR_e_TCMShftType)13U)
#define CeTRNR_e_2ndTo1stGear		((TeTRNR_e_TCMShftType)14U)
#define CeTRNR_e_3rdTo1stGear		((TeTRNR_e_TCMShftType)15U)
#define CeTRNR_e_3rdTo2ndGear		((TeTRNR_e_TCMShftType)16U)
#define CeTRNR_e_4thTo2ndGear		((TeTRNR_e_TCMShftType)17U)
#define CeTRNR_e_6thTo2ndGear		((TeTRNR_e_TCMShftType)18U)
#define CeTRNR_e_4thTo3rdGear		((TeTRNR_e_TCMShftType)19U)
#define CeTRNR_e_5thTo3rdGear		((TeTRNR_e_TCMShftType)20U)
#define CeTRNR_e_5thTo4thGear		((TeTRNR_e_TCMShftType)21U)
#define CeTRNR_e_6thTo4thGear		((TeTRNR_e_TCMShftType)22U)
#define CeTRNR_e_6thTo5thGear		((TeTRNR_e_TCMShftType)23U)
#define CeTRNR_e_ReverseGearInhibited		((TeTRNR_e_TCMShftType)24U)
#define CeTRNR_e_Neutral1st		((TeTRNR_e_TCMShftType)25U)
#define CeTRNR_e_Neutral2nd		((TeTRNR_e_TCMShftType)26U)
#define CeTRNR_e_Neutral3rd		((TeTRNR_e_TCMShftType)27U)
#define CeTRNR_e_Neutral4th		((TeTRNR_e_TCMShftType)28U)
#define CeTRNR_e_Neutral5th		((TeTRNR_e_TCMShftType)29U)
#define CeTRNR_e_Neutral6th		((TeTRNR_e_TCMShftType)30U)
#define CeTRNR_e_NeutralTo1stGearDrive		((TeTRNR_e_TCMShftType)31U)
#define CeTRNR_e_NeutralTo2ndGearDrive		((TeTRNR_e_TCMShftType)32U)
#define CeTRNR_e_NeutralTo3rdGearDrive		((TeTRNR_e_TCMShftType)33U)
#define CeTRNR_e_NeutralTo4thGearDrive		((TeTRNR_e_TCMShftType)34U)
#define CeTRNR_e_NeutralTo5thGearDrive		((TeTRNR_e_TCMShftType)35U)
#define CeTRNR_e_NeutralTo6thGearDrive		((TeTRNR_e_TCMShftType)36U)
#define CeTRNR_e_NeutralToReverse		((TeTRNR_e_TCMShftType)37U)
#define CeTRNR_e_1stGearDriveToNeutral		((TeTRNR_e_TCMShftType)38U)
#define CeTRNR_e_2ndGearDriveToNeutral		((TeTRNR_e_TCMShftType)39U)
#define CeTRNR_e_3rdGearDriveToNeutral		((TeTRNR_e_TCMShftType)40U)
#define CeTRNR_e_4thGearDriveToNeutral		((TeTRNR_e_TCMShftType)41U)
#define CeTRNR_e_5thGearDriveToNeutral		((TeTRNR_e_TCMShftType)42U)
#define CeTRNR_e_6thGearDriveToNeutral		((TeTRNR_e_TCMShftType)43U)
#define CeTRNR_e_Reverse1stGearToNeutral		((TeTRNR_e_TCMShftType)44U)
#define CeTRNR_e_Reverse2ndGearToNeutral		((TeTRNR_e_TCMShftType)45U)
#define CeTRNR_e_Reverse3rdGearToNeutral		((TeTRNR_e_TCMShftType)46U)
#define CeTRNR_e_Reverse4thGearToNeutral		((TeTRNR_e_TCMShftType)47U)
#define CeTRNR_e_Reverse5thGearToNeutral		((TeTRNR_e_TCMShftType)48U)
#define CeTRNR_e_Reverse6thGearToNeutral		((TeTRNR_e_TCMShftType)49U)
#define CeTRNR_e_NeutralIdleControlEntryinDrive		((TeTRNR_e_TCMShftType)50U)
#define CeTRNR_e_NeutralIdleControlTo1stEngBrkGearDrive		((TeTRNR_e_TCMShftType)51U)
#define CeTRNR_e_NeutralIdleControlTo1stGearDrive		((TeTRNR_e_TCMShftType)52U)
#define CeTRNR_e_NeutralIdleControlTo2ndGearDrive		((TeTRNR_e_TCMShftType)53U)
#define CeTRNR_e_NeutralIdleControlTo3rdGearDrive		((TeTRNR_e_TCMShftType)54U)
#define CeTRNR_e_NeutralIdleControlTo4tGearDrive		((TeTRNR_e_TCMShftType)55U)
#define CeTRNR_e_NeutralIdleControlTo5thGearDrive		((TeTRNR_e_TCMShftType)56U)
#define CeTRNR_e_NeutralIdleControlTo6thGearDrive		((TeTRNR_e_TCMShftType)57U)
#define CeTRNR_e_NeutralIdleControlEntryinReverse		((TeTRNR_e_TCMShftType)58U)
#define CeTRNR_e_NeutralIdleControlExitinReverse		((TeTRNR_e_TCMShftType)59U)
#define CeTRNR_e_ReverseGearToHEV		((TeTRNR_e_TCMShftType)60U)
#define CeTRNR_e_1stGearDriveToHEV		((TeTRNR_e_TCMShftType)61U)
#define CeTRNR_e_2ndGearDriveToHEV		((TeTRNR_e_TCMShftType)62U)
#define CeTRNR_e_3rdGearDriveToHEV		((TeTRNR_e_TCMShftType)63U)
#define CeTRNR_e_4thGearDriveToHEV		((TeTRNR_e_TCMShftType)64U)
#define CeTRNR_e_5thGearDriveToHEV		((TeTRNR_e_TCMShftType)65U)
#define CeTRNR_e_6thGearDriveToHEV		((TeTRNR_e_TCMShftType)66U)
#define CeTRNR_e_HEVToReverseGear		((TeTRNR_e_TCMShftType)67U)
#define CeTRNR_e_HEVTo1stGearDrive_C1Oncoming		((TeTRNR_e_TCMShftType)68U)
#define CeTRNR_e_HEVTo2ndGearDrive		((TeTRNR_e_TCMShftType)69U)
#define CeTRNR_e_HEVTo3rdGearDrive		((TeTRNR_e_TCMShftType)70U)
#define CeTRNR_e_HEVTo4thGearDrive		((TeTRNR_e_TCMShftType)71U)
#define CeTRNR_e_HEVTo5thGearDrive		((TeTRNR_e_TCMShftType)72U)
#define CeTRNR_e_HEVTo6thGearDrive		((TeTRNR_e_TCMShftType)73U)
#define CeTRNR_e_Multi3rdTo2ndTo1stGear		((TeTRNR_e_TCMShftType)74U)
#define CeTRNR_e_Multi4thTo2ndTo1stGear		((TeTRNR_e_TCMShftType)75U)
#define CeTRNR_e_Multi4thTo3rdTo1stGear		((TeTRNR_e_TCMShftType)76U)
#define CeTRNR_e_Multi4thTo3rdTo2ndGear		((TeTRNR_e_TCMShftType)77U)
#define CeTRNR_e_Multi5thTo3rdTo1stGear		((TeTRNR_e_TCMShftType)78U)
#define CeTRNR_e_Multi5thTo3rdTo2ndGear		((TeTRNR_e_TCMShftType)79U)
#define CeTRNR_e_Multi5thTo4thTo2ndGear		((TeTRNR_e_TCMShftType)80U)
#define CeTRNR_e_Multi5thTo4thTo3rdGear		((TeTRNR_e_TCMShftType)81U)
#define CeTRNR_e_Multi6thTo4thTo2ndGear		((TeTRNR_e_TCMShftType)82U)
#define CeTRNR_e_Multi6thTo4thTo3rdGear		((TeTRNR_e_TCMShftType)83U)
#define CeTRNR_e_Multi6thTo5thTo3rdGear		((TeTRNR_e_TCMShftType)84U)
#define CeTRNR_e_Multi6thTo5thTo4thGear		((TeTRNR_e_TCMShftType)85U)
#define CeTRNR_e_undefine86		((TeTRNR_e_TCMShftType)86U)
#define CeTRNR_e_undefine87		((TeTRNR_e_TCMShftType)87U)
#define CeTRNR_e_HEVTo1stGearDrive_F1Oncoming		((TeTRNR_e_TCMShftType)88U)
#define CeTRNR_e_SteadyState_DCT		((TeTRNR_e_TCMShftType)89U)
#define CeTRNR_e_SyncNto2		((TeTRNR_e_TCMShftType)90U)
#define CeTRNR_e_SyncNto4		((TeTRNR_e_TCMShftType)91U)
#define CeTRNR_e_SyncNto6		((TeTRNR_e_TCMShftType)92U)
#define CeTRNR_e_SyncNtoR		((TeTRNR_e_TCMShftType)93U)
#define CeTRNR_e_Sync2toN		((TeTRNR_e_TCMShftType)94U)
#define CeTRNR_e_Sync4toN		((TeTRNR_e_TCMShftType)95U)
#define CeTRNR_e_Sync6toN		((TeTRNR_e_TCMShftType)96U)
#define CeTRNR_e_SyncRtoN		((TeTRNR_e_TCMShftType)97U)
#define CeTRNR_e_P2toN		((TeTRNR_e_TCMShftType)98U)
#define CeTRNR_e_NtoP2		((TeTRNR_e_TCMShftType)99U)
#define CeTRNR_e_P2toNtoTarget2		((TeTRNR_e_TCMShftType)100U)
#define CeTRNR_e_P2toNtoTarget4		((TeTRNR_e_TCMShftType)101U)
#define CeTRNR_e_P2toNtoTarget6		((TeTRNR_e_TCMShftType)102U)
#define CeTRNR_e_P2toNtoTargetR		((TeTRNR_e_TCMShftType)103U)
#define CeTRNR_e_SyncNto1		((TeTRNR_e_TCMShftType)104U)
#define CeTRNR_e_SyncNto3		((TeTRNR_e_TCMShftType)105U)
#define CeTRNR_e_SyncNto5		((TeTRNR_e_TCMShftType)106U)
#define CeTRNR_e_SyncNto7		((TeTRNR_e_TCMShftType)107U)
#define CeTRNR_e_Sync1toN		((TeTRNR_e_TCMShftType)108U)
#define CeTRNR_e_Sync3toN		((TeTRNR_e_TCMShftType)109U)
#define CeTRNR_e_Sync5toN		((TeTRNR_e_TCMShftType)110U)
#define CeTRNR_e_Sync7toN		((TeTRNR_e_TCMShftType)111U)
#define CeTRNR_e_ClchStrt_1st_to_1stGear		((TeTRNR_e_TCMShftType)112U)
#define CeTRNR_e_ClchStrt_1st_to_2ndGear		((TeTRNR_e_TCMShftType)113U)
#define CeTRNR_e_ClchStrt_1st_to_3rdGear		((TeTRNR_e_TCMShftType)114U)
#define CeTRNR_e_ClchStrt_1st_to_4thGear		((TeTRNR_e_TCMShftType)115U)
#define CeTRNR_e_ClchStrt_1st_to_5thGear		((TeTRNR_e_TCMShftType)116U)
#define CeTRNR_e_ClchStrt_1st_to_6thGear		((TeTRNR_e_TCMShftType)117U)
#define CeTRNR_e_ClchStrt_1st_to_7thGear		((TeTRNR_e_TCMShftType)118U)
#define CeTRNR_e_ClchStrt_2nd_to_1stGear		((TeTRNR_e_TCMShftType)119U)
#define CeTRNR_e_ClchStrt_2nd_to_2ndGear		((TeTRNR_e_TCMShftType)120U)
#define CeTRNR_e_ClchStrt_2nd_to_3rdGear		((TeTRNR_e_TCMShftType)121U)
#define CeTRNR_e_ClchStrt_2nd_to_4thGear		((TeTRNR_e_TCMShftType)122U)
#define CeTRNR_e_ClchStrt_2nd_to_5thGear		((TeTRNR_e_TCMShftType)123U)
#define CeTRNR_e_ClchStrt_2nd_to_6thGear		((TeTRNR_e_TCMShftType)124U)
#define CeTRNR_e_ClchStrt_2nd_to_7thGear		((TeTRNR_e_TCMShftType)125U)
#define CeTRNR_e_ClchStrt_3rd_to_1stGear		((TeTRNR_e_TCMShftType)126U)
#define CeTRNR_e_ClchStrt_3rd_to_2ndGear		((TeTRNR_e_TCMShftType)127U)
#define CeTRNR_e_ClchStrt_3rd_to_3rdGear		((TeTRNR_e_TCMShftType)128U)
#define CeTRNR_e_ClchStrt_3rd_to_4thGear		((TeTRNR_e_TCMShftType)129U)
#define CeTRNR_e_ClchStrt_3rd_to_5thGear		((TeTRNR_e_TCMShftType)130U)
#define CeTRNR_e_ClchStrt_3rd_to_6thGear		((TeTRNR_e_TCMShftType)131U)
#define CeTRNR_e_ClchStrt_3rd_to_7thGear		((TeTRNR_e_TCMShftType)132U)
#define CeTRNR_e_ClchStrt_4th_to_1stGear		((TeTRNR_e_TCMShftType)133U)
#define CeTRNR_e_ClchStrt_4th_to_2ndGear		((TeTRNR_e_TCMShftType)134U)
#define CeTRNR_e_ClchStrt_4th_to_3rdGear		((TeTRNR_e_TCMShftType)135U)
#define CeTRNR_e_ClchStrt_4th_to_4thGear		((TeTRNR_e_TCMShftType)136U)
#define CeTRNR_e_ClchStrt_4th_to_5thGear		((TeTRNR_e_TCMShftType)137U)
#define CeTRNR_e_ClchStrt_4th_to_6thGear		((TeTRNR_e_TCMShftType)138U)
#define CeTRNR_e_ClchStrt_4th_to_7thGear		((TeTRNR_e_TCMShftType)139U)
#define CeTRNR_e_ClchStrt_5th_to_1stGear		((TeTRNR_e_TCMShftType)140U)
#define CeTRNR_e_ClchStrt_5th_to_2ndGear		((TeTRNR_e_TCMShftType)141U)
#define CeTRNR_e_ClchStrt_5th_to_3rdGear		((TeTRNR_e_TCMShftType)142U)
#define CeTRNR_e_ClchStrt_5th_to_4thGear		((TeTRNR_e_TCMShftType)143U)
#define CeTRNR_e_ClchStrt_5th_to_5thGear		((TeTRNR_e_TCMShftType)144U)
#define CeTRNR_e_ClchStrt_5th_to_6thGear		((TeTRNR_e_TCMShftType)145U)
#define CeTRNR_e_ClchStrt_5th_to_7thGear		((TeTRNR_e_TCMShftType)146U)
#define CeTRNR_e_ClchStrt_6th_to_1stGear		((TeTRNR_e_TCMShftType)147U)
#define CeTRNR_e_ClchStrt_6th_to_2ndGear		((TeTRNR_e_TCMShftType)148U)
#define CeTRNR_e_ClchStrt_6th_to_3rdGear		((TeTRNR_e_TCMShftType)149U)
#define CeTRNR_e_ClchStrt_6th_to_4thGear		((TeTRNR_e_TCMShftType)150U)
#define CeTRNR_e_ClchStrt_6th_to_5thGear		((TeTRNR_e_TCMShftType)151U)
#define CeTRNR_e_ClchStrt_6th_to_6thGear		((TeTRNR_e_TCMShftType)152U)
#define CeTRNR_e_ClchStrt_6th_to_7thGear		((TeTRNR_e_TCMShftType)153U)
#define CeTRNR_e_ClchStrt_7th_to_1stGear		((TeTRNR_e_TCMShftType)154U)
#define CeTRNR_e_ClchStrt_7th_to_2ndGear		((TeTRNR_e_TCMShftType)155U)
#define CeTRNR_e_ClchStrt_7th_to_3rdGear		((TeTRNR_e_TCMShftType)156U)
#define CeTRNR_e_ClchStrt_7th_to_4thGear		((TeTRNR_e_TCMShftType)157U)
#define CeTRNR_e_ClchStrt_7th_to_5thGear		((TeTRNR_e_TCMShftType)158U)
#define CeTRNR_e_ClchStrt_7th_to_6thGear		((TeTRNR_e_TCMShftType)159U)
#define CeTRNR_e_ClchStrt_7th_to_7thGear		((TeTRNR_e_TCMShftType)160U)
#define CeTRNR_e_ImpulseStrt_and_N		((TeTRNR_e_TCMShftType)161U)
#define CeTRNR_e_ImpulseStrt_and_1stgear		((TeTRNR_e_TCMShftType)162U)
#define CeTRNR_e_ImpulseStrt_and_3rdgear		((TeTRNR_e_TCMShftType)163U)
#define CeTRNR_e_ImpulseStrt_and_5thgear		((TeTRNR_e_TCMShftType)164U)
#define CeTRNR_e_ImpulseStrt_and_7thgear		((TeTRNR_e_TCMShftType)165U)
#endif

/*
* Enum TeTRNR_e_TCMShftTypeTLF 
* Default Value:CeTRNR_e_SteadyStateDCT 
*/
#ifndef TeTRNR_e_TCMShftTypeTLF
typedef uint8 TeTRNR_e_TCMShftTypeTLF;
#define CeTRNR_e_SteadyStateDCT		((TeTRNR_e_TCMShftTypeTLF)0U)
#define CeTRNR_e_1stTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)1U)
#define CeTRNR_e_1stTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)2U)
#define CeTRNR_e_1stTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)3U)
#define CeTRNR_e_2ndTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)4U)
#define CeTRNR_e_2ndTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)5U)
#define CeTRNR_e_2ndTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)6U)
#define CeTRNR_e_2ndTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)7U)
#define CeTRNR_e_3rdTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)8U)
#define CeTRNR_e_3rdTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)9U)
#define CeTRNR_e_3rdTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)10U)
#define CeTRNR_e_4thTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)11U)
#define CeTRNR_e_4thTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)12U)
#define CeTRNR_e_4thTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)13U)
#define CeTRNR_e_4thTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)14U)
#define CeTRNR_e_5thTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)15U)
#define CeTRNR_e_5thTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)16U)
#define CeTRNR_e_5thTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)17U)
#define CeTRNR_e_6thTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)18U)
#define CeTRNR_e_6thTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)19U)
#define CeTRNR_e_6thTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)20U)
#define CeTRNR_e_6thTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)21U)
#define CeTRNR_e_7thTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)22U)
#define CeTRNR_e_7thTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)23U)
#define CeTRNR_e_7thTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)24U)
#define CeTRNR_e_ReverseGearToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)25U)
#define CeTRNR_e_1stGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)26U)
#define CeTRNR_e_2ndGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)27U)
#define CeTRNR_e_3rdGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)28U)
#define CeTRNR_e_4thGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)29U)
#define CeTRNR_e_5thGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)30U)
#define CeTRNR_e_6thGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)31U)
#define CeTRNR_e_7thGearDriveToHEVDCT		((TeTRNR_e_TCMShftTypeTLF)32U)
#define CeTRNR_e_HEVtoReverseGearDCT		((TeTRNR_e_TCMShftTypeTLF)33U)
#define CeTRNR_e_HEVto1stGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)34U)
#define CeTRNR_e_HEVto2ndGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)35U)
#define CeTRNR_e_HEVto3rdGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)36U)
#define CeTRNR_e_HEVto4thGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)37U)
#define CeTRNR_e_HEVto5thGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)38U)
#define CeTRNR_e_HEVto6thGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)39U)
#define CeTRNR_e_HEVto7thGearDriveDCT		((TeTRNR_e_TCMShftTypeTLF)40U)
#define CeTRNR_e_SyncNto1DCT		((TeTRNR_e_TCMShftTypeTLF)41U)
#define CeTRNR_e_SyncNto3DCT		((TeTRNR_e_TCMShftTypeTLF)42U)
#define CeTRNR_e_SyncNto5DCT		((TeTRNR_e_TCMShftTypeTLF)43U)
#define CeTRNR_e_SyncNto7DCT		((TeTRNR_e_TCMShftTypeTLF)44U)
#define CeTRNR_e_Sync1toNDCT		((TeTRNR_e_TCMShftTypeTLF)45U)
#define CeTRNR_e_Sync3toNDCT		((TeTRNR_e_TCMShftTypeTLF)46U)
#define CeTRNR_e_Sync5toNDCT		((TeTRNR_e_TCMShftTypeTLF)47U)
#define CeTRNR_e_Sync7toNDCT		((TeTRNR_e_TCMShftTypeTLF)48U)
#define CeTRNR_e_1stTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)49U)
#define CeTRNR_e_1stTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)50U)
#define CeTRNR_e_1stTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)51U)
#define CeTRNR_e_2ndTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)52U)
#define CeTRNR_e_2ndTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)53U)
#define CeTRNR_e_3rdTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)54U)
#define CeTRNR_e_3rdTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)55U)
#define CeTRNR_e_3rdTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)56U)
#define CeTRNR_e_4thTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)57U)
#define CeTRNR_e_4thTo6thGearDCT		((TeTRNR_e_TCMShftTypeTLF)58U)
#define CeTRNR_e_5thTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)59U)
#define CeTRNR_e_5thTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)60U)
#define CeTRNR_e_5thTo7thGearDCT		((TeTRNR_e_TCMShftTypeTLF)61U)
#define CeTRNR_e_6thTo2ndGearDCT		((TeTRNR_e_TCMShftTypeTLF)62U)
#define CeTRNR_e_6thTo4thGearDCT		((TeTRNR_e_TCMShftTypeTLF)63U)
#define CeTRNR_e_7thTo1stGearDCT		((TeTRNR_e_TCMShftTypeTLF)64U)
#define CeTRNR_e_7thTo3rdGearDCT		((TeTRNR_e_TCMShftTypeTLF)65U)
#define CeTRNR_e_7thTo5thGearDCT		((TeTRNR_e_TCMShftTypeTLF)66U)
#endif

/*
* Enum TeTSKR_e_TimeBasedOS_Task 
* Default Value:CeTSKR_e_TimeBased3p125ms 
*/
#ifndef TeTSKR_e_TimeBasedOS_Task
typedef uint8 TeTSKR_e_TimeBasedOS_Task;
#define CeTSKR_e_TimeBased3p125ms		((TeTSKR_e_TimeBasedOS_Task)0U)
#define CeTSKR_e_TimeBased6p25ms		((TeTSKR_e_TimeBasedOS_Task)1U)
#define CeTSKR_e_TimeBased12p5ms		((TeTSKR_e_TimeBasedOS_Task)2U)
#define CeTSKR_e_TimeBased25ms		((TeTSKR_e_TimeBasedOS_Task)3U)
#define CeTSKR_e_TimeBased50ms		((TeTSKR_e_TimeBasedOS_Task)4U)
#define CeTSKR_e_TimeBased100ms		((TeTSKR_e_TimeBasedOS_Task)5U)
#define CeTSKR_e_TimeBased250ms		((TeTSKR_e_TimeBasedOS_Task)6U)
#define CeTSKR_e_TimeBased500ms		((TeTSKR_e_TimeBasedOS_Task)7U)
#define CeTSKR_e_TimeBased1000ms		((TeTSKR_e_TimeBasedOS_Task)8U)
#endif

/*
* Enum TeTSKR_e_SystemEvent 
* Default Value:CeTSKR_e_PwrUpPT 
*/
#ifndef TeTSKR_e_SystemEvent
typedef uint8 TeTSKR_e_SystemEvent;
#define CeTSKR_e_PwrUpPT		((TeTSKR_e_SystemEvent)0U)
#define CeTSKR_e_PwrDwnPT		((TeTSKR_e_SystemEvent)1U)
#define CeTSKR_e_BeginCranking		((TeTSKR_e_SystemEvent)2U)
#define CeTSKR_e_CeaseCranking		((TeTSKR_e_SystemEvent)3U)
#define CeTSKR_e_Stall		((TeTSKR_e_SystemEvent)4U)
#define CeTSKR_e_BeginRunning		((TeTSKR_e_SystemEvent)5U)
#define CeTSKR_e_ClearCodes		((TeTSKR_e_SystemEvent)6U)
#define CeTSKR_e_DiagReenable		((TeTSKR_e_SystemEvent)7U)
#define CeTSKR_e_BoxSwap		((TeTSKR_e_SystemEvent)8U)
#define CeTSKR_e_AutoStop		((TeTSKR_e_SystemEvent)9U)
#endif

/*
* Enum TeTSXR_e_TorqMatrixVars 
* Default Value:CeTSXR_e_Ta 
*/
#ifndef TeTSXR_e_TorqMatrixVars
typedef uint8 TeTSXR_e_TorqMatrixVars;
#define CeTSXR_e_Ta		((TeTSXR_e_TorqMatrixVars)1U)
#define CeTSXR_e_Tb		((TeTSXR_e_TorqMatrixVars)2U)
#define CeTSXR_e_Tc		((TeTSXR_e_TorqMatrixVars)3U)
#define CeTSXR_e_Ti		((TeTSXR_e_TorqMatrixVars)4U)
#define CeTSXR_e_To		((TeTSXR_e_TorqMatrixVars)5U)
#define CeTSXR_e_Tof		((TeTSXR_e_TorqMatrixVars)6U)
#define CeTSXR_e_Tor		((TeTSXR_e_TorqMatrixVars)7U)
#define CeTSXR_e_Tlf		((TeTSXR_e_TorqMatrixVars)8U)
#define CeTSXR_e_Timp		((TeTSXR_e_TorqMatrixVars)9U)
#define CeTSXR_e_Tc1		((TeTSXR_e_TorqMatrixVars)10U)
#define CeTSXR_e_Tc2		((TeTSXR_e_TorqMatrixVars)11U)
#define CeTSXR_e_Tc3		((TeTSXR_e_TorqMatrixVars)12U)
#define CeTSXR_e_Tc4		((TeTSXR_e_TorqMatrixVars)13U)
#define CeTSXR_e_Ni		((TeTSXR_e_TorqMatrixVars)14U)
#define CeTSXR_e_Nidot		((TeTSXR_e_TorqMatrixVars)15U)
#define CeTSXR_e_No		((TeTSXR_e_TorqMatrixVars)16U)
#define CeTSXR_e_Nodot		((TeTSXR_e_TorqMatrixVars)17U)
#define CeTSXR_e_Nx		((TeTSXR_e_TorqMatrixVars)18U)
#define CeTSXR_e_Nxdot		((TeTSXR_e_TorqMatrixVars)19U)
#endif

/*
* Enum TeTSXR_e_ConstrntType 
* Default Value:CeTSXR_e_Mode 
*/
#ifndef TeTSXR_e_ConstrntType
typedef uint8 TeTSXR_e_ConstrntType;
#define CeTSXR_e_Generic		((TeTSXR_e_ConstrntType)0U)
#define CeTSXR_e_Mode		((TeTSXR_e_ConstrntType)1U)
#define CeTSXR_e_Gear		((TeTSXR_e_ConstrntType)2U)
#define CeTSXR_e_ModeGear		((TeTSXR_e_ConstrntType)3U)
#endif

/*
* Enum TeTSXR_e_ModeMatrixRowIndex 
* Default Value:CeTSXR_e_Nrow 
*/
#ifndef TeTSXR_e_ModeMatrixRowIndex
typedef uint8 TeTSXR_e_ModeMatrixRowIndex;
#define CeTSXR_e_Nrow		((TeTSXR_e_ModeMatrixRowIndex)1U)
#define CeTSXR_e_M1row		((TeTSXR_e_ModeMatrixRowIndex)2U)
#define CeTSXR_e_M2row		((TeTSXR_e_ModeMatrixRowIndex)3U)
#define CeTSXR_e_M3row		((TeTSXR_e_ModeMatrixRowIndex)4U)
#endif

/*
* Enum TeTSXR_e_GearMatrixRowIndex 
* Default Value:CeTSXR_e_G1row 
*/
#ifndef TeTSXR_e_GearMatrixRowIndex
typedef uint8 TeTSXR_e_GearMatrixRowIndex;
#define CeTSXR_e_G1row		((TeTSXR_e_GearMatrixRowIndex)1U)
#define CeTSXR_e_G2row		((TeTSXR_e_GearMatrixRowIndex)2U)
#define CeTSXR_e_G3row		((TeTSXR_e_GearMatrixRowIndex)3U)
#define CeTSXR_e_G4row		((TeTSXR_e_GearMatrixRowIndex)4U)
#endif

/*
* Enum TeTSXR_e_StrtgcTorqMatrixVars 
* Default Value:CeTSXR_e_Strtgc_Ta 
*/
#ifndef TeTSXR_e_StrtgcTorqMatrixVars
typedef uint8 TeTSXR_e_StrtgcTorqMatrixVars;
#define CeTSXR_e_Strtgc_Ta		((TeTSXR_e_StrtgcTorqMatrixVars)1U)
#define CeTSXR_e_Strtgc_Tb		((TeTSXR_e_StrtgcTorqMatrixVars)2U)
#define CeTSXR_e_Strtgc_Tc		((TeTSXR_e_StrtgcTorqMatrixVars)3U)
#define CeTSXR_e_Strtgc_Ti		((TeTSXR_e_StrtgcTorqMatrixVars)4U)
#define CeTSXR_e_Strtgc_To		((TeTSXR_e_StrtgcTorqMatrixVars)5U)
#define CeTSXR_e_Strtgc_Timp		((TeTSXR_e_StrtgcTorqMatrixVars)6U)
#define CeTSXR_e_Strtgc_Tturb		((TeTSXR_e_StrtgcTorqMatrixVars)7U)
#define CeTSXR_e_Strtgc_Tc1		((TeTSXR_e_StrtgcTorqMatrixVars)8U)
#define CeTSXR_e_Strtgc_Tc2		((TeTSXR_e_StrtgcTorqMatrixVars)9U)
#define CeTSXR_e_Strtgc_Tc3		((TeTSXR_e_StrtgcTorqMatrixVars)10U)
#define CeTSXR_e_Strtgc_Tc4		((TeTSXR_e_StrtgcTorqMatrixVars)11U)
#define CeTSXR_e_Strtgc_Ni		((TeTSXR_e_StrtgcTorqMatrixVars)12U)
#define CeTSXR_e_Strtgc_No		((TeTSXR_e_StrtgcTorqMatrixVars)13U)
#define CeTSXR_e_Strtgc_Nc1		((TeTSXR_e_StrtgcTorqMatrixVars)14U)
#define CeTSXR_e_Strtgc_Tof		((TeTSXR_e_StrtgcTorqMatrixVars)15U)
#define CeTSXR_e_Strtgc_Tor		((TeTSXR_e_StrtgcTorqMatrixVars)16U)
#define CeTSXR_e_Strtgc_Tlf		((TeTSXR_e_StrtgcTorqMatrixVars)17U)
#endif

/*
* Enum TeTSXR_e_TSXRTorqDomain 
* Default Value:CeTSXR_e_AxleDomain 
*/
#ifndef TeTSXR_e_TSXRTorqDomain
typedef uint8 TeTSXR_e_TSXRTorqDomain;
#define CeTSXR_e_AxleDomain		((TeTSXR_e_TSXRTorqDomain)1U)
#define CeTSXR_e_TransOutDomain		((TeTSXR_e_TSXRTorqDomain)2U)
#define CeTSXR_e_SumDomain		((TeTSXR_e_TSXRTorqDomain)3U)
#endif

/*
* Enum TeTSXR_e_NxDomain 
* Default Value:CeTSXR_e_Nx_Nc1 
*/
#ifndef TeTSXR_e_NxDomain
typedef uint8 TeTSXR_e_NxDomain;
#define CeTSXR_e_Nx_Na		((TeTSXR_e_NxDomain)1U)
#define CeTSXR_e_Nx_Nb		((TeTSXR_e_NxDomain)2U)
#define CeTSXR_e_Nx_Nc		((TeTSXR_e_NxDomain)3U)
#define CeTSXR_e_Nx_Nc1		((TeTSXR_e_NxDomain)4U)
#define CeTSXR_e_Nx_Nc2		((TeTSXR_e_NxDomain)5U)
#endif

/*
* Enum TeTSXR_e_Number 
* Default Value:CeTSXR_e_Second 
*/
#ifndef TeTSXR_e_Number
typedef uint8 TeTSXR_e_Number;
#define CeTSXR_e_NA		((TeTSXR_e_Number)0U)
#define CeTSXR_e_First		((TeTSXR_e_Number)1U)
#define CeTSXR_e_Second		((TeTSXR_e_Number)2U)
#define CeTSXR_e_Third		((TeTSXR_e_Number)3U)
#define CeTSXR_e_Fourth		((TeTSXR_e_Number)4U)
#define CeTSXR_e_Fifth		((TeTSXR_e_Number)5U)
#define CeTSXR_e_Sixth		((TeTSXR_e_Number)6U)
#endif

/*
* Enum TeTSXR_e_PrfrdComb 
* Default Value:CeTSXR_e_NoComb 
*/
#ifndef TeTSXR_e_PrfrdComb
typedef uint8 TeTSXR_e_PrfrdComb;
#define CeTSXR_e_NoComb		((TeTSXR_e_PrfrdComb)0U)
#define CeTSXR_e_TctoTb		((TeTSXR_e_PrfrdComb)1U)
#define CeTSXR_e_TctoTa		((TeTSXR_e_PrfrdComb)2U)
#define CeTSXR_e_TatoTb		((TeTSXR_e_PrfrdComb)3U)
#define CeTSXR_e_TbtoTa		((TeTSXR_e_PrfrdComb)4U)
#define CeTSXR_e_TatoTc		((TeTSXR_e_PrfrdComb)5U)
#define CeTSXR_e_TbtoTc		((TeTSXR_e_PrfrdComb)6U)
#define CeTSXR_e_RadiusMod_MtrA		((TeTSXR_e_PrfrdComb)7U)
#define CeTSXR_e_RadiusMod_MtrB		((TeTSXR_e_PrfrdComb)8U)
#define CeTSXR_e_RadiusMod_MtrC		((TeTSXR_e_PrfrdComb)9U)
#endif

/*
* Enum TeTSXR_e_ClchSlpMatClmnVars 
* Default Value:CeTSXR_e_ClchSlpClmn_Na 
*/
#ifndef TeTSXR_e_ClchSlpMatClmnVars
typedef uint8 TeTSXR_e_ClchSlpMatClmnVars;
#define CeTSXR_e_ClchSlpClmn_Na		((TeTSXR_e_ClchSlpMatClmnVars)1U)
#define CeTSXR_e_ClchSlpClmn_Nb		((TeTSXR_e_ClchSlpMatClmnVars)2U)
#define CeTSXR_e_ClchSlpClmn_Nc		((TeTSXR_e_ClchSlpMatClmnVars)3U)
#define CeTSXR_e_ClchSlpClmn_Ni		((TeTSXR_e_ClchSlpMatClmnVars)4U)
#define CeTSXR_e_ClchSlpClmn_No		((TeTSXR_e_ClchSlpMatClmnVars)5U)
#define CeTSXR_e_ClchSlpClmn_Nt		((TeTSXR_e_ClchSlpMatClmnVars)6U)
#define CeTSXR_e_ClchSlpClmn_NrepL		((TeTSXR_e_ClchSlpMatClmnVars)7U)
#define CeTSXR_e_ClchSlpClmn_NrepR		((TeTSXR_e_ClchSlpMatClmnVars)8U)
#endif

/*
* Enum TeTSXR_e_ClchSlpMatRowVars 
* Default Value:CeTSXR_e_ClchSlpRow_Nc1 
*/
#ifndef TeTSXR_e_ClchSlpMatRowVars
typedef uint8 TeTSXR_e_ClchSlpMatRowVars;
#define CeTSXR_e_ClchSlpRow_Nc1		((TeTSXR_e_ClchSlpMatRowVars)1U)
#define CeTSXR_e_ClchSlpRow_Nc2		((TeTSXR_e_ClchSlpMatRowVars)2U)
#define CeTSXR_e_ClchSlpRow_Nc3		((TeTSXR_e_ClchSlpMatRowVars)3U)
#define CeTSXR_e_ClchSlpRow_Nc4		((TeTSXR_e_ClchSlpMatRowVars)4U)
#endif

/*
* Enum TeTSXR_e_StrtgcMtrLimToFToRSel 
* Default Value:CeTSXR_e_StrtgcMtrLim_None 
*/
#ifndef TeTSXR_e_StrtgcMtrLimToFToRSel
typedef uint8 TeTSXR_e_StrtgcMtrLimToFToRSel;
#define CeTSXR_e_StrtgcMtrLim_None		((TeTSXR_e_StrtgcMtrLimToFToRSel)0U)
#define CeTSXR_e_StrtgcMtrLim_ToF		((TeTSXR_e_StrtgcMtrLimToFToRSel)1U)
#define CeTSXR_e_StrtgcMtrLim_ToR		((TeTSXR_e_StrtgcMtrLimToFToRSel)2U)
#endif

/*
* Enum TeTSXR_e_WEDMtr 
* Default Value:CeTSXR_e_WEDMtrNone 
*/
#ifndef TeTSXR_e_WEDMtr
typedef uint8 TeTSXR_e_WEDMtr;
#define CeTSXR_e_WEDMtrNone		((TeTSXR_e_WEDMtr)0U)
#define CeTSXR_e_WEDMtrA		((TeTSXR_e_WEDMtr)1U)
#define CeTSXR_e_WEDMtrB		((TeTSXR_e_WEDMtr)2U)
#define CeTSXR_e_WEDMtrC		((TeTSXR_e_WEDMtr)3U)
#endif

/*
* Enum TeTSXR_e_MatrixSel 
* Default Value:CeTSXR_e_P1P4_noRearDiscnt 
*/
#ifndef TeTSXR_e_MatrixSel
typedef uint8 TeTSXR_e_MatrixSel;
#define CeTSXR_e_P1P4_noRearDiscnt		((TeTSXR_e_MatrixSel)0U)
#define CeTSXR_e_P1P2_wTCC		((TeTSXR_e_MatrixSel)1U)
#define CeTSXR_e_NumericMatrix		((TeTSXR_e_MatrixSel)2U)
#define CeTSXR_e_DCT_2p5		((TeTSXR_e_MatrixSel)3U)
#define CeTSXR_e_BEV_2Spd		((TeTSXR_e_MatrixSel)4U)
#endif

/*
* Enum TeVDVR_e_DischrgSt 
* Default Value:CeVDVR_e_DschrgInit 
*/
#ifndef TeVDVR_e_DischrgSt
typedef uint8 TeVDVR_e_DischrgSt;
#define CeVDVR_e_DschrgInit		((TeVDVR_e_DischrgSt)0U)
#define CeVDVR_e_DschrgBPCMChk		((TeVDVR_e_DischrgSt)1U)
#define CeVDVR_e_DschrgCPLockFdbkWait		((TeVDVR_e_DischrgSt)2U)
#define CeVDVR_e_DschrgClsS2		((TeVDVR_e_DischrgSt)3U)
#define CeVDVR_e_DschrgOBCMd		((TeVDVR_e_DischrgSt)4U)
#define CeVDVR_e_DschrgActvSt		((TeVDVR_e_DischrgSt)5U)
#define CeVDVR_e_DschrgCmplt		((TeVDVR_e_DischrgSt)6U)
#define CeVDVR_e_DschrgEStp		((TeVDVR_e_DischrgSt)7U)
#define CeVDVR_e_DschrgShtDwn		((TeVDVR_e_DischrgSt)8U)
#endif

/*
* Enum TeVDVR_e_VtoVStatus 
* Default Value:CeVDVR_e_Inctv 
*/
#ifndef TeVDVR_e_VtoVStatus
typedef uint8 TeVDVR_e_VtoVStatus;
#define CeVDVR_e_Inctv		((TeVDVR_e_VtoVStatus)0U)
#define CeVDVR_e_Actv		((TeVDVR_e_VtoVStatus)1U)
#define CeVDVR_e_ActvNRdy		((TeVDVR_e_VtoVStatus)2U)
#define CeVDVR_e_PwrTrnsfr		((TeVDVR_e_VtoVStatus)3U)
#define CeVDVR_e_TrnsfrCmplt		((TeVDVR_e_VtoVStatus)4U)
#define CeVDVR_e_TrnsfrIntrpt		((TeVDVR_e_VtoVStatus)5U)
#endif

/*
* Enum TeVDVR_e_Secure_Conn_VtoX 
* Default Value:CeVDVR_e_NoConn 
*/
#ifndef TeVDVR_e_Secure_Conn_VtoX
typedef uint8 TeVDVR_e_Secure_Conn_VtoX;
#define CeVDVR_e_NoConn		((TeVDVR_e_Secure_Conn_VtoX)0U)
#define CeVDVR_e_VtoV_Connected		((TeVDVR_e_Secure_Conn_VtoX)1U)
#define CeVDVR_e_VtoL_SnglOtlt_Connected		((TeVDVR_e_Secure_Conn_VtoX)2U)
#define CeVDVR_e_VtoL_DualOtlt_Connected		((TeVDVR_e_Secure_Conn_VtoX)3U)
#endif

/*
* Enum TeVSDR_e_NoDotForInertComp 
* Default Value:CeVSDR_e_NoSrcAvail 
*/
#ifndef TeVSDR_e_NoDotForInertComp
typedef uint8 TeVSDR_e_NoDotForInertComp;
#define CeVSDR_e_NoDotFromPrimNo		((TeVSDR_e_NoDotForInertComp)0U)
#define CeVSDR_e_NoDotFromTransNo		((TeVSDR_e_NoDotForInertComp)1U)
#define CeVSDR_e_NoSrcAvail		((TeVSDR_e_NoDotForInertComp)255U)
#endif

/*
* Enum TeVSDR_e_NturbSrc 
* Default Value:CeVSDR_e_NturbFromCSVR_CAN 
*/
#ifndef TeVSDR_e_NturbSrc
typedef uint8 TeVSDR_e_NturbSrc;
#define CeVSDR_e_NturbFromTransNo		((TeVSDR_e_NturbSrc)0U)
#define CeVSDR_e_NturbFromCSVR_CAN		((TeVSDR_e_NturbSrc)1U)
#define CeVSDR_e_NturbForcedToZero		((TeVSDR_e_NturbSrc)2U)
#define CeVSDR_e_NturbFiltBsdOnOilTemp		((TeVSDR_e_NturbSrc)3U)
#define CeVSDR_e_NturbFromZFCAN		((TeVSDR_e_NturbSrc)4U)
#define CeVSDR_e_NturbFromCSVR_Arb		((TeVSDR_e_NturbSrc)5U)
#endif

/*
* Enum TeVSDR_e_PrimNoSource 
* Default Value:CeVSDR_e_PrimNoSrcNotAvail 
*/
#ifndef TeVSDR_e_PrimNoSource
typedef uint8 TeVSDR_e_PrimNoSource;
#define CeVSDR_e_PrimNoFromNturb		((TeVSDR_e_PrimNoSource)0U)
#define CeVSDR_e_PrimNoFromFrontAxl		((TeVSDR_e_PrimNoSource)1U)
#define CeVSDR_e_PrimNoFromTOSS		((TeVSDR_e_PrimNoSource)2U)
#define CeVSDR_e_PrimNoFromPrimWhls		((TeVSDR_e_PrimNoSource)3U)
#define CeVSDR_e_PrimNoFromMtrB		((TeVSDR_e_PrimNoSource)4U)
#define CeVSDR_e_PrimNoFromMtrA		((TeVSDR_e_PrimNoSource)5U)
#define CeVSDR_e_PrimNoFromRearAxl		((TeVSDR_e_PrimNoSource)6U)
#define CeVSDR_e_PrimNoFromSecWhls		((TeVSDR_e_PrimNoSource)7U)
#define CeVSDR_e_PrimNoSrcNotAvail		((TeVSDR_e_PrimNoSource)255U)
#endif

/*
* Enum TeVSDR_e_SecNoSource 
* Default Value:CeVSDR_e_SecNoFromPrimNo 
*/
#ifndef TeVSDR_e_SecNoSource
typedef uint8 TeVSDR_e_SecNoSource;
#define CeVSDR_e_SecNoFromPrimNo		((TeVSDR_e_SecNoSource)0U)
#define CeVSDR_e_SecNoFromRearAxl		((TeVSDR_e_SecNoSource)1U)
#define CeVSDR_e_SecNoFromSecWhl		((TeVSDR_e_SecNoSource)2U)
#define CeVSDR_e_SecNoFromMtrB		((TeVSDR_e_SecNoSource)3U)
#define CeVSDR_e_SecNoFromMtrC		((TeVSDR_e_SecNoSource)4U)
#define CeVSDR_e_SecNoSrcNotAvail		((TeVSDR_e_SecNoSource)255U)
#endif

/*
* Enum TeVSDR_e_SourceForStrategicNo 
* Default Value:CeVSDR_e_StratNoFromPrimNo 
*/
#ifndef TeVSDR_e_SourceForStrategicNo
typedef uint8 TeVSDR_e_SourceForStrategicNo;
#define CeVSDR_e_StratNoFromPrimNo		((TeVSDR_e_SourceForStrategicNo)0U)
#define CeVSDR_e_StratNoFromTOSSnsr		((TeVSDR_e_SourceForStrategicNo)1U)
#define CeVSDR_e_StratNoFromPrimAxle		((TeVSDR_e_SourceForStrategicNo)2U)
#define CeVSDR_e_StratNoFromMtrB		((TeVSDR_e_SourceForStrategicNo)3U)
#define CeVSDR_e_NoValidStratNoSrcAvail		((TeVSDR_e_SourceForStrategicNo)255U)
#endif

/*
* Enum TeVSDR_e_WEDWheelSpdSrc 
* Default Value:CeVSDR_e_WEDWhlSpdFromFrontWhls 
*/
#ifndef TeVSDR_e_WEDWheelSpdSrc
typedef uint8 TeVSDR_e_WEDWheelSpdSrc;
#define CeVSDR_e_WEDWhlSpdFromFrontWhls		((TeVSDR_e_WEDWheelSpdSrc)0U)
#define CeVSDR_e_WEDWhlSpdFromRearWhls		((TeVSDR_e_WEDWheelSpdSrc)1U)
#define CeVSDR_e_WEDNoValidSpdSrc		((TeVSDR_e_WEDWheelSpdSrc)255U)
#endif

/*
* Enum TeVSMR_e_VirtShftMd 
* Default Value:CeVSMR_e_VS_Enabled 
*/
#ifndef TeVSMR_e_VirtShftMd
typedef uint8 TeVSMR_e_VirtShftMd;
#define CeVSMR_e_VS_Enabled		((TeVSMR_e_VirtShftMd)0U)
#define CeVSMR_e_VS_Disabled		((TeVSMR_e_VirtShftMd)1U)
#define CeVSMR_e_VS_Unavailable		((TeVSMR_e_VirtShftMd)2U)
#define CeVSMR_e_VS_Rsrvd		((TeVSMR_e_VirtShftMd)3U)
#endif

/*
* Enum TeVSMR_e_VirtShftTypeGrp 
* Default Value:CeVSMR_e_VST_NoShift 
*/
#ifndef TeVSMR_e_VirtShftTypeGrp
typedef uint8 TeVSMR_e_VirtShftTypeGrp;
#define CeVSMR_e_VST_NoShift		((TeVSMR_e_VirtShftTypeGrp)0U)
#define CeVSMR_e_VST_Upshift		((TeVSMR_e_VirtShftTypeGrp)1U)
#define CeVSMR_e_VST_Downshift		((TeVSMR_e_VirtShftTypeGrp)2U)
#define CeVSMR_e_VST_Rsrvd		((TeVSMR_e_VirtShftTypeGrp)3U)
#endif

/*
* Enum TeVSMR_e_VirtShftMdPopUp 
* Default Value:CeVSMR_e_MSG_NoIssue 
*/
#ifndef TeVSMR_e_VirtShftMdPopUp
typedef uint8 TeVSMR_e_VirtShftMdPopUp;
#define CeVSMR_e_MSG_NoIssue		((TeVSMR_e_VirtShftMdPopUp)0U)
#define CeVSMR_e_MSG_PRNDL_NotP		((TeVSMR_e_VirtShftMdPopUp)1U)
#define CeVSMR_e_MSG_DriveMode		((TeVSMR_e_VirtShftMdPopUp)2U)
#define CeVSMR_e_MSG_HighTemp		((TeVSMR_e_VirtShftMdPopUp)3U)
#define CeVSMR_e_MSG_VehSpdHigh		((TeVSMR_e_VirtShftMdPopUp)4U)
#endif

/*
* Enum TeVSPR_e_Wheel_Direction 
* Default Value:CeVSPR_e_WheelDirectionUnknown 
*/
#ifndef TeVSPR_e_Wheel_Direction
typedef uint8 TeVSPR_e_Wheel_Direction;
#define CeVSPR_e_WheelDirectionUnknown		((TeVSPR_e_Wheel_Direction)0U)
#define CeVSPR_e_WheelDirectionForward		((TeVSPR_e_Wheel_Direction)1U)
#define CeVSPR_e_WheelDirectionReverse		((TeVSPR_e_Wheel_Direction)2U)
#define CeVSPR_e_WheelDirectionInvalid		((TeVSPR_e_Wheel_Direction)3U)
#endif

/*
* Enum TeVSPR_e_CAN_SrcSelector 
* Default Value:CeVSPR_e_VehSpdCAN 
*/
#ifndef TeVSPR_e_CAN_SrcSelector
typedef uint8 TeVSPR_e_CAN_SrcSelector;
#define CeVSPR_e_VehSpdCAN		((TeVSPR_e_CAN_SrcSelector)0U)
#define CeVSPR_e_DrvnVehSpd		((TeVSPR_e_CAN_SrcSelector)1U)
#endif

/*
* Enum TeVTHR_e_FOTA_ReadySts 
* Default Value:CeVTHR_e_Eval_in_Progress 
*/
#ifndef TeVTHR_e_FOTA_ReadySts
typedef uint8 TeVTHR_e_FOTA_ReadySts;
#define CeVTHR_e_Eval_in_Progress		((TeVTHR_e_FOTA_ReadySts)0U)
#define CeVTHR_e_Proceed_with_FOTA		((TeVTHR_e_FOTA_ReadySts)1U)
#define CeVTHR_e_Abort_FOTA		((TeVTHR_e_FOTA_ReadySts)2U)
#endif

/*
* Enum TeVTHR_e_DschrgSysSts 
* Default Value:CeVTHR_e_Inactive 
*/
#ifndef TeVTHR_e_DschrgSysSts
typedef uint8 TeVTHR_e_DschrgSysSts;
#define CeVTHR_e_Inactive		((TeVTHR_e_DschrgSysSts)0U)
#define CeVTHR_e_Active		((TeVTHR_e_DschrgSysSts)1U)
#define CeVTHR_e_Faulted		((TeVTHR_e_DschrgSysSts)2U)
#define CeVTHR_e_SNA		((TeVTHR_e_DschrgSysSts)3U)
#endif

/*
* Enum TeVTHR_e_V2H_Sts 
* Default Value:CeVTHR_e_V2H_Inactive 
*/
#ifndef TeVTHR_e_V2H_Sts
typedef uint8 TeVTHR_e_V2H_Sts;
#define CeVTHR_e_V2H_Inactive		((TeVTHR_e_V2H_Sts)0U)
#define CeVTHR_e_V2H_Active		((TeVTHR_e_V2H_Sts)1U)
#define CeVTHR_e_V2H_Active_and_Ready		((TeVTHR_e_V2H_Sts)2U)
#define CeVTHR_e_V2H_Transferring_Power		((TeVTHR_e_V2H_Sts)3U)
#define CeVTHR_e_V2H_Transfer_Interrupted		((TeVTHR_e_V2H_Sts)4U)
#define CeVTHR_e_V2H_Transfer_Complete		((TeVTHR_e_V2H_Sts)5U)
#define CeVTHR_e_V2H_Transfer_Requested		((TeVTHR_e_V2H_Sts)6U)
#define CeVTHR_e_V2H_reserve		((TeVTHR_e_V2H_Sts)7U)
#endif

/*
* Enum TeVTLR_e_DisChrgFailSts 
* Default Value:CeVTLR_e_No_Fault 
*/
#ifndef TeVTLR_e_DisChrgFailSts
typedef uint8 TeVTLR_e_DisChrgFailSts;
#define CeVTLR_e_No_Fault		((TeVTLR_e_DisChrgFailSts)0U)
#define CeVTLR_e_Discharge_Allowed		((TeVTLR_e_DisChrgFailSts)1U)
#define CeVTLR_e_Discharge_Inhibited		((TeVTLR_e_DisChrgFailSts)2U)
#define CeVTLR_e_Discharge_Terminated		((TeVTLR_e_DisChrgFailSts)3U)
#define CeVTLR_e_SNA		((TeVTLR_e_DisChrgFailSts)7U)
#endif

/*
* Enum TeVTLR_e_DschrgSysSts 
* Default Value:CeVTLR_e_DschrgInactv 
*/
#ifndef TeVTLR_e_DschrgSysSts
typedef uint8 TeVTLR_e_DschrgSysSts;
#define CeVTLR_e_DschrgInactv		((TeVTLR_e_DschrgSysSts)0U)
#define CeVTLR_e_DschrgActv		((TeVTLR_e_DschrgSysSts)1U)
#define CeVTLR_e_DschrgFlt		((TeVTLR_e_DschrgSysSts)2U)
#endif

/*
* Enum TeVTLR_e_DischrgSt 
* Default Value:CeVTLR_e_DschrgInit 
*/
#ifndef TeVTLR_e_DischrgSt
typedef uint8 TeVTLR_e_DischrgSt;
#define CeVTLR_e_DschrgInit		((TeVTLR_e_DischrgSt)0U)
#define CeVTLR_e_DschrgBPCMChk		((TeVTLR_e_DischrgSt)1U)
#define CeVTLR_e_DschrgClsS2		((TeVTLR_e_DischrgSt)2U)
#define CeVTLR_e_DschrgOBCMd		((TeVTLR_e_DischrgSt)3U)
#define CeVTLR_e_DschrgActvSt		((TeVTLR_e_DischrgSt)4U)
#define CeVTLR_e_DschrgCmplt		((TeVTLR_e_DischrgSt)5U)
#define CeVTLR_e_DschrgEStp		((TeVTLR_e_DischrgSt)6U)
#define CeVTLR_e_DschrgShtDwn		((TeVTLR_e_DischrgSt)7U)
#define CeVTLR_e_AC_Sw_Close		((TeVTLR_e_DischrgSt)8U)
#define CeVTLR_e_DschrgACSwitchOpen		((TeVTLR_e_DischrgSt)9U)
#define CeVTLR_e_PowerUp		((TeVTLR_e_DischrgSt)10U)
#endif

/*
* Enum TeVTLR_e_PPIM_MdRq 
* Default Value:CeVTLR_e_Idle 
*/
#ifndef TeVTLR_e_PPIM_MdRq
typedef uint8 TeVTLR_e_PPIM_MdRq;
#define CeVTLR_e_No_Request		((TeVTLR_e_PPIM_MdRq)0U)
#define CeVTLR_e_Idle		((TeVTLR_e_PPIM_MdRq)1U)
#define CeVTLR_e_Discharge		((TeVTLR_e_PPIM_MdRq)2U)
#endif

/*
* Enum TeVTLR_e_PowerPanel1_Fault 
* Default Value:CeVTLR_e_NoFault 
*/
#ifndef TeVTLR_e_PowerPanel1_Fault
typedef uint8 TeVTLR_e_PowerPanel1_Fault;
#define CeVTLR_e_NoFault		((TeVTLR_e_PowerPanel1_Fault)0U)
#define CeVTLR_e_Flt_Discharging_Allowed		((TeVTLR_e_PowerPanel1_Fault)1U)
#define CeVTLR_e_Flt_Discharging_Disable		((TeVTLR_e_PowerPanel1_Fault)2U)
#endif

/*
* Enum TeVTLR_e_PowerPanel2_Fault 
* Default Value:CeVTLR_e_NoFaultPP2 
*/
#ifndef TeVTLR_e_PowerPanel2_Fault
typedef uint8 TeVTLR_e_PowerPanel2_Fault;
#define CeVTLR_e_NoFaultPP2		((TeVTLR_e_PowerPanel2_Fault)0U)
#define CeVTLR_e_Flt_Discharging_AllowedPP2		((TeVTLR_e_PowerPanel2_Fault)1U)
#define CeVTLR_e_Flt_Discharging_DisablePP2		((TeVTLR_e_PowerPanel2_Fault)2U)
#endif

/*
* Enum TeVTLR_e_V2L_TrunkSts 
* Default Value:CeVTLR_e_Inactive 
*/
#ifndef TeVTLR_e_V2L_TrunkSts
typedef uint8 TeVTLR_e_V2L_TrunkSts;
#define CeVTLR_e_Inactive		((TeVTLR_e_V2L_TrunkSts)0U)
#define CeVTLR_e_Active		((TeVTLR_e_V2L_TrunkSts)1U)
#define CeVTLR_e_Active_and_Ready		((TeVTLR_e_V2L_TrunkSts)2U)
#define CeVTLR_e_Transferring_Power		((TeVTLR_e_V2L_TrunkSts)3U)
#define CeVTLR_e_Transfer_Interrupted		((TeVTLR_e_V2L_TrunkSts)4U)
#define CeVTLR_e_Transfer_Complete		((TeVTLR_e_V2L_TrunkSts)5U)
#define CeVTLR_e_Transfer_Requested		((TeVTLR_e_V2L_TrunkSts)6U)
#define CeVTLR_e_Fault		((TeVTLR_e_V2L_TrunkSts)7U)
#endif

/*
* Enum TeVTLR_e_V2L_FrunkSts 
* Default Value:CeVTLR_e_Inactive_Frunk 
*/
#ifndef TeVTLR_e_V2L_FrunkSts
typedef uint8 TeVTLR_e_V2L_FrunkSts;
#define CeVTLR_e_Inactive_Frunk		((TeVTLR_e_V2L_FrunkSts)0U)
#define CeVTLR_e_Active_Frunk		((TeVTLR_e_V2L_FrunkSts)1U)
#define CeVTLR_e_Active_and_Ready_Frunk		((TeVTLR_e_V2L_FrunkSts)2U)
#define CeVTLR_e_Transferring_Power_Frunk		((TeVTLR_e_V2L_FrunkSts)3U)
#define CeVTLR_e_Transfer_Interrupted_Frunk		((TeVTLR_e_V2L_FrunkSts)4U)
#define CeVTLR_e_Transfer_Complete_Frunk		((TeVTLR_e_V2L_FrunkSts)5U)
#define CeVTLR_e_Transfer_Requested_Frunk		((TeVTLR_e_V2L_FrunkSts)6U)
#define CeVTLR_e_Fault_Frunk		((TeVTLR_e_V2L_FrunkSts)7U)
#endif

/*
* Enum TeVTLR_e_DischrgSt_PPIM 
* Default Value:CeVTLR_e_DschrgInit_PPIM 
*/
#ifndef TeVTLR_e_DischrgSt_PPIM
typedef uint8 TeVTLR_e_DischrgSt_PPIM;
#define CeVTLR_e_DschrgInit_PPIM		((TeVTLR_e_DischrgSt_PPIM)0U)
#define CeVTLR_e_DschrgPPIMd_PPIM		((TeVTLR_e_DischrgSt_PPIM)1U)
#define CeVTLR_e_DschrgActvSt_PPIM		((TeVTLR_e_DischrgSt_PPIM)2U)
#define CeVTLR_e_DschrgEStp_PPIM		((TeVTLR_e_DischrgSt_PPIM)3U)
#define CeVTLR_e_DschrgShtDwn_PPIM		((TeVTLR_e_DischrgSt_PPIM)4U)
#endif

/*
* Enum TeVTLR_e_LED_Color_Command 
* Default Value:CeVTLR_e_Init 
*/
#ifndef TeVTLR_e_LED_Color_Command
typedef uint8 TeVTLR_e_LED_Color_Command;
#define CeVTLR_e_Init		((TeVTLR_e_LED_Color_Command)0U)
#define CeVTLR_e_Green		((TeVTLR_e_LED_Color_Command)1U)
#define CeVTLR_e_Red		((TeVTLR_e_LED_Color_Command)2U)
#endif

/*
* Enum TeVTLR_e_Led_Command 
* Default Value:CeVTLR_e_Led_Off 
*/
#ifndef TeVTLR_e_Led_Command
typedef uint8 TeVTLR_e_Led_Command;
#define CeVTLR_e_Led_Off		((TeVTLR_e_Led_Command)0U)
#define CeVTLR_e_Led_On		((TeVTLR_e_Led_Command)1U)
#define CeVTLR_e_Led_Blink		((TeVTLR_e_Led_Command)2U)
#endif

/*
* Enum TeVTXR_e_PowerPanelMd 
* Default Value:CeVTXR_e_DefaultMd 
*/
#ifndef TeVTXR_e_PowerPanelMd
typedef uint8 TeVTXR_e_PowerPanelMd;
#define CeVTXR_e_DefaultMd		((TeVTXR_e_PowerPanelMd)0U)
#define CeVTXR_e_ElectricMd		((TeVTXR_e_PowerPanelMd)1U)
#define CeVTXR_e_GeneratorMd		((TeVTXR_e_PowerPanelMd)2U)
#define CeVTXR_e_HybridMd		((TeVTXR_e_PowerPanelMd)3U)
#endif

/*
* Enum TeVTXR_e_STMTrigger 
* Default Value:CeVTXR_e_InactiveTrg 
*/
#ifndef TeVTXR_e_STMTrigger
typedef uint8 TeVTXR_e_STMTrigger;
#define CeVTXR_e_InactiveTrg		((TeVTXR_e_STMTrigger)0U)
#define CeVTXR_e_DfltMdTrg		((TeVTXR_e_STMTrigger)1U)
#define CeVTXR_e_ElecMdTrg		((TeVTXR_e_STMTrigger)2U)
#define CeVTXR_e_GenMdTrg		((TeVTXR_e_STMTrigger)3U)
#define CeVTXR_e_HybMdTrg		((TeVTXR_e_STMTrigger)4U)
#endif

/*
* Enum TeWTAR_e_PedalTrqArb 
* Default Value:CeWTAR_e_ECM_TorqReqst 
*/
#ifndef TeWTAR_e_PedalTrqArb
typedef uint8 TeWTAR_e_PedalTrqArb;
#define CeWTAR_e_ECM_TorqReqst		((TeWTAR_e_PedalTrqArb)0U)
#define CeWTAR_e_Coast_HighSOC		((TeWTAR_e_PedalTrqArb)1U)
#define CeWTAR_e_Coast_BaroDerate		((TeWTAR_e_PedalTrqArb)2U)
#define CeWTAR_e_SRAR_RedPerfTrq		((TeWTAR_e_PedalTrqArb)3U)
#define CeWTAR_e_HillHold		((TeWTAR_e_PedalTrqArb)4U)
#define CeWTAR_e_SRAR_CreepTrq		((TeWTAR_e_PedalTrqArb)5U)
#define CeWTAR_e_ThermalDerate		((TeWTAR_e_PedalTrqArb)6U)
#define CeWTAR_e_Skid		((TeWTAR_e_PedalTrqArb)7U)
#define CeWTAR_e_SRAR_RedPerfTrq2		((TeWTAR_e_PedalTrqArb)8U)
#define CeWTAR_e_TransTorque		((TeWTAR_e_PedalTrqArb)9U)
#define CeWTAR_e_UndrShtPrt		((TeWTAR_e_PedalTrqArb)10U)
#define CeWTAR_e_OvrRevPtn		((TeWTAR_e_PedalTrqArb)11U)
#define CeWTAR_e_LV2		((TeWTAR_e_PedalTrqArb)12U)
#endif

/*
* Enum TeWTAR_e_OvrSpdPtnTp 
* Default Value:CeWTAR_e_None 
*/
#ifndef TeWTAR_e_OvrSpdPtnTp
typedef uint8 TeWTAR_e_OvrSpdPtnTp;
#define CeWTAR_e_Na		((TeWTAR_e_OvrSpdPtnTp)0U)
#define CeWTAR_e_Nb		((TeWTAR_e_OvrSpdPtnTp)1U)
#define CeWTAR_e_Ni		((TeWTAR_e_OvrSpdPtnTp)2U)
#define CeWTAR_e_Nturb		((TeWTAR_e_OvrSpdPtnTp)3U)
#define CeWTAR_e_None		((TeWTAR_e_OvrSpdPtnTp)4U)
#endif

/*
* Enum TeWTAR_e_PreLoadSts 
* Default Value:CeWTAR_e_Off 
*/
#ifndef TeWTAR_e_PreLoadSts
typedef uint8 TeWTAR_e_PreLoadSts;
#define CeWTAR_e_Off		((TeWTAR_e_PreLoadSts)0U)
#define CeWTAR_e_Initializing		((TeWTAR_e_PreLoadSts)1U)
#define CeWTAR_e_Enabled		((TeWTAR_e_PreLoadSts)2U)
#define CeWTAR_e_BuildAndArm		((TeWTAR_e_PreLoadSts)3U)
#define CeWTAR_e_Triggered		((TeWTAR_e_PreLoadSts)4U)
#define CeWTAR_e_DeadPedal		((TeWTAR_e_PreLoadSts)5U)
#define CeWTAR_e_Complete		((TeWTAR_e_PreLoadSts)6U)
#endif

