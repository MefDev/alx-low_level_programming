#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times, in lowercase,
 * followed by a new line
 * Return: Always 0
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char first_letter = 'a';

		while (first_letter <= 'z')
		{
			putchar(first_letter);
			first_letter++;
		}
		putchar('\n');
	}
}
