#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse
 * @s: pointer varaible name
 * Return: return 0 on success
 **/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
