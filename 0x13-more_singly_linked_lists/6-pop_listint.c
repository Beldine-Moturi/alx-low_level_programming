#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t list
 *@head: pointer to a pointer to the list
 *
 *Return: data of the head node of the list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
