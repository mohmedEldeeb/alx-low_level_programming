#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to prints the minimum number of args
 *
 * @argc: number of args in comand
 *
 * @argv: conean argev
 *
 * Return: totle money
 *
 */

int main(int argc, char *argv[])
{
	int mony, xmony = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	mony = atoi(argv[1]);

	while (mony > 0)
	{
		if (mony >= 25)
			mony -= 25;
		else if (mony >= 10)
			mony -= 10;
		else if (mony >= 5)
			mony -= 5;
		else if (mony >= 2)
			mony -= 2;
		else if (mony >= 1)
			mony -= 1;
		xmony += 1;
	}
	printf("%d\n", xmony);
	return (0);
}
