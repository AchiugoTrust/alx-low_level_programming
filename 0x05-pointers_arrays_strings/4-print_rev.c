#include "main.h"

/**
 * print_rev : prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int size, value;

	size = 0;
	for (value = 0; s[value] != 0; value++)
	{
		size++;
	}
	for (value = size - 1; value >= 0; value--)
	{
		_putchar(s[value]);
	}
	/* 10 is ASCII value for \n */
	_putchar(10);
}
