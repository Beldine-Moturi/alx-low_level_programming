#include <stdio.h>

/**
 *main - prints single digit base 10 numbers
 *followed by a new line
 *
 *Return: 0 on success *
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
