#include "main.h"

/**
 * flip_bits - count the number of bits that need to be fliped
 * @n: first number
 * @m: second number
 * Description: count the number of bits you would flip to get
 * from one number to another
 *
 * Return: number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	unsigned long int res = n ^ m;

	count = 0;
	while (res)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
