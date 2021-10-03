#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: lowest value in the array
 *@max: highest value in the array
 *
 *Return: pointer to the newly created array
 *        or NULL if function faila or if min > max
 *
 */

int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
