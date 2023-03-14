#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array use malloc and initializes it.
 *
 * @size: the size of array
 *
 * @c: arry  value
 *
 * Return: a pointer to array or null if size 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
