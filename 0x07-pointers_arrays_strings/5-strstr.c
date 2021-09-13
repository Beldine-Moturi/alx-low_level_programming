#include "main.h"
#include <stdio.h>
/**
 *_strstr - locates a substring.
 *findsd the first occurence of a substring needle
 *in the strings haystack with the exception of terminating null byte
 *@haystack: pointer to string.
 *@needle: pointer to substring to be matched.
 *
 *Return: pointer to byte in s that matches one of the bytes
 *in accept otherwise NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
