#include "main.h"

/**
 *swap_int - a function that swaps the values of two integers
 * Return: Always (0)
 * @a: integer pointed to by *a
 * @b: integer pointed to by *b
 * @*a: pointer a
 * @*b: pointer b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
