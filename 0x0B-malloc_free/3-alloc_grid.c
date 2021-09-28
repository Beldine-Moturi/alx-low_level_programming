#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - returns pointer to a 2D array of integers
 *@width: the width of the array
 *@height: the height of the array
 *
 *Return: pointer to the array or
 * NULL if failure
 * NULL if width or height == 0
 *
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
