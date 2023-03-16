#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to somthing.
 *
 * @width: width
 * @height: height
 *
 * Return: pointer to dinmintiol arry
 *
 */

int **alloc_grid(int width, int height)
{
	int *arr, x, i;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (x = 0; x < width; x++)
			arr[i][x] = 0;

	return (arr);
}
