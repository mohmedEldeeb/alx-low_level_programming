#include "main.h"

int find(int num, int root);
int _sqrt_recursion(int n);

/**
 * find - Finds the natural square root of an inputted number.
 *
 * @x: The number to find the square.
 * @z: to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *
 */

int find(int x, int z)
{
	if ((z * z) == x)
		return (z);

	if (z == x / 2)
		return (-1);

	return (find(x, z + 1));
}

/**
 * _sqrt_recursion - that is Returns the natural square root of a number.
 *
 * @n: is number return the square root of.
 *
 * Return: number
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find(n, x));
}
