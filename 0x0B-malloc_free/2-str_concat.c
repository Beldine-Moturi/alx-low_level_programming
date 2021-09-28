#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: the first string to concatenate
 *@s2: the second string
 *
 *Return: pointer to soace in memory with contents of s1
 *followed by contents of s2
 *NULL if failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;

	char *p;

	while (*(s1 + len1))
	{
		len1++;
	}
	while (*(s2 + len2))
	{
		len2++;
	}

	p = malloc((len1 + len2) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = 0; i < len2; i++)
	{
		*(p + (len1 + i)) = *(s2 + i);
	}
	*(p + (len1 + i)) = '\0';

	return (p);
}
