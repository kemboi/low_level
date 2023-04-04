#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete at a specific index
 * @head: head pointer
 * @index: position to delete a node
 * Return: 1 or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *del;
	unsigned int i = 0;

	if (*head == NULL)
	{
		free(temp);
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for ( ; i < index - 1; i++)
	{
		if (temp == NULL)
		{
			free(temp);
			return (-1);
		}
		temp = temp->next;
	}
	del = temp->next;

	if (del->next != NULL)
	{
		temp->next = del->next;
		free(del);
		return (1);
	}
	temp->next = NULL;
	free(del);
	return (1);
}
