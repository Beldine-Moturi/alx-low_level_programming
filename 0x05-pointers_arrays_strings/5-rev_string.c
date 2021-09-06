#include "main.h"

/**
 * rev_string - reverse a string
 * @s: variable name for string to reversed
 **/

void rev_string(char *s)
{
	char n;
	int i, j, k;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		n = s[i];
		s[i] = s[k];
		s[k--] = n;
	}
}
