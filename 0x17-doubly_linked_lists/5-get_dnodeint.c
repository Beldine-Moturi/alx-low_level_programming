#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t list
 *@head: points to the head node of the list
 *@index: the index of the node to return
 *
 *Return: node at position index in the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL && count != index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
