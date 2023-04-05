#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

listint_t *createNewNode(int n);
/**
 * insert_nodeint_at_index - inserts at index
 * @head: pointer to head
 * @idx: position to add
 * @n: data
 * Return: returns address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int pos = 0;

	if (!(*head) && idx == 0)
	{
		*head = createNewNode(n);
		return (*head);
	}
	temp = *head;
	while (temp)
	{
		if (idx == 0)
		{
			*head = createNewNode(n);
			(*head)->next = temp;
			return (*head);
		}
		else if (pos == idx - 1)
		{
			newnode = createNewNode(n);
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		pos++;
	}
	return (NULL);
}
/**
 * createNewNode - creates a new node
 * @n: data to add in a new node
 * Return: new node pointer
 */
listint_t *createNewNode(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	return (node);
}
