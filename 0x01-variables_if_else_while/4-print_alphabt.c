#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabets from a to z except q & e
 * using putchar function only
 * Return: 0
 */
int main(void)
{
	char alpha_letter;

	alpha_letter = 'a';
	while (alpha_letter < 'z')
	{
		alpha_letter = alpha_letter + 1;
		if ((alpha_letter == 'q') || (alpha_letter == 'e'))
			continue;
		putchar(alpha_letter);
	}
	putchar('\n');
	return (0);
}
