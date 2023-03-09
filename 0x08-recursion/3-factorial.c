#include "main.h"

/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int x = 1;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return x * factorial(n - 1);

}
