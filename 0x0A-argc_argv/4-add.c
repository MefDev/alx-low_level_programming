#include "main.h"

/**
 * isNumber - check if the char is a digit
 * @num: array of chars
 * Return: success 0 and 1 failure
 */
int isNumber(char num[])
{
	int i;

	i = 0;
	if (num[0] == '-')
		i = 1;
	for (; num[i] != 0; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}

/**
 * main - print the two args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: success 0 and 1 failure
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isNumber(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", 0);
	return (1);
}
