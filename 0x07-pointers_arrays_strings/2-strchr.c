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
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}

