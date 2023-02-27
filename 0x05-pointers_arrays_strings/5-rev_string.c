#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: String
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char def;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		def = s[i];
		s[i] = s[aux];
		s[aux] = def;
		aux++;
		i--;
	}
}
