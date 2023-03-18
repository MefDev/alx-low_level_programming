#include <stdio.h>
/**
 * main - Entry point
 * Description: Print combination all possible combination of two digits
 * using putchar
 * Return: 0
 */
int main(void)
{
	int digit;
	int first_d;
	int second_d;

	first_d = 0;
	second_d = 1;
	for (digit = 0; digit < 45; digit = digit + 1)
	{
		putchar(first_d + '0');
		putchar(second_d + '0');
		if (digit != 44)
		{
			putchar(',');
			putchar(' ');
		}
		second_d++;
		if (second_d == 10)
		{
			first_d++;
			second_d = 1;
			second_d += first_d;
		}

	}
	putchar('\n');
	return (0);
}
