#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listsint_t list
 * @head: pointer to a node
 * @n: value to add
 * Return: the pointer to the first node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_val;

	new_val = malloc(sizeof(listint_t));
	if (new_val == NULL)
		return (NULL);
	new_val->n = n;
	new_val->next = *head;
	*head = new_val;
	return (*head);
}
