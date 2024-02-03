#include <stdio.h>
#include "stm32f4xx.h"
#include "fpu.h"
#include "uart.h"
#include "timebase.h"
#include "bsp.h"
#include "adc.h"

/*Module:
 * FPU
 * UART
 * TIMEBASE
 * GPIO	(BSP)
 * ADC
 * */

bool btn_state;
uint32_t sensor_value;
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

	/*Initialize ADC*/
	pa1_adc_init();

	/*Start conversion*/
	start_conversion();

	while(1)
	{
		sensor_value = adc_read();
	}
}

