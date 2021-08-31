#include "main.h"

/**
 *print_alphabet - function that prints
 *alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	int i;

	i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
