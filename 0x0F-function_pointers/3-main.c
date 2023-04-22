#include "3-calc.h"
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	result = oprt(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
