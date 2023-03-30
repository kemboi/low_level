#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head pointer
 * @str: value to add
 * Return: returns pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
	free(newNode->str);
	free(newNode);
}
