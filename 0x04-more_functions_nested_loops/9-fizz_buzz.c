#include <stdio.h>

/**
 *main - prints numbers 1 to 100
 *prints fizz for multiples of 3
 *prints buzz for multiples of 5
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
