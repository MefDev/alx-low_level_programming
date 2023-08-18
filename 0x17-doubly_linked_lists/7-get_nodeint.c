#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a LL
 * @head: point to the start of a linked list
 * @index: index of the node
 * Return: the nth node
 */
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = (*head).next;
	}
	return (NULL);
}
