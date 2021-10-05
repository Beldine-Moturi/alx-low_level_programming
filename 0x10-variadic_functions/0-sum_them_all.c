#include "variadic_functions.h"

/**
 * sum_them_all - calculates and returns the sum of all its parameters
 *@n: count of the number of parameters passed
 *@...: a variable number of parameters to calculate the sum of
 *
 *Return: sum of all the parameters
 *        or 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}
	va_end(num);
	return (sum);
}
