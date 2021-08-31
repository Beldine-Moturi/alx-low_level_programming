#include "holberton.h"

/**
* _isalpha - checks for letters
* @c: The character to be checked
* Return: returns 1 if c is letter, uppercase or lowercase and 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
