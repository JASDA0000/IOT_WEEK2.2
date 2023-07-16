#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "LED.h"
#include "driver/gpio.h"

#define pin 23

void app_main(void)
{
	gpio_reset_pin(pin);
	gpio_set_direction(pin,GPIO_MODE_OUTPUT);

	while(1)
	{
    LEDON(pin);
    sleep(1);
    LEDOFF(pin);
    sleep(1);
	}
}
