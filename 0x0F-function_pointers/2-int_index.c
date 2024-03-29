#include "function_pointers.h"

/**
 * int_index - Searches for integer in array
 *
 * @array: array from integers.
 * @size: size array
 * @cmp: pointer to function
 *
 * Return: 0 or -1 or index
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
