#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: return the last digit of n
 * Return: Always 0
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
