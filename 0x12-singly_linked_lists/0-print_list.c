#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: pointer to the first element of the list
 *
 *Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int count_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
