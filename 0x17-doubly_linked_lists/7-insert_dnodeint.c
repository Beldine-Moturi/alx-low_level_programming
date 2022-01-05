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
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	(temp->next)->prev = new;
	temp->next = new;
	return (new);
}
