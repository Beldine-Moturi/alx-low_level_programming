#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function on each element of an array
 *@array: the array to execute function on
 *@size: the size of the array
 *@action: pointer to the function to execute
 *
 *Return: void - has no return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
