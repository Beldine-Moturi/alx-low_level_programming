#include "lists.h"

/**
 *listint_len - counts the number of elements in a listint_t list
 *@h: pointer to the first node of the linked list
 *
 *Return: number of elements in h
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
