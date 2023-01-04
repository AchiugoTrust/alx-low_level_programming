#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * Return - pointer to byte in s that matches one of the bytes in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return ('\0');
}
