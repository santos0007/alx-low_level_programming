#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * password
 * Return: 0
 */
int main(void)
{
	int i, sum, n;
	int passw[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passw[i] = rand() % 78;
		sum += (passw[i] + '0');
		putchar(passw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
