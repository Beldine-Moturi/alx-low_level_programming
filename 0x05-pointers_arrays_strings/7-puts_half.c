#include "main.h"

/**
 * puts_half - prints half of string
 * @str: function parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, c, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (c = (len - 1) / 2; c < len - 1; c++)
		{
			_putchar(str[c + 1]);
		}
	}
	_putchar('\n');
}
