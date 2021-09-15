#include "main.h"


/**
 *_strcat - concatenates two strings
 *@dest: the first string
 *@src: second string to e appended to the first
 *
 *Return: returns pointer to the resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}

	dest[len1] = '\0';

	return (dest);
}
