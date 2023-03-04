#include "main.h"

/**
 * cap_string - make Capitalizes all words of a string.
 * @str: make The string to be capitalized.
 *
 * Return: A pointer to the new  string.
 */

char *cap_string(char *str)
{
	int x = 0;

	do {
		while (!(str[x] >= 'a' && str[x] <= 'z'))
		{
			x++;
		}
		if (str[x - 1] == ' ' ||
				str[x - 1] == '\t' ||
				str[x - 1] == '\n' ||
				str[x - 1] == ',' ||
				str[x - 1] == ';' ||
				str[x - 1] == '.' ||
				str[x - 1] == '!' ||
				str[x - 1] == '?' ||
				str[x - 1] == '"' ||
				str[x - 1] == '(' ||
				str[x - 1] == ')' ||
				str[x - 1] == '{' ||
				str[x - 1] == '}' ||
				x == 0)
			str[x] -= 32;
		x++;

	} while (str[x]);

	return (str);
}
