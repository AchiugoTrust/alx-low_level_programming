#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion - returns the natural square root of a number
 * return - always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, (n / 2) + 1));
	}
}
