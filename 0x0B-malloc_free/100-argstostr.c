#include <stdlib.h>
#include "main.h"

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: count of the number of arguments
 *@av: pointer to array of program arguments
 *
 *Return: pointer to a new string
 *        or NULL if it fails or if ac or av == 0
 *
 */

char *argstostr(int ac, char **av)
{
	char *p;

	int len = 0, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*(ac[i] + len))
			len++;
	}

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < ac; j++)
		{
			while (*(av[j] + strlen))
			{
				p[i] = *(av[j] + strlen);
			}
		}
		p[i] = '\n';
	}
}
