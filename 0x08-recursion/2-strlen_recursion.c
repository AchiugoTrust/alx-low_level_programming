#include "main.h"
/**
 * _strlen-recursion - returns the length of a string
 * Return - always 0
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
