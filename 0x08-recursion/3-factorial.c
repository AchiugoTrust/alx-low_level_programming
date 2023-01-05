#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * Return - always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main(void)
{
	printf("%i", factorial (5));
}
