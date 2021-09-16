#include "main.h"

/**
 *reverse_array - reverses an array of integers
 *@a: the array to reverse
 *@n: number of elements in the array a
 *
 *Return: void, no return value
 *
 */

void reverse_array(int *a, int n)
{
	int *end, temp, i;

	end = &a[n - 1];

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *end;
		*end = temp;

		end--;
	}
}
