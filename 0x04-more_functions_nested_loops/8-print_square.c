#include "main.h"

/**
 * print_square - to print squara
 *
 * @size: number
 */

void print_square(int size)
{
	int x, z;

	if (size > 0)
	{
		for (x = 1; x <= size; ++x)
		{
			for (z = 1; z <= size; ++z)
				_putchar('#');
			_putchar('\n');
		}
	}
}
