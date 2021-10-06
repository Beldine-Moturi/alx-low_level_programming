#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);


/**
 *print_char - prints a character
 *@arg: a list of arguments containing
 *      the charcater to be printed
 *
 *Return: void
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}


/**
 *print_int - prints an integer
 *@arg: a list of arguments containing the integer to be printed
 *
 *Return: void
 *
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}


/**
 *print_float - prints a floating point integer
 *@arg: a list of arguments containing the float to be printed
 *
 *Return: void
 *
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}


/**
 *print_string - prints a string
 *@arg: a list of arguments containing the string to be printed
 *
 *Return: void
 *
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}


/**
 *print_all - prints a variable number of arguments and types
 *@format: an array of chars representing the type of argmuent to print
 *
 *Return: void
 *
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j;
	va_list args;

	Args argument[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == argument[j].type)
			{
				printf("%s", separator);
				argument[j].print(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
