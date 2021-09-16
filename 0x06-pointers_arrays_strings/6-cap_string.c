#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@s: the string to capitalize
 *
 *Return: returns pointer to char s
 *
 */

char *cap_string(char *s)
{
	char c, C, ch[] = " \t\n,;.!?\"(){}";

	int n, len = 0;

	while (*(s + len))
	{
		c = 'a';
		C = 'A';

		while (c <= 'z' && C <= 'Z')
		{
			for (n = 0; n < 13; n++)
			{
				if ((len == 0 || s[len - 1] == ch[n]) && s[len] == c)
					*(s + len) = C;
			}
			c++;
			C++;
		}
		len++;
	}
	return (s);
}
