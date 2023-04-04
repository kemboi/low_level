#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) in a list
 * @head: head pointer
 * Return: return the total sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	sum += head->n;
	return (sum + sum_listint(head->next));
}
