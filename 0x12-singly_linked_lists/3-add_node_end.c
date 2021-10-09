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
	list_t *temp, temp2;

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

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp2 = *head;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}

	return (*head);
}
