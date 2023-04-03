#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees memory in a linked list
 * @head: head element
 * Return: null
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
