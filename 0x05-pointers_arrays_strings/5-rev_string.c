#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: String
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	char c;

	while (*(s + i) != '\n')
		i += 1;
	i -= 1;

	while (x < i)
	{
		c = s[i];
		s[i] = s[x];
		s[x] = c;
		x++;
		i--;
	}
}
