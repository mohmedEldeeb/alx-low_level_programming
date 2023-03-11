#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies args
 *
 * @argc: args count
 * @argv: arguments
 *
 * Return: number multiplies tow number
 *
 */

int main(int argc, char **argv)
{
	int x, z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	z = atoi(argv[2]);

	printf("%d\n", x * z);

	return (0);
}
