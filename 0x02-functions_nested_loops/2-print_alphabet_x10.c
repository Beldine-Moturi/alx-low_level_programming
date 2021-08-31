#include "main.h"

/**
 * print_alphabet_x10 - function to repeat printing of
 * alphabets x10
 **/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
