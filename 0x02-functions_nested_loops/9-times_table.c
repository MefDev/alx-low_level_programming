#include <stdio.h>
#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: Always 0
*/
void times_table(void)
{
	int columns, rows;

	for (rows = 0; rows < 10; rows++)
	{
		putchar('0');
		if (rows <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		for (columns = 1; columns < 10; columns++)
		{	printf("%i", columns * rows);
			if (columns != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
