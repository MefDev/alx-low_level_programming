#include "main.h"

/**
 * print_binary - prints binary representation of a decimal number
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift_n;

	shift_n = n >> 1;
	if (shift_n)
		print_binary(shift_n);
	shift_n <<= 1;
	(shift_n == n) ? printf("0") : printf("1");
}
