#include "main.h"

/**
 * reverse_array - function to reseve array
 * @a: feist pram to array
 * @n: number to pram
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
