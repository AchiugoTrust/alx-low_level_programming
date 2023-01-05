#include "main.c"

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

int main()
{
	printf("%i", factorial (5));
}
