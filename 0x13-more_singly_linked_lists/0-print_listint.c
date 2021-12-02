#include "lists.h"

/**
 *print_listint - prints all elements of a listint_t list
 *@h: pointer to the head node of the listint_t list to be printed
 *
 *Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
