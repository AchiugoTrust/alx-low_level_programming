#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p1;
	void *p2;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p2 = malloc(nmemb * size);
	p1 = (char *)p2;

	if (p2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		p1[i] = 0;
	p2 = (void *)p1;
	return (p2);
}
