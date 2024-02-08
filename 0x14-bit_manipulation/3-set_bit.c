#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: unsigned int
 * @index: index value
 * Return: 1, or -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 0;
	unsigned long int m = *n;

	if (index > sizeof(*n) * 8)
		return (-1);
	for (a = 0; a < index; a++)
	{
		m = (m >> 1);
	}
	m = m | 1;
	m = m << index;
	*n = (m | *n);
	return (1);
}
