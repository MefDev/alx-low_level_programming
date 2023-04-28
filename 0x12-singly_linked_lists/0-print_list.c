#include "lists.h"

/**
 * print_list - Print all the elements of a list_t
 * @h: a pointer of list_t
 * Return: the number of node or NULL
 */

size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
