#include "main.h"

/**
 * main - print "_putchar" followed by newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char array[8] = "_putchar";
	int index;

	while (index < 8)
	{
		_putchar(array[index]);
		index++;
	}
	_putchar(9);
	return (0);
}
