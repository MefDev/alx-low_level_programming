#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t lt.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Sum of all the data (n) of the linked list, or 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
