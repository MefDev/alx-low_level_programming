#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print what inside str_p arr using while loop
 * Return: 1
 */
int main(void)
{
char str_p[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = sizeof(str_p);
write(1, &str_p, length);
return (1);
}
