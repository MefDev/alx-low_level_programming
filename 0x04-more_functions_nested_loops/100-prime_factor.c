#include <stdio.h>
/**
 * main - Print line n times
 * Return: (0) success
 */
int main(void)
{
	long long testval = 1231952;
	int factor = 2;

	while (testval > 1)
	{
		if (testval % factor == 0)
		{
			testval /= factor;
			factor = factor - 1;
		}
		factor++;
	}
	printf("%d", factor);
	return (0);
}
