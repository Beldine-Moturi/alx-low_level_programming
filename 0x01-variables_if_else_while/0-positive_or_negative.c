#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - prints sign of random number stored in n
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	printf("\n");

	return (0);
}
