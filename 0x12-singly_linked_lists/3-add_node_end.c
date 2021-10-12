#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *temp, *last_node;

	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(last_node);
		return (NULL);
	}

	last_node->str = strdup(str);

	while (*(str + length))
	{
		length++;
	}
	last_node->len = length;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last_node;
	}
	return (*head);
}
