#include "lists.h"

/**
 * sum_listint - return the sum of  elements of a listint_t list
 * Return: the sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return sum == 0 ? (0) : (sum);
}
