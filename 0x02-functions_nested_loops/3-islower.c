#include "holberton.h"

/**
* _islower - checks for lowercase charecter.
* @c: The character to be checked.
*
* Return: Returns 1 if c is lowercase otherwise returns 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
