/***********************************************************************************************/
/***********************************************************************************************/
/********************************** Author: Mohamed Eldeeb *************************************/
/***************************************** Layer: MCAL *****************************************/
/****************************************** SWC: RCC *******************************************/
/***************************************** Version: 1.0 ****************************************/
/***********************************************************************************************/
/***********************************************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#define FLASH_ACR       (*((volatile u32*)0x40022000))

#define RCC_BASE_ADDRESS             (u32)0x40021000

typedef struct
{
	u32 CR;
	u32 CFGR;
	u32 CIR;
	u32 APB2RSTR;
	u32 APB1RSTR;
	u32 AHBENR;
	u32 APB2ENR;
	u32 APB1ENR;
	u32 BDCR;
	u32 CSR;

}RCC_t;

#define RCC                     ((volatile RCC_t*)RCC_BASE_ADDRESS)

#endif
