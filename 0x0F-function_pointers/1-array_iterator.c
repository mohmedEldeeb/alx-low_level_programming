#include "function_pointers.h"

/**
 * array_iterator - function give some data 
 * @array: array from initeger
 * @size: size array
 * @action: pointer to function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
