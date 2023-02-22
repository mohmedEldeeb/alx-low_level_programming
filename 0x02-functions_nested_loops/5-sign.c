#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: pram type integer
 *
 * Return: 3 option 1 or 2 or 3 like @n
 *
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	} else if (n ==0)
	{
		_putchar(0 + 48);
                return (0);
	} else {
		putchar(45 + 0);
                return (-1);
	
	}
}
