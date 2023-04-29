#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of list
 *@head: the first node
 *@str: the string
 *Return: the  adress or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = (curr)->next;
	curr->next = new;
	return (new);
}
