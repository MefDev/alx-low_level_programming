#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free list_t list
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
