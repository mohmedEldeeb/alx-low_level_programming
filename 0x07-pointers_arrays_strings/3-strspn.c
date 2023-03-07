#include "main.h"

/**
 * _strspn - mabey gets the length of a prefix substring
 * @s: initial segment.
 * @accept: as you see accepted bytes.
 * Return: i thenk the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int z , x, y;

	z = 0;
	x = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
