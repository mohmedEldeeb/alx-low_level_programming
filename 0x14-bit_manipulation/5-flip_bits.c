#include "main.h"

/**
 * flip_bits - returns flip tow number
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;

	for (result = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			result++;
	}

	return (result);
}
