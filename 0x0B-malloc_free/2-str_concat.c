#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - add two strings.
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int x, j, len, len1, len2;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			len2++;
	}

	len = len1 + len2;

	res = malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		res[x] = s1[x];
	for (j = 0; j < len2; j++, x++)
		res[i] = s2[j];
	res[len] = '\0';

	return (res);
}
