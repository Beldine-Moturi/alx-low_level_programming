#include "main.h"

/**
 *main - prints alphabets in lowercase
 *
 *
 *Return: return 0 on success
 *
 */

int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
