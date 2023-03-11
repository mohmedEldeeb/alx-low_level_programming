#include <stdio.h>

/**
 * main - prints number to arguments
 *
 * @argc: pram args count
 *
 * @argv: arguments
 *
 * Return: integer
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
