// // #include "imor_header.h"

// /*------------------------------------------------------------------------
// Function:    middle_crypt
// Input   :    U32 random              random number
	     // U16 secretkey_h         high part, only 14 bit used
	     // U32 secretkey_l         lo part, all 32 bits used
// Output  :    pointer to U16 f_result only the lower 12 bits are used
	     // pointer to U16 g_result only the lower 14 bits are used
// Global  :
// External:

// This routine calculates 2 results - f and g - based on a cryptographical
// algorithm.

// Typical scenario: 2 ECUs are having the same secret key and want to
// authorize each other. One is sending a (good) random number and the first
// result f to the second one, which the also calculates. If its f and the
// received one are identical, then it will be send to the first ECU. There
// itïll be also compared.
// Only if both compares are good the authentification is ok.


// No.	secret_h	secret_l	random	f_result	g_result
// --------------------------------------------------------------------------------
 // 1	1234		56789ABC	11223344	0449		1545
 // 2	1234		56789ABC	87654321	0D67		0126
 // 3	1234		436587A9	12345678	0A13		2D87
 // 4	1234		12345678	436587A9	0A13		2D87
 // 5	0321		12345678	436587A9	0A13		2EB0
 // 6	2AAA		AAAAAAAA	12345678	0CE7		2EF3
 // 7	2AAA		AAAAAAAA	AAAAAAAA	0F17		3DE6
 // 8	2AAA		AAAAAAAA	12345677	05D6		01C9
 // 9	2AAA		AAAAAAAA	00000000	0E47		2F0A
// 10	0000		00000000	00000000	0F17		3C43
// 11	0000		00000000	00000001	0B4F		0FF5
// 12	0000		00000000	00000002	0168		3A12

// (with CUSTOMER KEY = 00 11 0e 08 00 04)


// If the results always look like 0xD6B then the wrong big/little endian type
// was choosen.
// ------------------------------------------------------------------------*/

// // export void GenerateF1G1(U32 random, U16 secretkey_h, U32 secretkey_l, U16 *f_result, U16 *g_result)
// // inline void GenerateF1G1(U32 random, U16 secretkey_h, U32 secretkey_l, U16 *f_result, U16 *g_result)
// // {
  // // myU32 shift_register; /* the shift register variable */

  // // U8 index;             /* the raw index variable */
  // // U8 tab_index;         /* the tableindex variable */
  // // U8 bitmask;           /* the bit position index variable */

  // // U8 counter;           /* the loop counter variable */

  // // shift_register.lon = random
		      // // ^secretkey_l
		      // // ^CUSTOMER_KEY_L; /* Calculate the start value */

  // // secretkey_h ^= (CUSTOMER_KEY_H);
  // // secretkey_h <<=2;                             /* only 14 bits are used */


  // // counter = START_DIVERGENCY+F_SIZE+GAP_DIVERGENCY+G_SIZE; /* initialize the loop counter */

  // // do {
    // // index  = (shift_register.chh & HH_MASKE);   /* extract the feedback bits */
    // // index |= (shift_register.chl & HL_MASKE);   /* they are selected in a way */
    // // index |= (shift_register.clh & LH_MASKE);   /* that there is no need for */
    // // index |= (shift_register.cll & LL_MASKE);   /* bit shifting */

    // // tab_index = index >> 3; /* calculate the index for tables access */

    // // bitmask = bitmask_tab[index & 0x07]; /* create a mask to access a single bit */

    // // shift_register.lon <<= 1; /* shifting one position to the left gives us a 0 as lsb */

    // // if ((feedback_tab[tab_index] & bitmask) != 0) {
      // // /* if there is an 1 in the table */
        // // shift_register.cll |= 1; /* then copy it to lsb of shift_register */
    // // }

    // // if (counter <= G_SIZE) {
      // // /* *** we have to build g *** */
      // // *g_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
      // // if ((output_tab[tab_index] & bitmask) != 0)
      // // /* if there is an 1 in the table */
        // // *g_result |= 1; /* then copy it to lsb */
    // // } else if (counter <= GAP_DIVERGENCY + G_SIZE) {
             // // /* *** in the gap divergency ***  */
             // // if (secretkey_h & BIT15)    /* if set then exor the last feedback */
             // // shift_register.cll ^= 1;
             // // secretkey_h <<= 1;
           // // } else if (counter <= F_SIZE + GAP_DIVERGENCY + G_SIZE) {
                      // // /* *** we have to build f *** */
                      // // *f_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
                      // // if ((output_tab[tab_index] & bitmask) != 0)
                        // // /* if there is an 1 in the table */
                        // // *f_result |= 1; /* then copy it to lsb */
                     // // }

  // // } while(--counter != 0); /* until we are ready */

  // // *f_result &=F_MASK;                   /* delete the unnecessary bits */
  // // *g_result &=G_MASK;

// // } /* end of middle_crypt() */


// /* start of ExtractByte()*/
// // BYTE_1 ExtractByte(WORD_1 F_value,BYTE_1 low_high)
// // {
	// // BYTE_1 F_res;
	
	// // if (low_high == 1)
	// // {
		// // F_res = (BYTE_1) ((WORD_1)(F_value & 0xFF00)>>8);
	// // }
	// // else
	// // {
		// // F_res = F_value & 0xFF;

	// // }

	// // return F_res;


// // }/* end of ExtractByte()*/



// // /* start of dec2hex()*/
// // BYTE_1 dec2hex(BYTE_1 num)
// // {
	// // BYTE_1 i,j;
	// // BYTE_1 result;
	// // BYTE_1 arr[CNT];

    // // while(num>15)
    // // {
     // // arr[i] = num%16;
     // // num = num/16;
     // // i++;
    // // }
    // // arr[i]=num;
    
  
    // // if (i<CNT-1)
    // // {
        // // for(j=i+1;j<=CNT;j++){
            // // arr[j] = 0;}
    // // }
  
	// // result = arr[0] | ((WORD_1)(arr[1]<<4)) & 0xF0;
	
	// // return result;
	
// // }/* end of dec2hex()*/	


// // /* start of Concat_4()*/
// // LONGWORD_1 Concat_4(BYTE_1 b1,BYTE_1 b2, BYTE_1 b3, BYTE_1 b4)
// // {
	// // BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi,b2_lo,b2_hi,b1_lo,b1_hi;

    // // LONGWORD_1 sum = 0;
 
    // // b4_lo = b4 & 0xF;
    // // b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    // // b3_lo = b3 & 0xF;
    // // b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    // // b2_lo = b2 & 0xF;
    // // b2_hi = (BYTE_1)((WORD_1)(b2 & 0xF0)>>4);

    // // b1_lo = b1 & 0xF;
    // // b1_hi = (BYTE_1)((WORD_1)(b1 & 0xF0)>>4);
    
    // // sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16 + b2_lo*POW4_16 + b2_hi*POW5_16 + b1_lo*POW6_16 + b1_hi*POW7_16;
	
	// // return sum;

// // }/* end of Concat_4()*/


// // /* start of Concat_2()*/
// // WORD_1 Concat_2(BYTE_1 b3, BYTE_1 b4)
// // {
	// // BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi;

    // // WORD_1 sum = 0;
 
    // // b4_lo = b4 & 0xF;
    // // b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    // // b3_lo = b3 & 0xF;
    // // b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    // // sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16;
	
	// // return sum;
// // }/* end of Concat_2()*/


// // Sfunction
// // void Immo_rec(void) //<-- Call this function in Sfunc Call for Recording
// // { GenF1G1(Fixed values, &F1, &G1)
// // }

// // void Immo_Ver(void) //<-- Call this function in Sfunc Call for Verification
// // { GenF1G1(Rand values, &F1, &G1)
// // }// #include "imor_header.h"

// /*------------------------------------------------------------------------
// Function:    middle_crypt
// Input   :    U32 random              random number
	     // U16 secretkey_h         high part, only 14 bit used
	     // U32 secretkey_l         lo part, all 32 bits used
// Output  :    pointer to U16 f_result only the lower 12 bits are used
	     // pointer to U16 g_result only the lower 14 bits are used
// Global  :
// External:

// This routine calculates 2 results - f and g - based on a cryptographical
// algorithm.

// Typical scenario: 2 ECUs are having the same secret key and want to
// authorize each other. One is sending a (good) random number and the first
// result f to the second one, which the also calculates. If its f and the
// received one are identical, then it will be send to the first ECU. There
// itïll be also compared.
// Only if both compares are good the authentification is ok.


// No.	secret_h	secret_l	random	f_result	g_result
// --------------------------------------------------------------------------------
 // 1	1234		56789ABC	11223344	0449		1545
 // 2	1234		56789ABC	87654321	0D67		0126
 // 3	1234		436587A9	12345678	0A13		2D87
 // 4	1234		12345678	436587A9	0A13		2D87
 // 5	0321		12345678	436587A9	0A13		2EB0
 // 6	2AAA		AAAAAAAA	12345678	0CE7		2EF3
 // 7	2AAA		AAAAAAAA	AAAAAAAA	0F17		3DE6
 // 8	2AAA		AAAAAAAA	12345677	05D6		01C9
 // 9	2AAA		AAAAAAAA	00000000	0E47		2F0A
// 10	0000		00000000	00000000	0F17		3C43
// 11	0000		00000000	00000001	0B4F		0FF5
// 12	0000		00000000	00000002	0168		3A12

// (with CUSTOMER KEY = 00 11 0e 08 00 04)


// If the results always look like 0xD6B then the wrong big/little endian type
// was choosen.
// ------------------------------------------------------------------------*/

// // export void GenerateF1G1(U32 random, U16 secretkey_h, U32 secretkey_l, U16 *f_result, U16 *g_result)
// // inline void GenerateF1G1(U32 random, U16 secretkey_h, U32 secretkey_l, U16 *f_result, U16 *g_result)
// // {
  // // myU32 shift_register; /* the shift register variable */

  // // U8 index;             /* the raw index variable */
  // // U8 tab_index;         /* the tableindex variable */
  // // U8 bitmask;           /* the bit position index variable */

  // // U8 counter;           /* the loop counter variable */

  // // shift_register.lon = random
		      // // ^secretkey_l
		      // // ^CUSTOMER_KEY_L; /* Calculate the start value */

  // // secretkey_h ^= (CUSTOMER_KEY_H);
  // // secretkey_h <<=2;                             /* only 14 bits are used */


  // // counter = START_DIVERGENCY+F_SIZE+GAP_DIVERGENCY+G_SIZE; /* initialize the loop counter */

  // // do {
    // // index  = (shift_register.chh & HH_MASKE);   /* extract the feedback bits */
    // // index |= (shift_register.chl & HL_MASKE);   /* they are selected in a way */
    // // index |= (shift_register.clh & LH_MASKE);   /* that there is no need for */
    // // index |= (shift_register.cll & LL_MASKE);   /* bit shifting */

    // // tab_index = index >> 3; /* calculate the index for tables access */

    // // bitmask = bitmask_tab[index & 0x07]; /* create a mask to access a single bit */

    // // shift_register.lon <<= 1; /* shifting one position to the left gives us a 0 as lsb */

    // // if ((feedback_tab[tab_index] & bitmask) != 0) {
      // // /* if there is an 1 in the table */
        // // shift_register.cll |= 1; /* then copy it to lsb of shift_register */
    // // }

    // // if (counter <= G_SIZE) {
      // // /* *** we have to build g *** */
      // // *g_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
      // // if ((output_tab[tab_index] & bitmask) != 0)
      // // /* if there is an 1 in the table */
        // // *g_result |= 1; /* then copy it to lsb */
    // // } else if (counter <= GAP_DIVERGENCY + G_SIZE) {
             // // /* *** in the gap divergency ***  */
             // // if (secretkey_h & BIT15)    /* if set then exor the last feedback */
             // // shift_register.cll ^= 1;
             // // secretkey_h <<= 1;
           // // } else if (counter <= F_SIZE + GAP_DIVERGENCY + G_SIZE) {
                      // // /* *** we have to build f *** */
                      // // *f_result <<= 1; /* shifting one position to the left gives us a 0 as lsb */
                      // // if ((output_tab[tab_index] & bitmask) != 0)
                        // // /* if there is an 1 in the table */
                        // // *f_result |= 1; /* then copy it to lsb */
                     // // }

  // // } while(--counter != 0); /* until we are ready */

  // // *f_result &=F_MASK;                   /* delete the unnecessary bits */
  // // *g_result &=G_MASK;

// // } /* end of middle_crypt() */


// /* start of ExtractByte()*/
// // BYTE_1 ExtractByte(WORD_1 F_value,BYTE_1 low_high)
// // {
	// // BYTE_1 F_res;
	
	// // if (low_high == 1)
	// // {
		// // F_res = (BYTE_1) ((WORD_1)(F_value & 0xFF00)>>8);
	// // }
	// // else
	// // {
		// // F_res = F_value & 0xFF;

	// // }

	// // return F_res;


// // }/* end of ExtractByte()*/



// // /* start of dec2hex()*/
// // BYTE_1 dec2hex(BYTE_1 num)
// // {
	// // BYTE_1 i,j;
	// // BYTE_1 result;
	// // BYTE_1 arr[CNT];

    // // while(num>15)
    // // {
     // // arr[i] = num%16;
     // // num = num/16;
     // // i++;
    // // }
    // // arr[i]=num;
    
  
    // // if (i<CNT-1)
    // // {
        // // for(j=i+1;j<=CNT;j++){
            // // arr[j] = 0;}
    // // }
  
	// // result = arr[0] | ((WORD_1)(arr[1]<<4)) & 0xF0;
	
	// // return result;
	
// // }/* end of dec2hex()*/	


// // /* start of Concat_4()*/
// // LONGWORD_1 Concat_4(BYTE_1 b1,BYTE_1 b2, BYTE_1 b3, BYTE_1 b4)
// // {
	// // BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi,b2_lo,b2_hi,b1_lo,b1_hi;

    // // LONGWORD_1 sum = 0;
 
    // // b4_lo = b4 & 0xF;
    // // b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    // // b3_lo = b3 & 0xF;
    // // b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    // // b2_lo = b2 & 0xF;
    // // b2_hi = (BYTE_1)((WORD_1)(b2 & 0xF0)>>4);

    // // b1_lo = b1 & 0xF;
    // // b1_hi = (BYTE_1)((WORD_1)(b1 & 0xF0)>>4);
    
    // // sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16 + b2_lo*POW4_16 + b2_hi*POW5_16 + b1_lo*POW6_16 + b1_hi*POW7_16;
	
	// // return sum;

// // }/* end of Concat_4()*/


// // /* start of Concat_2()*/
// // WORD_1 Concat_2(BYTE_1 b3, BYTE_1 b4)
// // {
	// // BYTE_1 b4_lo,b4_hi,b3_lo,b3_hi;

    // // WORD_1 sum = 0;
 
    // // b4_lo = b4 & 0xF;
    // // b4_hi = (BYTE_1)((WORD_1)(b4 & 0xF0)>>4);

    // // b3_lo = b3 & 0xF;
    // // b3_hi = (BYTE_1)((WORD_1)(b3 & 0xF0)>>4);

    // // sum = b4_lo + b4_hi*POW1_16+ b3_lo*POW2_16 + b3_hi*POW3_16;
	
	// // return sum;
// // }/* end of Concat_2()*/


// // Sfunction
// // void Immo_rec(void) //<-- Call this function in Sfunc Call for Recording
// // { GenF1G1(Fixed values, &F1, &G1)
// // }

// // void Immo_Ver(void) //<-- Call this function in Sfunc Call for Verification
// // { GenF1G1(Rand values, &F1, &G1)
// // }