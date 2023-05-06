#include "main.h"

/**
 * set_bit - set bit at given index to 1
 * @n: adress of given number in decimal
 * @index: given index
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | 1UL << index;
	return (1);
}
