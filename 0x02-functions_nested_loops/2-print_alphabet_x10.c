#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int n;
	int t;

	for (t = 0; t <= 9; t++)
	{
		/* 97 is ASCII value for 'a' */
		n = 97;
		
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar(10);
	}
}
