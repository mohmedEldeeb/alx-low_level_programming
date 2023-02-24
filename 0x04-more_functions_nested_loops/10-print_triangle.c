#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: number of triangle
 *
 */

void print_triangle(int size)
{
	int x, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (z = 1; z <= size; ++z)
		{
			for (x = 1; x <= x; ++x)
			{
				if ((z + x) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
