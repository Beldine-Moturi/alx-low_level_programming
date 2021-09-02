#include <stdio.h>

/**
 *main - prints lowercase alphabet in reverse
 *followed by a new line
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
