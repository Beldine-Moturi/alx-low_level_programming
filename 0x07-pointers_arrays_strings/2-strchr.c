#include "main.h"
#include <stdio.h>

/**
 *_strchr - locates character in string.
 *@s: poijnter to string.
 *@c: character to be found.
 *
 *Return: pointer to 1st occurence of character
 *or null if character is not found.
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
