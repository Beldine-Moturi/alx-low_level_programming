#include "main.h"

/**
 *_isdigit - checks for a digit 0 - 9
 *@c: the digit to be checked
 *
 *Return: 1 if c ia s digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
