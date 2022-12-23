#include <stdlib.h>

/**
 * _abs - detemines the absolute value of a character
 * @n: input integer
 *
 * Return: value of absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = 0 - n;
	}
	return (n);
}
