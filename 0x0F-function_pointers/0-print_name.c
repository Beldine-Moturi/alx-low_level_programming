#include "function_pointers.h"

/**
 *print_name - prints a name passed to it as argument
 *@name: the name to be printed
 *@f: the function that prints the name
 *
 *Return: void - has no return value
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
