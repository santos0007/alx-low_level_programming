#include <unistd.h>
/**
 * main - a program that prints
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
