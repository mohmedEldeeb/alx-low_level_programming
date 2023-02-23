#include "main.h"

/**
 * main - this is intry point
 *
 * Return: always (0) return
 */


int main(void)
{
	
	int num;

	for (num = 0; num < 50; num++)
	{
		printf("%d", num);
		if (num == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
