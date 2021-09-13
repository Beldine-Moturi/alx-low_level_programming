#include "main.h"

/**
 *print_triangle - prints a triangle
 *followed by a new line
 *@size: the size of the triagle to be printed
 *
 *Return: has no return value
 *
 */

void print_triangle(int size)
{
	int n, i, s;

	if (size <= 0)
		_putchar('\n');

	for (n = 0; n < size; n++)
	{
		for (s = n; s < size - 1; s++)
		{
			_putchar(' ');
		}
		for (i = 0; i <= n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
