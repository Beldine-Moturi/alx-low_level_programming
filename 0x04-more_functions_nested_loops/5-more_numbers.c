#include "main.h"

/**
 *more_numbers - prints 10 times the numbers 0 - 14
 *followed by a new line
 *
 *Return: has no return value
 *
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
