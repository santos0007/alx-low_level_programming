#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: pointer to the string to prints
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
