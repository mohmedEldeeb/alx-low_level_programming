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
	void *m;
	char *ptr_copy, *f;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		f[index] = *ptr_copy++;

	free(ptr);
	return (m);\
}
