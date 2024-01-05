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

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
