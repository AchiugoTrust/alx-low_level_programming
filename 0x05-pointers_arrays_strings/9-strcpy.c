#include "main.h"

/**
 * *_strcpy - copies string to buffer
 * @dest: destination
 * @src: source
 * Return: Destnation
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';
	return (dest);
}
