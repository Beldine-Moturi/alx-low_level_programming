#include "main.h"

/**
* niPrime - helper to is_prime_number function
* @nb: input number
* @i: iterator
*
* Return: 1 if true, 0 if false
*/

int niPrime(int nb, int i)
{
if (i < nb)
{
if (nb % i == 0)
{
return (0);
}
else
{
return (niPrime(nb, i + 1));
}
}
else
{
return (1);
}
}

/**
* is_prime_number - returns 1 if input int is prime
* otherwise it returns 0.
* @n: input number
*
* Return: 1 if true, 0 otherwise
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (niPrime(n, 2));
}
}
