#include "main.h"

/**
 *swap_int - function to swap values of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: return valu on success
 **/

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
