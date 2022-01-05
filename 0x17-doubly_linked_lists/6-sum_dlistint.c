#include "lists.h"

/**
 *sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list
 *@head: points to the head node of the list
 *
 *Return: sum of all the sata (n) of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
