#include "main.h"

/**
 * more_numbers - print number 10 times from 0 to 14
 */

void more_numbers(void)
{
	int n, y, num;

	for (n = 0; n < 10; n++)
	{
		for (y = 0 ; y < 15; y++)
		{
			num = y;
			if (y > 9)
			{
				_putchar((y / 10) + 48);
				num = y % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
