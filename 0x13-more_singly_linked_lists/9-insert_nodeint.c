#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts at index
 * @head: pointer to head
 * @idx: position to add
 * @n: data
 * Return: returns address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newnode;
	unsigned int pos = 1;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->n = n;
		return (*head);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
		return (*head);
	}
	while (pos < idx)
	{
		temp = temp->next;
		pos++;
	}
	newnode->next = temp->next;
	newnode->n = n;
	temp->next = newnode;
	return (newnode);
}
