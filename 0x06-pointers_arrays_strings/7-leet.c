#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: input
 * Return: a
 */

char *leet(char *a)
{
	int i, j;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (i = 0; a[i] = '\0'; a++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == array1[j])
			{
				a[i] = array2[j];
			}
		}
	}
	return (a);
}
