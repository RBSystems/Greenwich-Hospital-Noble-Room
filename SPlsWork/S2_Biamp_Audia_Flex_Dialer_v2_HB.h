#ifndef __S2_BIAMP_AUDIA_FLEX_DIALER_V2_HB_H__
#define __S2_BIAMP_AUDIA_FLEX_DIALER_V2_HB_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_ON_HOOK_DIG_INPUT 0
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_OFF_HOOK_DIG_INPUT 1
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_ON_HOOK_FB_DIG_INPUT 2
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_OFF_HOOK_FB_DIG_INPUT 3
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY0_DIG_INPUT 4
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY1_DIG_INPUT 5
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY2_DIG_INPUT 6
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY3_DIG_INPUT 7
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY4_DIG_INPUT 8
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY5_DIG_INPUT 9
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY6_DIG_INPUT 10
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY7_DIG_INPUT 11
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY8_DIG_INPUT 12
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY9_DIG_INPUT 13
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY_STAR_DIG_INPUT 14
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_KEY_POUND_DIG_INPUT 15
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_CLEAR_DIG_INPUT 16
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_BACK_DIG_INPUT 17
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_DIAL_DIG_INPUT 18
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_REDIAL_DIG_INPUT 19


/*
* ANALOG_INPUT
*/
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_MAXCHARACTERS_ANALOG_INPUT 3

#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_HEADER$_STRING_INPUT 0
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_HEADER$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __HEADER$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_HEADER$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_ADDRESS$_STRING_INPUT 1
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_ADDRESS$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __ADDRESS$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_ADDRESS$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_INSTANCE$_STRING_INPUT 2
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_INSTANCE$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __INSTANCE$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_INSTANCE$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_PHONE_NUMBER$_STRING_OUTPUT 0
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_TO_DEVICE$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_TEMPDIAL$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __TEMPDIAL$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_TEMPDIAL$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_SHEADER_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __SHEADER, __S2_Biamp_Audia_Flex_Dialer_v2_HB_SHEADER_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_LAST_NUM_DIALED$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __LAST_NUM_DIALED$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_LAST_NUM_DIALED$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_A$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __A$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_A$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_B$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __B$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_B$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_W$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __W$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_W$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_X$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __X$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_X$_STRING_MAX_LEN );
#define __S2_Biamp_Audia_Flex_Dialer_v2_HB_Y$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __Y$, __S2_Biamp_Audia_Flex_Dialer_v2_HB_Y$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __HEADER$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __ADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __INSTANCE$ );
};

START_NVRAM_VAR_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB )
{
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __TEMPDIAL$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __SHEADER );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __LAST_NUM_DIALED$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __A$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __B$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __W$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __X$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Audia_Flex_Dialer_v2_HB, __Y$ );
   unsigned short __IMAXCHARS;
   unsigned short __I;
   unsigned short __IPRESET;
   unsigned short __SEMAPHORE;
   unsigned short __ETX;
   unsigned short __STX;
   unsigned short __IA;
   unsigned short __IB;
   unsigned short __IC;
   unsigned short __IW;
   unsigned short __IX;
   unsigned short __IY;
   unsigned short __IHOOK;
};



#endif //__S2_BIAMP_AUDIA_FLEX_DIALER_V2_HB_H__

