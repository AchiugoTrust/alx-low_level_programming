#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: Always 0
 */

int _islower(int c)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower ++)
	{
		if (c == lower)
		{
			return (1);
		}

	return (0);
	}
