/******************************************************************************/
/**                                                                          **/
/**                 Middle crypt                                             **/
/**                                                                          **/
/******************************************************************************/

/*
Customer Key = 00 11 0E 08 00 04
*/

#ifndef IMOR_HEADER_H
#define IMOR_HEADER_H

#define CUSTOMER_KEY_H   0x0011    	// 16 Bit
#define CUSTOMER_KEY_L   0x0e080004L	// 32 Bit

typedef unsigned short U16;
typedef unsigned long U32;
typedef unsigned char U8;

/* added for the new funtions:extract, dec2hex, concat*/
typedef unsigned char BYTE_1;
typedef unsigned short WORD_1;
typedef unsigned long LONGWORD_1;


#define BIT15 0x8000
#define export volatile

/* added for the new funtions:ExtractByte, dec2hex, Concat_4, Concat_2*/
#define CNT 2
#define POW1_16 16
#define POW2_16 16*16
#define POW3_16 16*16*16
#define POW4_16 16*16*16*16
#define POW5_16 16*16*16*16*16
#define POW6_16 16*16*16*16*16*16
#define POW7_16 16*16*16*16*16*16*16


//#define BIG_ENDIAN
#define LITTLE_ENDIAN

#ifdef BIG_ENDIAN
  /* this part makes separate access to all 4 bytes available */
  /* high byte first */
  typedef struct {
    U8 hh;
    U8 hl;
    U8 lh;
    U8 ll;
  } U32_via_U8;
#endif

#ifdef LITTLE_ENDIAN
  /* this part makes separate access to all 4 bytes available */
  /* low byte first */
  typedef struct {
    U8 ll;
    U8 lh;
    U8 hl;
    U8 hh;
  } U32_via_U8;
#endif

/* access to the whole 32-bit-unit */
typedef struct{
  U32 l;
} U32_via_U32;

/* and now: all together... */
typedef union {
  U32_via_U8  c;
  U32_via_U32 l;
} myU32;

/* some definitions for less typing work */
#define chh c.hh
#define chl c.hl
#define clh c.lh
#define cll c.ll
#define lon l.l

/* maskpatterns for the positions of bits, which define the feedback */
#define HH_MASKE 0x84
#define HL_MASKE 0x28
#define LH_MASKE 0x50
#define LL_MASKE 0x03

/* some useful constants */
#define START_DIVERGENCY 38
#define F_SIZE 12                       /* size of first result */
#define F_MASK 0x0FFF
#define GAP_DIVERGENCY 20
#define G_SIZE 14                       /* size of second result */
#define G_MASK 0x3FFF


/* two cryptographical tables for the feedback and filter functions */

// const U8 feedback_tab[32] = {
static const U8 feedback_tab[32] = {
		    0x66, 0x66,
		    0x66, 0x66,
		    0x99, 0x99,
		    0x99, 0x99,
		    0x66, 0x66,
		    0x66, 0x66,
		    0x99, 0x99,
		    0x99, 0x99,
		    0x99, 0x99,
		    0x99, 0x99,
		    0x66, 0x66,
		    0x66, 0x66,
		    0x99, 0x99,
		    0x99, 0x99,
		    0x66, 0x66,
		    0x66, 0x66
		    };

// const U8 output_tab[32] = {
static const U8 output_tab[32] = {
		    0xd7, 0x74,
		    0x24, 0x91,
		    0x83, 0x65,
		    0xbc, 0x4d,
		    0xe3, 0x55,
		    0x38, 0xfb,
		    0x76, 0x2c,
		    0x8d, 0x70,
		    0xf5, 0x23,
		    0x85, 0xe5,
		    0x8c, 0x1c,
		    0xfc, 0x6e,
		    0xa7, 0x22,
		    0xb9, 0x33,
		    0x39, 0x7c,
		    0x48, 0x0a
		    };

/* a simple bitmasktable */

// const U8 bitmask_tab[ 8] = {
static const U8 bitmask_tab[ 8] = {
		    0x80,
		    0x40,
		    0x20,
		    0x10,
		    0x08,
		    0x04,
		    0x02,
		    0x01
		    };

/*changed 'middle_crypt' to GenerateF1G1*/
// extern export void GenerateF1G1(U32,U16,U32,U16*,U16*);
// void GenerateF1G1(U32,U16,U32,U16*,U16*);
static void GenerateF1G1(U32 random, U16 secretkey_h, U32 secretkey_l, U16 *f_result, U16 *g_result)
{
  myU32 shift_register; /* the shift register variable */

  U8 index;             /* the raw index variable */
  U8 tab_index;         /* the tableindex variable */
  U8 bitmask;           /* the bit position index variable */

  U8 counter;           /* the loop counter variable */

  shift_register.lon = random
		      ^secretkey_l
		      ^CUSTOMER_KEY_L; /* Calculate the start value */

  secretkey_h ^= (CUSTOMER_KEY_H);
  secretkey_h <<=2;                             /* only 14 bits are used */


  counter = START_DIVERGENCY+F_SIZE+GAP_DIVERGENCY+G_SIZE; /* initialize the loop counter */

  do {
    index  = (shift_register.chh & HH_MASKE);   /* extract the feedback bits */
    index |= (shift_register.chl & HL_MASKE);   /* they are selected in a way */
    index |= (shift_register.clh & LH_MASKE);   /* that there is no need for */
    index |= (shift_register.cll & LL_MASKE);   /* bit shifting */

    tab_index = index >> 3; /* calculate the index for tables access */

    bitmask = bitmask_tab[index & 0x07]; /* create a mask to access a single bit */

    shift_register.lon <<= 1; /* shifting one position to the left gives us a 0 as lsb */

    if ((feedback_tab[tab_index] & bitmask) != 0) {
      /* if there is an 1 in the table */
        shift_register.cll |= 1; /* then copy it to lsb of shift_register */
    }

    if (counter <= G_SIZE) {
      /* *** we have to build g *** */
      *g_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
      if ((output_tab[tab_index] & bitmask) != 0)
      /* if there is an 1 in the table */
        *g_result |= 1; /* then copy it to lsb */
    } else if (counter <= GAP_DIVERGENCY + G_SIZE) {
             /* *** in the gap divergency ***  */
             if (secretkey_h & BIT15)    /* if set then exor the last feedback */
             shift_register.cll ^= 1;
             secretkey_h <<= 1;
           } else if (counter <= F_SIZE + GAP_DIVERGENCY + G_SIZE) {
                      /* *** we have to build f *** */
                      *f_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
                      if ((output_tab[tab_index] & bitmask) != 0)
                        /* if there is an 1 in the table */
                        *f_result |= 1; /* then copy it to lsb */
                     }

  } while(--counter != 0); /* until we are ready */

  *f_result &=F_MASK;                   /* delete the unnecessary bits */
  *g_result &=G_MASK;

} /* end of middle_crypt() */

/* added for the new funtions:ExtractByte, dec2hex, Concat_4, Concat_2*/
// extern BYTE_1 ExtractByte(WORD_1,BYTE_1);
// extern BYTE_1 dec2hex(BYTE_1);
// extern LONGWORD_1 Concat_4(BYTE_1,BYTE_1, BYTE_1, BYTE_1);
// extern WORD_1 Concat_2(BYTE_1, BYTE_1);

static BYTE_1 ExtractByte(WORD_1 F_value,BYTE_1 low_high)
{
	BYTE_1 F_res;
	
	if (low_high == 1)
	{
		F_res = (BYTE_1) ((WORD_1)(F_value & 0xFF00)>>8);
	}
	else
	{
		F_res = F_value & 0xFF;

	}

	return F_res;


}/* end of ExtractByte()*/



/* start of dec2hex()*/
static BYTE_1 dec2hex(BYTE_1 num)
{
	BYTE_1 i,j;
	BYTE_1 result;
	BYTE_1 arr[CNT];

    while(num>15)
    {
     arr[i] = num%16;
     num = num/16;
     i++;
    }
    arr[i]=num;
    
  
    if (i<CNT-1)
    {
        for(j=i+1;j<=CNT;j++){
            arr[j] = 0;}
    }
  
	result = arr[0] | ((WORD_1)(arr[1]<<4)) & 0xF0;
	
	return result;
	
}/* end of dec2hex()*/	


/* start of Concat_4()*/
static LONGWORD_1 Concat_4(BYTE_1 b1,BYTE_1 b2, BYTE_1 b3, BYTE_1 b4)
{
	BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi,b2_lo,b2_hi,b1_lo,b1_hi;

    LONGWORD_1 sum = 0;
 
    b4_lo = b4 & 0xF;
    b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    b3_lo = b3 & 0xF;
    b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    b2_lo = b2 & 0xF;
    b2_hi = (BYTE_1)((WORD_1)(b2 & 0xF0)>>4);

    b1_lo = b1 & 0xF;
    b1_hi = (BYTE_1)((WORD_1)(b1 & 0xF0)>>4);
    
    sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16 + b2_lo*POW4_16 + b2_hi*POW5_16 + b1_lo*POW6_16 + b1_hi*POW7_16;
	
	return sum;

}/* end of Concat_4()*/


/* start of Concat_2()*/
static WORD_1 Concat_2(BYTE_1 b3, BYTE_1 b4)
{
	BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi;

    WORD_1 sum = 0;
 
    b4_lo = b4 & 0xF;
    b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    b3_lo = b3 & 0xF;
    b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16;
	
	return sum;
}

static BYTE_1 RandConv(U16 num)
{
	BYTE_1 R_res =0 ;
	BYTE_1 R_res_2 =0 ;
	BYTE_1 R_res_1 =0 ;
	if (num <= 255)
	{
		R_res = (BYTE_1) ((WORD_1)(num & 0x00FF));
		//R_res = (BYTE_1) (num);
	}
	else
	{
		
		R_res_1 = (BYTE_1) ((WORD_1)(num & 0xFF00)>>8);
		R_res_2 = (BYTE_1) ((WORD_1)(num & 0x00FF));
		R_res = R_res_2 - R_res_1;
	}
	//R_res = 1;
	return R_res;
}
static void ProgRntmeImmobilizerMMKey(BYTE_1 *IMOR_Auth_Keys, BYTE_1 size)
{
    
}
static void ProgRntmeImmobilizerAuthStat(BYTE_1 *IMOR_Auth_Stat, BYTE_1 size)
{
    
}

static void ProgRntmeImmoByPassCntr (BYTE_1 *ImmoByPassCntr, BYTE_1 size)
{
    
}    
#endif
