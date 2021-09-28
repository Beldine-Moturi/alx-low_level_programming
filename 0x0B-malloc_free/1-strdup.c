#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns pointer to newly allocated space in memory
 *which contains a copy of the string given as parameter
 *@str: the string to copy
 *
 *Return: pointer to the duplicated string or
 *NULL if str == NUll or if insufficient memory is available
 *
 */

char *_strdup(char *str)
{
	char *p;

	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
	{
		len++;
	}

	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
