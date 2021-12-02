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
	listint_t *temp, *new;
	unsigned int nodes = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;
	if (temp == NULL || temp->next == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else if ((nodes + 1) == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			nodes++;
			temp = temp->next;
		}
	}
	return (NULL);
}
