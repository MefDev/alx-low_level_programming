#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: first str
 * @src: second str
 * Return: Concatenated str
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int i;

	count = count_str(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/**
 * count_str - count how many letters are in a str
 * @str: str to count its letter
 * Return: How many letters are there
 */

int count_str(char *str)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
