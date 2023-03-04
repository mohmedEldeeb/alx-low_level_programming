#include "main.h"

/**
 * print_number - function to return Prints for  integer.
 *
 * @n: The integer for printed.
 *
 * Return: no return
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
