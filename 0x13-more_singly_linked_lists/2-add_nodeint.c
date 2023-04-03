#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the beginning.
 * @head: head pointer
 * @n: value of n in the node
 * Return: returns address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
	free(newNode);
	newNode = NULL;
}
