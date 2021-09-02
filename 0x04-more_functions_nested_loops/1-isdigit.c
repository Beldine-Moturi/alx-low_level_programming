#include "main.h"

/**
 * _isdigit - checks for num 0 - 9
 * @c: takes integer
 * Return: returns 1 if digit and 0 otherwise
 **/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
