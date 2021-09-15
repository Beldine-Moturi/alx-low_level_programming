#include "main.h"

/**
* isSqrt - helper to _sqrt_recursion
* @n: input number
* @i: iterator
*
* Return: square root of number
*/

int isSqrt(int n, int i)
{
if ((i * i) > n)
{
return (-1);
}
if ((i * i) == n)
{
return (i);
}
return (isSqrt(n, i + 1));
}

/**
* _sqrt_recursion - returns natural root of +ve int
* @n: input number
*
* Return: root of n otherwise -1 if false
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (isSqrt(n, 1));
}
