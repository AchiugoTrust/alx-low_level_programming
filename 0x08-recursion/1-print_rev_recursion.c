#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}
