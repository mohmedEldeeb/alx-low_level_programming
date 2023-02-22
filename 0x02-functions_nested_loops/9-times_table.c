#include "main.h"


/**
 * times_table - function make time table
 *
 * Return: table from time
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; ++x)
	{
		_putchar(48);
		for (y = 1; y <= 9; ++y)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
