#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: points to the head node of the list
 *@idx: the index to insert the node at
 *@n: the data to fill the new node with
 *
 *Return: address of the new node, or NULL if failed
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;

	while (temp != NULL && count != idx)
	{
		temp = temp->next;
		count++;
	}
	if (temp != NULL)
	{
		new->next = temp;
		new->prev = temp->prev;
		(temp->prev)->next = new;
		temp->prev = new;
	}
	return (temp);
}
