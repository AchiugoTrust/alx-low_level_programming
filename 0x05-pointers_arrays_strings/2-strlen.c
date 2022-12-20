#include "main.h"
/*
 * _strlen - return the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int size, i;

	size = 0;
	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	return (size);
}
