#include "main.h"

/**
 *jack_bauer -prints every minute of the day
 *startin from 00:00 to 23:59
 *
 *Return: has no return value
 *
 */

void jack_bauer(void)
{
	int i, n;

	for (i = 0; i <= 23; i++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
