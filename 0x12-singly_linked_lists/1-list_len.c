#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head pointer
 * Return: returns number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
