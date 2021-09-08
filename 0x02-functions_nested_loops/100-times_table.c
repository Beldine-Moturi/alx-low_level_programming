#include "main.h"

/**
 *print_times_table - prints the n times table
 *starting from 0
 *@n: the times table to be printed
 *
 *Return: has no return value
 *
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
				{
					_putchar(z + '0');
				}
				else if (z <= 9 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z > 9 && z <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar((z % 100) / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
