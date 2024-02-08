#include "main.h"
/**
 * flip_bits - returns the number of bits to change
 * @n: first num
 * @m: second num
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int s = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			s++;
		n = n >> 1;
		m = m >> 1;
	}
	return (s);
}

