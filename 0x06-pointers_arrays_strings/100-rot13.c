#include "main.h"

/**
 *rot13 - encodes a string using rot13
 *@s: the string tp be encoded
 *
 *Return: returns pointer to char s
 *
 */

char *rot13(char *s)
{
	int i = 0, n;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ch[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i))
	{
		for (n = 0; n < 52; n++)
		{
			if (*(s + i) == c[n])
			{
				*(s + i) = ch[n];
				break;
			}
		}
		i++;
	}
	return (s);
}
