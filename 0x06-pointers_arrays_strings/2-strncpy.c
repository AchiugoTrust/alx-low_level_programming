#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: input source string to copy to dest
 *
 * @dest: input destination string to copy to
 *
 * @n: input number of bytes to append
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		i++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
