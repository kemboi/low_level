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
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (*newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newNode->next = NULL;
	newNode->n = n;
	temp->next = newNode;
	return (newNode);
	free(newNode);
	newNode = NULL;
}
