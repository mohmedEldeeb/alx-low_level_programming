#include "main.h"

/**
 * _puts_recursion - function print the string followed by new line
 *
 * @s: is string
 */

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
