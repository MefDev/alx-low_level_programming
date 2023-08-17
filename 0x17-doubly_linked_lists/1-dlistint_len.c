#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - cycle through the list then return the count of elmements.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
