#include "main.h"

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements of the array
 *@size: the size of bytes of each element
 *
 *Return: poitner to the allocated memory
 *        or NULL if function fails or size/nmemb == 0
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	char *str;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	str = p;

	for (i = 0; i < nmemb * size; i++)
	{
		str[i] = 0;
	}
	return (p);
}
