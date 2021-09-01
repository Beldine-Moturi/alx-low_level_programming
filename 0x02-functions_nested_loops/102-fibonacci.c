#include <stdio.h>
/**
 * main - Fibonnaci of 50
 *
 * Return: return 0 on success
 */

int main(void)
{
	int i;
	long int j = 1;
	long int k = 1;
	long int sum;

	printf("%d", 1);
	for (i = 1; i < 50; i++)
	{
		sum = j + k;
		printf(", %ld", sum);
		j = k;
		k = sum;
	}

	printf("\n");

	return (0);
}
