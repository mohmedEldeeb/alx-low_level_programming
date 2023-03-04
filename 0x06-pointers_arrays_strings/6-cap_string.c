#include "main.h"

/**
 * cap_string - function to captlauz
 *
 * @str: string to captilze
 */

char *cap_string(char *str)
{
	int x = 0;

	do {
		while (!(str[x] >= 'a' && str[x] <= 'z'))
		{
			x++;
		}
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[x] -= 32;
		x++;

	} while (str[x]);

	return (str);
}
