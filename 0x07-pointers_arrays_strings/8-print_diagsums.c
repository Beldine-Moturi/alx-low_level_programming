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
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = i; j == i; j++)
		{
			sum1 += a[i][j];
		}
		for (j = (size - 1) - i; (size - j) == (i + 1); j--)
		{
			sum2 += a[i][j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
