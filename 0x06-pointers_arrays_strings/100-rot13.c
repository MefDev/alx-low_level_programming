#include "main.h"

/**
 * rot13 - Cipher a str to rot13
 * @str: str to Cipher
 * Return: the ciphered array
 */

char *rot13(char *str)
{
	int i, j;
	char  keys[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char values[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; keys[j]; j++)
			if (str[i] == keys[j])
			{
				str[i] = values[j];
				break;
			}
	}
	return (str);
}
