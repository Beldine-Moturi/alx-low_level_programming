#include "main.h"

/**
 *print_sign -checks and prints sign of a number
 *@n: the number to be checked
 *
 *Return: 1 if positive
 *       -1 if negative
 *        0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
