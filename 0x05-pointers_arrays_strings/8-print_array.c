#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: num of values to be printed
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
