#include <stdio.h>
/**
 * Discribtion - Print all natural less than 1024
 * followed by a new line
 * Return: Always 0
*/
int main(void)
{
	int sum;
	int i;
	int three;
	int five;
	int mutliple_three;
	int multiple_five;

	sum = 0;
	three = 3;
	five = 5;
	mutliple_three = 0;
	multiple_five = 0;
	for (i = 1; i < 1024; i++)
	{
		mutliple_three = three * i;
		if (mutliple_three < 1024)
		{
			sum += mutliple_three;
		}

		multiple_five = five * i;
		if (multiple_five < 1024)
		{
			sum += multiple_five;
		}
	}
	printf("%i\n", sum);
	return (0);
}
