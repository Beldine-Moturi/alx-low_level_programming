#include "main.h"

/**
 *print_diagonal - draws a diagonal line on terminal
 *@n: number of tims \ should be printed
 *
 *Return: has no return value
 *
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (c = 0; c <= n; c++)
			{
				if (i == 0)
				{
					_putchar('\\');
				}
				else if (c == i && i != 0)
				{
					_putchar('\\')
				}
				else if (c < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
