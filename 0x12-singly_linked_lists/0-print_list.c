#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all the elements of a list_t
 * @h: the pointer to head node
 * Return: number of elements in a singly linked list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	if (temp == NULL)
	{
		return (count);
	}
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
