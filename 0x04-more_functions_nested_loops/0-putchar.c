#include "main.h"

/**
 * main - function return putchar
 *
 * Return: mint 0 alows
 */

int _putchar(void)
{

	char x[] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(x[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
