#include"main.h"

/**
 * main - this is intry point
 *
 * Return: always (0) return
 */


int main(void)
{
	unsigned long x = 0, z = 1, sum;
	float total_sum;

	while (1)
	{
		sum = x + z;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}
		x = z;
		z = x;
	}

	printf("%.0f\n", total_sum);

	return (0);
}
