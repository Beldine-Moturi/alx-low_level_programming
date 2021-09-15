#include "main.h"

/**
* factorial - returns factorial of
* a positive integer
* @n: input number
*
* Return: factorial of the int
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
