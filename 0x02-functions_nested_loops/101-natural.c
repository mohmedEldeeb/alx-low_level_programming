#include "main.h"

/**
 * main - this is intry point
 *
 * Return: always (0) return
 */

int main(void)
{
	int num, result;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			result += num;
		}
	}
	printf("%d\n", result);
	return (0);
}
