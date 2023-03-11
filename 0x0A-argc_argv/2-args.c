#include <stdio.h>

/**
 * main - prints all arguments for main
 *
 * @argc: argc count
 *
 * @argv: arguments
 *
 * Return: integer nubmer
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
