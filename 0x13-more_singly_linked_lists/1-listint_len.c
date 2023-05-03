#include "lists.h"

/**
 * listint_len - return the number of  elements of a listint_t list
 * @h: a node pointer
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	int number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
