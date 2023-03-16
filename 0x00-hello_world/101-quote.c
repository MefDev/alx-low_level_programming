#include <stdio.h>
/**
 * main - Entry point
 * Description: Print what inside str_p arr using while loop
 * Return: 0
 */
int main(void)
{
char str_p[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = sizeof(str_p);
int i = 0;
while (i < length)
{
putchar(str_p[i]);
i++;
}
return (1);
}
