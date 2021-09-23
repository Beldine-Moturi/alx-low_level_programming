#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: the string to search through
 *@c: the character to search for
 *
 *Return: returns pointer to first occurrence of c
 * or returns NULL if character not fount
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0, n;

	while (*(s + i))
	{
		i++;
	}
	for (n = 0; n <= i; n++)
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
	}
	return ('\0');
}
