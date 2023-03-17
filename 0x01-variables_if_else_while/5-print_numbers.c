#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single digit of base 10
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit = digit + 1)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
