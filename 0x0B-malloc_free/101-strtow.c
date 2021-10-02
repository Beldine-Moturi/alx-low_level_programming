#include <stdlib.h>
#include "main.h"

int word_count(char *str);
int char_count(char *str, int i);
char **strtow(char *str);

/**
 *word_count - counts the number of words in a string
 *words are separated by spaces
 *@str: the string to count words from
 *
 *Return: returns number of words in the string
 *
 */

int word_count(char *str)
{
	int i = 0, w_count;

	while (str[i])
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			w_count++;

		i++;
	}
	return (w_count);
}

/**
 *char_count - counts the number of characters in a word
 *@str: the string to count characters from
 *@i: index position
 *Return: returns the number of characters in a word
 *
 */

int char_count(char *str, int i)
{
	int c_count;

	while (str[i] != ' ')
	{
		c_count++;
		i++;
	}
	return (c_count);
}

/**
 *strtow - splits a string into words
 *words are separated by spaces
 *@str: the string to be split into words
 *
 *Return: a 2D array of words
 *        or NULL if function fails or if str == NULL/""
 *
 */

char **strtow(char *str)
{
	char **ptr;

	int size, bytes, height, width, i;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = word_count(str);

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;

	for (height = 0; height < size; height++)
	{
		while (str[i] == ' ')
		{
			i++;;
		}
		bytes = char_count(str, i);

		ptr[height] = malloc(sizeof(char) * (bytes + 1));

		if (ptr[height] == NULL)
		{
			for (; height >= 0; height--)
			{
				free(ptr[height]);
			}
			free(ptr);
			return (NULL);
		}


		for (width = 0; width < bytes; width++)
		{
			ptr[height][width] = *(str + i);
			i++;
		}
		ptr[height][width] = '\0';
	}
	ptr[height] = NULL;

	return (ptr);
}
