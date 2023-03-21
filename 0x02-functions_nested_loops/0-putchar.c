#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Print _putchar using putchar
 * Return: 1
 */
int main(void)
{
	int i;

	char arr[] = "_putchar";
	int length = sizeof(arr) - 1;

	for (i = 0; i < length; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
