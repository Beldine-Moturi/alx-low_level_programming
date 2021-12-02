#include "lists.h"

/**
 *sum_listint - calculates the sum of all data of a listint_t list
 *@head: pointer to the head of the list
 *
 *Return: sum of all the data of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
