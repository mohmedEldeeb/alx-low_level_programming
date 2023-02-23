#include "main.h"

/**
 * main - this is intry point
 *
 * Return: always (0) return
 */


int main(void)
{
	
	int num;
	long int x = 1, y = 2;
	long int z;

	for (num = 0; num < 50; num++)
	{
		printf("%d", num);
		if (num == 49)
			printf("\n");
		else
			printf(", ");

		x = y;
		y += z;
		z = x;
	}
	return (0);
}
