#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head
 * @head: takes the head pointer
 * Return: value deleted
 */
int pop_listint(listint_t **head)
{
	int val = 0;

	listint_t *temp;

	if (*head == NULL)
		return (val);
	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (val);
}
