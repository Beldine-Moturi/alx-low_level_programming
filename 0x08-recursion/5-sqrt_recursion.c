#include "main.h"

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
