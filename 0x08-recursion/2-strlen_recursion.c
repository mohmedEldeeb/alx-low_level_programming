#include "main.h"

/**
 * _strlen_recursion - return lenth striong
 *
 * @s: string to get lenth
 * Return: number of lenth to striong
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);

	}
	return (x);
}
