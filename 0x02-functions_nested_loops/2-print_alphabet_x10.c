#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char lower;
	int no_of_times;

	for (no_of_times = 0; no_of_times < 10; no_of_times++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}

	_putchar('\n');
	}
}
