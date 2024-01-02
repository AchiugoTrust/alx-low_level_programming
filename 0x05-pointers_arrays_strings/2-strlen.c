#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: string parameter
 *
 * @*s: pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;
	for (i = 0; s[i] != 0; i++)
	{
		length++;
	}
	return (length);
}

