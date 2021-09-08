#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3
 *and multiples of 5 below 1024
 *followed by a new line
 *
 *Return: 0 on success
 */

int main(void)
{
	int n, i;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			i += n;
	}
	printf("%d\n", i);

	return (0);
}
