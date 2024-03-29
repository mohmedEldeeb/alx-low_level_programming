#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function maktion some thinh
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * @n: maximum number
 *
 * Return: new or null
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	con = malloc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		con[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		con[len++] = s2[index];

	con[len] = '\0';

	return (con);
}
