#include <stdio.h>

/**
 *main - print combination os single digits
 *
 *Return: 0 on success
 *
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
