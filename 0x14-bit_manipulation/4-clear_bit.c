#include "main.h"

/**
 * clear_bit - sets the value 0 to bit
 *
 * @n: pointer to bit
 * @index: index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	
	x = 1;

	if (index > 63)
		return (-1);

	x <<= index;

	if (*n & m)
		*n ^= m;

	return (1);
}
