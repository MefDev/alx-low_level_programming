#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabets from a to z
 * using putchar function only
 * Return: 0
 */
int main(void)
{
	char alpha_letter;

	alpha_letter = 'a';
	while (alpha_letter <= 'z')
	{
		putchar(alpha_letter);
		alpha_letter = alpha_letter + 1;
	}
	putchar('\n');
	return (0);
}
