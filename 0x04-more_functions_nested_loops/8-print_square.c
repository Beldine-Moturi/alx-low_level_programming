#include "main.h"

/**
 *print_square - prints a square
 *followed by a new line
 *@size: the size of the square to be printed
 *
 *Return: has no return value
 *
 */

void print_square(int size)
{
	int i, n;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = o; i <= size; i++)
		{
			for (n = 0; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
