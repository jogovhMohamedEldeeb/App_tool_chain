/***********************************************************************************************/
/***********************************************************************************************/
/********************************** Author: Mohamed Eldeeb *************************************/
/***************************************** main.c *****************************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#include <stdint.h>
#include "GPIO_interface.h"
#include "RCC_interface.h"
#include "LCD_interface.h"
#include "STD_TYPES.h"
volatile const uint32_t var1;

void delay(int ms)
{
	for(u16 i=0;i<ms;i++)
	{	for(u16 j=0;j<ms;j++)
		{
			
		}		
	}
}

int main(void)
{

	MRCC_voidInit();
	MRCC_voidPeripheralClockEnable(RCC_APB2,GPIOA);
	MGPIO_voidSetPinMode(PORTA,PIN9,GPIO_GP_OUTPUT_PP_10MHZ);
	LCD_Init();
	LCD_Send_String_Pos((u8*)"Welcome to ",1,5);
	LCD_Send_String_Pos((u8*)"my application",2,3);
	delay(1000);
	LCD_Send_Command(_LCD_CLEAR);
	delay(1000);
	LCD_Send_String("Thanks ");
	delay(1000);
	LCD_Send_Command(_LCD_CLEAR);

	while(1)
	{
		
	}

}
