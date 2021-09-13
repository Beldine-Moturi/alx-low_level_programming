#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *it locates the first occurence in the string s of any of
 *the bytes in the string accept.
 *@s: pointer to string
 *@accept: pointer to string to be matched.
*
 *Return: pointer to byte in s that matches one of the bytes
 *in acept or NULL if no such bytes is found.
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}
