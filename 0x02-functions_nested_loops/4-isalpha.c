#include "main.h"

/**
 *_isalpha - checks for alphabet character
 *@c: the character to be checked
 *
 *Return: 1 is alphabet character, 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);

	_putchar('\n');
}
