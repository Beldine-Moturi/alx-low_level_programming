#include "main.h"

/**
* _islower - checks if printed characters
* are in lowercase
*
* @i: rep ASCII code
*
* Return: return 1 on success. 0 on fail
**/

int _islower(int i)
{
	if (i > 96 && i < 123)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
