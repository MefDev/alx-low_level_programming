#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabets from z to a
 * using putchar function only
 * Return: 0
 */
int main(void)
{
	char alpha_letter;

	alpha_letter = 'z';
	while (alpha_letter >= 'a')
	{
		putchar(alpha_letter);
		alpha_letter = alpha_letter - 1;
	}
	putchar('\n');
	return (0);
}
