#include "lists.h"

/**
 *get_nodeint_at_index - returns node at index
 *@head: pointer to the first node of the list
 *@index: the index of the node to return
 *
 *Return: address of the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (nodes == index)
		{
			return (temp);
		}
		else
		{
			nodes++;
			temp = temp->next;
		}
	}
	return (NULL);
}
