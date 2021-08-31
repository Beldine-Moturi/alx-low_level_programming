#include "main.h"

/**
 * print_sign - determines the value of the number,
 * greater, equal or less to zero
 *
 * @n: rep number
 *
 * Return: return 1 on success, returns 0 on fail, else returns -1
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
