#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints usm of the two diagonals
 *of a square matrix of integers
 *@a: the matrix
 *@size: size of the matrix
 *
 *Return: has no return value
 *
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
