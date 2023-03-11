#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - totael all number from args.
 *
 * @argc: number of command line args.
 *
 * @argv: array that contains all argv the program command line
 *
 * Return: totel number from args
 *
 */

int main(int argc, char *argv[])
{
	int i, j, totel = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		totel += atoi(argv[i]);
	}

	printf("%d\n", totel);

	return (0);
}
