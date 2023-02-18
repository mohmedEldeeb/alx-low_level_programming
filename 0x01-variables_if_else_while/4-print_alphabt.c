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
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if(x != 'q' && x != 'e' )
			putchar(x);
	putchar('\n');

	return (0);
}
