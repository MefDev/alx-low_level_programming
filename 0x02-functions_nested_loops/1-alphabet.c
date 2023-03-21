#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
*/
void print_alphabet(void)
{
	char first_letter = 'a';

	while (first_letter <= 'z')
	{
		putchar(first_letter);
		first_letter++;
	}
	putchar('\n');
}
