#include <stdio.h>

/**
* print_to_98 - prints num from n to 98
*
* @n: rep input num
*
* Return: no return.
*/

void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
