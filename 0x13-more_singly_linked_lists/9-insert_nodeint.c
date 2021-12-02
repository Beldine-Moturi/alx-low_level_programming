#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position in a list
 *@head: pointer to a pointer to the list
 *@idx: the index to insert the new node at, starting at index 0
 *@n: the data to fill the new node with
 *
 *Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2, *new;
	unsigned int nodes = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp1 = *head;
	temp2 = *head;
	while (temp2 != NULL)
	{
		if (nodes == idx)
		{
			temp2 = temp2->next;
			temp1->next = new;
			new->next = temp2;
			return (new);
		}
		else
		{
			nodes++;
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	return (NULL);
}
