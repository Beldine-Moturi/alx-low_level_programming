#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: the string to be encoded
 *
 *Return: returns pointer to hcar s
 *
 */

char *leet(char *s)
{
	int i, len = 0;

	char ch[] = "aeotl";

	char n[] = "43071";

	while (*(s + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == ch[i] || ch[i] - s[len] == 32)
				s[len] = n[i];
		}
		len++;
	}
	return (s);
}
