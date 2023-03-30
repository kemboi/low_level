#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head pointer
 * @str: value to add
 * Return: returns pointer to tail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->str = strdup(str);
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
	free(newNode->str);
	free(newNode);
}
