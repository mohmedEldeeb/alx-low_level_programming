#include <stdio.h>

/**
 * main - function to print pizz or fizz interview qusion
 *
 * Return: 0 number
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz");
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
