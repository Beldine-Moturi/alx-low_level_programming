#include "main.h"

/**
 *puts_half - prints second half of a string
 *@str: the string to be printed
 *
 *Return: has no return value
 *
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len / 2 != 0)
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	else
	{
		for (n = len / 2; *(str + n) != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
