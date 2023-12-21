#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 * @a: first parameter
 * @b: second parameter
 * @c: third parameter
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    return largest;
}
