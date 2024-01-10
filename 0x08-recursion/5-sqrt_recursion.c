#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 * Return: natural square root of n
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
