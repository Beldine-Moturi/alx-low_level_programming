#include "main.h"

/**
 *string_toupper - changes lowercase letters to uppercase
 *@s: the string to be converted
 *
 *Return: returns pointer to char s
 *
 */

char *string_toupper(char *s)
{
	char c, C;

	int len = 0;

	while (*(s + len) != '\0')
	{
		c = 97;
		C = 65;
		while (c <= 122 && C <= 90)
		{
			if (*(s + len) == c)
				*(s + len) = C;

			c++;
			C++;
		}
		len++;
	}
	return (s);
}
