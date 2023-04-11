#include "main.h"

/**
 * main - print the two args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: success 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
