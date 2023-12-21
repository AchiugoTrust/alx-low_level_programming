#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int a;
	long int pf;

	a = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (a % pf == 0)
		{
			a /= pf;
			pf--;
		}

	}
	printf("%ld\n", pf);
	return (0);
}

