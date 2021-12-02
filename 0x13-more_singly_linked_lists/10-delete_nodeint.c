#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node at index of listint_t list
 *@head: pointer to a pointer to the list
 *@index: the index of the node to be delete
 *
 *Return: 1 if successful, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2 = NULL;
	unsigned int i = 0;

	temp1 = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}
	while (temp1 != NULL)
	{
		if ((i + 1) == index)
		{
			temp2 = temp1->next;
			temp1->next = temp2->next;
			free(temp2);
			return (1);
		}
		else
		{
			i++;
			temp1 = temp1->next;
		}
	}
	return (-1);
}
