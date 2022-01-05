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
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			temp->prev->next = new;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
