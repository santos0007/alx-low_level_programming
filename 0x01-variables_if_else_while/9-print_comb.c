#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 12; n < 22; n++)

		putchar(n);
		if (n != 21)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
