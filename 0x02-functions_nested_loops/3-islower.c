#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: parameter
 * Return: Always 0
 */

int _islower(int c)
{
	char lower;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
