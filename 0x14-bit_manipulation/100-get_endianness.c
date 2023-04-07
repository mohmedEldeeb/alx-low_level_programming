#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int z;
	char *x;

	z = 1;
	x = (char *) &z;

	return ((int)*x);
}
