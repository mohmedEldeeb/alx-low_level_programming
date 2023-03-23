#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code for student
 *
 * @argc: count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *fuc = (char *) main;
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02x", fuc[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
