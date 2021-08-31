#include "main.h"

/**
 *main - prints the characters "Holberton to stdout"
 *
 *Return: returns 0
 */

int main(void)
{
	int i;

	char *c = "_putchar";

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
