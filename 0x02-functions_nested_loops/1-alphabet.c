#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercse
 *@void: has no input parameters
 *
 *Return: does not return anything
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
