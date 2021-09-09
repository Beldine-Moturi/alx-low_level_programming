#include "main.h"

/**
 *rev_string - reverses a string
 *@s: the string to be reversed
 *
 *Return: has no return value
 *
 */

void rev_string(char *s)
{
	int len = 0, i;

	char *start, *end, temp;

	while (s[len] != '\0')
	{
		len++;
	}

	start = s;
	end = &s[len - 1];

	for (i = 0; i < len / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
