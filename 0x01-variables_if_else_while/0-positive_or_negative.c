#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this function to start program good
 *
 * return : 0 intrgere
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%dis positive\n",n);
	} else if (n == 0)
	{
		printf("%dis zero\n",n);
	} else
	{
		printf("%dis negative\n",n);
	}
	return (0);
}
