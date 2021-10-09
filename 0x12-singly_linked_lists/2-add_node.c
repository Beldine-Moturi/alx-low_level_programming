#include <string.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t
 *@head: pointer to the pointer to the  head of list_t
 *@str: the string to fill new node with
 *
 *Return: address of the new node create
 *
 */

list_t *add_node(list_t **head, const char *str)
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

	temp->next = *head;
	*head = temp;

	return (*head);
}
