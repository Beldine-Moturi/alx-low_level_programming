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
			if (c >= 'n')
			{
				if (*(s + i) == c || (c - *(s + i) == 32))
					*(s + i) -= 13;
			}
			else if (c < 'n')
			{
				if (*(s + i) == c || (c - *(s + i) == 32))
					*(s + i) += 13;
			}
		}
		i++;
	}
}

