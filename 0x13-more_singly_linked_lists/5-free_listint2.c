#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees memory in a linked list
 * @head: head element
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = 0;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
		return;
	free(*head);
	head = 0;
}
