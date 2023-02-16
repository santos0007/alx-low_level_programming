#include <stdio.h>
/**
 * main - A program that print the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("size of an int : %i bytes(s)\n", sizeof(int));
printf("size of a long int: %i bytes(s)\n", sizeof(long int));
printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
printf("size of a float: %i bytes(s)\n", sizeof(float));
return (0);
}
