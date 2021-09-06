#include "main.h"

/**
 *print_line - draws a straight line
 *@n: number of times _ should be printed
 *
 *Return: has no return value
 *
 */

void print_line(int n)
{
	int i;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
