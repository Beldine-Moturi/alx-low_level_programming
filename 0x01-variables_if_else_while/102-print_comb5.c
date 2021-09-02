#include <stdio.h>

/**
 *main - prints combinations of two two-digit numbers
 *
 *Return: 0 0n success
 *
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 100; i++)
	{
		for (n = (i + 1); n < 100; n++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(n / 10 + 48);
			putchar(n % 10 + 48);
			if (i == 98 && n == 99)
			if (i != 98 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
