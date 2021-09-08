#include "main.h"

/**
 *_strcpy - copies a string to a buffer
 *@dest: the buffer pointed to
 *@src: the string tp copy
 *
 *Return: returns the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		*(dest + i) = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
