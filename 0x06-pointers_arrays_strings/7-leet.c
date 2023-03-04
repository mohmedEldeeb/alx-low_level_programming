#include "main.h"

/**
 * leet - function to change some nchae to munber in staring
 *
 * @str: pram to function
 * Return: str value
 */

char *leet(char str*)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	x = 0 = y;

	while (str[x] != '\0')
	{
		while (y < 10)
		{
			if (str[x] == s1[y])
				str[x] = s2[y];
			y++;
		}
	}
	return (str);
}
