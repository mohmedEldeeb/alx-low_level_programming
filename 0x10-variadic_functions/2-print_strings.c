#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to Prints strings
 * @separator: string to add sperattor
 * @n: number of prams
 * @...: sprit prams
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *str;
	unsigned int index;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(x, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && x != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
