#include <stdio.h>
/**
 * main - Entry point
 * Description: Print combination all possible combination of three digits
 * using putchar
 * Return: 0
 */
int main(void)
{
	int digit;
	int first_d;
	int second_d;
	int third_d;

	first_d = 0;
	second_d = 1;
	third_d = 2;
	for (digit = 0; digit < 120; digit = digit + 1)
	{
		putchar(first_d + '0');
		putchar(second_d + '0');
		putchar(third_d + '0');
		third_d++;
		if (digit != 119)
		{
			putchar(',');
			putchar(' ');
		}
		if (third_d == 9 + 1)
		{
			second_d++;
			third_d = second_d + 1;
		}
		if (second_d == 8 + 1)
		{
			first_d++;
			second_d = first_d + 1;
			third_d = second_d + 1;
		}

	}
	putchar('\n');
	return (0);
}
