#include <stdio.h>
/**
 * main - A program that print the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %c byte(s)\n", (long)sizeof(a));
printf("size of an int : %d bytes(s)\n", (long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
