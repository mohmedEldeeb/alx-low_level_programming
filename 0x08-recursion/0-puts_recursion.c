#include "main.h"

/**
 * _puts_recursion - function print the string followed by new line
 *
 * @s: is string
 */

void _puts_recursion(char *s)
{
	int i = 0;
	
	if (s[i] == '\0')
		_putchar('\n');
	i++;
	_puts_recursion(s[i]);
	
        _putchar(s[i]);
}
