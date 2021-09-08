#include "main.h"

/**
 *swap_int - swaps two integers
 *@a: pointer to the first integer
 *@b: pointer to the second integer
 *
 *Return: has no return value
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
