#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *@s: the string to be printed
 *
 *Return: has no return value
 *
 */

void print_rev(char *s)
{
	int len, i;

	for (len = 0; s[i] != '\0'; len++)
	{
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
