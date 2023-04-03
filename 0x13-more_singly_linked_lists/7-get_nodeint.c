#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns node at nth position
 * @head: head node
 * @index: index to search
 * Return: node at nth position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *temp = head;

	for ( ; l < index; l++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}


