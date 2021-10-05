#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings passed into it as argument
 *@separator: the string to be printed between strings
 *@n: number of strings passed to the function
 *@...: a variable number of strings to be printed
 *
 *Return: void - has no return value
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
