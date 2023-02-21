#include <stdio.h>
#include <string.h>

/**
 * main - function return putchar
 *
 * return: mint 0 alows
 */
int main (void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		putchar(str[ch]);
	putchar('\n');

	return (0);
}
