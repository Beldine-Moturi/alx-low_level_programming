#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: points to the head node of the list
 *@n: the integer data of the new node
 *
 *Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (*head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = temp;
	return (*head);
}
