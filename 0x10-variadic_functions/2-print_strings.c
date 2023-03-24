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
	va_list s;
	char *str;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && s != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
