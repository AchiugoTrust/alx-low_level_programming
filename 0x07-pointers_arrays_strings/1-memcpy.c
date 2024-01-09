#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: area of copied memory
 *@src: memory to be copied
 *@n: number of bytes to copy
 *Return: dest to copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
