/***************************************************************************\

    File          : tab_fcn.h
    Purpose       : type defintions and function prototypes
    Related files : tab_fcn.c

\***************************************************************************/


#ifndef _TAB_FCN_H_
#define _TAB_FCN_H_
/**************************************************************\
   includes
\**************************************************************/
#define TL_FRAME
#if defined(TL_FRAME) || defined(CUSTOM_CODE_SFCN) || defined(EXT_VAR_DEF_IN_ECU) 

#include "tl_types.h"	/* definition of base data types */
#include "tllimits.h"	/* tl limits */

typedef Int8    sbyte;
typedef UInt8   ubyte;
typedef Int16   sword;
typedef UInt16  uword;
typedef Int32   slong;
typedef UInt32  ulong;



#if defined MCU_C16X 

#define LBA_IndexRatioUWord(A,B)	IndexRatioUWord((UInt16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define LBA_IndexRatioSWord(A,B)	IndexRatioSWord((Int16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define Interp1dUWordB(A,B)		Interp1dUWord((uword *)A,B)
#define Interp1dSWordB(A,B)		Interp1dSWord((sword *)A,B)
#define Interp2dUWordB(A,B,C,D)		Interp2dUWord((uword *)A,B,C,D)
#define Interp2dSWordB(A,B,C,D)		Interp2dSWord((sword *)A,B,C,D)

#define IndexRatioUWord(A,B,C)		LBAF_IndexRatioUnsWord(A,B,C-1)
#define IndexRatioSWord(A,B,C)		LBAF_IndexRatioSignWord(A,B,C-1)
#define Interp1dUWord(A,B)		LBAF_Interp1DUnsWord((const uword*)A, B)
#define Interp1dSWord(A,B)		LBAF_Interp1DSignWord((const sword*)A, B)
#define Interp2dUWord(A,B,C,D)		LBAF_Interp2DUnsWord((const uword*)A, B, C, D)
#define Interp2dSWord(A,B,C,D)		LBAF_Interp2DSignWord((const sword*)A, B, C, D)

#else

#define LBA_IndexRatioUWord(A,B)	IndexRatioUWord((UInt16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define LBA_IndexRatioSWord(A,B)	IndexRatioSWord((Int16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define LBA_IndexUWord(A,B)		IndexUWord((UInt16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define LBA_IndexSWord(A,B)		IndexSWord((Int16 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define Interp1dUWordB(A,B)		Interp1dUWord((uword *)A,B)
#define Interp1dSWordB(A,B)		Interp1dSWord((sword *)A,B)
#define Interp2dUWordB(A,B,C,D)		Interp2dUWord((uword *)A,B,C,D)
#define Interp2dSWordB(A,B,C,D)		Interp2dSWord((sword *)A,B,C,D)

#define LBA_IndexRatioFloat32(A,B) 	IndexRatioFloat32((Float32 *)(A+(sizeof(A)/sizeof(A[0]))),B,(UInt16)(sizeof(A)/sizeof(A[0])))
#define Interp1dFloat32B(A,B)		Interp1dFloat32((Float32 *)A,B)
#define Interp2dFloat32B(A,B,C,D)	Interp2dFloat32((Float32 *)A,B,C,D)

#define	Interp1dUByteB(A,B)		Interp1dUByte((ubyte *)A,B)
#define	Interp1dSByteB(A,B)		Interp1dSByte((sbyte *)A,B)
#define Interp2dSByteB(A,B,C,D)		Interp2dSByte((sbyte *)A,B,C,D)
#define Interp2dUByteB(A,B,C,D)		Interp2dUByte((ubyte *)A,B,C,D)

/**************************************************************\
   exported functions
\**************************************************************/

extern uword IndexRatioUWord (uword * table_end, uword value, uword element);
extern uword IndexRatioSWord (sword * table_end, sword value, uword element);
extern ubyte IndexUWord (uword * table_end, uword value, uword element);
extern ubyte IndexSWord (sword * table_end, sword value, uword element);
extern uword Interp1dUWord (uword * table, uword ir);
extern sword Interp1dSWord (sword * table, uword ir);
extern uword Interp2dUWord (void  * table, uword irx, uword iry, uword sizex);
extern sword Interp2dSWord (void  * table, uword irx, uword iry, uword sizex);
extern ubyte Interp1dUByte (ubyte * table, uword ir);
extern sbyte Interp1dSByte (sbyte * table, uword ir);
extern ubyte Interp2dUByte (ubyte * table, uword irx, uword iry, uword sizex);
extern sbyte Interp2dSByte (sbyte * table, uword irx, uword iry, uword sizex);
extern Float32 IndexRatioFloat32(Float32 * table_end, Float32 value, uword element);
extern Float32 Interp1dFloat32(Float32 * table, Float32 ir);
extern Float32 Interp2dFloat32 (void *table, Float32 irx, Float32 iry, uword sizex);
#endif

#endif 

#endif /* _TAB_FCN_H_ */
