#include <stdio.h>

/**
 *main - prints single digit base 10 numbers
 *starting from 0, followed by new line
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
