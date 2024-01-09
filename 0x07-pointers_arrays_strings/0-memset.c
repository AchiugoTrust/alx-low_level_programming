#include "main.h"
/**
 * _memset- fills memory with a specific value
 * @s: pointer to memory
 * @b: constant byte to reset memory with
 * @n: number of bytes to be changed
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
