#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listsint_t list
 * @head: pointer to a node
 * @n: value to add
 * Return: the pointer to the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_val, *last_val;

	last_val = *head;
	new_val = malloc(sizeof(listint_t));
	if (new_val == NULL)
		return (NULL);
	new_val->n = n;
	new_val->next = NULL;
	if (*head == NULL)
	{
		*head = new_val;
		return (*head);
	}
	while (last_val->next != NULL)
		last_val = last_val->next;
	last_val->next = new_val;
	return (last_val);
}
