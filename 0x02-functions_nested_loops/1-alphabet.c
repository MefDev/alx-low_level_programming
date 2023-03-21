#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase, followed by a nl
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);

}
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
