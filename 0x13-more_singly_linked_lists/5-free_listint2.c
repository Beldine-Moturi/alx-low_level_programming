#include "lists.h"

/**
 *free_listint2 - frees a listint_t list and sets head to null
 *@head: pointer to a pointer to the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
