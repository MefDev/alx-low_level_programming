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
	for (digit = 0; digit < 30; digit = digit + 1)
	{
		putchar(first_d + '0');
		putchar(second_d + '0');
		putchar(third_d + '0');
		if (digit != 29)
		{
			putchar(',');
			putchar(' ');
		}
		third_d++;
		if (third_d == (10))
		{
			first_d++;
			second_d = 1;
			second_d += first_d;
			third_d = 2;
			third_d += second_d;
			if (digit == 28)
				third_d -=1;
		}
		

	}
	putchar('\n');
	return (0);
}
