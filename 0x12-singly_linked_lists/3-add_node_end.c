#include <string.h>
#include "lists.h"

/**
 *add_node_end - addsa node at the end of a list_t list
 *@head: pointer to the head of list_t
 *@str: the string to copy into list_t
 *
 *Return: address of the new element
 *        or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	while (*(str + length))
	{
		length++;
	}
	temp->len = length;

	temp->next = NULL;

	(**head).next = temp;

	return (temp);
}
