#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function to insert at the end
 * @head: head pointer
 * @n: data part
 * Return: tail node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *newNode;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->next = NULL;
		newNode->n = n;
		if (*head == NULL)
		{
			*head = newNode;
			return (*head);
		}
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		return (temp);
	}
	return (NULL);
	free(newNode);
	newNode = NULL;
}
