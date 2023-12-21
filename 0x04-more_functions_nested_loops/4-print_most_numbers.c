#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * Return: Always 0;
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		while (i != '2' && i != '4')
		{
			_putchar (i);
		}

	_putchar('\n');
	}
}
