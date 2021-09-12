#include <stdio.h>

/**
 *main - finds and prints sum of even-valued fibonacci numbers
 *sequence below 4000000
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	unsigned int x = 0, y = 1, z;

	while (z <= 4000000)
	{
		z = x + y;
		if (z % 2 == 0)
			printf("%d\n", z);

		x = y;
		y = z;
	}

	return (0);
}

