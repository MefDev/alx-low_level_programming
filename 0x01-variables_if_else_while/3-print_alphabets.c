#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabets from a-zA-Z
 * using putchar function only
 * Return: 0
 */
int main(void)
{
	char alpha_letter;
	char alpha_upper;

	alpha_letter = 'a';
	while (alpha_letter <= 'z')
	{
		putchar(alpha_letter);
		alpha_letter = alpha_letter + 1;
	}
	alpha_upper = 'A';
	while (alpha_upper <= 'Z')
	{
		putchar(alpha_upper);
		alpha_upper = alpha_upper + 1;
	}
	putchar('\n');
	return (0);
}
