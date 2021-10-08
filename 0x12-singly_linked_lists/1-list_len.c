#include "lists.h"

/**
 *list_len - returns the number of elements in a list_t list
 *@h: pointer to the head of the list_t list
 *
 *Return: number of element in list_t
 *
 */

size_t list_len(const list_t *h)
{
	unsigned int count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
