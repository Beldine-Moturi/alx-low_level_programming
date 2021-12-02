#include "lists.h"

/**
 *add_nodeint - adds a node at the beginning of a listint_t list
 *@head: pointer to the listint_t list
 *@n: integer to fill the new node with
 *
 *Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
