#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int n;
	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
