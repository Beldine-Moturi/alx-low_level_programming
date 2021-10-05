#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers passed to it as argument
 *followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *@...: a variable number of integers to be printed
 *
 *Return: void, has no return value
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", *separator);
	}
	printf("\n");

	va_end(num);
}
