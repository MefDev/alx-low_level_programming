#include "main.h"
#define COIN_NUM 5
/**
 * main - print the number of args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: argments name if args written by the user 'no args found otherwise'
 */
int main(int argc, char *argv[])
{
	int i, rest, cents;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2 || !isNumber(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	rest = atoi(argv[1]);
	if (rest < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	cents = 0;
	i = 0;
	while (i < COIN_NUM)
	{

		if (rest == 0)
		{
			printf("%d\n", cents);
			return (cents);
		}
		else if (values[i] <= rest)
		{
			rest -= values[i];
			cents++;
		}
		else
			i++;
	}
	printf("%d\n", cents);
	return (0);
}

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

