#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

/**
 *Args - a new strut type that defines arguments to a function
 *@type: a character symbol representing the type of the function argument
 *@print: a function pointer that points to a function that prints
 *        a data type corresponding to a symbol
 *
 */

typedef struct Args
{
	char type;
	void (*print)(va_list arg);
}Args;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
