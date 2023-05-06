#include "main.h"

/**
 * binary_to_uint - Convert binary number to unsigned int
 * @b: string containing 1's and 0's (binary number)
 *
 * Return: converted numbrer (Success) | 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int convert_num;

	if (!b)
		return (0);
	convert_num = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		convert_num =  (convert_num << 1) + (b[i] - '0');
	}
	return (convert_num);
}
