/******************************************************************************
* Copyright 2000-2020 JMU Electronic Technology Association / 508293391@qq.com
*
* ProjectName: Underwater Vehicle Control
* Desc: 			 Peripherals control
*
* Author:  Dwfish
* Date: 	 2019-02-06
*
* -----------------------------------------------------------------
 * Change Logs:
 * Date           Author       Notes
 * 2019-02-06     Dwfish       Creat LED / KEY / Buzzer Thread.
 
 * 2019-02-07     Dwfish       Creat OLED Display Thread.
 * 2019-02-09     Dwfish       Creat Get_Gyroscope Thread. 
 * 2019-02-09     Dwfish       Creat PWM / ADC Thread.  
 * 2019-02-11     Dwfish       Creat some MSHs (get methods) & Improved OLED display methods. 
 * 2019-02-13     Dwfish       Creat Can change Servo Motor Mid-Value MSH. 
 * 2019-02-16     Dwfish       Creat System self-check methods[events]. 
 * 2019-02-16     Dwfish       Add W25Q128 FLASH To Save Important Parameters.
 * 2019-02-16     Dwfish       Creat OLED Electronic compass.
 * 2019-02-19     Dwfish       Add VACN host computer debug.
*
******************************************************************************/

#include <rthw.h>
#include <rtthread.h>
#include "init.h"
/**
 * @addtogroup STM32
 */

/* 打印相关日志信息 */
int main(void)
{
    /* user app entry. */
	  RCC_ClocksTypeDef Get_RCC_Clocks;
		RCC_GetClocksFreq(&Get_RCC_Clocks); 
	
		LOG_W("Clock:%d Hz",Get_RCC_Clocks.SYSCLK_Frequency); //打印系统时钟
		rt_kprintf("* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");	
		rt_kprintf("* ProjectName: Underwater Vehicle Control	\n");
		rt_kprintf("* Desc:    Peripherals control	\n");
		rt_kprintf("*	\n");
		rt_kprintf("* Author:  Dwfish	\n");
		rt_kprintf("* Date:	   2019-02-06	\n");
		rt_kprintf("*	\n");
		rt_kprintf("* -----------------------------------------------------------------\n");
		rt_kprintf("* Change Logs:\n");
		rt_kprintf("* Date           Author       Notes\n");
	
		rt_kprintf("* 2019-02-06     Dwfish       Creat LED / KEY / Buzzer Thread.\n");
		rt_kprintf("* 2019-02-07     Dwfish       Creat Buzzer Thread & Improve LED Thread\n");
		rt_kprintf("* 2019-02-07     Dwfish       Creat OLED Thread\n");
		rt_kprintf("* 2019-02-09     Dwfish       Creat Get_Gyroscope Thread.\n");
		rt_kprintf("* 2019-02-09     Dwfish       Creat PWM / ADC Thread.\n");
	
		rt_kprintf("* 2019-02-11     Dwfish       Creat MSHs (some get methods) & Improved OLED Display. \n");
		rt_kprintf("* 2019-02-13     Dwfish       Creat Can change Servo Motor Mid-Value MSH-methods.  \n");
		rt_kprintf("* 2019-02-16     Dwfish       Creat System self-check methods [ Events ].\n");
		rt_kprintf("* 2019-02-16     Dwfish       Add W25Q128 FLASH To Save Important Parameters.\n");
		rt_kprintf("* 2019-02-16     Dwfish       Creat OLED Electronic compass.\n");
		rt_kprintf("* 2019-02-19     Dwfish       Add VACN host computer debug.\n");
		rt_kprintf("* <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");	 
		
		rt_thread_mdelay(1000);
		get_time();  //打印参考时间戳
		

    return 0;
}


