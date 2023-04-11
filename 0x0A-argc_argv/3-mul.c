#include "main.h"

/**
 * main - Mutliply the two args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: success 0 and 1 is failure
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
