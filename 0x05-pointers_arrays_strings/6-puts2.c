#include "main.h"

/**
 *puts2 - prints every other character of a string
 *@str: the string to be printed
 *
 *Return: has no return value
 *
 */

void puts2(char *str)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len - 1; i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
