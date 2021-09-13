#include <stdio.h>

/**
 *main - finds and prints the largets prime factor of n
 *
 *Return: returns 0 on success
 *
 */

int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
