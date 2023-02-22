#include "main.h"

/**
 * jack_bauer - return time in day
 *
 * Return: time number
 * 
 */


void jack_bauer(void)
{
	int hour, mint;

	for (hour = 0; hour < 24 ; hour++)
	{
		for (mint = 0; mint < 60; mint++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((mint / 10) + 48);
			_putchar((mint % 10) + 48);
			_putchar('\n');
		}
	}
}
