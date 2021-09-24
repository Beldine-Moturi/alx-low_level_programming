#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: the string to be searched
 *@accept: the set of bytes to search from
 *
 *Return: returns pointer to the byte in s
 *that matches one of the bytes in accept
 *or NULL if no byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
