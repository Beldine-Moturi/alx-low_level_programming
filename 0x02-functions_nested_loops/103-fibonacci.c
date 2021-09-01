#include <stdio.h>

/**
 * main - fibonaci sum not to exceed 4_000_000
 *
 *Return: return 0 on succes
 **/

int main(void)
{
	unsigned long i = 0, j = 1, sum;
	float sum1;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			sum1 += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", sum1);

	return (0);
}
