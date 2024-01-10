#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * Return: factorial of n
 * @n: parameter
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	} else if (n == 0 || n == 1)
	{
		return (1);
	} else
	{
		return (-1);
	}
}
