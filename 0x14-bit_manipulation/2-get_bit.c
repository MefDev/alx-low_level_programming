#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: number
 * @index: given index
 *
 * Return: value of bit | -1 (Error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = n >> index;
	return (bit & 1);


}
