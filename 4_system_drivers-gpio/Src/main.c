#include <stdio.h>
#include "stm32f4xx.h"
#include "fpu.h"
#include "uart.h"
#include "timebase.h"
#include "bsp.h"

/*Module:
 * FPU
 * UART
 * TIMEBASE
 * GPIO	(BSP)
 * ADC
 * */

bool btn_state;

int main()
{
	/*Enable FPU*/
	fpu_enable();

	/*Initialize debug UART*/
	debug_uart_init();

	/*Initialize timebase*/
	timebase_init();

	/*Initialize LED*/
	led_init();

	/*Initialize BUTON*/
	button_init();

	while(1)
	{
		btn_state = get_btn_state();
		if (btn_state)
		{
			led_on();
		}
		else
		{
			led_off();
		}


	}
}

