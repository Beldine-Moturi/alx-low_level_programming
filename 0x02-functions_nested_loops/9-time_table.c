#include "main.h"

/**
 *times_table - prints the 9 times table
 *starting from 0
 *
 *Return: no return value
 *
 */

void times_table(void)
{
	int i, n, c;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			c = i * n;

			if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
