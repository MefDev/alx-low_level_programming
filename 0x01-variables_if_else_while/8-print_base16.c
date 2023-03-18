#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single all numbersigit of base 16 using putchar
 * Return: 0
 */
int main(void)
{
	int digit;
	char alpha_letter;

	for (digit = 0; digit < 10; digit = digit + 1)
	{
		putchar(digit + '0');
	}
	for (alpha_letter = 'a'; alpha_letter <= 'f'; alpha_letter = alpha_letter + 1)
	{
		putchar(alpha_letter);
	}
	putchar('\n');
	return (0);
}
