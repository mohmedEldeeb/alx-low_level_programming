#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function return malloc.
 * @b: number of size.
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
