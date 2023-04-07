#include "main.h"

/**
 * binary_to_uint - converts a binary int
 *
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int i;

	for (i = 0; binary[i] != '\0'; i++)
	{
		result <<= 1;

		if (binary[i] == '1')
		{
			result |= 1;
		}

		else if (binary[i] != '0')
		{
			return 0;
		}
	}
	return (result);
}

