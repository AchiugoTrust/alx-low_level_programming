#include "main.h"

/**
 * _puts-recursion - prints a string, followed by a new line
 * Return - Always 0;
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar(10);
	else
	{
		_putchar(s[0]);
		/*continue recursive process*/
		s++;
		_puts_recursion(s);
	}
}
