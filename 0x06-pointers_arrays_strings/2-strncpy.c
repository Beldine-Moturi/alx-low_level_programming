#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: the buffer to copy to
 *@src: the string to copy
 *@n: number of bytes to copy
 *
 *Return: pointer to char dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
