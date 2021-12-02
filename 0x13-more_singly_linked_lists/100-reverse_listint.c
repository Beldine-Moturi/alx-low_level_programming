#include "lists.h"

/**
 *reverse_listint - reverses a listint_t list
 *@head: pointer to the head of the list
 *
 *Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	temp1 = (*head)->next;
	temp2 = temp1->next;
	(*head)->next = NULL;
	while (temp1 != NULL)
	{
		temp1->next = *head;
		*head = temp1;
		temp1 = temp2;
		if (temp1 == NULL)
			break;
		else
			temp2 = temp1->next;
	}
	return (*head);
}
