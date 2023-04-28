#include "lists.h"

/**
 * list_len - return the num of elements in list_t
 * @h: a pointer of list_t
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
