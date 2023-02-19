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

	int d1 ,d2;

	for (d1 = '0' ; d2 <= '9' ; d1++)
	{
		d2 = 0;
		for (d2 = '0' ; d2 <= '9' ; d2++)
		{
			if (d2 <  d1)
			{
				putchar(d1);

				putchar(d2);

				putchar(' ');

				putchar(d1);

				putchar(d1);

				if (d2 != '8' || d1 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
