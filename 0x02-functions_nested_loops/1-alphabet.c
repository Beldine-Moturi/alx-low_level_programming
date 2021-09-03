#include "main.h"

/**
 *print_alphabet - prints alphabet characters in lowercase
 *followed by a new line
 *
 *Retrun: doesn't return anuthing
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
