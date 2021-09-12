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
	long int x = 0, y = 1, z;
	int n;

	for (n = 0; n < 50; n++)
	{
		z = x + y;
		if (n == 0)
			printf("%ld", z);
		else
			printf(", %ld", z);
		x = y;
		y = z;
	}
	putchar('\n');

	return (0);
}
