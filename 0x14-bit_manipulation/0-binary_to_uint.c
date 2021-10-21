#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string of 0 and 1 chars
 *
 *Return: the converted number
 *        or 0 if one or more chars in b is not 0 or 1
 *        or 0 if b is null
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		dec_value = 2 * dec_value + (b[i] - '0');
	}
	return (dec_value);
}
