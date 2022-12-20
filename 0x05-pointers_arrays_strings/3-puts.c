#include "main.h"

/**
 * _puts - prints strings of characters to stdout
 * @str: string  to be printed
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		-putchar(*str++);
	}
	_putchar('\n');
}
