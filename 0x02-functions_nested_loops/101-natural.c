#include <stdio.h>
/**
 * main - Print all natural less than 1024
 * followed by a new line
 * Return: Always 0
*/
int main(void)
{
	int sum;
	int three;
	int five;
	int i;

	sum = 0;
	three = 3;
	five = 5;

	for (i = 1; i < 1024; i++)
	{
		if (i % three == 0 || i % five == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
}
