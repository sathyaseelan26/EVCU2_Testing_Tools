/******************************************************************************\
 *** 
 *** Simulink model       : applbev_EVCU2
 *** TargetLink subsystem : applbev_EVCU2/ApplicationLayerBEV_ac
 *** Codefile             : ApplBEV_DiagQM.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2024-02-19 12:59:58
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : AUTOSAR
 *** AUTOSAR version                          : 4.0.3
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : disabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : enabled
 *** Exploit ranges if not erasable           : enabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : disabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : disabled
 *** Inlining Threshold                       : 10
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : disabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : D:\users\valsania\Desktop\Proget
 ***                                            ti\EVCU2_Work\SWC\0AF_2402\EVCU2
 ***                                            _SWC_APPLBEV\MDL\applbev_s_prj\a
 ***                                            pplbev_c_prj\config\cconfig_AR.x
 ***                                            ml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLi
 ***                                            nk 4.3\Matlab\Tl\XML\CodeGen\Sty
 ***                                            lesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 4.3p5 from 18-Sep-2019
 *** Code generator version  : Build Id 4.3.0.29 from 2019-09-19 11:35:24
 *** Copyright (c) 2012 dSPACE GmbH\****************************************************************
 **************/

#ifndef APPLBEV_DIAGQM_H
#define APPLBEV_DIAGQM_H

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "Rte_Type.h"
#include "tl_defines_a.h"
#include "ApplBEV_Library.h"

/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

extern uint8 Sq5_Switch10;
extern uint8 Sq5_Switch2;
extern uint8 Sq5_Switch8;
extern uint8 Sq5_Switch9;

extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_RollsMode_LatchTime;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ABSFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ABSHighSlipFlg_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ABSSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_AxComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_AxCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_AyComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_AyCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BSM_TorqueReduct_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BSM_TorqueRequest_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BrakePdlSwtSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BrakeTravelSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BrakeTrqDrv_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_BrakeTrq_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_CmdIgnSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_CruiseControlSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_DriverSlipControlSel_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_DvolCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_DvolFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_DvolGradCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_EBDFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_EBDSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCInterv_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCStsFL_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCStsFR_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCStsRL_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCStsRR_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESCSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_ESC_OFF_ReqForTCS_OFF_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_EnvirTempCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_IPC_TorqueVectoringSel_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_InvState_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_Speed_rpm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_TrqAchAEMD_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_TrqAch_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_TrqMax_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPA_TrqMin_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_InvState_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_Speed_rpm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_TrqAchAEMD_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_TrqAch_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_TrqMax_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCPB_TrqMin_Nm_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_MCylPresCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_PsipComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_PsipCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_RegBrakeFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_RegBrakeOffstReqFront_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_RegBrakeOffstReqRear_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_VehEstMovDir_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_VxCom_Estim_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpeed_FL_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpeed_FR_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpeed_RL_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpeed_RR_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpin_FL_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA float32 eHLC_DiagQM_TM_CANComDiagL3_WheelSpin_FR_Com_CANError_EN;

extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_AWD_RecoverySts_MapEn;
extern MERGEABLE_CAL_PRAGMA uint8 eHLC_DiagQM_AWD_RecoverySts_MapVal;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_DiagOffInPwerOn_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANComDiagL3_ABSFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANComDiagL3_EBDFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANComDiagL3_ESCFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANFailStsDiagL3_ABSFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANFailStsDiagL3_EBDFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_CANFailStsDiagL3_ESCFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_DevOnTrip_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_ExtFail_RecL3_ConfErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_RollsMode_ExtFailOff_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_RollsMode_RecL3_ConfErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TCS_RecoverySts_MapEn;
extern MERGEABLE_CAL_PRAGMA uint8 eHLC_DiagQM_TCS_RecoverySts_MapVal;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TMOff_FOR_WED_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TMOff_FOR_eLSD_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_ABSFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_AxComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_AyComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_DvolFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_EBDFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_ESCFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean
   eHLC_DiagQM_TM_CANFailStsDiagL3_GetSRMR_b_Lv2AccelPdlPosFlt_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_PsipComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_CANFailStsDiagL3_RegBrakeFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_DevOnTrip_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_ExtFail_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_TM_RecL3_ConfErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WEDOff_FOR_TMErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WEDOff_FOR_eLSDErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WED_DevOnTrip_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WED_ExtFail_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WED_RecL3_ConfErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_WED_RecoverySts_MapEn;
extern MERGEABLE_CAL_PRAGMA uint8 eHLC_DiagQM_WED_RecoverySts_MapVal;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSDOff_FOR_TMErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSDOff_FOR_WEDErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ABSFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ABSSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_AxComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_AxCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_AyComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_AyCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_BrakeTravelSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_CmdIgnSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_DvolFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_DvolGradCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ELSDRrLkTrq_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ELSDRrSysStat_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ELSDRrTempAvl_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCInterv_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCStsFL_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCStsFR_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCStsRL_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCStsRR_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESCSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_ESC_OFF_ReqForTCS_OFF_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_PsipComFailSts_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_PsipCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_RoadSlopeCom_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_VxCom_Estim_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_WheelSpeed_FL_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_WheelSpeed_FR_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_WheelSpeed_RL_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANComDiagL3_WheelSpeed_RR_Com_CANError_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_ABSFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_AxComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_AyComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_DvolFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_ESCFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_CANFailStsDiagL3_PsipComFailSts_Error_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_DevOnTrip_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_ExtFail_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_RecL3_ConfErr_EN;
extern MERGEABLE_CAL_PRAGMA boolean eHLC_DiagQM_eLSD_RecoverySts_MapEn;
extern MERGEABLE_CAL_PRAGMA uint8 eHLC_DiagQM_eLSD_RecoverySts_MapVal;

extern MERGEABLE_GLOBAL boolean SApB_HCFall1_Out_a;
extern MERGEABLE_GLOBAL boolean SApB_Relay1_Out_a;
extern MERGEABLE_GLOBAL boolean SApB_Relay1_Out_b;
extern MERGEABLE_GLOBAL boolean SApB_Relay1_Out_c;
extern MERGEABLE_GLOBAL boolean SApB_Relay1_Out_d;

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

extern void ApplBEV_DiagQM(void);

#endif /* APPLBEV_DIAGQM_H */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/