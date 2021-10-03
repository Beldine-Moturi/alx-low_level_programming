#include "main.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: number of bytes to copy from s2
 *
 *Return: pointer to a newly allocated space in memory
 *        containing s1 followed by s2
 *        Returns NULL if function fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	int i = 0;

	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (j < n && s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);
}
