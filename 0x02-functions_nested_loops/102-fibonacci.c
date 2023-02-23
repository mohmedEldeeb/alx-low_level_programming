#include "main.h"

/**
 * main - this is intry point
 *
 * Return: always (0) return
 */


int main(void)
{
	
	int num;
	long int x = 1, y = 0;
	long int z;

	for (num = 0; num < 50; num++)
	{
		z = x + y;
		printf("%lu", z);

		if (num == 49)
			printf("\n");
		else
			printf(", ");

		y = x;
		x = z;
	}
	return (0);
}
