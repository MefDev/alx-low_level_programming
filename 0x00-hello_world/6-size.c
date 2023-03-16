#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the size of various types on the computer it is
 * compiled and run on
 * Return: 0
 */
int main(void)
{
int size_char = sizeof(char);
int size_int = sizeof(int);
int size_long_int = sizeof(long int);
int size_long_long_int = sizeof(long long int);
int size_float = sizeof(float);
printf("Size of a char: %i byte(s)\n", size_char);
printf("Size of an int: %i byte(s)\n", size_int);
printf("Size of a long int: %i byte(s)\n", size_long_int);
printf("Size of a long long int: %i byte(s)\n", size_long_long_int);
printf("Size of a float: %i byte(s)\n", size_float);
return (0);
}
