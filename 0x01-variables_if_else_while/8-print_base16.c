#include <stdio.h>

/**
 *main - prints base16 numbers in lowercase
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i;

	char c;

	for (i = 48; i < 57; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
