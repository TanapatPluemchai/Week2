#include <stdio.h>
#include "LED.h"
#include "driver/gqio.h"

void LEDON(int pin)
{
	gqio_set_level(pin,1);
}
void LEDOFF(int pin)
{
	gqio_set_level(pin,0);
}
