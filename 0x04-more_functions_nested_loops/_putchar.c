#include "main.h"
#include <unistd.h>
/**
 * putchar - prints a character
 * @c: character to be returned
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
