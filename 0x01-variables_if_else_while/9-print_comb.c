#include <stdio.h>
/**
 * main - Entry point
 * Description: Print digit of base 10 folowed by , and space
 * using putchar
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit = digit + 1)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
