#include "main.h"

/**
 * swap_int - Update the value of n
 * @a: the first number
 * @b: the second number
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
