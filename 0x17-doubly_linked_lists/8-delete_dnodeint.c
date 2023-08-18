#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index- delete the node at index
 * index of a dlistint_t linked list
 * @head: start of doubly linked list
 * @index: index to insert val
 * Return: return 1 if succesful -1 if otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;

	if (curr == NULL)
		return (-1);

	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
