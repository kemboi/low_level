#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - counts all the elements of a listint_t
 * @h: head pointer
 * Return: returns size_t number of elements in the linkedlist.
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
