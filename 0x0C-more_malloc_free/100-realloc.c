#include "main.h"
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
	char *ptr_copy, *filler;
	unsigned int index;

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

	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memory;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);

	return (memory);
}
