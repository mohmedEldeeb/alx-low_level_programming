#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - new spes in momery
 *
 * @ptr: A pointer to ald data in momery
 *
 * @old_size: old size
 *
 * @new_size: new size
 *
 * Return: new pointer
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptrr, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptrr = ptr;
	memory = malloc(sizeof(*ptrr) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = memory;

	for (i = 0; index < old_size && index < new_size; index++)
		f[i] = *ptrr++;

	free(ptr);
	return (memory);
}
