#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head pointer
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *t = head;

	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
	free(head);
}
