#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: the string to sdearch within
 *@accept: the bytes to look for in sttring s
 *
 *Return: number of bytes in initial segment of s
 *which consists of bytes in accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
