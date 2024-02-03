#include <stdio.h>
#include "stm32f4xx.h"
#include "fpu.h"
#include "uart.h"
#include "timebase.h"
/*Module:
 * FPU
 * UART
 * TIMEBASE
 * GPIO	(BSP)
 * ADC
 * */

#define GPIOAEN 	(1U<<0)
#define PIN5		(1U<<5)
#define LED_PIN		PIN5


int main()
{
	/*Enable FPU*/
	fpu_enable();

	/*Initialize debug UART*/
	debug_uart_init();

	/*Initialize timebase*/
	timebase_init();

	while(1)
	{
		printf("Hello from STM32F4\r\n");
		delay(1);
	}
}

