/******************************************************************************\
 *** 
 *** Simulink model       : applbev_EVCU2
 *** TargetLink subsystem : applbev_EVCU2/ApplicationLayerBEV_ac
 *** Codefile             : ApplBEV_sched.h
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

#ifndef APPLBEV_SCHED_H
#define APPLBEV_SCHED_H

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "Rte_Type.h"

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
/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

/* start of memory section 'CODE' */
#define LLDR_FUNC_START_SEC_CODE
#include "LLDR_FUNC_MemMap.h"
FUNC(void, LLDR_FUNC_CODE) ApplicationLayerBEV_run10ms(void);

FUNC(void, LLDR_FUNC_CODE) ApplicationLayerBEV_runPon(void);

/* end of memory section 'CODE' */
#define LLDR_FUNC_STOP_SEC_CODE
#include "LLDR_FUNC_MemMap.h"

#endif /* APPLBEV_SCHED_H */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
