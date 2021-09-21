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
	int i = 0;

	char c;

	while (*(s + i))
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			if (*(s + i) == c || (c - *(s + i) == 32))
			{
				if (c >= 'n')
				{
					*(s + i) -= 13;
					break;
				}
				else if (c < 'n')
				{
					*(s + i) += 13;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}
