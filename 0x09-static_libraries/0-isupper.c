#include "main.h"

/**
 * _isupper - check if pram is upper
 *
 * @c: input prame for alphabet
 *
 * Return: 1 if its uppercase, 0 if no
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
