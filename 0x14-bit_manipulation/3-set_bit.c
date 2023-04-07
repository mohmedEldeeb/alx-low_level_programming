#include "main.h"

/**
 * set_bit - sets the value 1 to index
 *
 * @n: pointer to int
 * @index: index
 *
 * Return: 1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	*n = (*n | x);

	return (1);
}
