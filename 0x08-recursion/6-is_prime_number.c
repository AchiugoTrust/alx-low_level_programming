#include "main.h"
#include <stdio.h>

/**
 * _is_prime_number - returns 1 if the input integer is a prime number
 * return - always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (counter(n, 1));
	}
}

int counter(int n, int count)
{
	if (count == n - 1)
	{
		return (1);
	}
	else if (n % (n - count) == 0)
	{
		return (0);
	}
	else
	{
		return (counter(n, count + 1));
	}
}

