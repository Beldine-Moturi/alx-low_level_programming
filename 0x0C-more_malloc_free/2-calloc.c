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
	char *p;

	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
