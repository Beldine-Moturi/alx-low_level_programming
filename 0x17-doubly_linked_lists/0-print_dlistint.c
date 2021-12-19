#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: points to the head node of the list
 *
 *Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
