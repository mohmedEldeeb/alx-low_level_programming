#include "main.h"

/**
 * times_table - function make time table
 *
 * Return: table from time
 */

void times_table(void)
{
	int x, y, z;

	x = 0;

	while (x < 10)
	{
		y = 1;

		_putchar('48');
		while (y < 10)
		{

			_putchar(',');
			_putchar(' ');
			z = x * y;

			if (z <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((z / 10) + '48');
			}
			_putchar((z % 10) + 48);
			y++;
		}
		x++;
	}
}

