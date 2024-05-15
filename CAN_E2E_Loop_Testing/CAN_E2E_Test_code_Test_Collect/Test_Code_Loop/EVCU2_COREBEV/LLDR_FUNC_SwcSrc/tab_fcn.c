
#ifndef TAB_FCN_C
#define TAB_FCN_C

#define _TAB_FCN_C_	/* identifier for this file */

/**************************************************************\
   includes
\**************************************************************/
#define TL_FRAME
#include "tl_types.h"	/* definition of base data types */
#include "tab_fcn.h"

#define MAXuword UINT16MAX
#define MINuword UINT16MIN
#define MINsword INT16MIN
#define MAXsword INT16MAX
#define MAXubyte UINT8MAX
#define MINubyte UINT8MIN
#define MINsbyte INT8MIN
#define MAXsbyte INT8MAX
#define BYTE_DIM_UW 256

#if !defined MCU_C16X 

static sword SatSLtoSW (slong value)
{
    return ((value > MAXsword) ? MAXsword
			     : ((value < MINsword) ? MINsword : (sword) value));
}


static uword SatSLtoUW (slong value)
{
    return ((value > MAXuword) ? MAXuword
			     : ((value < MINuword) ? MINuword : (uword) value));
}


static sbyte SatSLtoSB (slong value)
{
    return ((value > MAXsbyte) ? MAXsbyte
			     : ((value < MINsbyte) ? MINsbyte : (sbyte) value));
}


static ubyte SatSLtoUB (slong value)
{
    return ((value > MAXubyte) ? MAXubyte
			     : ((value < MINubyte) ? MINubyte : (ubyte) value));
}


/*---------------------------------------------------------------------
 *
 * uword LBA_IndexRatioUWord ( uword *,	uword, uword)
 *
 * Calcola indice e rapporto
 *
 *-------------------------------------------------------------------*/
uword IndexRatioUWord (uword * table_end, uword value, uword element)
{
    sword index;
    ulong ratio;

    if (value >= *(table_end - 1)) {
	/* valore superiore al massimo della tabella */
	/* restituisce index = ultimo; ratio = 0;    */

	return (uword) ((element-1) * BYTE_DIM_UW);
    }
    else if (value <= *(table_end - element)) {
	/* Valore inferiore al primo della tabella */
	/* Restituisce index = 0, ratio = 0        */

	return 0;
    }
    else {
	for (index = (element-1); index >= 0; index--) {
	    if (value > *(--table_end))
		break;
	}

	ratio = (ulong) (value - *table_end) * BYTE_DIM_UW;
	ratio /= (*(table_end + 1) - *table_end);

	return (uword) (index * BYTE_DIM_UW + (uword) ratio);
    }
}


/*---------------------------------------------------------------------
 *
 * uword LBA_IndexRatioSWord ( sword *,	sword, uword)
 *
 * Calcola indice e rapporto
 *
 *-------------------------------------------------------------------*/
uword IndexRatioSWord (sword * table_end, sword value, uword element)
{
    sword index;
    ulong ratio;

    if (value >= *(table_end - 1)) {
	/* valore superiore al massimo della tabella */
	/* restituisce index = ultimo; ratio = 0;    */

	return (uword) ((element-1) * BYTE_DIM_UW);
    }
    else if (value <= *(table_end - element)) {
	/* Valore inferiore al primo della tabella */
	/* Restituisce index = 0, ratio = 0        */

	return 0;
    }
    else {
	for (index = (element-1); index >= 0; index--) {
	    if (value > *(--table_end))
		break;
	}

	ratio = (ulong) (value - *table_end) * BYTE_DIM_UW;
	ratio /= (*(table_end + 1) - *table_end);

	return (uword) (index * BYTE_DIM_UW + (uword) ratio);
    }
}



/*---------------------------------------------------------------------
 *
 *  Interpola tra due punti di un vettore
 *
 *-------------------------------------------------------------------*/
uword Interp1dUWord (uword * table, uword ir)
{
    uword index, ratio;
    slong left, right;
    slong val;

    index = (uword) (ir / BYTE_DIM_UW);
    ratio = (uword) (ir % BYTE_DIM_UW);

    left = (slong) table[index];
    right = (slong) table[index + 1];

    val = left + ((right - left) * ratio) / 256L;
    return (SatSLtoUW (val));
}
        
ubyte Interp1dUByte (ubyte * table, uword ir)
{
    uword index, ratio;
    slong left, right;
    slong val;

    index = (uword) (ir / BYTE_DIM_UW);
    ratio = (uword) (ir % BYTE_DIM_UW);

    left = (slong) table[index];
    right = (slong) table[index + 1];

    val = left + ((right - left) * ratio) / 256L;
    return (SatSLtoUB (val));
}
        
/*----------------------------------------------------------------------*/
/*                                                                      */
/*  Interpola tra due punti di un vettore                               */
/*                                                                      */
/*----------------------------------------------------------------------*/
sword Interp1dSWord (sword * table, uword ir)
{
    uword index, ratio;
    slong left, right;
    slong val;

    index = (uword) (ir / BYTE_DIM_UW);
    ratio = (uword) (ir % BYTE_DIM_UW);

    left = (slong) table[index];
    right = (slong) table[index + 1];

    val = left + ((right - left) * ratio) / 256L;
    return (SatSLtoSW (val));
}

sbyte Interp1dSByte (sbyte * table, uword ir)
{
    uword index, ratio;
    slong left, right;
    slong val;

    index = (uword) (ir / BYTE_DIM_UW);
    ratio = (uword) (ir % BYTE_DIM_UW);

    left = (slong) table[index];
    right = (slong) table[index + 1];

    val = left + ((right - left) * ratio) / 256L;
    return (SatSLtoSB (val));
}


/*---------------------------------------------------------------------
 *
 *  Interpola tra i punti di una tabella
 *
 *-------------------------------------------------------------------*/
uword Interp2dUWord (void * table, uword irx, uword iry, uword sizex)
{
    uword index1, ratio1;
    uword index2, ratio2;
    uword pos;
    slong left, right;
    slong interp1, interp2, interp_fin;

    index1 = (uword) (irx / BYTE_DIM_UW);
    ratio1 = (uword) (irx % BYTE_DIM_UW);

    index2 = (uword) (iry / BYTE_DIM_UW);
    ratio2 = (uword) (iry % BYTE_DIM_UW);

    pos = (uword) (index1 + (index2 * (sizex / sizeof (uword))));

    left = (slong)  (((uword *)table)[pos]);
    right = (slong) (((uword *)table)[pos + 1]);

    interp1 = left + ((right - left) * ratio1) / 256L;

    pos += (sizex / sizeof (uword));
    left  = (slong) (((uword *)table)[pos]);
    right = (slong) (((uword *)table)[pos + 1]);

    interp2 = left + ((right - left) * ratio1) / 256L;

    interp_fin = interp1 + ((interp2 - interp1) * ratio2) / 256L;
    return (SatSLtoUW (interp_fin));
}


ubyte Interp2dUByte (ubyte * table, uword irx, uword iry, uword sizex)
{
    uword index1, ratio1;
    uword index2, ratio2;
    uword pos;
    slong left, right;
    slong interp1, interp2, interp_fin;

    index1 = (uword) (irx / BYTE_DIM_UW);
    ratio1 = (uword) (irx % BYTE_DIM_UW);

    index2 = (uword) (iry / BYTE_DIM_UW);
    ratio2 = (uword) (iry % BYTE_DIM_UW);

    pos = (uword) (index1 + (index2 * (sizex / sizeof (uword))));

    left = (slong)  (((ubyte *)table)[pos]);
    right = (slong) (((ubyte *)table)[pos + 1]);

    interp1 = left + ((right - left) * ratio1) / 256L;

    pos += (sizex / sizeof (uword));
    left  = (slong) (((ubyte *)table)[pos]);
    right = (slong) (((ubyte *)table)[pos + 1]);

    interp2 = left + ((right - left) * ratio1) / 256L;

    interp_fin = interp1 + ((interp2 - interp1) * ratio2) / 256L;
    return (SatSLtoUB (interp_fin));
}


/*----------------------------------------------------------------------*/
/*                                                                      */
/*  Interpola tra i punti di una tabella segnata                        */
/*                                                                      */
/*----------------------------------------------------------------------*/
sword Interp2dSWord (void *table, uword irx, uword iry, uword sizex)
{
    uword index1, ratio1;
    uword index2, ratio2;
    uword pos;
    slong left, right;
    slong interp1, interp2, interp_val;

    index1 = (uword) (irx / BYTE_DIM_UW);
    ratio1 = (uword) (irx % BYTE_DIM_UW);

    index2 = (uword) (iry / BYTE_DIM_UW);
    ratio2 = (uword) (iry % BYTE_DIM_UW);

    pos = (uword) (index1 + index2 * sizex / sizeof (sword));

    left  = (slong) (((sword *)table)[pos]);
    right = (slong) (((sword *)table)[pos + 1]);
    interp1 = left + ((right - left) * ratio1) / 256L;

    pos += (sizex / sizeof (sword));

    left  = (slong) (((sword *)table)[pos]);
    right = (slong) (((sword *)table)[pos + 1]);
    interp2 = left + ((right - left) * ratio1) / 256L;

    interp_val = interp1 + ((interp2 - interp1) * ratio2) / 256L;
    return (SatSLtoSW (interp_val));
}


sbyte Interp2dSByte (sbyte *table, uword irx, uword iry, uword sizex)
{
    uword index1, ratio1;
    uword index2, ratio2;
    uword pos;
    slong left, right;
    slong interp1, interp2, interp_val;

    index1 = (uword) (irx / BYTE_DIM_UW);
    ratio1 = (uword) (irx % BYTE_DIM_UW);

    index2 = (uword) (iry / BYTE_DIM_UW);
    ratio2 = (uword) (iry % BYTE_DIM_UW);

    pos = (uword) (index1 + index2 * sizex / sizeof (sword));

    left  = (slong) (((sbyte *)table)[pos]);
    right = (slong) (((sbyte *)table)[pos + 1]);
    interp1 = left + ((right - left) * ratio1) / 256L;

    pos += (sizex / sizeof (sword));

    left  = (slong) (((sbyte *)table)[pos]);
    right = (slong) (((sbyte *)table)[pos + 1]);
    interp2 = left + ((right - left) * ratio1) / 256L;

    interp_val = interp1 + ((interp2 - interp1) * ratio2) / 256L;
    return (SatSLtoSB (interp_val));
}

/*----------------------------------------------------------------------*/
/*                                                                      */
/*   Floating Point Custom Lut			                        */
/*                                                                      */
/*----------------------------------------------------------------------*/

/*---------------------------------------------------------------------
 * Calcola indice e rapporto
 *-------------------------------------------------------------------*/
Float32 IndexRatioFloat32 (Float32 * table_end, Float32 value, uword element)
{
    sword index;
    Float32 ratio;

    /* inserted form dSPACE, H. Steenblock */
    //deleted from Seelensucher   table_end++;

    if (value >= *(table_end - 1)) {
	/* valore superiore al massimo della tabella */
	/* restituisce index = ultimo; ratio = 0;    */

	return (Float32) ((element-1) );
    }
    else if (value <= *(table_end /* - 1 */ - element)) {
	/* Valore inferiore al primo della tabella */
	/* Restituisce index = 0, ratio = 0        */

	return 0;
    }
    else {
	for (index = (element-1); index >= 0; index--) {
	    if (value > *(--table_end))
		break;
	}

	ratio = (Float32) (value - *table_end)  / (*(table_end + 1) - *table_end);

	return  (index + ratio);
    }
}

/*---------------------------------------------------------------------
 *  Interpola tra due punti di un vettore
 *-------------------------------------------------------------------*/
Float32 Interp1dFloat32 (Float32 * table, Float32 ir)
{
    uword index;
    Float32 left, right;
    Float32 val, ratio;

    index = (uword) ir;
    ratio = (ir - (Float32)index);

    left =  table[index];
    right =  table[index + 1];

    val = left + ((right - left) * ratio);
    return  (val);
}
        
/*---------------------------------------------------------------------
 *  Interpola tra due punti di un matrice
 *-------------------------------------------------------------------*/
Float32 Interp2dFloat32 (void *table, Float32 irx, Float32 iry, uword sizex)
{
    uword index1,index2,pos;
    Float32 left, right, ratio1, ratio2;
    Float32 interp1, interp2, interp_val;

    index1 = (uword) (irx);
    ratio1 = (Float32) (irx - (Float32)index1);

    index2 = (uword) (iry);
    ratio2 = (Float32) (iry - (Float32)index2);

    pos = (uword) (index1 + index2 * sizex/sizeof (sword) );

    
    left  = (Float32) (((Float32 *)table)[pos]);
    right = (Float32) (((Float32 *)table)[pos + 1]);
    interp1 = left + ((right - left) * ratio1) ;

    pos += sizex/sizeof (sword) ;
    
    left  = (Float32) (((Float32 *)table)[pos]);
    right = (Float32) (((Float32 *)table)[pos + 1]);
    interp2 = left + ((right - left) * ratio1) ;
    
    interp_val = interp1 + ((interp2 - interp1) * ratio2) ; 
    
    return (interp_val); 
}

/*---------------------------------------------------------------------
 *
 * uword LBA_IndexUWord ( uword *, uword, uword)
 *
 * Calcola indice
 *
 *-------------------------------------------------------------------*/
ubyte IndexUWord (uword * table_end, uword value, uword element)
{
    sword index;

	for (index = (element-1); index >= 0; index--) {
	    if (value > *(--table_end))
		break;
	}
	return (ubyte) index;
}

/*---------------------------------------------------------------------
 *
 * uword LBA_IndexSWord ( sword *, sword, uword)
 *
 * Calcola indice
 *
 *-------------------------------------------------------------------*/
ubyte IndexSWord (sword * table_end, sword value, uword element)
{
    sword index;

	for (index = (element-1); index >= 0; index--) {
	    if (value > *(--table_end))
		break;
	}
	return (ubyte) index;
}


#endif

#undef _TAB_FCN_C_



#endif
