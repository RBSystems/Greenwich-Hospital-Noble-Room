#ifndef __S2_AURORA_VTUNE_ADDRESSABLE_R3_2_H__
#define __S2_AURORA_VTUNE_ADDRESSABLE_R3_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Aurora_VTUNE_Addressable_r3_2_POWER_ON_DIG_INPUT 0
#define __S2_Aurora_VTUNE_Addressable_r3_2_POWER_OFF_DIG_INPUT 1
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_0_DIG_INPUT 2
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_1_DIG_INPUT 3
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_2_DIG_INPUT 4
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_3_DIG_INPUT 5
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_4_DIG_INPUT 6
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_5_DIG_INPUT 7
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_6_DIG_INPUT 8
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_7_DIG_INPUT 9
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_8_DIG_INPUT 10
#define __S2_Aurora_VTUNE_Addressable_r3_2_KEY_9_DIG_INPUT 11
#define __S2_Aurora_VTUNE_Addressable_r3_2_ENTER_DIG_INPUT 12
#define __S2_Aurora_VTUNE_Addressable_r3_2_CLEAR_DIG_INPUT 13
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC_DIG_INPUT 14
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC_ON_DIG_INPUT 15
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC_OFF_DIG_INPUT 16
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC_TYPE2_DIG_INPUT 17
#define __S2_Aurora_VTUNE_Addressable_r3_2_CH_UP_DIG_INPUT 18
#define __S2_Aurora_VTUNE_Addressable_r3_2_CH_DOWN_DIG_INPUT 19
#define __S2_Aurora_VTUNE_Addressable_r3_2_POLL_DIG_INPUT 20

#define __S2_Aurora_VTUNE_Addressable_r3_2_PRE_DIG_INPUT 21
#define __S2_Aurora_VTUNE_Addressable_r3_2_PRE_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/
#define __S2_Aurora_VTUNE_Addressable_r3_2_ADDRESS_ANALOG_INPUT 0


#define __S2_Aurora_VTUNE_Addressable_r3_2_TUNER_RX$_BUFFER_INPUT 1
#define __S2_Aurora_VTUNE_Addressable_r3_2_TUNER_RX$_BUFFER_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TUNER_RX$, __S2_Aurora_VTUNE_Addressable_r3_2_TUNER_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC_FB_DIG_OUTPUT 0
#define __S2_Aurora_VTUNE_Addressable_r3_2_PRESET_SAVED_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/

#define __S2_Aurora_VTUNE_Addressable_r3_2_TUNER_TX$_STRING_OUTPUT 0
#define __S2_Aurora_VTUNE_Addressable_r3_2_TV_CHANNEL$_STRING_OUTPUT 1


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
CREATE_INTARRAY1D( S2_Aurora_VTUNE_Addressable_r3_2, __PRESET, 10 );;


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
#define __S2_Aurora_VTUNE_Addressable_r3_2_CMD$_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CMD$, __S2_Aurora_VTUNE_Addressable_r3_2_CMD$_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_TEMPSTRING$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TEMPSTRING$, __S2_Aurora_VTUNE_Addressable_r3_2_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_TRASH$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TRASH$, __S2_Aurora_VTUNE_Addressable_r3_2_TRASH$_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_ADDR_STRING_STRING_MAX_LEN 7
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __ADDR_STRING, __S2_Aurora_VTUNE_Addressable_r3_2_ADDR_STRING_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC1_STRING_STRING_MAX_LEN 11
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CC1_STRING, __S2_Aurora_VTUNE_Addressable_r3_2_CC1_STRING_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_CC2_STRING_STRING_MAX_LEN 11
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CC2_STRING, __S2_Aurora_VTUNE_Addressable_r3_2_CC2_STRING_STRING_MAX_LEN );
#define __S2_Aurora_VTUNE_Addressable_r3_2_CCOFF_STRING_STRING_MAX_LEN 11
CREATE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CCOFF_STRING, __S2_Aurora_VTUNE_Addressable_r3_2_CCOFF_STRING_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PRE );
   unsigned short __TV_CHANNEL;
   unsigned short __CURRENT_CHANNEL;
   unsigned short __START_POS;
   unsigned short __CMD_LENGTH;
   unsigned short __RXOK;
   unsigned short __TEMPCHAR;
   unsigned short __X;
   unsigned short __CC_MODE;
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CMD$ );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TRASH$ );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __ADDR_STRING );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CC1_STRING );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CC2_STRING );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __CCOFF_STRING );
   DECLARE_STRING_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2, __TUNER_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Aurora_VTUNE_Addressable_r3_2 )
{
   DECLARE_INTARRAY( S2_Aurora_VTUNE_Addressable_r3_2, __PRESET );
};

DEFINE_WAITEVENT( S2_Aurora_VTUNE_Addressable_r3_2, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_Aurora_VTUNE_Addressable_r3_2, REQ_CHANNEL );
DEFINE_WAITEVENT( S2_Aurora_VTUNE_Addressable_r3_2, SAVE_PRESET );
DEFINE_WAITEVENT( S2_Aurora_VTUNE_Addressable_r3_2, __SPLS_TMPVAR__WAITLABEL_1__ );
DEFINE_WAITEVENT( S2_Aurora_VTUNE_Addressable_r3_2, __SPLS_TMPVAR__WAITLABEL_2__ );


#endif //__S2_AURORA_VTUNE_ADDRESSABLE_R3_2_H__

