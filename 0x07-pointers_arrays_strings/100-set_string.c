#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: the value to set
 *@to: the char to modify
 *
 *Return: has no return value
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
