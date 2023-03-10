#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 *
 * @str: string
 *
 * Return: returns
 *
 */

char *_strdup(char *str)
{
	char *newarr;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newarr = malloc((sizeof(char) * length) + 1);

	if (newarr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		newarr[i] = str[i];

	newarr[length] = '\0';

	return (newarr);
}
