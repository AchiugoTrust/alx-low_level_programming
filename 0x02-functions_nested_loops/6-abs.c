#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: Always 0
 * @int: Takes an integer
 */

int _abs(int n)
{
	if (n <= 0)
	{
		_putchar('-');
		return (-n);
	}

	return (n);
}
