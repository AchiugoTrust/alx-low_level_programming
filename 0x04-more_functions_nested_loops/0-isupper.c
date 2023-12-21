#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c : the character in question
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
       	else
	{
		return (0);
	}
}
