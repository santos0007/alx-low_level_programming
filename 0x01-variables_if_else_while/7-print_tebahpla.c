#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);

	putchar('\n');

	return (0);
}
