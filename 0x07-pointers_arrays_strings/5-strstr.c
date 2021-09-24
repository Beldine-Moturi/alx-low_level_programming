#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: the string to search through
 *@needle: the substring to locate
 *
 *Return: pointer to the beginning of the located substring
 *or NULL if substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, n;

	for (i = 0; *(haystack + i); i++)
	{
		for (n = 0; *(needle + n); n++)
		{
			if (haystack[i + n] != needle[n])
				break;
		}

		if (!*(needle + n))
			return (&haystack[i]);
	}
	return ('\0');
}
