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
	int i;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			for (i = 0; *(needle + i); i++)
			{
				if (*(haystack + i) == needle[i])
					continue;
				else
					break;
			}
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
