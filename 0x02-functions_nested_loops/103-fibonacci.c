#include <stdio.h>
/**
 * main - Print sum of feb less than 4 million
 * * * followed by a new line
 * Return: Always 0
*/
int main(void)
{
	unsigned long first_num;
	unsigned long second_num;
	unsigned long feb_num = 0;
	int i;
	int sum;

	sum = 0;
	first_num = 0;
	second_num = 1;
	for (i = 1; i < 4000000; i++)
	{
		feb_num = first_num + second_num;

		if (feb_num > 4000000)
		{
			break;
		}
		if (feb_num % 2 == 0)
		{
			sum += feb_num;
		}
		first_num = second_num;
		second_num = feb_num;
	}
	printf("%i\n", sum);
	return (0);
}
