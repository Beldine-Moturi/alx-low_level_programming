#include "main.h"

/**
 * _strlen - function to return length of string
 * @s: pointer variable
 *
 * Return: return value on success
 **/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
