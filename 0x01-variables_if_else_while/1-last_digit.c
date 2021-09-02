#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 *main - prints last digit of random number n
 *
 *Return: return 0 on success
 *
 */

int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	printf("Last digit of %d is ", n);

	if (i > 5)
		printf("%d and is greater than 5\n", i);
	else if (i == 0)
		printf("%d and is 0\n", i);
	else if (i < 6 && i != 0)
		printf("%d and is less than 6 and not 0\n", i);

	return (0);
}
