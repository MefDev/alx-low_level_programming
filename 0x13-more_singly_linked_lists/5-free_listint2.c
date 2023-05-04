#include "lists.h"

/**
 * free_listint- free memory
 * @head: the pointer to the node we like to free
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (!head)
		return;
	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}
	*head = NULL;
}
