#include <stdio.h>
/**
 * main - Entry point
 * Description: Print combination all possible combination of for digits
 * using putchar
 * Return: 0
 */
int main(void)
{
	int digit, first_d, second_d,  third_d, forth_d, length;

	first_d = 0, second_d = 0, third_d = 0, forth_d = 1;
	length = 4950;
	for (digit = 0; digit < length; digit++)
	{
		putchar(first_d + '0'), putchar(second_d + '0'), putchar(' ');
		putchar(third_d + '0'), putchar(forth_d + '0'), forth_d++;
		if (digit != length - 1)
		{
			putchar(','), putchar(' ');
		}
		if (forth_d == 9 + 1)
		{
			third_d++, forth_d = 0;
		}
		if (third_d == 9 + 1)
		{
			second_d++;
			if (second_d != 9)
			{
				forth_d =  second_d + 1, third_d = first_d;
			}
			else
			{
				forth_d = 0, third_d = first_d + 1;
			}
		}
		if (second_d == 9 + 1)
		{
			first_d++, second_d = 0;
			if (forth_d != 10)
				third_d = first_d;
			else
				third_d = first_d + 1;
			forth_d = second_d + 1;
		}
	}
	putchar('\n');
	return (0);
}
