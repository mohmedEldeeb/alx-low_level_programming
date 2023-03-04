#include "main.h"

/**
 * cap_string - function to captlauz
 *
 * @str: string to captilze
 *
 * Rrtuen: char pointer
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
