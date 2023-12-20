#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : My choice parameter
 * 
 */

int print_last_digit(int n)
{
	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	
	_putchar(last_digit + '0');
}	
