#include "main.h"

/**
 *print_more_numbers - prints number 0 to 9
 *with the exception of 2 and 4
 *followed by a new line
 *
 *Return: has no return value
 *
 */

void print_more_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 || i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
