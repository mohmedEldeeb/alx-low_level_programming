#include "main.h"

/**
 * print_alphabet - function print char and one somethings
 *
 * return : aonly 0 all time
 */

void print_alphabet(void)
{
	int x;
	int numberx;

	for (numberx = 0; numberx <= 9; x++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');
	}

}
