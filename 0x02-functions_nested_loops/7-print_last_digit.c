#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - returns the value of the last digit of an int
 * @n: input intege
 *
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = 0 - l;
	}
	_putchar(l + '0');
	return (l);
}

