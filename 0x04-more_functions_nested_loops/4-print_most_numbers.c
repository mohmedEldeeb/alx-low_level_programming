#include "main.h"

/**
 * print_most_numbers - function to print number from 0 to 1 skip 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
