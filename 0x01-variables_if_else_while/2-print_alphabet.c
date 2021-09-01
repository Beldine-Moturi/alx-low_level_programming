#include <stdio.h>

/**
 *main - prints alphabet in lowercase
 *followed by a new line
 *
 *Return: returns 0 on success
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
