#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int size, value;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	for (value = 0; value < size; value += 2)
	{
		_putchar(str[value]);
	}
	_putchar(10);
}
