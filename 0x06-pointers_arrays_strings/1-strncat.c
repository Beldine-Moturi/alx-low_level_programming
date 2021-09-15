#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: the string to append to
 *@src: the string to be appended in dest
 *@n: no. of bytes to copy from src
 *Return: returns pointer to resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	while (i < n)
	{
		dest[len1] = src[i];
		i++;

		if (len2 < n)
			dest[len1] = '\0';
	}

	return (dest);
}
