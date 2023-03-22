#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: A number to perform the action on
 * Return: Always 0
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	while (n > 97)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n--;
	}
	putchar('\n');
}
