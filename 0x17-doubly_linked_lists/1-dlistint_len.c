#include "lists.h"

/**
 *dlistint_len - returns the number of nodes in a dlistint_t list
 *@h: points to the head node of the list
 *
 *Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
