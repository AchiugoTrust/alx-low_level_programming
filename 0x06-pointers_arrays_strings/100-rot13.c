#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @b: string
 *
 * Return: pointer to new string
 */

char *rot13(char *b)
{
	int i, j;
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (b[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (b[i] == a[j])
			{
				b[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (b);
}
