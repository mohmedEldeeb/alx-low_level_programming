#include <stdio.h>

/**
 * main - print name function, followed by a new line.
 *
 * @argc: prams count
 * @argv: prams arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
