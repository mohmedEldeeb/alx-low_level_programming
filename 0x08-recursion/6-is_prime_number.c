#include "main.h"

/**
 * get_prime - to check if number is a prime number.
 *
 * @n: input number.
 * @x: number iterator.
 *
 * Return: 1 or 0 number.
 */

int get_prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (get_prime(n, x + 1));
}

/**
 * is_prime_number - check if the number prime.
 *
 * @n: input number to chack.
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (get_prime(n, 2));
}
