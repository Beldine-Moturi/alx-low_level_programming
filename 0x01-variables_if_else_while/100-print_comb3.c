#include <stdio.h>

/**
 *main - prints two digit combinations
 *exept similar digits and combiantions
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i, n;

	for (i = 48; i <= 57; i++)
	{
		for (n = (i + 1); n <= 57; n++)
		{
			putchar(i);
			putchar(n);
			if (i == 56 && n == 57)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
