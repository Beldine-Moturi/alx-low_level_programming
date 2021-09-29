#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: the array to search through
 *@size: the size of the array array
 *@cmp: pointer to a function to be used to compare values
 *
 *Return: returns index of the first element for which cmp does not return 0
 *        or -1 if no element matches or if size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);

		if (n != 0)
			return (i);
	}
	return (-1);
}
