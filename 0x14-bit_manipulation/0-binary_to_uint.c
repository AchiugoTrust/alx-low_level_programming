#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary num
 * Return: unsigned int num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int length, bit;

	if (b == NULL)
		return (0);

	num = 0;
	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, bit = 1; length >= 0; length--, bit *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			num = num + bit;
		}
	}

	return (num);
}
