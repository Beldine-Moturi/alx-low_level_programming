#include "main.h"

/**
 * _isalpha - returns both uppercase and lowercase
 *
 * @c: the ASCII characters
 *
 * Return: return 1 on success or 0 on success
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
	_putchar('\n');
}
