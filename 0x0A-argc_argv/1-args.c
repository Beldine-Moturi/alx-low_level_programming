#include <stdio.h>

/**
 *main - prints number of arguments passed to main
 *@argc: count of number of arguments passed
 *@argv: arrays of arguments passed
 *
 *Return: 0 on success
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
