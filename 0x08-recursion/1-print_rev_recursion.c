#include "main.h"

/**
 * _print_rev_recursion - function to reseve striong
 *
 * @s: string to resive
 */

void _print_rev_recursion(char *s)
{
	if (*s)
		_puts_recursion(s - 1);
	_putchar(*s);
}
