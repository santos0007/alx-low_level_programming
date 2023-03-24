#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 **/

void print_number(int n)
{
	unsigned int num = n;
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n1 = -n;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
