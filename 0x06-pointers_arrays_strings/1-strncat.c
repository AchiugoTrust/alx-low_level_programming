#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: string to be appended to
 * @src: string to be appended to dest
 * @n: number of bytes to append
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
