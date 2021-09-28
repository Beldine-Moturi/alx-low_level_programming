#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars
 *intializes the array with a specific char
 *@size: the size of the array
 *@c: the char used to initialize the array
 *
 *Return: pointer to te array or
 *        NULL if the size == 0
 *
 */


char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
