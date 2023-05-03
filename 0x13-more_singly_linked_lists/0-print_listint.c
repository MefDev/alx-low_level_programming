#include "lists.h"

/**
 * print_listint - Print all elements of a listint_t list
 * @h: a node pointer
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	int number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
