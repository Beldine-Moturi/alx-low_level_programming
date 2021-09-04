#include <stdio.h>

/**
 *main - prints the first 50 fibonacci numbers
 *starting with 1 and 2
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	long long int x = 1, y = 2, z;
	int n;

	for (n = 0; n < 50; n++)
	{
		if (n == 0)
		{
			z = x + y;
			printf("%lld, %lld, %lld", x, y, z);
		}
		else
		{
			x = y;
			y = z;
			z = x + y;
			printf(", %lld", z);
		}
	}
	putchar('\n');

	return (0);
}
