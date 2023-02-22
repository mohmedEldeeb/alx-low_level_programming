#include "main.h"

/**
 *
 * print_last_digit - this fincton print last digit
 *
 * @n: pram number for function
 *
 * Return: number last digit
 *
 */


int print_last_digit(int n)
{
	int d ;
	if (n < 0)
		d = (n % 10) * -1;
	else
		d = n % 10;
	return (d);
}
