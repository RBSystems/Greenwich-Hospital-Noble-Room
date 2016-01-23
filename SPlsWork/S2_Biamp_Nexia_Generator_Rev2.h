#ifndef __S2_BIAMP_NEXIA_GENERATOR_REV2_H__
#define __S2_BIAMP_NEXIA_GENERATOR_REV2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Biamp_Nexia_Generator_Rev2_VOLUMEMXB_ANALOG_INPUT 0
#define __S2_Biamp_Nexia_Generator_Rev2_VOL_RAMP_ANALOG_INPUT 1

#define __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND$_STRING_INPUT 2
#define __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND$_STRING_MAX_LEN 36
CREATE_STRING_STRUCT( S2_Biamp_Nexia_Generator_Rev2, __STARTOFCOMMAND$, __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND$_STRING_MAX_LEN );
#define __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND2$_STRING_INPUT 3
#define __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND2$_STRING_MAX_LEN 36
CREATE_STRING_STRUCT( S2_Biamp_Nexia_Generator_Rev2, __STARTOFCOMMAND2$, __S2_Biamp_Nexia_Generator_Rev2_STARTOFCOMMAND2$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Biamp_Nexia_Generator_Rev2_NEXIA_TX$_STRING_OUTPUT 0


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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Biamp_Nexia_Generator_Rev2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __MUTE;
   DECLARE_STRING_STRUCT( S2_Biamp_Nexia_Generator_Rev2, __STARTOFCOMMAND$ );
   DECLARE_STRING_STRUCT( S2_Biamp_Nexia_Generator_Rev2, __STARTOFCOMMAND2$ );
};

START_NVRAM_VAR_STRUCT( S2_Biamp_Nexia_Generator_Rev2 )
{
};



#endif //__S2_BIAMP_NEXIA_GENERATOR_REV2_H__

