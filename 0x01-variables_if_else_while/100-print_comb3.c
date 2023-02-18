#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int d1 = 0, d2;

	while (d1 < 10)
	{
		d2 = 0;
		while (d2 < 10)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1 + 48);

				putchar(d2 + 48);

				if (d1 + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++d2;
		}
		++d1;
	}
	putchar('\n');

	return (0);
}
