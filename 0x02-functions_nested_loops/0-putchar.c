#include "main.h"

/**
 * main - function return putchar
 *
 * return: mint 0 alows
 */

int main(void)
{

	char x[] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(x[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
