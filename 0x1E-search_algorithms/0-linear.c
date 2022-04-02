#include "search_algos.h"

/**
 *linear_search -  searches for a value in an array of integers using the
 *                 Linear search algorithm
 *@array: pointer to the first element of the arrya
 *@size: the size of the array
 *@value: the value to search for in the array
 *
 *Return: the first index where the value is stored or
 *        -1 if value is not present in array/ array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = (int) size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
