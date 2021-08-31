#include "main.h"

/**
 *main - prints the characters "Holberton to stdout"
 *
 *Return: returns 0
 */

int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
