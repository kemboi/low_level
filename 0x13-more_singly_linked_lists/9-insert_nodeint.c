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
	listint_t *temp = *head, *newnode, *prev;
	unsigned int pos = 1;

	if (head == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->n = n;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	while (pos <= idx)
	{
		if (temp == NULL)
		{
			free(temp);
			return (NULL);
		}
		prev = temp;
		temp = temp->next;
		pos++;
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(temp);
		return (NULL);
	}
	newnode->next = temp;
	newnode->n = n;
	temp = temp->next;
	prev->next = newnode;
	return (newnode);
}

