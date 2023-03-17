#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array return pounter for function
 *
 * @min: minimum
 * @max: maximun
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
