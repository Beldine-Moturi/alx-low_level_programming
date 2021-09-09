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

	for (len = 0; *(s + len) != '\0'; len++)
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
