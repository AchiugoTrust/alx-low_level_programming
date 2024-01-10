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

int square_root_recursion(int n, int guess)
{
	int newguess;

	newguess = ((n / guess) + 1 + guess) / 2;

	if ((n / guess) == guess && n % guess == 0)
	{
		return (guess);
	}
	else if (newguess == guess)
	{
		return (-1);
	}
	else
	{
		return (square_root_recursion(n, newguess));
	}
}

