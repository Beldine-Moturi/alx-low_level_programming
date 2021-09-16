#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string to compare
 *
 *Return: returns integer result of comparison
 *
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*(s1 + n) && *(s2 + n) && (*(s1 + n) == *(s2 + n)))
	{
		n++;
	}

	return (*(s1 + n) - *(s2 + n));
}
