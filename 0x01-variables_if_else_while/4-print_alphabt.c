#include <stdio.h>

/**
 *main - prints lowercase alphabet except q and e
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	}
	putchar('\n');

	return (0);
}
