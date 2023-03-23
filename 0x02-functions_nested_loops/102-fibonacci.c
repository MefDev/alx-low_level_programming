#include <stdio.h>
/**
 * main - Print all natural less than 1024
 * followed by a new line
 * Return: Always 0
*/
int main(void)
{
	unsigned long first_num;
	unsigned long second_num;
	unsigned long feb_num = 0;
	int i;

	first_num = 0;
	second_num = 1;
	for (i = 0; i < 50; i++)
	{
		feb_num = first_num + second_num;
		printf("%lu", feb_num);
		if (i != 49)
		{
			printf(",");
			printf(" ");
		}

		first_num = second_num;
		second_num = feb_num;
	}
	printf("\n");
	return (0);
}
