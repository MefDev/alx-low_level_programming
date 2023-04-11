#include "main.h"

/**
 * main - print the all args followed by nl
 * @argc: count how many args on argv array
 * @argv: the argments given by the user on the CLI
 * Return: success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argv[0] !=  0)
			printf("%s\n", argv[i]);
	}
	return (0);
}
