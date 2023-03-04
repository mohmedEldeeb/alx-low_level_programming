#include "main.h"

/**
 * string_toupper - function confert string to upper case
 * @str: pointer to string
 *
 * Return: string with revers
 */

char *string_toupper(char *str)
{
	int i = 0;

	do {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;

	} while (str[i]);

	return (str);
}
