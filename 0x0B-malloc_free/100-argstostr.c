#include "main.h"
#include <stdlib.h>

/**
 * argstoelem - return args
 *
 * @ac: args count
 * @av: arguments
 *
 * Return: pointer
 */

char *argstoelem(int ac, char **av)
{

	int i, j, k, length = 0;
	char *elem, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			length++;
		length++;
	}

	elem = malloc(sizeof(char) * (length + 1));

	if (elem == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < length; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			elem[j] = s[k];
			j++;
			k++;
		}

		elem[j++] = '\n';
	}

	elem[j] = '\0';

	return (elem);
}
